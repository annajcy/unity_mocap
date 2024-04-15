import mediapipe as mp
import cv2
import csv
import numpy as np
import pandas as pd
import pickle
import socket
from abc import ABC, abstractmethod
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split


class data_transmit:
    def __init__(self, port):
        self.sk = None
        self.server_port = None
        self.port = port

    def init_network(self):
        self.sk = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.server_port = ("127.0.1", self.port)

    def send_data(self, data_send):
        self.sk.sendto(str.encode(str(data_send)), self.server_port)


class learn:
    def __init__(self, csv_filename, train_scale, pipelines, export_filename):
        self.model = None
        self.y_test = None
        self.y_train = None
        self.x_test = None
        self.x_train = None
        self.data_frame = None
        self.export_filename = export_filename
        self.pipelines = pipelines
        self.train_scale = train_scale
        self.csv_filename = csv_filename

    def preprocess(self):
        self.data_frame = pd.read_csv(self.csv_filename)
        x = self.data_frame.drop('class', axis=1)
        print(x)
        y = self.data_frame['class']
        print(y)
        self.x_train, self.x_test, self.y_train, self.y_test = train_test_split(x, y, test_size=self.train_scale,
                                                                                random_state=1234)

    def train_data(self):
        fit_models = {}
        for algo, pipeline in self.pipelines.items():
            model = pipeline.fit(self.x_train, self.y_train)
            fit_models[algo] = model

        fittest_model = None
        max_score = 0.0
        for algo, model in fit_models.items():
            y_hat = model.predict(self.x_test)
            cur_score = accuracy_score(self.y_test, y_hat)
            print(algo, accuracy_score(self.y_test, y_hat))
            if max_score < cur_score:
                fittest_model = model
                max_score = cur_score

        return fittest_model

    def train_model(self):
        self.preprocess()
        self.model = self.train_data()

    def export_model(self):
        with open(self.export_filename, 'wb') as f:
            pickle.dump(self.model, f)


class mocap(ABC):

    def __init__(self, src_filename, use_realtime_mocap, use_world_position):
        self.raw_data = None
        self.data = None
        self.image = None
        self.results = None
        self.use_world_position = use_world_position
        self.src_filename = src_filename
        self.use_realtime_mocap = use_realtime_mocap
        self.mp_drawing = mp.solutions.drawing_utils
        self.mp_holistic = mp.solutions.holistic

        if self.use_realtime_mocap:
            self.cap = cv2.VideoCapture(0)
        else:
            self.cap = cv2.VideoCapture(self.src_filename)

    def process(self, holistic):
        ret, frame = self.cap.read()
        self.image = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        self.image.flags.writeable = False
        self.results = holistic.process(self.image)
        self.image.flags.writeable = True
        self.image = cv2.cvtColor(self.image, cv2.COLOR_RGB2BGR)

    def draw(self):
        self.mp_drawing.draw_landmarks(self.image, self.results.face_landmarks, self.mp_holistic.FACEMESH_CONTOURS,
                                       self.mp_drawing.DrawingSpec(color=(80, 110, 10), thickness=1, circle_radius=1),
                                       self.mp_drawing.DrawingSpec(color=(80, 256, 121), thickness=1, circle_radius=1))
        self.mp_drawing.draw_landmarks(self.image, self.results.right_hand_landmarks, self.mp_holistic.HAND_CONNECTIONS,
                                       self.mp_drawing.DrawingSpec(color=(80, 22, 10), thickness=2, circle_radius=4),
                                       self.mp_drawing.DrawingSpec(color=(80, 44, 121), thickness=2, circle_radius=2))
        self.mp_drawing.draw_landmarks(self.image, self.results.left_hand_landmarks, self.mp_holistic.HAND_CONNECTIONS,
                                       self.mp_drawing.DrawingSpec(color=(121, 22, 76), thickness=2, circle_radius=4),
                                       self.mp_drawing.DrawingSpec(color=(121, 44, 250), thickness=2, circle_radius=2))
        self.mp_drawing.draw_landmarks(self.image, self.results.pose_landmarks, self.mp_holistic.POSE_CONNECTIONS,
                                       self.mp_drawing.DrawingSpec(color=(245, 117, 66), thickness=2, circle_radius=4),
                                       self.mp_drawing.DrawingSpec(color=(245, 66, 230), thickness=2, circle_radius=2))

    def render(self):
        cv2.imshow('cam', self.image)
        if cv2.waitKey(10) & 0xFF == ord('q'):
            return False
        else:
            return True

    def destroy(self):
        self.cap.release()
        cv2.destroyAllWindows()

    def capture(self, detection_confidence, tracking_confidence):
        self.init()
        with self.mp_holistic.Holistic(min_detection_confidence=detection_confidence,
                                       min_tracking_confidence=tracking_confidence) as holistic:
            while self.cap.isOpened():
                self.process(holistic)
                self.draw()
                try:
                    self.work()
                except:
                    pass
                if not self.render():
                    break

    def get_world_pose(self):
        return self.results.pose_world_landmarks.landmark

    def get_relative_pose(self):
        return self.results.pose_landmarks.landmark

    def get_pose(self):
        if self.use_world_position:
            return self.get_world_pose()
        else:
            return self.get_relative_pose()

    def get_data(self):
        pose = self.get_pose()
        self.raw_data = np.array([[lm.x, lm.y, lm.z, lm.visibility] for lm in pose])
        pose_data = self.raw_data.flatten()
        self.data = pd.DataFrame([list(pose_data)])

    @abstractmethod
    def work(self):
        pass

    @abstractmethod
    def init(self):
        pass


