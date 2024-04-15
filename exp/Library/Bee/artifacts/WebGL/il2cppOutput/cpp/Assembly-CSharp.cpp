#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>
struct Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>
struct KeyCollection_tCE6AE6D981E150C4129A3AD301BC3B629F10BB82;
// System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>
struct Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA;
// System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>
struct Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>
struct ValueCollection_tDFB5283AC787A56C7E375218ACEB2585B14A6AF8;
// Tools/Edges`1<Tools/EJoint>[]
struct Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>[]
struct EntryU5BU5D_t1E451D06A7A7190C67A431DE826627EF377FE889;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// DataReceiver
struct DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4;
// DataSource
struct DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// ManualDataSource
struct ManualDataSource_t77D85FFFF813FF6926573C389025BB80897F7FF4;
// MapperDataReceiver
struct MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MotionCaptureDataSource
struct MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Net.Sockets.UdpClient
struct UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8;
// VisualizerDataReceiver
struct VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral26738A812417C2C10205CA7142173063E6E6DB78;
IL2CPP_EXTERN_C String_t* _stringLiteral2755D2266E56AB8ECB1D351DC3707C944B78229E;
IL2CPP_EXTERN_C String_t* _stringLiteral4738DBD7DF978B567CAA4D6FC641163D59ACF122;
IL2CPP_EXTERN_C String_t* _stringLiteral5BB75F5E2323088735D7EBB9FAAC2D6D17BBC6E8;
IL2CPP_EXTERN_C String_t* _stringLiteral86A52FD8CD749B9F712AD32308C8647BBD68E99B;
IL2CPP_EXTERN_C String_t* _stringLiteralB8E79B3F0DDA92502AFAF1DF8EDE072A25E9607F;
IL2CPP_EXTERN_C String_t* _stringLiteralBD37012F93683420E9FEA1E4D332B6E7B1C06F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralD1FDEFA96553A4090B744BD81435269A28E3303A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE6C52285747F9ACEE35C51322D4F8C36B9ACEF56;
IL2CPP_EXTERN_C String_t* _stringLiteralFB8E98032A3904B644C04B57114ABE831ADC01D3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0F38807965F11989326E891751DEC46DD96D50BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8B1D75258775A3CAAB3443F3FBA0BE38C4CBD7D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m60020DA134CEAE4DCC6A4695A3739E4F3B275035_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MotionCaptureDataSource_ReceiveData_mCCE9DB78CFD739F495C5557443EF28BA90B8D522_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_3_get_Item1_mD2244FDE10ADDD837419B78ED79F5F28F0FF5A26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_3_get_Item2_m04DF392AD4AD5A2C450E5794094465A742B688C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_3_get_Item3_mE919037E38CD7C631C47ACB1CDA10A5769BA3EE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>
struct Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E451D06A7A7190C67A431DE826627EF377FE889* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tCE6AE6D981E150C4129A3AD301BC3B629F10BB82* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDFB5283AC787A56C7E375218ACEB2585B14A6AF8* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>
struct Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	int32_t ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	int32_t ___m_Item3_2;
};

// System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>
struct Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	int32_t ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	int32_t ___m_Item3_2;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Tools
struct Tools_t3DF42EB905CE903A075617859FA36803BEC507C4  : public RuntimeObject
{
};

// System.Net.Sockets.UdpClient
struct UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8  : public RuntimeObject
{
	// System.Net.Sockets.Socket System.Net.Sockets.UdpClient::m_ClientSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___m_ClientSocket_1;
	// System.Boolean System.Net.Sockets.UdpClient::m_Active
	bool ___m_Active_2;
	// System.Byte[] System.Net.Sockets.UdpClient::m_Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Buffer_3;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.UdpClient::m_Family
	int32_t ___m_Family_4;
	// System.Boolean System.Net.Sockets.UdpClient::m_CleanedUp
	bool ___m_CleanedUp_5;
	// System.Boolean System.Net.Sockets.UdpClient::m_IsBroadcast
	bool ___m_IsBroadcast_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Tools/Edges`1<System.Int32Enum>
struct Edges_1_t914D8CCD104323C6199886E9474AAF7465F803AD 
{
	// T Tools/Edges`1::u
	int32_t ___u_0;
	// T Tools/Edges`1::v
	int32_t ___v_1;
};

// Tools/Edges`1<Tools/EJoint>
struct Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 
{
	// T Tools/Edges`1::u
	int32_t ___u_0;
	// T Tools/Edges`1::v
	int32_t ___v_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_0;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Tools/DataScale
struct DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 
{
	// System.Single Tools/DataScale::xOffset
	float ___xOffset_0;
	// System.Single Tools/DataScale::yOffset
	float ___yOffset_1;
	// System.Single Tools/DataScale::zOffset
	float ___zOffset_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DataReceiver
struct DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DataSource DataReceiver::dataSource
	DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* ___dataSource_4;
	// UnityEngine.Vector3[] DataReceiver::JointPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___JointPositions_5;
};

// DataSource
struct DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3[] DataSource::JointPositions
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___JointPositions_4;
};

// ManualDataSource
struct ManualDataSource_t77D85FFFF813FF6926573C389025BB80897F7FF4  : public DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44
{
	// UnityEngine.Transform ManualDataSource::rootTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rootTransform_5;
	// UnityEngine.GameObject ManualDataSource::jointsPrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jointsPrefabs_6;
	// UnityEngine.GameObject[] ManualDataSource::_joints
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____joints_7;
};

// MapperDataReceiver
struct MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4  : public DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4
{
	// UnityEngine.Transform MapperDataReceiver::avatarRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarRoot_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>> MapperDataReceiver::_applyParamList
	Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* ____applyParamList_7;
};

// MotionCaptureDataSource
struct MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34  : public DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44
{
	// System.Int32 MotionCaptureDataSource::port
	int32_t ___port_5;
	// System.Boolean MotionCaptureDataSource::enable
	bool ___enable_6;
	// Tools/DataScale MotionCaptureDataSource::dataScale
	DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 ___dataScale_7;
	// System.Threading.Thread MotionCaptureDataSource::_receiveThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ____receiveThread_8;
	// System.Net.Sockets.UdpClient MotionCaptureDataSource::_udpClient
	UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* ____udpClient_9;
	// System.String[] MotionCaptureDataSource::_nodes
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____nodes_10;
	// System.String[] MotionCaptureDataSource::_points
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____points_11;
	// System.String MotionCaptureDataSource::_data
	String_t* ____data_12;
};

