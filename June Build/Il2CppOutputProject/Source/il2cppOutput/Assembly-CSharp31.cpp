#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IOAsyncCallback
struct IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980;
// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3;
// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F;
// System.Net.IPHostEntry
struct IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A;
// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t824A6C58D0D1B4A7CAE30F26CE8EE4B23A8A1833;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t4A28E9A30CBB331C9B68AE4AFCB30625C6C8B538;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// uPLibrary.Networking.M2Mqtt.Hashtable
struct Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A;
// uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler
struct ConnectionClosedEventHandler_tE44C1FA076D2454AE66966181D7D7B9E082D424B;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder
struct MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler
struct MqttMsgPublishEventHandler_tF407B453C733DE41BE72AA112CF267B54CBD4A21;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct MqttMsgPublishedEventHandler_tC17D5161F8BE229429791B476B26B0341EBC9B37;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct MqttMsgSubscribedEventHandler_t807635F97EA9E51A8E3AEFE2C6EF581B5B4F30A2;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct MqttMsgUnsubscribedEventHandler_tB58D07978856C620E7E1578CCC92BE90C190FCDB;
// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B;
// uPLibrary.Networking.M2Mqtt.MqttSettings
struct MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B;
// uPLibrary.Networking.M2Mqtt.Queue
struct Queue_t5C09AE5823A7AB3CD48EE57BEE49027498A91306;
// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession
struct MqttClientSession_t8116A56998354FDD72F799851C209E0D90F35D88;
// uPLibrary.Networking.M2Mqtt.Session.MqttSession
struct MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E;
// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate
struct QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A;
// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5F57DEFD51B4090CA6A76A47CCBEDD11D7001F71;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6C8EB0E38B247D30FDE3757D62FCB1786647C8;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3FC5F5DDC3E6C79AE296B652B391064F4055C523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC7C2F195F725C9D7F39E8E34538268F981B02668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m510901A4EADBE4FC16C6F83E4C5EDF5BE41772E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MqttSslUtility_ToSslPlatformEnum_mFDEDB3A34ED8692387C1484ADF3926F22158E24B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_GetEnumerator_m31E90940F7146F5C1362F61866DEC7A66B550E50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MqttMsgContextFinder_Find_m7E3FE69415E2D88ABE938CBDA071219F7F43B08B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttNetworkChannel_Connect_mF9624B1C9DB35039F9AD8B0BCB87394EF1D4A3D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSession_Clear_mBF92913F8B878601A03F30254D25BF9A0368A0FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSession__ctor_mA323E67D802D31B0416BB0F5078677AB7D469BF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSettings_get_Instance_mC1D70620016DE16A0C200ED67221AAD8814549C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MqttSslUtility_ToSslPlatformEnum_mFDEDB3A34ED8692387C1484ADF3926F22158E24B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t QueueExtension_Get_mE7473B4B8CF7C62A0DCCAB2409FE0D131854D49F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Queue__ctor_m85140D306407989619D09DDE7A7F18C1C4E171EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Trace_Debug_mFCC422D56B38CA079132A4A69A013616664FA1A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Trace_WriteLine_m5637A4F9F263FAD4768E522FAEE0101A223196F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Trace_WriteLine_m66E19C2CD9529D92BAA6010523A82F8A86CC40BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Trace_WriteLine_m8680444D96D5F299CEF5753EE6A1EE267BD614C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Trace_WriteLine_mAE0487B2FA4DFD6E04B71B322E56CC6D15E98CEF_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Net.EndPoint
struct EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980  : public RuntimeObject
{
public:

public:
};


// System.Net.IPHostEntry
struct IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D  : public RuntimeObject
{
public:
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___aliases_1;
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* ___addressList_2;
	// System.Boolean System.Net.IPHostEntry::isTrustedHost
	bool ___isTrustedHost_3;

public:
	inline static int32_t get_offset_of_hostName_0() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___hostName_0)); }
	inline String_t* get_hostName_0() const { return ___hostName_0; }
	inline String_t** get_address_of_hostName_0() { return &___hostName_0; }
	inline void set_hostName_0(String_t* value)
	{
		___hostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___aliases_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aliases_1), (void*)value);
	}

	inline static int32_t get_offset_of_addressList_2() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___addressList_2)); }
	inline IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* get_addressList_2() const { return ___addressList_2; }
	inline IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3** get_address_of_addressList_2() { return &___addressList_2; }
	inline void set_addressList_2(IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* value)
	{
		___addressList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addressList_2), (void*)value);
	}

	inline static int32_t get_offset_of_isTrustedHost_3() { return static_cast<int32_t>(offsetof(IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D, ___isTrustedHost_3)); }
	inline bool get_isTrustedHost_3() const { return ___isTrustedHost_3; }
	inline bool* get_address_of_isTrustedHost_3() { return &___isTrustedHost_3; }
	inline void set_isTrustedHost_3(bool value)
	{
		___isTrustedHost_3 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___impl_0)); }
	inline X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D  : public RuntimeObject
{
public:
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::type
	uint8_t ___type_50;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::dupFlag
	bool ___dupFlag_51;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::qosLevel
	uint8_t ___qosLevel_52;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::retain
	bool ___retain_53;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::messageId
	uint16_t ___messageId_54;

public:
	inline static int32_t get_offset_of_type_50() { return static_cast<int32_t>(offsetof(MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D, ___type_50)); }
	inline uint8_t get_type_50() const { return ___type_50; }
	inline uint8_t* get_address_of_type_50() { return &___type_50; }
	inline void set_type_50(uint8_t value)
	{
		___type_50 = value;
	}

	inline static int32_t get_offset_of_dupFlag_51() { return static_cast<int32_t>(offsetof(MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D, ___dupFlag_51)); }
	inline bool get_dupFlag_51() const { return ___dupFlag_51; }
	inline bool* get_address_of_dupFlag_51() { return &___dupFlag_51; }
	inline void set_dupFlag_51(bool value)
	{
		___dupFlag_51 = value;
	}

	inline static int32_t get_offset_of_qosLevel_52() { return static_cast<int32_t>(offsetof(MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D, ___qosLevel_52)); }
	inline uint8_t get_qosLevel_52() const { return ___qosLevel_52; }
	inline uint8_t* get_address_of_qosLevel_52() { return &___qosLevel_52; }
	inline void set_qosLevel_52(uint8_t value)
	{
		___qosLevel_52 = value;
	}

	inline static int32_t get_offset_of_retain_53() { return static_cast<int32_t>(offsetof(MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D, ___retain_53)); }
	inline bool get_retain_53() const { return ___retain_53; }
	inline bool* get_address_of_retain_53() { return &___retain_53; }
	inline void set_retain_53(bool value)
	{
		___retain_53 = value;
	}

	inline static int32_t get_offset_of_messageId_54() { return static_cast<int32_t>(offsetof(MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D, ___messageId_54)); }
	inline uint16_t get_messageId_54() const { return ___messageId_54; }
	inline uint16_t* get_address_of_messageId_54() { return &___messageId_54; }
	inline void set_messageId_54(uint16_t value)
	{
		___messageId_54 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttSettings
struct MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B  : public RuntimeObject
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_7;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<SslPort>k__BackingField
	int32_t ___U3CSslPortU3Ek__BackingField_8;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<TimeoutOnConnection>k__BackingField
	int32_t ___U3CTimeoutOnConnectionU3Ek__BackingField_9;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<TimeoutOnReceiving>k__BackingField
	int32_t ___U3CTimeoutOnReceivingU3Ek__BackingField_10;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<AttemptsOnRetry>k__BackingField
	int32_t ___U3CAttemptsOnRetryU3Ek__BackingField_11;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<DelayOnRetry>k__BackingField
	int32_t ___U3CDelayOnRetryU3Ek__BackingField_12;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<InflightQueueSize>k__BackingField
	int32_t ___U3CInflightQueueSizeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CPortU3Ek__BackingField_7)); }
	inline int32_t get_U3CPortU3Ek__BackingField_7() const { return ___U3CPortU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_7() { return &___U3CPortU3Ek__BackingField_7; }
	inline void set_U3CPortU3Ek__BackingField_7(int32_t value)
	{
		___U3CPortU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CSslPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CSslPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CSslPortU3Ek__BackingField_8() const { return ___U3CSslPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CSslPortU3Ek__BackingField_8() { return &___U3CSslPortU3Ek__BackingField_8; }
	inline void set_U3CSslPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CSslPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutOnConnectionU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CTimeoutOnConnectionU3Ek__BackingField_9)); }
	inline int32_t get_U3CTimeoutOnConnectionU3Ek__BackingField_9() const { return ___U3CTimeoutOnConnectionU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CTimeoutOnConnectionU3Ek__BackingField_9() { return &___U3CTimeoutOnConnectionU3Ek__BackingField_9; }
	inline void set_U3CTimeoutOnConnectionU3Ek__BackingField_9(int32_t value)
	{
		___U3CTimeoutOnConnectionU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutOnReceivingU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CTimeoutOnReceivingU3Ek__BackingField_10)); }
	inline int32_t get_U3CTimeoutOnReceivingU3Ek__BackingField_10() const { return ___U3CTimeoutOnReceivingU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CTimeoutOnReceivingU3Ek__BackingField_10() { return &___U3CTimeoutOnReceivingU3Ek__BackingField_10; }
	inline void set_U3CTimeoutOnReceivingU3Ek__BackingField_10(int32_t value)
	{
		___U3CTimeoutOnReceivingU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptsOnRetryU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CAttemptsOnRetryU3Ek__BackingField_11)); }
	inline int32_t get_U3CAttemptsOnRetryU3Ek__BackingField_11() const { return ___U3CAttemptsOnRetryU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CAttemptsOnRetryU3Ek__BackingField_11() { return &___U3CAttemptsOnRetryU3Ek__BackingField_11; }
	inline void set_U3CAttemptsOnRetryU3Ek__BackingField_11(int32_t value)
	{
		___U3CAttemptsOnRetryU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDelayOnRetryU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CDelayOnRetryU3Ek__BackingField_12)); }
	inline int32_t get_U3CDelayOnRetryU3Ek__BackingField_12() const { return ___U3CDelayOnRetryU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CDelayOnRetryU3Ek__BackingField_12() { return &___U3CDelayOnRetryU3Ek__BackingField_12; }
	inline void set_U3CDelayOnRetryU3Ek__BackingField_12(int32_t value)
	{
		___U3CDelayOnRetryU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CInflightQueueSizeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B, ___U3CInflightQueueSizeU3Ek__BackingField_13)); }
	inline int32_t get_U3CInflightQueueSizeU3Ek__BackingField_13() const { return ___U3CInflightQueueSizeU3Ek__BackingField_13; }
	inline int32_t* get_address_of_U3CInflightQueueSizeU3Ek__BackingField_13() { return &___U3CInflightQueueSizeU3Ek__BackingField_13; }
	inline void set_U3CInflightQueueSizeU3Ek__BackingField_13(int32_t value)
	{
		___U3CInflightQueueSizeU3Ek__BackingField_13 = value;
	}
};