def init_head(csv_filename):
    cnt = 33
    head = ['class']
    for val in range(0, cnt):
        head += [f'x{val}', f'y{val}', f'z{val}', f'v{val}']
    with open(csv_filename, mode='w', newline='') as f:
        csv_writer = csv.writer(f, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
        csv_writer.writerow(head)


class train(mocap):

    def __init__(self, src_filename, use_realtime_mocap, use_world_position,
                 csv_filename, class_type):
        super().__init__(src_filename, use_realtime_mocap, use_world_position)

        self.class_type = class_type
        self.csv_filename = csv_filename

    def write_data(self, data):
        with open(self.csv_filename, mode='a', newline='') as f:
            csv_writer = csv.writer(f, delimiter=',', quotechar='"', quoting=csv.QUOTE_MINIMAL)
            csv_writer.writerow(data)

    def init(self):
        pass

    def work(self):
        self.get_data()
        data_to_write = list(self.raw_data.flatten())
        data_to_write.insert(0, self.class_type)
        self.write_data(data_to_write)


class use(mocap):

    def __init__(self, src_filename, use_realtime_mocap, use_world_position,
                 model_filename, allow_transmit_data, port):
        super().__init__(src_filename, use_realtime_mocap, use_world_position)
        self.body_language_proba = None
        self.body_language_class = None
        self.model = None
        self.data_transmitter = data_transmit(port)
        self.model_filename = model_filename
        self.allow_transmit_data = allow_transmit_data

    def read_model(self):
        with open(self.model_filename, 'rb') as f:
            self.model = pickle.load(f)

    def generate_data(self):
        data_to_send = ''
        for [x, y, z, v] in self.raw_data:
            data_to_send += f'{round(x, 7)},{round(y, 7)},{round(z, 7)}|'
        return data_to_send

    def init(self):
        self.read_model()
        self.data_transmitter.init_network()

    def work(self):
        self.get_data()
        self.body_language_class = self.model.predict(self.data)[0]
        self.body_language_proba = self.model.predict_proba(self.data)[0]
        print(self.body_language_class, self.body_language_proba)
        self.visualize()
        self.data_transmitter.send_data(self.generate_data())

    def visualize(self):
        screen_resolution = [
            int(self.cap.get(cv2.CAP_PROP_FRAME_WIDTH)),
            int(self.cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
        ]
        coords = tuple(np.multiply(
            np.array(
                (self.results.pose_landmarks.landmark[self.mp_holistic.PoseLandmark.LEFT_EAR].x,
                 self.results.pose_landmarks.landmark[self.mp_holistic.PoseLandmark.LEFT_EAR].y)),
            screen_resolution).astype(int))

        cv2.rectangle(self.image,
                      (coords[0], coords[1] + 5),
                      (coords[0] + len(self.body_language_class) * 20, coords[1] - 30),
                      (245, 117, 16),
                      -1)

        cv2.putText(self.image,
                    self.body_language_class,
                    coords,
                    cv2.FONT_HERSHEY_SIMPLEX,
                    1,
                    (255, 255, 255),
                    2,
                    cv2.LINE_AA)