// VisualizerDataReceiver
struct VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355  : public DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4
{
	// UnityEngine.GameObject VisualizerDataReceiver::visualizationPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___visualizationPrefab_6;
	// UnityEngine.Transform VisualizerDataReceiver::visualizationRoot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___visualizationRoot_7;
	// UnityEngine.LineRenderer VisualizerDataReceiver::_lineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ____lineRenderer_8;
	// Tools/Edges`1<Tools/EJoint>[] VisualizerDataReceiver::_lineEdges
	Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* ____lineEdges_9;
	// UnityEngine.GameObject[] VisualizerDataReceiver::_visualizationGameObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____visualizationGameObjects_10;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>

// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>

// System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>

// System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>

// System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>

// System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Tools

// Tools

// System.Net.Sockets.UdpClient

// System.Net.Sockets.UdpClient

// Tools/Edges`1<System.Int32Enum>

// Tools/Edges`1<System.Int32Enum>

// Tools/Edges`1<Tools/EJoint>

// Tools/Edges`1<Tools/EJoint>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_3;
};

// System.Net.IPEndPoint

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// Tools/DataScale

// Tools/DataScale

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Threading.ThreadStart

// System.Threading.ThreadStart

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.LineRenderer

// UnityEngine.LineRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DataReceiver

// DataReceiver

// DataSource

// DataSource

// ManualDataSource

// ManualDataSource

// MapperDataReceiver

// MapperDataReceiver

// MotionCaptureDataSource

// MotionCaptureDataSource

// VisualizerDataReceiver