struct MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::instance
	MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * ___instance_14;

public:
	inline static int32_t get_offset_of_instance_14() { return static_cast<int32_t>(offsetof(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_StaticFields, ___instance_14)); }
	inline MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * get_instance_14() const { return ___instance_14; }
	inline MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B ** get_address_of_instance_14() { return &___instance_14; }
	inline void set_instance_14(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * value)
	{
		___instance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_14), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.MqttSslUtility
struct MqttSslUtility_t0185F08495285F7F369919A682C62B22ECB905A0  : public RuntimeObject
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Session.MqttSession
struct MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E  : public RuntimeObject
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Session.MqttSession::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::<InflightMessages>k__BackingField
	Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * ___U3CInflightMessagesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E, ___U3CClientIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_0() const { return ___U3CClientIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_0() { return &___U3CClientIdU3Ek__BackingField_0; }
	inline void set_U3CClientIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClientIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInflightMessagesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E, ___U3CInflightMessagesU3Ek__BackingField_1)); }
	inline Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * get_U3CInflightMessagesU3Ek__BackingField_1() const { return ___U3CInflightMessagesU3Ek__BackingField_1; }
	inline Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC ** get_address_of_U3CInflightMessagesU3Ek__BackingField_1() { return &___U3CInflightMessagesU3Ek__BackingField_1; }
	inline void set_U3CInflightMessagesU3Ek__BackingField_1(Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * value)
	{
		___U3CInflightMessagesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInflightMessagesU3Ek__BackingField_1), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension
