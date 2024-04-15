import mocap as mc
from sklearn.pipeline import make_pipeline
from sklearn.preprocessing import StandardScaler
from sklearn.linear_model import LogisticRegression, RidgeClassifier
from sklearn.ensemble import RandomForestClassifier, GradientBoostingClassifier

pipelines = {
    'lc': make_pipeline(StandardScaler(), LogisticRegression()),
    'rc': make_pipeline(StandardScaler(), RidgeClassifier()),
    'rf': make_pipeline(StandardScaler(), RandomForestClassifier()),
    'gb': make_pipeline(StandardScaler(), GradientBoostingClassifier())
}

data_list = [
    ["shoot.mp4", "shoot"],
    ["save.mp4", "save"]
]

csv_name = "data.csv"
model_name = "pose.pkl"
net_port = 5054
train_scale = 0.3


def train(data_lists, csv_filename, export_filename):
    mc.init_head(csv_filename)
    for [video_filename, class_type] in data_lists:
        trainer = mc.train(src_filename=video_filename, use_realtime_mocap=False, use_world_position=False,
                           csv_filename=csv_filename, class_type=class_type)
        trainer.capture(detection_confidence=0.5, tracking_confidence=0.5)
    learner = mc.learn(csv_filename=csv_filename, train_scale=train_scale,
                       pipelines=pipelines, export_filename=export_filename)
    learner.train_model()
    learner.export_model()
    print(learner.model)


def use(video_filename, model_filename, port):
    user = mc.use(src_filename=video_filename, use_realtime_mocap=False, use_world_position=False,
                  model_filename=model_filename, allow_transmit_data=True, port=port)
    user.capture(detection_confidence=0.5, tracking_confidence=0.5)


if __name__ == '__main__':
    # train(data_list, csv_name, model_name)
    use("shoot.mp4", model_name, net_port)