// VisualizerDataReceiver
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Tools/Edges`1<Tools/EJoint>[]
struct Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1  : public RuntimeArray
{
	ALIGN_FIELD (8) Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 m_Items[1];

	inline Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method) ;
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<System.Int32Enum,System.Int32Enum,System.Int32Enum>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* Tuple_Create_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m239A03A32FCC69CEFF211BF58FD3801EF9800930_gshared (int32_t ___0_item1, int32_t ___1_item2, int32_t ___2_item3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// T1 System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_3_get_Item1_m4C3E091B34337F627613DBC8D4D4B63A13DC45E2_gshared_inline (Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_3_get_Item2_mF5F52240B59BC32C99DA1F01BD99848BF52DCEDB_gshared_inline (Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* __this, const RuntimeMethod* method) ;
// T3 System.Tuple`3<System.Int32Enum,System.Int32Enum,System.Int32Enum>::get_Item3()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_3_get_Item3_mE7D6C11E9186D890B54C6718A88FC34A425E0654_gshared_inline (Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* __this, const RuntimeMethod* method) ;
// System.Void Tools/Edges`1<System.Int32Enum>::.ctor(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edges_1__ctor_m5014ACA89AFD4A69E3CAB0795F2EC01737C997F9_gshared (Edges_1_t914D8CCD104323C6199886E9474AAF7465F803AD* __this, int32_t ___0_u, int32_t ___1_v, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void DataSource::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_Init_mBDB9A42FB27E783B1F73B021326385FE57DF45BE (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform,System.Boolean)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, bool ___2_worldPositionStays, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mDC5AD8BD13FE50E98B67B956C048367F4E8C6F94_gshared)(___0_original, ___1_parent, ___2_worldPositionStays, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void DataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource__ctor_m8307418103ED09FC28848AC74FB255D40693A8B3 (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) ;
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<Tools/EDirection,Tools/EJoint,Tools/EJoint>(T1,T2,T3)
inline Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06 (int32_t ___0_item1, int32_t ___1_item2, int32_t ___2_item3, const RuntimeMethod* method)
{
	return ((  Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* (*) (int32_t, int32_t, int32_t, const RuntimeMethod*))Tuple_Create_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m239A03A32FCC69CEFF211BF58FD3801EF9800930_gshared)(___0_item1, ___1_item2, ___2_item3, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* __this, String_t* ___0_key, Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E*, String_t*, Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>::.ctor()
inline void Dictionary_2__ctor_m8B1D75258775A3CAAB3443F3FBA0BE38C4CBD7D0 (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void MapperDataReceiver::ApplyLegParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyLegParams_m2246BDEF055D37ECE12836F44778B4911D6924DF (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) ;
// System.Void MapperDataReceiver::ApplyArmParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyArmParams_mD48BF1ED72A1E2874B2655B22641488D7519AEE3 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0F38807965F11989326E891751DEC46DD96D50BB (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>>::get_Item(TKey)
inline Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* Dictionary_2_get_Item_m60020DA134CEAE4DCC6A4695A3739E4F3B275035 (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* (*) (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// T1 System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>::get_Item1()
inline int32_t Tuple_3_get_Item1_mD2244FDE10ADDD837419B78ED79F5F28F0FF5A26_inline (Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0*, const RuntimeMethod*))Tuple_3_get_Item1_m4C3E091B34337F627613DBC8D4D4B63A13DC45E2_gshared_inline)(__this, method);
}
// T2 System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>::get_Item2()
inline int32_t Tuple_3_get_Item2_m04DF392AD4AD5A2C450E5794094465A742B688C5_inline (Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0*, const RuntimeMethod*))Tuple_3_get_Item2_mF5F52240B59BC32C99DA1F01BD99848BF52DCEDB_gshared_inline)(__this, method);
}
// T3 System.Tuple`3<Tools/EDirection,Tools/EJoint,Tools/EJoint>::get_Item3()
inline int32_t Tuple_3_get_Item3_mE919037E38CD7C631C47ACB1CDA10A5769BA3EE6_inline (Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0*, const RuntimeMethod*))Tuple_3_get_Item3_mE7D6C11E9186D890B54C6718A88FC34A425E0654_gshared_inline)(__this, method);
}
// System.Void MapperDataReceiver::ApplyNodePose(UnityEngine.Transform,Tools/EDirection,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyNodePose_mCA6F2FFBDFD35C98B097916D8529194B6324DF8B (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_nodeTransform, int32_t ___1_faceAxis, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_fromVec, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_toVec, const RuntimeMethod* method) ;
// System.Void MapperDataReceiver::ApplyPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyPose_m522245B68BCFEAD4B5F376984C5643FEA57AFDEE (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_node, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void MapperDataReceiver::InitParamList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_InitParamList_m6D149ACE63BD18AB5CDF959680F0FC50997A75E1 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) ;
// System.Void DataReceiver::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_Refresh_m7029104FF491AF4CEEEA6E97AD428421F499DAC5 (DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4* __this, const RuntimeMethod* method) ;
// System.Void DataReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver__ctor_m2ACEB791E8A6D68C449ED05A2B4F88A18805A68E (DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 MotionCaptureDataSource::VectorConverter(UnityEngine.Vector3,Tools/DataScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MotionCaptureDataSource_VectorConverter_m19AD815B50B800ECB9E0C6EFC1E2C9368733375A (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vec, DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 ___1_vecDataScale, const RuntimeMethod* method) ;
// System.Void MotionCaptureDataSource::DataPreprocess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionCaptureDataSource_DataPreprocess_mB6127A89B8ADF63B706E4EFB690075F2C4BA72F2 (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] DataSource::GetData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* DataSource_GetData_m1D2C4A87D503825CBB9CE2F1E1B59D6CFF256033_inline (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) ;
// System.Void System.Net.Sockets.UdpClient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, int32_t ___0_port, const RuntimeMethod* method) ;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Byte[] System.Net.Sockets.UdpClient::Receive(System.Net.IPEndPoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UdpClient_Receive_mC682A8DE6CD86CEFA3CE52852574FD3437EC7DA9 (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB** ___0_remoteEP, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___0_start, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void Tools/Edges`1<Tools/EJoint>::.ctor(T,T)
inline void Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6* __this, int32_t ___0_u, int32_t ___1_v, const RuntimeMethod* method)
{
	((  void (*) (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6*, int32_t, int32_t, const RuntimeMethod*))Edges_1__ctor_m5014ACA89AFD4A69E3CAB0795F2EC01737C997F9_gshared)(__this, ___0_u, ___1_v, method);
}
// System.Void VisualizerDataReceiver::InitEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_InitEdges_mD0868003CE55F460E39E7647C64D2C5B7D3DF97E (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1 (LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* __this, int32_t ___0_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void VisualizerDataReceiver::InitLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_InitLines_m2B5BAB380EA5409B4143C10651704B57C45F2D94 (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) ;
// System.Void VisualizerDataReceiver::InitVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_InitVisualizer_m933ECC4212B283FAD41AB09AFBE16AD72EC48A64 (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) ;
// System.Void VisualizerDataReceiver::VisualizeJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_VisualizeJoints_mBA109FE7876E580484384B338DE59CF1245F39BF (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) ;
// System.Void VisualizerDataReceiver::VisualizeLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_VisualizeLines_m53592F89536EA14C2D2DCF0CF1F5775F4259FB2B (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DataReceiver::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver_Refresh_m7029104FF491AF4CEEEA6E97AD428421F499DAC5 (DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4* __this, const RuntimeMethod* method) 
{
	{
		// JointPositions = dataSource.GetData();
		DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* L_0 = __this->___dataSource_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1;
		L_1 = VirtualFuncInvoker0< Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* >::Invoke(4 /* UnityEngine.Vector3[] DataSource::GetData() */, L_0);
		__this->___JointPositions_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JointPositions_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void DataReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataReceiver__ctor_m2ACEB791E8A6D68C449ED05A2B4F88A18805A68E (DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DataSource::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource_Init_mBDB9A42FB27E783B1F73B021326385FE57DF45BE (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JointPositions = new Vector3[(int)Tools.EJoint.JointsCount];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->___JointPositions_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JointPositions_4), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3[] DataSource::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* DataSource_GetData_m1D2C4A87D503825CBB9CE2F1E1B59D6CFF256033 (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) 
{
	{
		// return JointPositions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___JointPositions_4;
		return L_0;
	}
}
// System.Void DataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSource__ctor_m8307418103ED09FC28848AC74FB255D40693A8B3 (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ManualDataSource::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualDataSource_Start_mF7D52AED346E5179B2863CF062B4D4260CB5E7EE (ManualDataSource_t77D85FFFF813FF6926573C389025BB80897F7FF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Init();
		DataSource_Init_mBDB9A42FB27E783B1F73B021326385FE57DF45BE(__this, NULL);
		// _joints = new GameObject[(int)Tools.EJoint.JointsCount];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->____joints_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____joints_7), (void*)L_0);
		// for (int i = 0; i < _joints.Length; i ++)
		V_0 = 0;
		goto IL_0051;
	}

IL_0017:
	{
		// _joints[i] = Instantiate(jointsPrefabs, rootTransform, true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->____joints_7;
		int32_t L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___jointsPrefabs_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___rootTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_3, L_4, (bool)1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_5);
		// _joints[i].name = ((Tools.EJoint)i).ToString();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->____joints_7;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_1 = L_10;
		Il2CppFakeBox<int32_t> L_11(EJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, L_12, NULL);
		// for (int i = 0; i < _joints.Length; i ++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < _joints.Length; i ++)
		int32_t L_14 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->____joints_7;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ManualDataSource::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualDataSource_Update_m73A2A3F35F6C3B86CFF5C1BCC3BFEEDDC449561D (ManualDataSource_t77D85FFFF813FF6926573C389025BB80897F7FF4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < JointPositions.Length; i ++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// JointPositions[i] = _joints[i].transform.position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44*)__this)->___JointPositions_4;
		int32_t L_1 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->____joints_7;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_7);
		// for (int i = 0; i < JointPositions.Length; i ++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < JointPositions.Length; i ++)
		int32_t L_9 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ((DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44*)__this)->___JointPositions_4;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ManualDataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualDataSource__ctor_m4666AC7073C2EA48F5C9EBF017ADF69224F839AA (ManualDataSource_t77D85FFFF813FF6926573C389025BB80897F7FF4* __this, const RuntimeMethod* method) 
{
	{
		DataSource__ctor_m8307418103ED09FC28848AC74FB255D40693A8B3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapperDataReceiver::ApplyLegParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyLegParams_m2246BDEF055D37ECE12836F44778B4911D6924DF (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2755D2266E56AB8ECB1D351DC3707C944B78229E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4738DBD7DF978B567CAA4D6FC641163D59ACF122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A52FD8CD749B9F712AD32308C8647BBD68E99B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD37012F93683420E9FEA1E4D332B6E7B1C06F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1FDEFA96553A4090B744BD81435269A28E3303A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB8E98032A3904B644C04B57114ABE831ADC01D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _applyParamList.Add("Bip001 L Thigh",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.LeftHip,
		//         Tools.EJoint.LeftKnee));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_0 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_1;
		L_1 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)23), ((int32_t)25), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_0, _stringLiteralBD37012F93683420E9FEA1E4D332B6E7B1C06F6F, L_1, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 L Calf",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.LeftKnee,
		//         Tools.EJoint.LeftAnkle));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_2 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_3;
		L_3 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)25), ((int32_t)27), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_2, _stringLiteralD1FDEFA96553A4090B744BD81435269A28E3303A, L_3, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 L Foot",
		//     Tuple.Create(
		//         Tools.EDirection.Up,
		//         Tools.EJoint.LeftHeel,
		//         Tools.EJoint.LeftFootIndex));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_4 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_5;
		L_5 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(2, ((int32_t)29), ((int32_t)31), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_4, _stringLiteral86A52FD8CD749B9F712AD32308C8647BBD68E99B, L_5, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 R Thigh",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.RightHip,
		//         Tools.EJoint.RightKnee));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_6 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_7;
		L_7 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)24), ((int32_t)26), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_6, _stringLiteral4738DBD7DF978B567CAA4D6FC641163D59ACF122, L_7, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 R Calf",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.RightKnee,
		//         Tools.EJoint.RightAnkle));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_8 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_9;
		L_9 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)26), ((int32_t)28), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_8, _stringLiteral2755D2266E56AB8ECB1D351DC3707C944B78229E, L_9, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 R Foot",
		//     Tuple.Create(
		//         Tools.EDirection.Up,
		//         Tools.EJoint.RightHeel,
		//         Tools.EJoint.RightFootIndex));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_10 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_11;
		L_11 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(2, ((int32_t)30), ((int32_t)32), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_10, _stringLiteralFB8E98032A3904B644C04B57114ABE831ADC01D3, L_11, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MapperDataReceiver::ApplyArmParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyArmParams_mD48BF1ED72A1E2874B2655B22641488D7519AEE3 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26738A812417C2C10205CA7142173063E6E6DB78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BB75F5E2323088735D7EBB9FAAC2D6D17BBC6E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8E79B3F0DDA92502AFAF1DF8EDE072A25E9607F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6C52285747F9ACEE35C51322D4F8C36B9ACEF56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _applyParamList.Add("Bip001 L UpperArm",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.LeftShoulder,
		//         Tools.EJoint.LeftElbow));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_0 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_1;
		L_1 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)11), ((int32_t)13), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_0, _stringLiteralE6C52285747F9ACEE35C51322D4F8C36B9ACEF56, L_1, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 L Forearm",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.LeftElbow,
		//         Tools.EJoint.LeftWrist));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_2 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_3;
		L_3 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)13), ((int32_t)15), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_2, _stringLiteral26738A812417C2C10205CA7142173063E6E6DB78, L_3, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 R UpperArm",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.RightShoulder,
		//         Tools.EJoint.RightElbow));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_4 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_5;
		L_5 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)12), ((int32_t)14), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_4, _stringLiteral5BB75F5E2323088735D7EBB9FAAC2D6D17BBC6E8, L_5, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// _applyParamList.Add("Bip001 R Forearm",
		//     Tuple.Create(
		//         Tools.EDirection.Left,
		//         Tools.EJoint.RightElbow,
		//         Tools.EJoint.RightWrist));
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_6 = __this->____applyParamList_7;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_7;
		L_7 = Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06(5, ((int32_t)14), ((int32_t)16), Tuple_Create_TisEDirection_t136EE0EB1464DDC151333B312C63FF60C0A31126_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_TisEJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_m45292861D0D7ADBA4C366C17C44FD963F4D8CA06_RuntimeMethod_var);
		Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E(L_6, _stringLiteralB8E79B3F0DDA92502AFAF1DF8EDE072A25E9607F, L_7, Dictionary_2_Add_mFE8704B9B4AE5C163B0AC2D291233DC95FD3B09E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void MapperDataReceiver::InitParamList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_InitParamList_m6D149ACE63BD18AB5CDF959680F0FC50997A75E1 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8B1D75258775A3CAAB3443F3FBA0BE38C4CBD7D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _applyParamList = new Dictionary<string, Tuple<Tools.EDirection, Tools.EJoint, Tools.EJoint>>();
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_0 = (Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E*)il2cpp_codegen_object_new(Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8B1D75258775A3CAAB3443F3FBA0BE38C4CBD7D0(L_0, Dictionary_2__ctor_m8B1D75258775A3CAAB3443F3FBA0BE38C4CBD7D0_RuntimeMethod_var);
		__this->____applyParamList_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____applyParamList_7), (void*)L_0);
		// ApplyLegParams();
		MapperDataReceiver_ApplyLegParams_m2246BDEF055D37ECE12836F44778B4911D6924DF(__this, NULL);
		// ApplyArmParams();
		MapperDataReceiver_ApplyArmParams_mD48BF1ED72A1E2874B2655B22641488D7519AEE3(__this, NULL);
		// }
		return;
	}
}
// System.Void MapperDataReceiver::ApplyNodePose(UnityEngine.Transform,Tools/EDirection,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyNodePose_mCA6F2FFBDFD35C98B097916D8529194B6324DF8B (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_nodeTransform, int32_t ___1_faceAxis, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_fromVec, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_toVec, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var faceVec = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_0;
		// if (faceAxis == Tools.EDirection.Up) faceVec = nodeTransform.up;
		int32_t L_1 = ___1_faceAxis;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		// if (faceAxis == Tools.EDirection.Up) faceVec = nodeTransform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		V_0 = L_3;
		goto IL_0060;
	}