struct QueueExtension_tBA8200B3D73ED572E71CB0A7B0DE78B3B1C8EA4E  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.Queue`1/Enumerator<System.Object>
struct Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F 
{
public:
	// System.Collections.Generic.Queue`1<T> System.Collections.Generic.Queue`1/Enumerator::_q
	Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * ____q_0;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Queue`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Queue`1/Enumerator::_currentElement
	RuntimeObject * ____currentElement_3;

public:
	inline static int32_t get_offset_of__q_0() { return static_cast<int32_t>(offsetof(Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F, ____q_0)); }
	inline Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * get__q_0() const { return ____q_0; }
	inline Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 ** get_address_of__q_0() { return &____q_0; }
	inline void set__q_0(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * value)
	{
		____q_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____q_0), (void*)value);
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F, ____version_1)); }
	inline int32_t get__version_1() const { return ____version_1; }
	inline int32_t* get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(int32_t value)
	{
		____version_1 = value;
	}

	inline static int32_t get_offset_of__index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F, ____index_2)); }
	inline int32_t get__index_2() const { return ____index_2; }
	inline int32_t* get_address_of__index_2() { return &____index_2; }
	inline void set__index_2(int32_t value)
	{
		____index_2 = value;
	}

	inline static int32_t get_offset_of__currentElement_3() { return static_cast<int32_t>(offsetof(Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F, ____currentElement_3)); }
	inline RuntimeObject * get__currentElement_3() const { return ____currentElement_3; }
	inline RuntimeObject ** get_address_of__currentElement_3() { return &____currentElement_3; }
	inline void set__currentElement_3(RuntimeObject * value)
	{
		____currentElement_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentElement_3), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Net.IPEndPoint
struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F  : public EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::m_Address
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___m_Address_0;
	// System.Int32 System.Net.IPEndPoint::m_Port
	int32_t ___m_Port_1;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Address_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_m_Address_0() const { return ___m_Address_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___m_Address_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Address_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F, ___m_Port_1)); }
	inline int32_t get_m_Port_1() const { return ___m_Port_1; }
	inline int32_t* get_address_of_m_Port_1() { return &___m_Port_1; }
	inline void set_m_Port_1(int32_t value)
	{
		___m_Port_1 = value;
	}
};

struct IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields
{
public:
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___Any_2;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * ___IPv6Any_3;

public:
	inline static int32_t get_offset_of_Any_2() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___Any_2)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_Any_2() const { return ___Any_2; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_Any_2() { return &___Any_2; }
	inline void set_Any_2(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___Any_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_2), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_3() { return static_cast<int32_t>(offsetof(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_StaticFields, ___IPv6Any_3)); }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * get_IPv6Any_3() const { return ___IPv6Any_3; }
	inline IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F ** get_address_of_IPv6Any_3() { return &___IPv6Any_3; }
	inline void set_IPv6Any_3(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * value)
	{
		___IPv6Any_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_3), (void*)value);
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// uPLibrary.Networking.M2Mqtt.Hashtable
struct Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC  : public Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::topic
	String_t* ___topic_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::message
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___message_2;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::dupFlag
	bool ___dupFlag_3;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::qosLevel
	uint8_t ___qosLevel_4;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::retain
	bool ___retain_5;

public:
	inline static int32_t get_offset_of_topic_1() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC, ___topic_1)); }
	inline String_t* get_topic_1() const { return ___topic_1; }
	inline String_t** get_address_of_topic_1() { return &___topic_1; }
	inline void set_topic_1(String_t* value)
	{
		___topic_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___topic_1), (void*)value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC, ___message_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_message_2() const { return ___message_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___message_2), (void*)value);
	}

	inline static int32_t get_offset_of_dupFlag_3() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC, ___dupFlag_3)); }
	inline bool get_dupFlag_3() const { return ___dupFlag_3; }
	inline bool* get_address_of_dupFlag_3() { return &___dupFlag_3; }
	inline void set_dupFlag_3(bool value)
	{
		___dupFlag_3 = value;
	}

	inline static int32_t get_offset_of_qosLevel_4() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC, ___qosLevel_4)); }
	inline uint8_t get_qosLevel_4() const { return ___qosLevel_4; }
	inline uint8_t* get_address_of_qosLevel_4() { return &___qosLevel_4; }
	inline void set_qosLevel_4(uint8_t value)
	{
		___qosLevel_4 = value;
	}

	inline static int32_t get_offset_of_retain_5() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC, ___retain_5)); }
	inline bool get_retain_5() const { return ___retain_5; }
	inline bool* get_address_of_retain_5() { return &___retain_5; }
	inline void set_retain_5(bool value)
	{
		___retain_5 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::isPublished
	bool ___isPublished_2;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_isPublished_2() { return static_cast<int32_t>(offsetof(MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2, ___isPublished_2)); }
	inline bool get_isPublished_2() const { return ___isPublished_2; }
	inline bool* get_address_of_isPublished_2() { return &___isPublished_2; }
	inline void set_isPublished_2(bool value)
	{
		___isPublished_2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::grantedQosLevels
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___grantedQosLevels_2;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_grantedQosLevels_2() { return static_cast<int32_t>(offsetof(MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2, ___grantedQosLevels_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_grantedQosLevels_2() const { return ___grantedQosLevels_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_grantedQosLevels_2() { return &___grantedQosLevels_2; }
	inline void set_grantedQosLevels_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___grantedQosLevels_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grantedQosLevels_2), (void*)value);
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::messageId
	uint16_t ___messageId_1;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Queue
struct Queue_t5C09AE5823A7AB3CD48EE57BEE49027498A91306  : public Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Session.MqttClientSession
struct MqttClientSession_t8116A56998354FDD72F799851C209E0D90F35D88  : public MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Net.Security.SslPolicyErrors
struct SslPolicyErrors_tD39D8AA1FDBFBC6745122C5A899F10A1C9258671 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslPolicyErrors_tD39D8AA1FDBFBC6745122C5A899F10A1C9258671, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.AddressFamily
struct AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_tFA4F79FA7F299EBDF507F4811E6E5C3EEBF0850E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.ProtocolType
struct ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t20E72BC88D85E41793731DC987F8F04F312D66DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SelectMode
struct SelectMode_t384C0C7786507E841593ADDA6785DF0001C06B7B 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t384C0C7786507E841593ADDA6785DF0001C06B7B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketFlags
struct SocketFlags_t77581B58FF9A1A1D3E3270EDE83E4CAD3947F809 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t77581B58FF9A1A1D3E3270EDE83E4CAD3947F809, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Sockets.SocketType
struct SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_tCD56A18D4C7B43BF166E5C8B4B456BD646DF5775, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Security.Authentication.SslProtocols
struct SslProtocols_tDD37F8F06AD19BDAF27AEA484EC06820FE3107AE 
{
public:
	// System.Int32 System.Security.Authentication.SslProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslProtocols_tDD37F8F06AD19BDAF27AEA484EC06820FE3107AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow
struct MqttMsgFlow_t311734898D0EFDFEE15DF3ECFD140807F42245A5 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttMsgFlow_t311734898D0EFDFEE15DF3ECFD140807F42245A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState
struct MqttMsgState_t16E41B34063469D5DEADC7924E880738BA4E345F 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttMsgState_t16E41B34063469D5DEADC7924E880738BA4E345F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttProtocolVersion
struct MqttProtocolVersion_tEADA5D947601F91318BD2C570B1906093A1548E0 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttProtocolVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttProtocolVersion_tEADA5D947601F91318BD2C570B1906093A1548E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttSslProtocols
struct MqttSslProtocols_t38C54494BDEE4377F93B41C351C4EAA49325BC43 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSslProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MqttSslProtocols_t38C54494BDEE4377F93B41C351C4EAA49325BC43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel
struct TraceLevel_t9FC10666A731F2732C49D647BE48AB99F08C19B4 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Utility.TraceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceLevel_t9FC10666A731F2732C49D647BE48AB99F08C19B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Net.IPAddress
struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_5;
	// System.String System.Net.IPAddress::m_ToString
	String_t* ___m_ToString_6;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_10;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___m_Numbers_11;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_12;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_13;

public:
	inline static int32_t get_offset_of_m_Address_5() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Address_5)); }
	inline int64_t get_m_Address_5() const { return ___m_Address_5; }
	inline int64_t* get_address_of_m_Address_5() { return &___m_Address_5; }
	inline void set_m_Address_5(int64_t value)
	{
		___m_Address_5 = value;
	}

	inline static int32_t get_offset_of_m_ToString_6() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ToString_6)); }
	inline String_t* get_m_ToString_6() const { return ___m_ToString_6; }
	inline String_t** get_address_of_m_ToString_6() { return &___m_ToString_6; }
	inline void set_m_ToString_6(String_t* value)
	{
		___m_ToString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ToString_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Family_10() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Family_10)); }
	inline int32_t get_m_Family_10() const { return ___m_Family_10; }
	inline int32_t* get_address_of_m_Family_10() { return &___m_Family_10; }
	inline void set_m_Family_10(int32_t value)
	{
		___m_Family_10 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_11() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_Numbers_11)); }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* get_m_Numbers_11() const { return ___m_Numbers_11; }
	inline UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E** get_address_of_m_Numbers_11() { return &___m_Numbers_11; }
	inline void set_m_Numbers_11(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* value)
	{
		___m_Numbers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Numbers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScopeId_12() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_ScopeId_12)); }
	inline int64_t get_m_ScopeId_12() const { return ___m_ScopeId_12; }
	inline int64_t* get_address_of_m_ScopeId_12() { return &___m_ScopeId_12; }
	inline void set_m_ScopeId_12(int64_t value)
	{
		___m_ScopeId_12 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_13() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE, ___m_HashCode_13)); }
	inline int32_t get_m_HashCode_13() const { return ___m_HashCode_13; }
	inline int32_t* get_address_of_m_HashCode_13() { return &___m_HashCode_13; }
	inline void set_m_HashCode_13(int32_t value)
	{
		___m_HashCode_13 = value;
	}
};

struct IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Any_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6Loopback_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___IPv6None_9;

public:
	inline static int32_t get_offset_of_Any_0() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Any_0)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Any_0() const { return ___Any_0; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Any_0() { return &___Any_0; }
	inline void set_Any_0(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Any_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Any_0), (void*)value);
	}

	inline static int32_t get_offset_of_Loopback_1() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Loopback_1)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Loopback_1() const { return ___Loopback_1; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Loopback_1() { return &___Loopback_1; }
	inline void set_Loopback_1(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Loopback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Loopback_1), (void*)value);
	}

	inline static int32_t get_offset_of_Broadcast_2() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___Broadcast_2)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_Broadcast_2() const { return ___Broadcast_2; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_Broadcast_2() { return &___Broadcast_2; }
	inline void set_Broadcast_2(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___Broadcast_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Broadcast_2), (void*)value);
	}

	inline static int32_t get_offset_of_None_3() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___None_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_None_3() const { return ___None_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_None_3() { return &___None_3; }
	inline void set_None_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___None_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_3), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Any_7() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Any_7)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Any_7() const { return ___IPv6Any_7; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Any_7() { return &___IPv6Any_7; }
	inline void set_IPv6Any_7(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Any_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Any_7), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_8() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6Loopback_8)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6Loopback_8() const { return ___IPv6Loopback_8; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6Loopback_8() { return &___IPv6Loopback_8; }
	inline void set_IPv6Loopback_8(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6Loopback_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6Loopback_8), (void*)value);
	}

	inline static int32_t get_offset_of_IPv6None_9() { return static_cast<int32_t>(offsetof(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_StaticFields, ___IPv6None_9)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_IPv6None_9() const { return ___IPv6None_9; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_IPv6None_9() { return &___IPv6None_9; }
	inline void set_IPv6None_9(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___IPv6None_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IPv6None_9), (void*)value);
	}
};


// System.Net.Sockets.Socket
struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_Handle_13)); }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t9A33B4DCE2012075A5D6D355D323A05E7F16329A * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Handle_13), (void*)value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___seed_endpoint_14)); }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seed_endpoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___ReadSem_15)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReadSem_15), (void*)value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___WriteSem_16)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WriteSem_16), (void*)value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AcceptAsyncCallback_22), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptCallback_23), (void*)value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginAcceptReceiveCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectAsyncCallback_25), (void*)value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginConnectCallback_26), (void*)value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisconnectAsyncCallback_27), (void*)value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginDisconnectCallback_28), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveAsyncCallback_29), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveCallback_30), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveGenericCallback_31), (void*)value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReceiveFromAsyncCallback_32), (void*)value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginReceiveFromCallback_33), (void*)value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendAsyncCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_tEAEB626A6DAC959F4C365B12136A80EE9AA17547 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BeginSendGenericCallback_35), (void*)value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendToAsyncCallback_36), (void*)value);
	}
};


// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044  : public RuntimeObject
{
public:
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Message>k__BackingField
	MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * ___U3CMessageU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_2;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Timestamp>k__BackingField
	int32_t ___U3CTimestampU3Ek__BackingField_3;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Attempt>k__BackingField
	int32_t ___U3CAttemptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044, ___U3CMessageU3Ek__BackingField_0)); }
	inline MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * get_U3CMessageU3Ek__BackingField_0() const { return ___U3CMessageU3Ek__BackingField_0; }
	inline MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D ** get_address_of_U3CMessageU3Ek__BackingField_0() { return &___U3CMessageU3Ek__BackingField_0; }
	inline void set_U3CMessageU3Ek__BackingField_0(MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * value)
	{
		___U3CMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044, ___U3CStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CStateU3Ek__BackingField_1() const { return ___U3CStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_1() { return &___U3CStateU3Ek__BackingField_1; }
	inline void set_U3CStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFlowU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044, ___U3CFlowU3Ek__BackingField_2)); }
	inline int32_t get_U3CFlowU3Ek__BackingField_2() const { return ___U3CFlowU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFlowU3Ek__BackingField_2() { return &___U3CFlowU3Ek__BackingField_2; }
	inline void set_U3CFlowU3Ek__BackingField_2(int32_t value)
	{
		___U3CFlowU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044, ___U3CTimestampU3Ek__BackingField_3)); }
	inline int32_t get_U3CTimestampU3Ek__BackingField_3() const { return ___U3CTimestampU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTimestampU3Ek__BackingField_3() { return &___U3CTimestampU3Ek__BackingField_3; }
	inline void set_U3CTimestampU3Ek__BackingField_3(int32_t value)
	{
		___U3CTimestampU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044, ___U3CAttemptU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttemptU3Ek__BackingField_4() const { return ___U3CAttemptU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttemptU3Ek__BackingField_4() { return &___U3CAttemptU3Ek__BackingField_4; }
	inline void set_U3CAttemptU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttemptU3Ek__BackingField_4 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder
struct MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A  : public RuntimeObject
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::<MessageId>k__BackingField
	uint16_t ___U3CMessageIdU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A, ___U3CMessageIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CMessageIdU3Ek__BackingField_0() const { return ___U3CMessageIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CMessageIdU3Ek__BackingField_0() { return &___U3CMessageIdU3Ek__BackingField_0; }
	inline void set_U3CMessageIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CMessageIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFlowU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A, ___U3CFlowU3Ek__BackingField_1)); }
	inline int32_t get_U3CFlowU3Ek__BackingField_1() const { return ___U3CFlowU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFlowU3Ek__BackingField_1() { return &___U3CFlowU3Ek__BackingField_1; }
	inline void set_U3CFlowU3Ek__BackingField_1(int32_t value)
	{
		___U3CFlowU3Ek__BackingField_1 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B  : public RuntimeObject
{
public:
	// System.Net.Security.RemoteCertificateValidationCallback uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::userCertificateValidationCallback
	RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___userCertificateValidationCallback_0;
	// System.Net.Security.LocalCertificateSelectionCallback uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::userCertificateSelectionCallback
	LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * ___userCertificateSelectionCallback_1;
	// System.String uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteHostName
	String_t* ___remoteHostName_2;
	// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteIpAddress
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___remoteIpAddress_3;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remotePort
	int32_t ___remotePort_4;
	// System.Net.Sockets.Socket uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::socket
	Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket_5;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::secure
	bool ___secure_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::caCert
	X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___caCert_7;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::serverCert
	X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___serverCert_8;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::clientCert
	X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___clientCert_9;
	// uPLibrary.Networking.M2Mqtt.MqttSslProtocols uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::sslProtocol
	int32_t ___sslProtocol_10;

public:
	inline static int32_t get_offset_of_userCertificateValidationCallback_0() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___userCertificateValidationCallback_0)); }
	inline RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * get_userCertificateValidationCallback_0() const { return ___userCertificateValidationCallback_0; }
	inline RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E ** get_address_of_userCertificateValidationCallback_0() { return &___userCertificateValidationCallback_0; }
	inline void set_userCertificateValidationCallback_0(RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * value)
	{
		___userCertificateValidationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userCertificateValidationCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_userCertificateSelectionCallback_1() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___userCertificateSelectionCallback_1)); }
	inline LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * get_userCertificateSelectionCallback_1() const { return ___userCertificateSelectionCallback_1; }
	inline LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 ** get_address_of_userCertificateSelectionCallback_1() { return &___userCertificateSelectionCallback_1; }
	inline void set_userCertificateSelectionCallback_1(LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * value)
	{
		___userCertificateSelectionCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userCertificateSelectionCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_remoteHostName_2() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___remoteHostName_2)); }
	inline String_t* get_remoteHostName_2() const { return ___remoteHostName_2; }
	inline String_t** get_address_of_remoteHostName_2() { return &___remoteHostName_2; }
	inline void set_remoteHostName_2(String_t* value)
	{
		___remoteHostName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteHostName_2), (void*)value);
	}

	inline static int32_t get_offset_of_remoteIpAddress_3() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___remoteIpAddress_3)); }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * get_remoteIpAddress_3() const { return ___remoteIpAddress_3; }
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** get_address_of_remoteIpAddress_3() { return &___remoteIpAddress_3; }
	inline void set_remoteIpAddress_3(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		___remoteIpAddress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___remoteIpAddress_3), (void*)value);
	}

	inline static int32_t get_offset_of_remotePort_4() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___remotePort_4)); }
	inline int32_t get_remotePort_4() const { return ___remotePort_4; }
	inline int32_t* get_address_of_remotePort_4() { return &___remotePort_4; }
	inline void set_remotePort_4(int32_t value)
	{
		___remotePort_4 = value;
	}

	inline static int32_t get_offset_of_socket_5() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___socket_5)); }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * get_socket_5() const { return ___socket_5; }
	inline Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 ** get_address_of_socket_5() { return &___socket_5; }
	inline void set_socket_5(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * value)
	{
		___socket_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___socket_5), (void*)value);
	}

	inline static int32_t get_offset_of_secure_6() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___secure_6)); }
	inline bool get_secure_6() const { return ___secure_6; }
	inline bool* get_address_of_secure_6() { return &___secure_6; }
	inline void set_secure_6(bool value)
	{
		___secure_6 = value;
	}

	inline static int32_t get_offset_of_caCert_7() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___caCert_7)); }
	inline X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * get_caCert_7() const { return ___caCert_7; }
	inline X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 ** get_address_of_caCert_7() { return &___caCert_7; }
	inline void set_caCert_7(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * value)
	{
		___caCert_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caCert_7), (void*)value);
	}

	inline static int32_t get_offset_of_serverCert_8() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___serverCert_8)); }
	inline X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * get_serverCert_8() const { return ___serverCert_8; }
	inline X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 ** get_address_of_serverCert_8() { return &___serverCert_8; }
	inline void set_serverCert_8(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * value)
	{
		___serverCert_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serverCert_8), (void*)value);
	}

	inline static int32_t get_offset_of_clientCert_9() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___clientCert_9)); }
	inline X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * get_clientCert_9() const { return ___clientCert_9; }
	inline X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 ** get_address_of_clientCert_9() { return &___clientCert_9; }
	inline void set_clientCert_9(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * value)
	{
		___clientCert_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientCert_9), (void*)value);
	}

	inline static int32_t get_offset_of_sslProtocol_10() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B, ___sslProtocol_10)); }
	inline int32_t get_sslProtocol_10() const { return ___sslProtocol_10; }
	inline int32_t* get_address_of_sslProtocol_10() { return &___sslProtocol_10; }
	inline void set_sslProtocol_10(int32_t value)
	{
		___sslProtocol_10 = value;
	}
};


// uPLibrary.Networking.M2Mqtt.Utility.Trace
struct Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D  : public RuntimeObject
{
public:

public:
};

struct Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceLevel
	int32_t ___TraceLevel_0;
	// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceListener
	WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * ___TraceListener_1;

public:
	inline static int32_t get_offset_of_TraceLevel_0() { return static_cast<int32_t>(offsetof(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields, ___TraceLevel_0)); }
	inline int32_t get_TraceLevel_0() const { return ___TraceLevel_0; }
	inline int32_t* get_address_of_TraceLevel_0() { return &___TraceLevel_0; }
	inline void set_TraceLevel_0(int32_t value)
	{
		___TraceLevel_0 = value;
	}

	inline static int32_t get_offset_of_TraceListener_1() { return static_cast<int32_t>(offsetof(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields, ___TraceListener_1)); }
	inline WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * get_TraceListener_1() const { return ___TraceListener_1; }
	inline WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 ** get_address_of_TraceListener_1() { return &___TraceListener_1; }
	inline void set_TraceListener_1(WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * value)
	{
		___TraceListener_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TraceListener_1), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032  : public MulticastDelegate_t
{
public:

public:
};


// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler
struct ConnectionClosedEventHandler_tE44C1FA076D2454AE66966181D7D7B9E082D424B  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler
struct MqttMsgPublishEventHandler_tF407B453C733DE41BE72AA112CF267B54CBD4A21  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct MqttMsgPublishedEventHandler_tC17D5161F8BE229429791B476B26B0341EBC9B37  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct MqttMsgSubscribedEventHandler_t807635F97EA9E51A8E3AEFE2C6EF581B5B4F30A2  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct MqttMsgUnsubscribedEventHandler_tB58D07978856C620E7E1578CCC92BE90C190FCDB  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate
struct QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A  : public MulticastDelegate_t
{
public:

public:
};


// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * m_Items[1];

public:
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F  Queue_1_GetEnumerator_m31E90940F7146F5C1362F61866DEC7A66B550E50_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m510901A4EADBE4FC16C6F83E4C5EDF5BE41772E2_gshared (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC7C2F195F725C9D7F39E8E34538268F981B02668_gshared (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3FC5F5DDC3E6C79AE296B652B391064F4055C523_gshared (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_MessageId_mC2BD2D9BA0961A9B6B300ABB9E3717C91EBC3D0C_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_Flow_mFB7DC20FC302AB403A3505328C8C41E4753B210A_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, int32_t ___value0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * MqttMsgContext_get_Message_m22EAEF0FAA8F1B1FE1FEE075F3FE50253B38145C_inline (MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * __this, const RuntimeMethod* method);
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Type()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_Type_m25A685D97B1C77F7A8DC5E7301D387B4B497DB7D_inline (MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * __this, const RuntimeMethod* method);
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_MessageId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t MqttMsgBase_get_MessageId_m2AE6E9A41F1F3A632A72C828C0A64A2C8F3E9F39_inline (MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * __this, const RuntimeMethod* method);
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_MessageId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t MqttMsgContextFinder_get_MessageId_mA5DDED15A1663207B7B247906A943983B66E102F_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_m5437C8776D03BD242458F36637B5780E50A96FAE_inline (MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * __this, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_Flow()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContextFinder_get_Flow_m5917640AEF35925079201C74B95E7B9C7B763806_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::get_Available()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_get_Available_m40AB452DDB09090EB7FE5B1BDA99E45F2A9C7D7A (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_mBF10959279DEE369651D04A8056C019A69248F17 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket0, bool ___secure1, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___serverCert2, int32_t ___sslProtocol3, RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___userCertificateValidationCallback4, LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * ___userCertificateSelectionCallback5, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, String_t* ___remoteHostName0, int32_t ___remotePort1, bool ___secure2, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___caCert3, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___clientCert4, int32_t ___sslProtocol5, RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___userCertificateValidationCallback6, LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * ___userCertificateSelectionCallback7, const RuntimeMethod* method);
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273 (String_t* ___ipString0, const RuntimeMethod* method);
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38 (String_t* ___hostNameOrAddress0, const RuntimeMethod* method);
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline (IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Net.Sockets.AddressFamily uPLibrary.Networking.M2Mqtt.IPAddressUtility::GetAddressFamily(System.Net.IPAddress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressUtility_GetAddressFamily_mBBA96B821AB30B8D58842601C8138650B7EFC9B0 (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___ipAddress0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___addressFamily0, int32_t ___socketType1, int32_t ___protocolType2, const RuntimeMethod* method);
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845 (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * __this, IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * ___address0, int32_t ___port1, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Connect_m06F14E236617A4BA22146BEC4334E24ED39D8536 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, EndPoint_tD87FCEF2780A951E8CE8D808C345FBF2C088D980 * ___remoteEP0, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Send_mBBAB318D0BB5BF0B8FA4C9192EABCC4B179429EE (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method);
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Socket_Receive_mFC7C84096D49297C58D498DB0DF7496967FC9759 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___socketFlags3, const RuntimeMethod* method);
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Socket_Poll_mF1F23215F0C768A8F891F933221B8D3F7DA53B28 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, int32_t ___microSeconds0, int32_t ___mode1, const RuntimeMethod* method);
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_m0771EA84863FAA2A5E9D8BD4E41342951946052A (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method);
// System.Void System.Net.Sockets.Socket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09 (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings__ctor_mDCA8E16027EC42B2D34BB6DCC7F6CE5D20FF1C72 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_Port(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_Port_m16F4B8455538C50863FCA0421898213F56EF3992_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_SslPort(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_SslPort_m90734ADC3D15C5DE6A1C340AEC482DCA534FAC27_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnReceiving(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnReceiving_m76E1F63B7E9543ED94B21B60807050D62FC466BE_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_AttemptsOnRetry(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_AttemptsOnRetry_m35BF6D3234F9256C7B4DC9BB06A63C6D826A7097_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_DelayOnRetry(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_DelayOnRetry_mD09728E716DC74D18A1563A78E99A1DC3CD79211_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnConnection(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnConnection_m01950E6D40E37979D594D852F13E95D0CA113537_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_InflightQueueSize(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_InflightQueueSize_mB35A4839AB8B4AE86FAD8998C35AA03348B4A1AA_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
inline void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964 (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 *, const RuntimeMethod*))Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_mA323E67D802D31B0416BB0F5078677AB7D469BF9 (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, String_t* ___clientId0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_ClientId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mD7D8E0DB2BE9388142FE7D9841C079701604434C_inline (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mEAC039631F733EE0183DE3890B7C4AAA767771DC (Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * __this, const RuntimeMethod* method);
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_InflightMessages(uPLibrary.Networking.M2Mqtt.Hashtable)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_mFD580610256C16DC76F9B23828D44BDAC5225489_inline (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * ___value0, const RuntimeMethod* method);
// uPLibrary.Networking.M2Mqtt.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_InflightMessages()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * MqttSession_get_InflightMessages_m86EC806B9B963243924F624F7D19F99914E40B25_inline (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
inline void Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1/Enumerator<!0> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
inline Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F  Queue_1_GetEnumerator_m31E90940F7146F5C1362F61866DEC7A66B550E50 (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F  (*) (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 *, const RuntimeMethod*))Queue_1_GetEnumerator_m31E90940F7146F5C1362F61866DEC7A66B550E50_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m510901A4EADBE4FC16C6F83E4C5EDF5BE41772E2 (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F *, const RuntimeMethod*))Enumerator_get_Current_m510901A4EADBE4FC16C6F83E4C5EDF5BE41772E2_gshared)(__this, method);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_m1FA95F8D765AC800286AA6ED1521F21CDA58C086 (QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Queue`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mC7C2F195F725C9D7F39E8E34538268F981B02668 (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F *, const RuntimeMethod*))Enumerator_MoveNext_mC7C2F195F725C9D7F39E8E34538268F981B02668_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_m3FC5F5DDC3E6C79AE296B652B391064F4055C523 (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F *, const RuntimeMethod*))Enumerator_Dispose_m3FC5F5DDC3E6C79AE296B652B391064F4055C523_gshared)(__this, method);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC (WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler__ctor_mF374DD90627095F27F238EC3587D056EC7160E71 (ConnectionClosedEventHandler_tE44C1FA076D2454AE66966181D7D7B9E082D424B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler_Invoke_mD10C55D84ED4B26AD1B2A96543336BAF18923355 (ConnectionClosedEventHandler_tE44C1FA076D2454AE66966181D7D7B9E082D424B * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConnectionClosedEventHandler_BeginInvoke_mBE0753FF6F6BD41928A3C19EEE5DF49E4A1C5EA6 (ConnectionClosedEventHandler_tE44C1FA076D2454AE66966181D7D7B9E082D424B * __this, RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/ConnectionClosedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionClosedEventHandler_EndInvoke_m72B8962C793FD4677D007A71A83168B6A4792E90 (ConnectionClosedEventHandler_tE44C1FA076D2454AE66966181D7D7B9E082D424B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_MessageId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t MqttMsgContextFinder_get_MessageId_mA5DDED15A1663207B7B247906A943983B66E102F (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, const RuntimeMethod* method)
{
	{
		// internal ushort MessageId { get; set; }
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_MessageId(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_MessageId_mC2BD2D9BA0961A9B6B300ABB9E3717C91EBC3D0C (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		// internal ushort MessageId { get; set; }
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_Flow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttMsgContextFinder_get_Flow_m5917640AEF35925079201C74B95E7B9C7B763806 (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, const RuntimeMethod* method)
{
	{
		// internal MqttMsgFlow Flow { get; set; }
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_Flow_mFB7DC20FC302AB403A3505328C8C41E4753B210A (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal MqttMsgFlow Flow { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::.ctor(System.UInt16,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgContextFinder__ctor_mC0FEB267F7D16B6B8F4B8FFB61B103517799E885 (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, uint16_t ___messageId0, int32_t ___flow1, const RuntimeMethod* method)
{
	{
		// internal MqttMsgContextFinder(ushort messageId, MqttMsgFlow flow)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.MessageId = messageId;
		uint16_t L_0 = ___messageId0;
		MqttMsgContextFinder_set_MessageId_mC2BD2D9BA0961A9B6B300ABB9E3717C91EBC3D0C_inline(__this, L_0, /*hidden argument*/NULL);
		// this.Flow = flow;
		int32_t L_1 = ___flow1;
		MqttMsgContextFinder_set_Flow_mFB7DC20FC302AB403A3505328C8C41E4753B210A_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::Find(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttMsgContextFinder_Find_m7E3FE69415E2D88ABE938CBDA071219F7F43B08B (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgContextFinder_Find_m7E3FE69415E2D88ABE938CBDA071219F7F43B08B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * V_0 = NULL;
	{
		// MqttMsgContext msgCtx = (MqttMsgContext)item;
		RuntimeObject * L_0 = ___item0;
		V_0 = ((MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 *)CastclassClass((RuntimeObject*)L_0, MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044_il2cpp_TypeInfo_var));
		// return ((msgCtx.Message.Type == MqttMsgBase.MQTT_MSG_PUBLISH_TYPE) &&
		//         (msgCtx.Message.MessageId == this.MessageId) &&
		//         msgCtx.Flow == this.Flow);
		MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * L_1 = V_0;
		NullCheck(L_1);
		MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * L_2 = MqttMsgContext_get_Message_m22EAEF0FAA8F1B1FE1FEE075F3FE50253B38145C_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint8_t L_3 = MqttMsgBase_get_Type_m25A685D97B1C77F7A8DC5E7301D387B4B497DB7D_inline(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0037;
		}
	}
	{
		MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * L_4 = V_0;
		NullCheck(L_4);
		MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * L_5 = MqttMsgContext_get_Message_m22EAEF0FAA8F1B1FE1FEE075F3FE50253B38145C_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint16_t L_6 = MqttMsgBase_get_MessageId_m2AE6E9A41F1F3A632A72C828C0A64A2C8F3E9F39_inline(L_5, /*hidden argument*/NULL);
		uint16_t L_7 = MqttMsgContextFinder_get_MessageId_mA5DDED15A1663207B7B247906A943983B66E102F_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0037;
		}
	}
	{
		MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MqttMsgContext_get_Flow_m5437C8776D03BD242458F36637B5780E50A96FAE_inline(L_8, /*hidden argument*/NULL);
		int32_t L_10 = MqttMsgContextFinder_get_Flow_m5917640AEF35925079201C74B95E7B9C7B763806_inline(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
	}

IL_0037:
	{
		return (bool)0;
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler__ctor_m7F6831B910E45FB006D9A986270517B7C319FE16 (MqttMsgPublishEventHandler_tF407B453C733DE41BE72AA112CF267B54CBD4A21 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler_Invoke_m89A372139CEE6955598D8B06EEF44F4526F3BBF9 (MqttMsgPublishEventHandler_tF407B453C733DE41BE72AA112CF267B54CBD4A21 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgPublishEventHandler_BeginInvoke_m94BEB9C0C6AF1A3754F063373B18C9C6B2D9F6FC (MqttMsgPublishEventHandler_tF407B453C733DE41BE72AA112CF267B54CBD4A21 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_tFFA3CF4F4761CBFF89B669CA0136979AAF828CEC * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishEventHandler_EndInvoke_m5850A7122A1214B71F4A3573D092A4B831B7209E (MqttMsgPublishEventHandler_tF407B453C733DE41BE72AA112CF267B54CBD4A21 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler__ctor_mEC8C72BB822BF502001EA76073303A3D29BF5C65 (MqttMsgPublishedEventHandler_tC17D5161F8BE229429791B476B26B0341EBC9B37 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler_Invoke_m0634EA9A4EE10CB0DFE7821AFAF05BF8FD813E33 (MqttMsgPublishedEventHandler_tC17D5161F8BE229429791B476B26B0341EBC9B37 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgPublishedEventHandler_BeginInvoke_mDDE708702F67ABD979D622F30F059C7A19ADF5F8 (MqttMsgPublishedEventHandler_tC17D5161F8BE229429791B476B26B0341EBC9B37 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_tB71211CDFBCE5240586C420D37EF1B2DBBE99CB2 * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgPublishedEventHandler_EndInvoke_m0FF77242AB295B732BBE72872F099B52AC212A5C (MqttMsgPublishedEventHandler_tC17D5161F8BE229429791B476B26B0341EBC9B37 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler__ctor_mC0B8AA9F9C1D3C535A1F6BEC908E966A17064595 (MqttMsgSubscribedEventHandler_t807635F97EA9E51A8E3AEFE2C6EF581B5B4F30A2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler_Invoke_m5FDB46EDE1649836452665922DDEFB3AF3AE039C (MqttMsgSubscribedEventHandler_t807635F97EA9E51A8E3AEFE2C6EF581B5B4F30A2 * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgSubscribedEventHandler_BeginInvoke_mD066A9B5B827CCAE7886EDD7376740900C70307B (MqttMsgSubscribedEventHandler_t807635F97EA9E51A8E3AEFE2C6EF581B5B4F30A2 * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_tD5D3381AF5F8120D4BDDF48A283D53E1E860C2E2 * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgSubscribedEventHandler_EndInvoke_m431E240630A9EBA74ED15A3B1ACB343E91C2CBFC (MqttMsgSubscribedEventHandler_t807635F97EA9E51A8E3AEFE2C6EF581B5B4F30A2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler__ctor_mD168B89574C8C6EA1980270213C3E76D59983FB4 (MqttMsgUnsubscribedEventHandler_tB58D07978856C620E7E1578CCC92BE90C190FCDB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler_Invoke_mBFC796C5C44EA20A4C0473D7FA622D77F7DFD4D7 (MqttMsgUnsubscribedEventHandler_tB58D07978856C620E7E1578CCC92BE90C190FCDB * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * ___e1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___e1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___e1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MqttMsgUnsubscribedEventHandler_BeginInvoke_m262DAA0A159251DA2D5EAF142B170669E25A1EA9 (MqttMsgUnsubscribedEventHandler_tB58D07978856C620E7E1578CCC92BE90C190FCDB * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t847A54DEC563303B5863EF39662412F0D0CE0D0A * ___e1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttMsgUnsubscribedEventHandler_EndInvoke_m47FEB0FCD1C7CE4865CF32A1D447D8A63BFB36C9 (MqttMsgUnsubscribedEventHandler_tB58D07978856C620E7E1578CCC92BE90C190FCDB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemoteHostName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttNetworkChannel_get_RemoteHostName_mA961F66B623846FAEC223C58C0D9FAC5AF2392F6 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	{
		// public string RemoteHostName { get { return this.remoteHostName; } }
		String_t* L_0 = __this->get_remoteHostName_2();
		return L_0;
	}
}
// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemoteIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * MqttNetworkChannel_get_RemoteIpAddress_mA6F36E90B331AB1EED69C133291CE961E3D4B230 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	{
		// public IPAddress RemoteIpAddress { get { return this.remoteIpAddress; } }
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_remoteIpAddress_3();
		return L_0;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemotePort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_get_RemotePort_m432A0C0C6F54D601887D94250EB3EF449085529F (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	{
		// public int RemotePort { get { return this.remotePort; } }
		int32_t L_0 = __this->get_remotePort_4();
		return L_0;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_DataAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MqttNetworkChannel_get_DataAvailable_m88F1B598CD779D1000167C07CCAD981C852B4CC9 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	{
		// return (this.socket.Available > 0);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_5();
		NullCheck(L_0);
		int32_t L_1 = Socket_get_Available_m40AB452DDB09090EB7FE5B1BDA99E45F2A9C7D7A(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m75B5A448E3718720067DD2029E57A1B70638A078 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket0, const RuntimeMethod* method)
{
	{
		// : this(socket, false, null, MqttSslProtocols.None, null, null)
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = ___socket0;
		MqttNetworkChannel__ctor_mBF10959279DEE369651D04A8056C019A69248F17(__this, L_0, (bool)0, (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 *)NULL, 0, (RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E *)NULL, (LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_mBF10959279DEE369651D04A8056C019A69248F17 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * ___socket0, bool ___secure1, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___serverCert2, int32_t ___sslProtocol3, RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___userCertificateValidationCallback4, LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * ___userCertificateSelectionCallback5, const RuntimeMethod* method)
{
	{
		// public MqttNetworkChannel(Socket socket, bool secure, X509Certificate serverCert, MqttSslProtocols sslProtocol,
		//     RemoteCertificateValidationCallback userCertificateValidationCallback,
		//     LocalCertificateSelectionCallback userCertificateSelectionCallback)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.socket = socket;
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = ___socket0;
		__this->set_socket_5(L_0);
		// this.secure = secure;
		bool L_1 = ___secure1;
		__this->set_secure_6(L_1);
		// this.serverCert = serverCert;
		X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_2 = ___serverCert2;
		__this->set_serverCert_8(L_2);
		// this.sslProtocol = sslProtocol;
		int32_t L_3 = ___sslProtocol3;
		__this->set_sslProtocol_10(L_3);
		// this.userCertificateValidationCallback = userCertificateValidationCallback;
		RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * L_4 = ___userCertificateValidationCallback4;
		__this->set_userCertificateValidationCallback_0(L_4);
		// this.userCertificateSelectionCallback = userCertificateSelectionCallback;
		LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * L_5 = ___userCertificateSelectionCallback5;
		__this->set_userCertificateSelectionCallback_1(L_5);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_m8F5E5B9ABA82E1AEB685AF3B490A7FD57849F9AB (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, String_t* ___remoteHostName0, int32_t ___remotePort1, const RuntimeMethod* method)
{
	{
		// : this(remoteHostName, remotePort, false, null, null, MqttSslProtocols.None, null, null)
		String_t* L_0 = ___remoteHostName0;
		int32_t L_1 = ___remotePort1;
		MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B(__this, L_0, L_1, (bool)0, (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 *)NULL, (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 *)NULL, 0, (RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E *)NULL, (LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Certificate,uPLibrary.Networking.M2Mqtt.MqttSslProtocols,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, String_t* ___remoteHostName0, int32_t ___remotePort1, bool ___secure2, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___caCert3, X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___clientCert4, int32_t ___sslProtocol5, RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * ___userCertificateValidationCallback6, LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * ___userCertificateSelectionCallback7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * V_0 = NULL;
	IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// public MqttNetworkChannel(string remoteHostName, int remotePort, bool secure, X509Certificate caCert, X509Certificate clientCert, MqttSslProtocols sslProtocol,
		//     RemoteCertificateValidationCallback userCertificateValidationCallback,
		//     LocalCertificateSelectionCallback userCertificateSelectionCallback)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// IPAddress remoteIpAddress = null;
		V_0 = (IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE *)NULL;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		// remoteIpAddress = IPAddress.Parse(remoteHostName);
		String_t* L_0 = ___remoteHostName0;
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE_il2cpp_TypeInfo_var);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_1 = IPAddress_Parse_mB8537FC76C7BA7482713F289B4EC4C3ED919D273(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// }
		goto IL_0014;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0011;
		throw e;
	}

CATCH_0011:
	{ // begin catch(System.Object)
		// catch
		// }
		goto IL_0014;
	} // end catch (depth: 1)

IL_0014:
	{
		// if (remoteIpAddress == null)
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_2 = V_0;
		if (L_2)
		{
			goto IL_0052;
		}
	}
	{
		// IPHostEntry hostEntry = Dns.GetHostEntry(remoteHostName);
		String_t* L_3 = ___remoteHostName0;
		IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_4 = Dns_GetHostEntry_m50722383BDFDC19FB1589A5FC4BCBE5ACDB52D38(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if ((hostEntry != null) && (hostEntry.AddressList.Length > 0))
		IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_6 = V_1;
		NullCheck(L_6);
		IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_7 = IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		if (!(((RuntimeArray*)L_7)->max_length))
		{
			goto IL_0047;
		}
	}
	{
		// int i = 0;
		V_2 = 0;
		goto IL_0032;
	}

IL_002e:
	{
		// while (hostEntry.AddressList[i] == null) i++;
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0032:
	{
		// while (hostEntry.AddressList[i] == null) i++;
		IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_9 = V_1;
		NullCheck(L_9);
		IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_10 = IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (!L_13)
		{
			goto IL_002e;
		}
	}
	{
		// remoteIpAddress = hostEntry.AddressList[i];
		IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * L_14 = V_1;
		NullCheck(L_14);
		IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_15 = IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = L_18;
		// }
		goto IL_0052;
	}

IL_0047:
	{
		// throw new Exception("No address found for the remote host name");
		Exception_t * L_19 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_19, _stringLiteralEA6C8EB0E38B247D30FDE3757D62FCB1786647C8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, MqttNetworkChannel__ctor_mBFA3F3C5A235F66DA01BC226CBF71A1B969DF38B_RuntimeMethod_var);
	}

IL_0052:
	{
		// this.remoteHostName = remoteHostName;
		String_t* L_20 = ___remoteHostName0;
		__this->set_remoteHostName_2(L_20);
		// this.remoteIpAddress = remoteIpAddress;
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_21 = V_0;
		__this->set_remoteIpAddress_3(L_21);
		// this.remotePort = remotePort;
		int32_t L_22 = ___remotePort1;
		__this->set_remotePort_4(L_22);
		// this.secure = secure;
		bool L_23 = ___secure2;
		__this->set_secure_6(L_23);
		// this.caCert = caCert;
		X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_24 = ___caCert3;
		__this->set_caCert_7(L_24);
		// this.clientCert = clientCert;
		X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_25 = ___clientCert4;
		__this->set_clientCert_9(L_25);
		// this.sslProtocol = sslProtocol;
		int32_t L_26 = ___sslProtocol5;
		__this->set_sslProtocol_10(L_26);
		// this.userCertificateValidationCallback = userCertificateValidationCallback;
		RemoteCertificateValidationCallback_t9C6BA19681BAA3CD78E6674293A57FF5DF62831E * L_27 = ___userCertificateValidationCallback6;
		__this->set_userCertificateValidationCallback_0(L_27);
		// this.userCertificateSelectionCallback = userCertificateSelectionCallback;
		LocalCertificateSelectionCallback_tD4E096E05BCE0D4E245BC9C9160F0664C4F83032 * L_28 = ___userCertificateSelectionCallback7;
		__this->set_userCertificateSelectionCallback_1(L_28);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Connect_mF9624B1C9DB35039F9AD8B0BCB87394EF1D4A3D2 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel_Connect_mF9624B1C9DB35039F9AD8B0BCB87394EF1D4A3D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.socket = new Socket(this.remoteIpAddress.GetAddressFamily(), SocketType.Stream, ProtocolType.Tcp);
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_0 = __this->get_remoteIpAddress_3();
		int32_t L_1 = IPAddressUtility_GetAddressFamily_mBBA96B821AB30B8D58842601C8138650B7EFC9B0(L_0, /*hidden argument*/NULL);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_2 = (Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 *)il2cpp_codegen_object_new(Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8_il2cpp_TypeInfo_var);
		Socket__ctor_mE89CA86721C20DB5F3D00D3E6340A17C039A8F83(L_2, L_1, 1, 6, /*hidden argument*/NULL);
		__this->set_socket_5(L_2);
		// this.socket.Connect(new IPEndPoint(this.remoteIpAddress, this.remotePort));
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_3 = __this->get_socket_5();
		IPAddress_t77F35D21A3027F0CE7B38EA9B56BFD31B28952CE * L_4 = __this->get_remoteIpAddress_3();
		int32_t L_5 = __this->get_remotePort_4();
		IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F * L_6 = (IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F *)il2cpp_codegen_object_new(IPEndPoint_tCD29981135F7B1989C3845BF455AD44EBC13DE3F_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m1C90FD0534415E17207A0BBC05CD381335089845(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Socket_Connect_m06F14E236617A4BA22146BEC4334E24ED39D8536(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Send_m82A15738465D7E2F1A7E6123793D16D7F41DC441 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method)
{
	{
		// return this.socket.Send(buffer, 0, buffer.Length, SocketFlags.None);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___buffer0;
		NullCheck(L_2);
		NullCheck(L_0);
		int32_t L_3 = Socket_Send_mBBAB318D0BB5BF0B8FA4C9192EABCC4B179429EE(L_0, L_1, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))), 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_m0771EA84863FAA2A5E9D8BD4E41342951946052A (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int idx = 0, read = 0;
		V_0 = 0;
		// int idx = 0, read = 0;
		V_1 = 0;
		goto IL_0023;
	}

IL_0006:
	{
		// read = this.socket.Receive(buffer, idx, buffer.Length - idx, SocketFlags.None);
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_5();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___buffer0;
		int32_t L_2 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		NullCheck(L_0);
		int32_t L_5 = Socket_Receive_mFC7C84096D49297C58D498DB0DF7496967FC9759(L_0, L_1, L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), (int32_t)L_4)), 0, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (read == 0)
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_001f;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_001f:
	{
		// idx += read;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8));
	}

IL_0023:
	{
		// while (idx < buffer.Length)
		int32_t L_9 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___buffer0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_0006;
		}
	}
	{
		// return buffer.Length;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = ___buffer0;
		NullCheck(L_11);
		return (((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttNetworkChannel_Receive_m67B8394BE3C3222AF388F86888EFBFA8F8FADD3A (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buffer0, int32_t ___timeout1, const RuntimeMethod* method)
{
	{
		// if (this.socket.Poll(timeout * 1000, SelectMode.SelectRead))
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_5();
		int32_t L_1 = ___timeout1;
		NullCheck(L_0);
		bool L_2 = Socket_Poll_mF1F23215F0C768A8F891F933221B8D3F7DA53B28(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)1000))), 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return this.Receive(buffer);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___buffer0;
		int32_t L_4 = MqttNetworkChannel_Receive_m0771EA84863FAA2A5E9D8BD4E41342951946052A(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001d:
	{
		// return 0;
		return 0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Close_mF5AC7C5430716C5DBBEC1EC2B4E4FE04006E6AAA (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	{
		// this.socket.Close();
		Socket_t47148BFA7740C9C45A69F2F3722F734B9DCA45D8 * L_0 = __this->get_socket_5();
		NullCheck(L_0);
		Socket_Close_mBB794B7D2AEC0A2478540381D6CA7F6DB4913D09(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttNetworkChannel_Accept_m456187D9D0B41DF6F9E9C5AE18BFFA234EE75508 (MqttNetworkChannel_t3B3CEF7C2C9FC52C2A458651A3263C226279072B * __this, const RuntimeMethod* method)
{
	{
		// return;
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
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_Port_mF593F2C865B288F049EB361154E769A1C8B7D1FC (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int Port { get; internal set; }
		int32_t L_0 = __this->get_U3CPortU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_Port(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_Port_m16F4B8455538C50863FCA0421898213F56EF3992 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Port { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_SslPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_SslPort_m76067DF03B486DA140C9FD3CF5C95E5BB47F6E0F (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int SslPort { get; internal set; }
		int32_t L_0 = __this->get_U3CSslPortU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_SslPort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_SslPort_m90734ADC3D15C5DE6A1C340AEC482DCA534FAC27 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SslPort { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSslPortU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_TimeoutOnConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_TimeoutOnConnection_m41755FEFAEFBD75A040477D44BC85C4518A7E032 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int TimeoutOnConnection { get; internal set; }
		int32_t L_0 = __this->get_U3CTimeoutOnConnectionU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnConnection_m01950E6D40E37979D594D852F13E95D0CA113537 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TimeoutOnConnection { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnConnectionU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_TimeoutOnReceiving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_TimeoutOnReceiving_m16D77CFE93866509DBF6EFAF306BED7D829C7328 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int TimeoutOnReceiving { get; internal set; }
		int32_t L_0 = __this->get_U3CTimeoutOnReceivingU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnReceiving(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnReceiving_m76E1F63B7E9543ED94B21B60807050D62FC466BE (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TimeoutOnReceiving { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnReceivingU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_AttemptsOnRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_AttemptsOnRetry_m438BE35CA14C51F7FDB52ACCD6F888BEAD1864B1 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int AttemptsOnRetry { get; internal set; }
		int32_t L_0 = __this->get_U3CAttemptsOnRetryU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_AttemptsOnRetry(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_AttemptsOnRetry_m35BF6D3234F9256C7B4DC9BB06A63C6D826A7097 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttemptsOnRetry { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptsOnRetryU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_DelayOnRetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_DelayOnRetry_m09C040E636385CA546C34EE83A3ED79F07118F41 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int DelayOnRetry { get; internal set; }
		int32_t L_0 = __this->get_U3CDelayOnRetryU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_DelayOnRetry(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_DelayOnRetry_mD09728E716DC74D18A1563A78E99A1DC3CD79211 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int DelayOnRetry { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDelayOnRetryU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_InflightQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSettings_get_InflightQueueSize_mCC6A248831882B61239ACDFF0D101A31F6D3C1F7 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// public int InflightQueueSize { get; set; }
		int32_t L_0 = __this->get_U3CInflightQueueSizeU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_InflightQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings_set_InflightQueueSize_mB35A4839AB8B4AE86FAD8998C35AA03348B4A1AA (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int InflightQueueSize { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CInflightQueueSizeU3Ek__BackingField_13(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * MqttSettings_get_Instance_mC1D70620016DE16A0C200ED67221AAD8814549C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSettings_get_Instance_mC1D70620016DE16A0C200ED67221AAD8814549C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * L_0 = ((MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_il2cpp_TypeInfo_var))->get_instance_14();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// instance = new MqttSettings();
		MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * L_1 = (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B *)il2cpp_codegen_object_new(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_il2cpp_TypeInfo_var);
		MqttSettings__ctor_mDCA8E16027EC42B2D34BB6DCC7F6CE5D20FF1C72(L_1, /*hidden argument*/NULL);
		((MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_il2cpp_TypeInfo_var))->set_instance_14(L_1);
	}

IL_0011:
	{
		// return instance;
		MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * L_2 = ((MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B_il2cpp_TypeInfo_var))->get_instance_14();
		return L_2;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSettings__ctor_mDCA8E16027EC42B2D34BB6DCC7F6CE5D20FF1C72 (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, const RuntimeMethod* method)
{
	{
		// private MqttSettings()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Port = MQTT_BROKER_DEFAULT_PORT;
		MqttSettings_set_Port_m16F4B8455538C50863FCA0421898213F56EF3992_inline(__this, ((int32_t)1883), /*hidden argument*/NULL);
		// this.SslPort = MQTT_BROKER_DEFAULT_SSL_PORT;
		MqttSettings_set_SslPort_m90734ADC3D15C5DE6A1C340AEC482DCA534FAC27_inline(__this, ((int32_t)8883), /*hidden argument*/NULL);
		// this.TimeoutOnReceiving = MQTT_DEFAULT_TIMEOUT;
		MqttSettings_set_TimeoutOnReceiving_m76E1F63B7E9543ED94B21B60807050D62FC466BE_inline(__this, ((int32_t)30000), /*hidden argument*/NULL);
		// this.AttemptsOnRetry = MQTT_ATTEMPTS_RETRY;
		MqttSettings_set_AttemptsOnRetry_m35BF6D3234F9256C7B4DC9BB06A63C6D826A7097_inline(__this, 3, /*hidden argument*/NULL);
		// this.DelayOnRetry = MQTT_DELAY_RETRY;
		MqttSettings_set_DelayOnRetry_mD09728E716DC74D18A1563A78E99A1DC3CD79211_inline(__this, ((int32_t)10000), /*hidden argument*/NULL);
		// this.TimeoutOnConnection = MQTT_CONNECT_TIMEOUT;
		MqttSettings_set_TimeoutOnConnection_m01950E6D40E37979D594D852F13E95D0CA113537_inline(__this, ((int32_t)30000), /*hidden argument*/NULL);
		// this.InflightQueueSize = MQTT_MAX_INFLIGHT_QUEUE_SIZE;
		MqttSettings_set_InflightQueueSize_mB35A4839AB8B4AE86FAD8998C35AA03348B4A1AA_inline(__this, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		// }
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
// System.Security.Authentication.SslProtocols uPLibrary.Networking.M2Mqtt.MqttSslUtility::ToSslPlatformEnum(uPLibrary.Networking.M2Mqtt.MqttSslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MqttSslUtility_ToSslPlatformEnum_mFDEDB3A34ED8692387C1484ADF3926F22158E24B (int32_t ___mqttSslProtocol0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSslUtility_ToSslPlatformEnum_mFDEDB3A34ED8692387C1484ADF3926F22158E24B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (mqttSslProtocol)
		int32_t L_0 = ___mqttSslProtocol0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_0021;
			}
			case 3:
			{
				goto IL_0027;
			}
			case 4:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_0033;
	}

IL_001c:
	{
		// return SslProtocols.None;
		return (int32_t)(0);
	}

IL_001e:
	{
		// return SslProtocols.Ssl3;
		return (int32_t)(((int32_t)48));
	}

IL_0021:
	{
		// return SslProtocols.Tls;
		return (int32_t)(((int32_t)192));
	}

IL_0027:
	{
		// return SslProtocols.Tls11;
		return (int32_t)(((int32_t)768));
	}

IL_002d:
	{
		// return SslProtocols.Tls12;
		return (int32_t)(((int32_t)3072));
	}

IL_0033:
	{
		// throw new ArgumentException("SSL/TLS protocol version not supported");
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_1 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_1, _stringLiteral5F57DEFD51B4090CA6A76A47CCBEDD11D7001F71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, MqttSslUtility_ToSslPlatformEnum_mFDEDB3A34ED8692387C1484ADF3926F22158E24B_RuntimeMethod_var);
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
// System.Void uPLibrary.Networking.M2Mqtt.Queue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue__ctor_m85140D306407989619D09DDE7A7F18C1C4E171EA (Queue_t5C09AE5823A7AB3CD48EE57BEE49027498A91306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Queue__ctor_m85140D306407989619D09DDE7A7F18C1C4E171EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964(__this, /*hidden argument*/Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_RuntimeMethod_var);
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
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttClientSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttClientSession__ctor_m1C41077791AA3831D6F920CB8D627A3901D6BBB3 (MqttClientSession_t8116A56998354FDD72F799851C209E0D90F35D88 * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	{
		// : base(clientId)
		String_t* L_0 = ___clientId0;
		MqttSession__ctor_mA323E67D802D31B0416BB0F5078677AB7D469BF9(__this, L_0, /*hidden argument*/NULL);
		// }
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
// System.String uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_ClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MqttSession_get_ClientId_mDA5E12839D82C91B652820992FEEBFD65DE66B01 (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, const RuntimeMethod* method)
{
	{
		// public string ClientId { get; set; }
		String_t* L_0 = __this->get_U3CClientIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_ClientId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mD7D8E0DB2BE9388142FE7D9841C079701604434C (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ClientId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Hashtable uPLibrary.Networking.M2Mqtt.Session.MqttSession::get_InflightMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * MqttSession_get_InflightMessages_m86EC806B9B963243924F624F7D19F99914E40B25 (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, const RuntimeMethod* method)
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * L_0 = __this->get_U3CInflightMessagesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::set_InflightMessages(uPLibrary.Networking.M2Mqtt.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_mFD580610256C16DC76F9B23828D44BDAC5225489 (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * ___value0, const RuntimeMethod* method)
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * L_0 = ___value0;
		__this->set_U3CInflightMessagesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_mB14A4F54201DD640FF4F3B560455790ED5332C81 (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, const RuntimeMethod* method)
{
	{
		// : this(null)
		MqttSession__ctor_mA323E67D802D31B0416BB0F5078677AB7D469BF9(__this, (String_t*)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession__ctor_mA323E67D802D31B0416BB0F5078677AB7D469BF9 (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSession__ctor_mA323E67D802D31B0416BB0F5078677AB7D469BF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MqttSession(string clientId)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.ClientId = clientId;
		String_t* L_0 = ___clientId0;
		MqttSession_set_ClientId_mD7D8E0DB2BE9388142FE7D9841C079701604434C_inline(__this, L_0, /*hidden argument*/NULL);
		// this.InflightMessages = new Hashtable();
		Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * L_1 = (Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC *)il2cpp_codegen_object_new(Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC_il2cpp_TypeInfo_var);
		Hashtable__ctor_mEAC039631F733EE0183DE3890B7C4AAA767771DC(L_1, /*hidden argument*/NULL);
		MqttSession_set_InflightMessages_mFD580610256C16DC76F9B23828D44BDAC5225489_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Session.MqttSession::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MqttSession_Clear_mBF92913F8B878601A03F30254D25BF9A0368A0FA (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSession_Clear_mBF92913F8B878601A03F30254D25BF9A0368A0FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.ClientId = null;
		MqttSession_set_ClientId_mD7D8E0DB2BE9388142FE7D9841C079701604434C_inline(__this, (String_t*)NULL, /*hidden argument*/NULL);
		// this.InflightMessages.Clear();
		Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * L_0 = MqttSession_get_InflightMessages_m86EC806B9B963243924F624F7D19F99914E40B25_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4(L_0, /*hidden argument*/Dictionary_2_Clear_m1115171C74C982EA09CF1B8DB7E4C97ED6AC23D4_RuntimeMethod_var);
		// }
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
// System.Object uPLibrary.Networking.M2Mqtt.Utility.QueueExtension::Get(uPLibrary.Networking.M2Mqtt.Queue,uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * QueueExtension_Get_mE7473B4B8CF7C62A0DCCAB2409FE0D131854D49F (Queue_t5C09AE5823A7AB3CD48EE57BEE49027498A91306 * ___queue0, QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueExtension_Get_mE7473B4B8CF7C62A0DCCAB2409FE0D131854D49F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (var item in queue)
		Queue_t5C09AE5823A7AB3CD48EE57BEE49027498A91306 * L_0 = ___queue0;
		NullCheck(L_0);
		Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F  L_1 = Queue_1_GetEnumerator_m31E90940F7146F5C1362F61866DEC7A66B550E50(L_0, /*hidden argument*/Queue_1_GetEnumerator_m31E90940F7146F5C1362F61866DEC7A66B550E50_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_001e;
		}

IL_0009:
		{
			// foreach (var item in queue)
			RuntimeObject * L_2 = Enumerator_get_Current_m510901A4EADBE4FC16C6F83E4C5EDF5BE41772E2((Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F *)(&V_0), /*hidden argument*/Enumerator_get_Current_m510901A4EADBE4FC16C6F83E4C5EDF5BE41772E2_RuntimeMethod_var);
			V_1 = L_2;
			// if (predicate(item))
			QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * L_3 = ___predicate1;
			RuntimeObject * L_4 = V_1;
			NullCheck(L_3);
			bool L_5 = QueuePredicate_Invoke_m1FA95F8D765AC800286AA6ED1521F21CDA58C086(L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_001e;
			}
		}

IL_001a:
		{
			// return item;
			RuntimeObject * L_6 = V_1;
			V_2 = L_6;
			IL2CPP_LEAVE(0x39, FINALLY_0029);
		}

IL_001e:
		{
			// foreach (var item in queue)
			bool L_7 = Enumerator_MoveNext_mC7C2F195F725C9D7F39E8E34538268F981B02668((Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mC7C2F195F725C9D7F39E8E34538268F981B02668_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0009;
			}
		}

IL_0027:
		{
			IL2CPP_LEAVE(0x37, FINALLY_0029);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0029;
	}

FINALLY_0029:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3FC5F5DDC3E6C79AE296B652B391064F4055C523((Enumerator_t3ECF503DBE3CA5558BD9A1E41553A7F47FB3073F *)(&V_0), /*hidden argument*/Enumerator_Dispose_m3FC5F5DDC3E6C79AE296B652B391064F4055C523_RuntimeMethod_var);
		IL2CPP_END_FINALLY(41)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(41)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		// return null;
		return NULL;
	}

IL_0039:
	{
		// }
		RuntimeObject * L_8 = V_2;
		return L_8;
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
// System.Void uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuePredicate__ctor_mAD6CF368ACE23B9AE904D212B18DC9253CA12368 (QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_Invoke_m1FA95F8D765AC800286AA6ED1521F21CDA58C086 (QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___item0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___item0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___item0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___item0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___item0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___item0);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___item0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___item0);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___item0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___item0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___item0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueuePredicate_BeginInvoke_mA8266D2A5EBF187ED9BD775DD149D99B0795DBD2 (QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * __this, RuntimeObject * ___item0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Utility.QueueExtension/QueuePredicate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueuePredicate_EndInvoke_m1511C90EFDD105482B7DE8F98B37472D42921468 (QueuePredicate_tF0BEAA9DD249B4C833A0931984F3F67C33974C6A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_Debug_mFCC422D56B38CA079132A4A69A013616664FA1A5 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_Debug_mFCC422D56B38CA079132A4A69A013616664FA1A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TraceListener != null)
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_0 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// TraceListener(format, args);
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_1 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_2 = ___format0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args1;
		NullCheck(L_1);
		WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m5637A4F9F263FAD4768E522FAEE0101A223196F5 (int32_t ___level0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m5637A4F9F263FAD4768E522FAEE0101A223196F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_0 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// TraceListener(format);
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_3 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		NullCheck(L_3);
		WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m8680444D96D5F299CEF5753EE6A1EE267BD614C6 (int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m8680444D96D5F299CEF5753EE6A1EE267BD614C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_0 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		// TraceListener(format, arg1);
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_3 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		RuntimeObject * L_7 = ___arg12;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		NullCheck(L_3);
		WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC(L_3, L_4, L_6, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_mAE0487B2FA4DFD6E04B71B322E56CC6D15E98CEF (int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_mAE0487B2FA4DFD6E04B71B322E56CC6D15E98CEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_0 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		// TraceListener(format, arg1, arg2);
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_3 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		RuntimeObject * L_7 = ___arg12;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		RuntimeObject * L_9 = ___arg23;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		NullCheck(L_3);
		WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC(L_3, L_4, L_8, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trace_WriteLine_m66E19C2CD9529D92BAA6010523A82F8A86CC40BA (int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, RuntimeObject * ___arg23, RuntimeObject * ___arg34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m66E19C2CD9529D92BAA6010523A82F8A86CC40BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TraceListener != null && (level & TraceLevel) > 0)
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_0 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// TraceListener(format, arg1, arg2, arg3);
		WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * L_3 = ((Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t23354E02A2403F7BD3B05F3BD3EB6B3FCB00AC3D_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		RuntimeObject * L_7 = ___arg12;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_6;
		RuntimeObject * L_9 = ___arg23;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_8;
		RuntimeObject * L_11 = ___arg34;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		NullCheck(L_3);
		WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC(L_3, L_4, L_10, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
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
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace__ctor_mAD5F6DD12784369B3D7E66E939021621176A7468 (WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_Invoke_m0B9DB543CF7237CFB73D2745D4811C9B511933AC (WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___format0, ___args1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___format0, ___args1);
					else
						GenericVirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, ___format0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___format0, ___args1);
					else
						VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___format0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___args1) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___format0, ___args1);
					else
						GenericVirtActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(targetMethod, targetThis, ___format0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___format0, ___args1);
					else
						VirtActionInvoker2< String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___format0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___format0) - 1), ___args1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___format0, ___args1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::BeginInvoke(System.String,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteTrace_BeginInvoke_m80C212F600B2EF40E9DC889C149705BC932F3657 (WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___format0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteTrace_EndInvoke_mAF703BEF251023C2289EBC3818FB7AA88548153B (WriteTrace_t1B3990D491677055C59FADFA6CD49B0F4CC5BB89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_MessageId_mC2BD2D9BA0961A9B6B300ABB9E3717C91EBC3D0C_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		// internal ushort MessageId { get; set; }
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttMsgContextFinder_set_Flow_mFB7DC20FC302AB403A3505328C8C41E4753B210A_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal MqttMsgFlow Flow { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * MqttMsgContext_get_Message_m22EAEF0FAA8F1B1FE1FEE075F3FE50253B38145C_inline (MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * __this, const RuntimeMethod* method)
{
	{
		// public MqttMsgBase Message { get; set; }
		MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * L_0 = __this->get_U3CMessageU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t MqttMsgBase_get_Type_m25A685D97B1C77F7A8DC5E7301D387B4B497DB7D_inline (MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.type; }
		uint8_t L_0 = __this->get_type_50();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t MqttMsgBase_get_MessageId_m2AE6E9A41F1F3A632A72C828C0A64A2C8F3E9F39_inline (MqttMsgBase_tDC5604C3B28F02E5F339183DFA0B334AB018F98D * __this, const RuntimeMethod* method)
{
	{
		// get { return this.messageId; }
		uint16_t L_0 = __this->get_messageId_54();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint16_t MqttMsgContextFinder_get_MessageId_mA5DDED15A1663207B7B247906A943983B66E102F_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, const RuntimeMethod* method)
{
	{
		// internal ushort MessageId { get; set; }
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContext_get_Flow_m5437C8776D03BD242458F36637B5780E50A96FAE_inline (MqttMsgContext_t39A9B10ECDFE603015EE0525EAFE802C4CF85044 * __this, const RuntimeMethod* method)
{
	{
		// public MqttMsgFlow Flow { get; set; }
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MqttMsgContextFinder_get_Flow_m5917640AEF35925079201C74B95E7B9C7B763806_inline (MqttMsgContextFinder_tFC81C0FC1DCF010F295A1874E0D3786587C71F9A * __this, const RuntimeMethod* method)
{
	{
		// internal MqttMsgFlow Flow { get; set; }
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* IPHostEntry_get_AddressList_m975824502A0B08158C90378007A1E3B6AEFCBE56_inline (IPHostEntry_tB00EABDF75DB19AEAD4F3E7D93BFD7BAE558149D * __this, const RuntimeMethod* method)
{
	{
		IPAddressU5BU5D_t7F25C4C038C43BFDA8EA84969112E82BADC38BC3* L_0 = __this->get_addressList_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_Port_m16F4B8455538C50863FCA0421898213F56EF3992_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Port { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_SslPort_m90734ADC3D15C5DE6A1C340AEC482DCA534FAC27_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int SslPort { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CSslPortU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnReceiving_m76E1F63B7E9543ED94B21B60807050D62FC466BE_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TimeoutOnReceiving { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnReceivingU3Ek__BackingField_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_AttemptsOnRetry_m35BF6D3234F9256C7B4DC9BB06A63C6D826A7097_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int AttemptsOnRetry { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptsOnRetryU3Ek__BackingField_11(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_DelayOnRetry_mD09728E716DC74D18A1563A78E99A1DC3CD79211_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int DelayOnRetry { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CDelayOnRetryU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_TimeoutOnConnection_m01950E6D40E37979D594D852F13E95D0CA113537_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int TimeoutOnConnection { get; internal set; }
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnConnectionU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSettings_set_InflightQueueSize_mB35A4839AB8B4AE86FAD8998C35AA03348B4A1AA_inline (MqttSettings_tA786922385ACA5B320C542093BF5C99CD516738B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int InflightQueueSize { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CInflightQueueSizeU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_ClientId_mD7D8E0DB2BE9388142FE7D9841C079701604434C_inline (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string ClientId { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MqttSession_set_InflightMessages_mFD580610256C16DC76F9B23828D44BDAC5225489_inline (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * ___value0, const RuntimeMethod* method)
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * L_0 = ___value0;
		__this->set_U3CInflightMessagesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * MqttSession_get_InflightMessages_m86EC806B9B963243924F624F7D19F99914E40B25_inline (MqttSession_t481B44DF944828C033C64F45BF6A852C4529EC9E * __this, const RuntimeMethod* method)
{
	{
		// public Hashtable InflightMessages { get; set; }
		Hashtable_t188560B1DABA2C158DF16852DB320CB2BD9AA1DC * L_0 = __this->get_U3CInflightMessagesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