IL_0013:
	{
		// else if (faceAxis == Tools.EDirection.Down) faceVec = -nodeTransform.up;
		int32_t L_4 = ___1_faceAxis;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0025;
		}
	}
	{
		// else if (faceAxis == Tools.EDirection.Down) faceVec = -nodeTransform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_6, NULL);
		V_0 = L_7;
		goto IL_0060;
	}

IL_0025:
	{
		// else if (faceAxis == Tools.EDirection.Forward) faceVec = nodeTransform.forward;
		int32_t L_8 = ___1_faceAxis;
		if (L_8)
		{
			goto IL_0031;
		}
	}
	{
		// else if (faceAxis == Tools.EDirection.Forward) faceVec = nodeTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		V_0 = L_10;
		goto IL_0060;
	}

IL_0031:
	{
		// else if (faceAxis == Tools.EDirection.Back) faceVec = -nodeTransform.forward;
		int32_t L_11 = ___1_faceAxis;
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0043;
		}
	}
	{
		// else if (faceAxis == Tools.EDirection.Back) faceVec = -nodeTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_13, NULL);
		V_0 = L_14;
		goto IL_0060;
	}

IL_0043:
	{
		// else if (faceAxis == Tools.EDirection.Right) faceVec = nodeTransform.right;
		int32_t L_15 = ___1_faceAxis;
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_0050;
		}
	}
	{
		// else if (faceAxis == Tools.EDirection.Right) faceVec = nodeTransform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_16, NULL);
		V_0 = L_17;
		goto IL_0060;
	}

IL_0050:
	{
		// else if (faceAxis == Tools.EDirection.Left) faceVec = -nodeTransform.right;
		int32_t L_18 = ___1_faceAxis;
		if ((!(((uint32_t)L_18) == ((uint32_t)5))))
		{
			goto IL_0060;
		}
	}
	{
		// else if (faceAxis == Tools.EDirection.Left) faceVec = -nodeTransform.right;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_20, NULL);
		V_0 = L_21;
	}

IL_0060:
	{
		// var rotate = Quaternion.FromToRotation(faceVec, toVec - fromVec).eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___3_toVec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___2_fromVec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_23, L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_22, L_25, NULL);
		V_2 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_1 = L_27;
		// nodeTransform.Rotate(rotate, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = ___0_nodeTransform;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_28, L_29, 0, NULL);
		// }
		return;
	}
}
// System.Void MapperDataReceiver::ApplyPose(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_ApplyPose_m522245B68BCFEAD4B5F376984C5643FEA57AFDEE (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0F38807965F11989326E891751DEC46DD96D50BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m60020DA134CEAE4DCC6A4695A3739E4F3B275035_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_3_get_Item1_mD2244FDE10ADDD837419B78ED79F5F28F0FF5A26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_3_get_Item2_m04DF392AD4AD5A2C450E5794094465A742B688C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_3_get_Item3_mE919037E38CD7C631C47ACB1CDA10A5769BA3EE6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* V_2 = NULL;
	{
		// for (int i = 0; i < node.childCount; i ++)
		V_0 = 0;
		goto IL_006b;
	}

IL_0004:
	{
		// var subNode = node.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_node;
		int32_t L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, L_1, NULL);
		V_1 = L_2;
		// if (_applyParamList.ContainsKey(subNode.name))
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_3 = __this->____applyParamList_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m0F38807965F11989326E891751DEC46DD96D50BB(L_3, L_5, Dictionary_2_ContainsKey_m0F38807965F11989326E891751DEC46DD96D50BB_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// var paramList = _applyParamList[subNode.name];
		Dictionary_2_t8B52E07236ACDD3DB5480DE31AB8871D3BF98D3E* L_7 = __this->____applyParamList_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_10;
		L_10 = Dictionary_2_get_Item_m60020DA134CEAE4DCC6A4695A3739E4F3B275035(L_7, L_9, Dictionary_2_get_Item_m60020DA134CEAE4DCC6A4695A3739E4F3B275035_RuntimeMethod_var);
		V_2 = L_10;
		// ApplyNodePose(subNode,
		//     paramList.Item1,
		//     JointPositions[(int)paramList.Item2],
		//     JointPositions[(int)paramList.Item3]);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_12 = V_2;
		int32_t L_13;
		L_13 = Tuple_3_get_Item1_mD2244FDE10ADDD837419B78ED79F5F28F0FF5A26_inline(L_12, Tuple_3_get_Item1_mD2244FDE10ADDD837419B78ED79F5F28F0FF5A26_RuntimeMethod_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = ((DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4*)__this)->___JointPositions_5;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_15 = V_2;
		int32_t L_16;
		L_16 = Tuple_3_get_Item2_m04DF392AD4AD5A2C450E5794094465A742B688C5_inline(L_15, Tuple_3_get_Item2_m04DF392AD4AD5A2C450E5794094465A742B688C5_RuntimeMethod_var);
		int32_t L_17 = L_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = ((DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4*)__this)->___JointPositions_5;
		Tuple_3_t6DC8415F42A0BC9A5FEB2B413D5CCB9631D806E0* L_20 = V_2;
		int32_t L_21;
		L_21 = Tuple_3_get_Item3_mE919037E38CD7C631C47ACB1CDA10A5769BA3EE6_inline(L_20, Tuple_3_get_Item3_mE919037E38CD7C631C47ACB1CDA10A5769BA3EE6_RuntimeMethod_var);
		int32_t L_22 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		MapperDataReceiver_ApplyNodePose_mCA6F2FFBDFD35C98B097916D8529194B6324DF8B(__this, L_11, L_13, L_18, L_23, NULL);
	}

IL_0060:
	{
		// ApplyPose(subNode);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_1;
		MapperDataReceiver_ApplyPose_m522245B68BCFEAD4B5F376984C5643FEA57AFDEE(__this, L_24, NULL);
		// for (int i = 0; i < node.childCount; i ++)
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < node.childCount; i ++)
		int32_t L_26 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = ___0_node;
		int32_t L_28;
		L_28 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_27, NULL);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MapperDataReceiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_Start_m71F2F7C293789C20F65BEE042E82215731759F22 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) 
{
	{
		// InitParamList();
		MapperDataReceiver_InitParamList_m6D149ACE63BD18AB5CDF959680F0FC50997A75E1(__this, NULL);
		// }
		return;
	}
}
// System.Void MapperDataReceiver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver_Update_m7AB8B83B8924547C8BED2B08CDE6D90D3980F0F0 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) 
{
	{
		// Refresh();
		DataReceiver_Refresh_m7029104FF491AF4CEEEA6E97AD428421F499DAC5(__this, NULL);
		// ApplyPose(avatarRoot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___avatarRoot_6;
		MapperDataReceiver_ApplyPose_m522245B68BCFEAD4B5F376984C5643FEA57AFDEE(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void MapperDataReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapperDataReceiver__ctor_m56692460C20A35E6FF05D8C2300D99E9C69847B0 (MapperDataReceiver_tD049568CCA20ABD906694FAF4DE4C22835F6D2B4* __this, const RuntimeMethod* method) 
{
	{
		DataReceiver__ctor_m2ACEB791E8A6D68C449ED05A2B4F88A18805A68E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 MotionCaptureDataSource::VectorConverter(UnityEngine.Vector3,Tools/DataScale)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MotionCaptureDataSource_VectorConverter_m19AD815B50B800ECB9E0C6EFC1E2C9368733375A (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vec, DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 ___1_vecDataScale, const RuntimeMethod* method) 
{
	{
		// vec.x *= vecDataScale.xOffset;
		float* L_0 = (&(&___0_vec)->___x_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 L_3 = ___1_vecDataScale;
		float L_4 = L_3.___xOffset_0;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_4));
		// vec.y *= vecDataScale.yOffset;
		float* L_5 = (&(&___0_vec)->___y_3);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 L_8 = ___1_vecDataScale;
		float L_9 = L_8.___yOffset_1;
		*((float*)L_6) = (float)((float)il2cpp_codegen_multiply(L_7, L_9));
		// vec.z *= vecDataScale.zOffset;
		float* L_10 = (&(&___0_vec)->___z_4);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 L_13 = ___1_vecDataScale;
		float L_14 = L_13.___zOffset_2;
		*((float*)L_11) = (float)((float)il2cpp_codegen_multiply(L_12, L_14));
		// return -vec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ___0_vec;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_15, NULL);
		return L_16;
	}
}
// System.Void MotionCaptureDataSource::DataPreprocess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionCaptureDataSource_DataPreprocess_mB6127A89B8ADF63B706E4EFB690075F2C4BA72F2 (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (_data.Length == 0) return;
		String_t* L_0 = __this->____data_12;
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_data.Length == 0) return;
		return;
	}

IL_000e:
	{
		// _nodes = _data.Split('|');
		String_t* L_2 = __this->____data_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_2, ((int32_t)124), 0, NULL);
		__this->____nodes_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_10), (void*)L_3);
		// for (int i = 0; i < _nodes.Length; i ++)
		V_0 = 0;
		goto IL_0096;
	}

IL_0026:
	{
		// if (_nodes[i].Length == 0) continue;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->____nodes_10;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0092;
		}
	}
	{
		// _points = _nodes[i].Split(',');
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->____nodes_10;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_12, ((int32_t)44), 0, NULL);
		__this->____points_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____points_11), (void*)L_13);
		// Vector3 rawVec = new Vector3(
		//     float.Parse(_points[0]),
		//     float.Parse(_points[1]),
		//     float.Parse(_points[2]));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->____points_11;
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		float L_17;
		L_17 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_16, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = __this->____points_11;
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		float L_21;
		L_21 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_20, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = __this->____points_11;
		int32_t L_23 = 2;
		String_t* L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		float L_25;
		L_25 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_24, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), L_17, L_21, L_25, NULL);
		// JointPositions[i] = VectorConverter(rawVec, dataScale);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = ((DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44*)__this)->___JointPositions_4;
		int32_t L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		DataScale_tD2A677E8CA29F36800E0D1004F72166FE5B65F07 L_29 = __this->___dataScale_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = MotionCaptureDataSource_VectorConverter_m19AD815B50B800ECB9E0C6EFC1E2C9368733375A(__this, L_28, L_29, NULL);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
	}

IL_0092:
	{
		// for (int i = 0; i < _nodes.Length; i ++)
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0096:
	{
		// for (int i = 0; i < _nodes.Length; i ++)
		int32_t L_32 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = __this->____nodes_10;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3[] MotionCaptureDataSource::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* MotionCaptureDataSource_GetData_mF6361AF2EFF615E3D928F1E196FCA4907E42CCF7 (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) 
{
	{
		// DataPreprocess();
		MotionCaptureDataSource_DataPreprocess_mB6127A89B8ADF63B706E4EFB690075F2C4BA72F2(__this, NULL);
		// return base.GetData();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0;
		L_0 = DataSource_GetData_m1D2C4A87D503825CBB9CE2F1E1B59D6CFF256033_inline(__this, NULL);
		return L_0;
	}
}
// System.Void MotionCaptureDataSource::ReceiveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionCaptureDataSource_ReceiveData_mCCE9DB78CFD739F495C5557443EF28BA90B8D522 (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// _udpClient = new UdpClient(port);
		int32_t L_0 = __this->___port_5;
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_1 = (UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8*)il2cpp_codegen_object_new(UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8_il2cpp_TypeInfo_var);
		UdpClient__ctor_m6DCF61B7A404114E51B86974B1B4E028F45C3442(L_1, L_0, NULL);
		__this->____udpClient_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____udpClient_9), (void*)L_1);
		goto IL_0058;
	}

IL_0013:
	{
	}
	try
	{// begin try (depth: 1)
		// IPEndPoint anyIP = new IPEndPoint(IPAddress.Any, 0);
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_2 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_3 = (IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB*)il2cpp_codegen_object_new(IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m902C98F9E3F36B20B3C2E030AA91B62E2BC7A85A(L_3, L_2, 0, NULL);
		V_0 = L_3;
		// byte[] dataBytes = _udpClient.Receive(ref anyIP);
		UdpClient_t03C5278D44ADD98C3A506D8EA5445309FDF1F5B8* L_4 = __this->____udpClient_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = UdpClient_Receive_mC682A8DE6CD86CEFA3CE52852574FD3437EC7DA9(L_4, (&V_0), NULL);
		V_1 = L_5;
		// _data = Encoding.UTF8.GetString(dataBytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		String_t* L_8;
		L_8 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_7);
		__this->____data_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_12), (void*)L_8);
		// Debug.Log(_data);
		String_t* L_9 = __this->____data_12;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// }
		goto IL_0058;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004c;
		}
		throw e;
	}

CATCH_004c:
	{// begin catch(System.Exception)
		// Debug.Log(e.ToString());
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0058;
	}// end catch (depth: 1)

IL_0058:
	{
		// while (enable)
		bool L_11 = __this->___enable_6;
		if (L_11)
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MotionCaptureDataSource::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionCaptureDataSource_Awake_m84854678AC71182B94F03558618B2A1E5DFE00AF (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionCaptureDataSource_ReceiveData_mCCE9DB78CFD739F495C5557443EF28BA90B8D522_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _data = "";
		__this->____data_12 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_12), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// _nodes = new string[(int)Tools.EJoint.JointsCount];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->____nodes_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_10), (void*)L_0);
		// JointPositions = new Vector3[(int)Tools.EJoint.JointsCount];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		((DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44*)__this)->___JointPositions_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44*)__this)->___JointPositions_4), (void*)L_1);
		// _receiveThread = new Thread(ReceiveData)
		// {
		//     IsBackground = true
		// };
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_2 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_2, __this, (intptr_t)((void*)MotionCaptureDataSource_ReceiveData_mCCE9DB78CFD739F495C5557443EF28BA90B8D522_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_3 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_3, L_2, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = L_3;
		Thread_set_IsBackground_m45F00BD4C46F9B8A7C46A20A170B22BABB8FBA30(L_4, (bool)1, NULL);
		__this->____receiveThread_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____receiveThread_8), (void*)L_4);
		// _receiveThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5 = __this->____receiveThread_8;
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_5, NULL);
		// }
		return;
	}
}
// System.Void MotionCaptureDataSource::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionCaptureDataSource_OnDestroy_mCD66D8EAFA258CBF8E2A279D42BFFFCFCD04AF30 (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) 
{
	{
		// _receiveThread.Abort();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0 = __this->____receiveThread_8;
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(L_0, NULL);
		// }
		return;
	}
}
// System.Void MotionCaptureDataSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionCaptureDataSource__ctor_m0017554FCA1C7A5276474266C5687513EEB583DA (MotionCaptureDataSource_t74C9C76F3357518DFAA2BF1E81976CF6E9525C34* __this, const RuntimeMethod* method) 
{
	{
		DataSource__ctor_m8307418103ED09FC28848AC74FB255D40693A8B3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VisualizerDataReceiver::InitEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_InitEdges_mD0868003CE55F460E39E7647C64D2C5B7D3DF97E (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _lineEdges = new Tools.Edges<Tools.EJoint>[]
		// {
		//     new (Tools.EJoint.LeftHeel, Tools.EJoint.LeftFootIndex),
		//     new (Tools.EJoint.RightHeel, Tools.EJoint.RightFootIndex),
		//     new (Tools.EJoint.LeftAnkle, Tools.EJoint.LeftFootIndex),
		//     new (Tools.EJoint.RightAnkle, Tools.EJoint.RightFootIndex),
		//     new (Tools.EJoint.LeftHeel, Tools.EJoint.LeftAnkle),
		//     new (Tools.EJoint.RightHeel, Tools.EJoint.RightAnkle),
		//     new (Tools.EJoint.LeftAnkle, Tools.EJoint.LeftKnee),
		//     new (Tools.EJoint.RightAnkle, Tools.EJoint.RightKnee),
		//     new (Tools.EJoint.LeftHip, Tools.EJoint.LeftKnee),
		//     new (Tools.EJoint.RightHip, Tools.EJoint.RightKnee),
		//     new (Tools.EJoint.RightHip, Tools.EJoint.LeftHip),
		//     new (Tools.EJoint.LeftShoulder, Tools.EJoint.LeftElbow),
		//     new (Tools.EJoint.RightShoulder, Tools.EJoint.RightElbow),
		//     new (Tools.EJoint.LeftWrist, Tools.EJoint.LeftElbow),
		//     new (Tools.EJoint.RightWrist, Tools.EJoint.RightElbow),
		//     new (Tools.EJoint.LeftThumb, Tools.EJoint.LeftWrist),
		//     new (Tools.EJoint.RightThumb, Tools.EJoint.RightWrist),
		//     new (Tools.EJoint.LeftWrist, Tools.EJoint.LeftPinky),
		//     new (Tools.EJoint.RightWrist, Tools.EJoint.RightPinky),
		//     new (Tools.EJoint.LeftWrist, Tools.EJoint.LeftIndex),
		//     new (Tools.EJoint.RightWrist, Tools.EJoint.RightIndex),
		//     new (Tools.EJoint.LeftPinky, Tools.EJoint.LeftIndex),
		//     new (Tools.EJoint.RightPinky, Tools.EJoint.RightIndex),
		//     new (Tools.EJoint.MouthRight, Tools.EJoint.MouthLeft),
		//     new (Tools.EJoint.RightEar, Tools.EJoint.RightEyeOuter),
		//     new (Tools.EJoint.LeftEar, Tools.EJoint.LeftEyeOuter),
		//     new (Tools.EJoint.RightEye, Tools.EJoint.RightEyeOuter),
		//     new (Tools.EJoint.LeftEye, Tools.EJoint.LeftEyeOuter),
		//     new (Tools.EJoint.RightEye, Tools.EJoint.RightEyeInner),
		//     new (Tools.EJoint.LeftEye, Tools.EJoint.LeftEyeInner),
		//     new (Tools.EJoint.Nose, Tools.EJoint.RightEyeInner),
		//     new (Tools.EJoint.Nose, Tools.EJoint.LeftEyeInner),
		// };
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_0 = (Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1*)(Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1*)SZArrayNew(Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_1 = L_0;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_2), ((int32_t)29), ((int32_t)31), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_2);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_3 = L_1;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_4), ((int32_t)30), ((int32_t)32), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_4);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_5 = L_3;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_6), ((int32_t)27), ((int32_t)31), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_6);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_7 = L_5;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_8), ((int32_t)28), ((int32_t)32), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_8);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_9 = L_7;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_10), ((int32_t)29), ((int32_t)27), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_10);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_11 = L_9;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_12), ((int32_t)30), ((int32_t)28), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_12);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_13 = L_11;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_14), ((int32_t)27), ((int32_t)25), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_14);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_15 = L_13;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_16), ((int32_t)28), ((int32_t)26), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_16);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_17 = L_15;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_18), ((int32_t)23), ((int32_t)25), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_18);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_19 = L_17;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_20), ((int32_t)24), ((int32_t)26), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_20);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_21 = L_19;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_22), ((int32_t)24), ((int32_t)23), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_22);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_23 = L_21;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_24), ((int32_t)11), ((int32_t)13), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_24);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_25 = L_23;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_26), ((int32_t)12), ((int32_t)14), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_26);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_27 = L_25;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_28), ((int32_t)15), ((int32_t)13), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_28);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_29 = L_27;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_30), ((int32_t)16), ((int32_t)14), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_30);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_31 = L_29;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_32), ((int32_t)21), ((int32_t)15), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_32);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_33 = L_31;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_34), ((int32_t)22), ((int32_t)16), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_34);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_35 = L_33;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_36), ((int32_t)15), ((int32_t)17), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_36);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_37 = L_35;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_38), ((int32_t)16), ((int32_t)18), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_38);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_39 = L_37;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_40), ((int32_t)15), ((int32_t)19), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_40);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_41 = L_39;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_42), ((int32_t)16), ((int32_t)20), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_42);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_43 = L_41;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_44), ((int32_t)17), ((int32_t)19), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_44);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_45 = L_43;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_46;
		memset((&L_46), 0, sizeof(L_46));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_46), ((int32_t)18), ((int32_t)20), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_46);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_47 = L_45;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_48), ((int32_t)10), ((int32_t)9), /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_48);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_49 = L_47;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_50), 8, 6, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_50);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_51 = L_49;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_52), 7, 3, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_52);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_53 = L_51;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_54), 5, 6, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_54);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_55 = L_53;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_56), 2, 3, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_56);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_57 = L_55;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_58), 5, 4, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_58);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_59 = L_57;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_60;
		memset((&L_60), 0, sizeof(L_60));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_60), 2, 1, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_60);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_61 = L_59;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_62), 0, 4, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_62);
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_63 = L_61;
		Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A((&L_64), 0, 1, /*hidden argument*/Edges_1__ctor_m633E96417D472D8193C2DC7956B3EA2BC0EC002A_RuntimeMethod_var);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (Edges_1_tAED97CB498CC539387FF30792AA2555F32D6A4B6)L_64);
		__this->____lineEdges_9 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineEdges_9), (void*)L_63);
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::InitLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_InitLines_m2B5BAB380EA5409B4143C10651704B57C45F2D94 (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitEdges();
		VisualizerDataReceiver_InitEdges_mD0868003CE55F460E39E7647C64D2C5B7D3DF97E(__this, NULL);
		// _lineRenderer = GetComponent<LineRenderer>();
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0;
		L_0 = Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49(__this, Component_GetComponent_TisLineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D_m4F17B3CA1E7FFB03C7682312A59B9185E0F67C49_RuntimeMethod_var);
		__this->____lineRenderer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lineRenderer_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::VisualizeLines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_VisualizeLines_m53592F89536EA14C2D2DCF0CF1F5775F4259FB2B (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// _lineRenderer.positionCount = _lineEdges.Length * 2;
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_0 = __this->____lineRenderer_8;
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_1 = __this->____lineEdges_9;
		LineRenderer_set_positionCount_m2001FB4044053895ECBE897AB833284F3300B205(L_0, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_1)->max_length)), 2)), NULL);
		// int index = 0;
		V_0 = 0;
		// for (int i = 0; i < _lineEdges.Length; i++)
		V_1 = 0;
		goto IL_007b;
	}

IL_001b:
	{
		// Vector3 start = JointPositions[(int)_lineEdges[i].u];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ((DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4*)__this)->___JointPositions_5;
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_3 = __this->____lineEdges_9;
		int32_t L_4 = V_1;
		int32_t L_5 = ((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)))->___u_0;
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// Vector3 end = JointPositions[(int)_lineEdges[i].v];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ((DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4*)__this)->___JointPositions_5;
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_9 = __this->____lineEdges_9;
		int32_t L_10 = V_1;
		int32_t L_11 = ((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)))->___v_1;
		int32_t L_12 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// _lineRenderer.SetPosition(index ++, start);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_14 = __this->____lineRenderer_8;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_14, L_16, L_17, NULL);
		// _lineRenderer.SetPosition(index ++, end);
		LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* L_18 = __this->____lineRenderer_8;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		LineRenderer_SetPosition_m84C4AD9ADC6AC62B33DB4D7E4C9F066DFF8440C1(L_18, L_20, L_21, NULL);
		// for (int i = 0; i < _lineEdges.Length; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < _lineEdges.Length; i++)
		int32_t L_23 = V_1;
		Edges_1U5BU5D_t85EE0016EC552FDB98DF82B1BEDE9E2CB3A7DDB1* L_24 = __this->____lineEdges_9;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::InitVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_InitVisualizer_m933ECC4212B283FAD41AB09AFBE16AD72EC48A64 (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// _visualizationGameObjects = new GameObject[(int)Tools.EJoint.JointsCount];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)33));
		__this->____visualizationGameObjects_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____visualizationGameObjects_10), (void*)L_0);
		// for (int i = 0; i < _visualizationGameObjects.Length; i ++)
		V_0 = 0;
		goto IL_004b;
	}

IL_0011:
	{
		// _visualizationGameObjects[i] = Instantiate(visualizationPrefab, visualizationRoot, true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->____visualizationGameObjects_10;
		int32_t L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___visualizationPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___visualizationRoot_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6(L_3, L_4, (bool)1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mCE536F8736F04AC3C46EED6FD5FA02F5D22A84C6_RuntimeMethod_var);
		ArrayElementTypeCheck (L_1, L_5);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_5);
		// _visualizationGameObjects[i].name = ((Tools.EJoint)i).ToString();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->____visualizationGameObjects_10;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		V_1 = L_10;
		Il2CppFakeBox<int32_t> L_11(EJoint_t11F406F6FF48F1D51A9A9239C4D75D14190F0FEE_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_12;
		L_12 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_9, L_12, NULL);
		// for (int i = 0; i < _visualizationGameObjects.Length; i ++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004b:
	{
		// for (int i = 0; i < _visualizationGameObjects.Length; i ++)
		int32_t L_14 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->____visualizationGameObjects_10;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::VisualizeJoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_VisualizeJoints_mBA109FE7876E580484384B338DE59CF1245F39BF (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _visualizationGameObjects.Length; i ++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// GameObject obj = _visualizationGameObjects[i];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->____visualizationGameObjects_10;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		// obj.transform.localPosition = JointPositions[i];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ((DataReceiver_t1ADFFFDF28474CEFE9B18B69884D94A223AF0DE4*)__this)->___JointPositions_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_4, L_8, NULL);
		// for (int i = 0; i < _visualizationGameObjects.Length; i ++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < _visualizationGameObjects.Length; i ++)
		int32_t L_10 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->____visualizationGameObjects_10;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_Awake_m5B1A07717C267F399D717D68512DF869C04652EF (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	{
		// InitLines();
		VisualizerDataReceiver_InitLines_m2B5BAB380EA5409B4143C10651704B57C45F2D94(__this, NULL);
		// InitVisualizer();
		VisualizerDataReceiver_InitVisualizer_m933ECC4212B283FAD41AB09AFBE16AD72EC48A64(__this, NULL);
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver_Update_m27D3D910543924405CB5AF929516A3FF7F9322BD (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	{
		// Refresh();
		DataReceiver_Refresh_m7029104FF491AF4CEEEA6E97AD428421F499DAC5(__this, NULL);
		// VisualizeJoints();
		VisualizerDataReceiver_VisualizeJoints_mBA109FE7876E580484384B338DE59CF1245F39BF(__this, NULL);
		// VisualizeLines();
		VisualizerDataReceiver_VisualizeLines_m53592F89536EA14C2D2DCF0CF1F5775F4259FB2B(__this, NULL);
		// }
		return;
	}
}
// System.Void VisualizerDataReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizerDataReceiver__ctor_m676C4508FB507CF2D17760FF7776E1F3FADA3567 (VisualizerDataReceiver_t75FF9B17829D9357AFF9DA0EB770256C4E146355* __this, const RuntimeMethod* method) 
{
	{
		DataReceiver__ctor_m2ACEB791E8A6D68C449ED05A2B4F88A18805A68E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* DataSource_GetData_m1D2C4A87D503825CBB9CE2F1E1B59D6CFF256033_inline (DataSource_tAA6B9B750D0B112E26DEC0C40849437BDAF7BF44* __this, const RuntimeMethod* method) 
{
	{
		// return JointPositions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___JointPositions_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_3_get_Item1_m4C3E091B34337F627613DBC8D4D4B63A13DC45E2_gshared_inline (Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_3_get_Item2_mF5F52240B59BC32C99DA1F01BD99848BF52DCEDB_gshared_inline (Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_3_get_Item3_mE7D6C11E9186D890B54C6718A88FC34A425E0654_gshared_inline (Tuple_3_t1B0748451C1984E38711E70FC2805C48D2DBDDEA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Item3_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
