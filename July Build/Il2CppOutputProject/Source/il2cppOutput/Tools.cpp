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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.WWWForm
struct WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24;
// Vizario.Singleton`1<System.Object>
struct Singleton_1_tB0104DBB21C8439A60DF0B10D4543073F1875553;
// Vizario.Singleton`1<Vizario.Tools.WebTools>
struct Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E;
// Vizario.Tools.SettingsManager
struct SettingsManager_t1E110E4D9356BCEEBF56851BA71D07EC3EEEAEC7;
// Vizario.Tools.WebTools
struct WebTools_t2E76F89649F658854547978E374D0326C0713781;
// Vizario.Tools.WebTools/<Upload>d__17
struct U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7;
// Vizario.Tools.WebTools/Callback
struct Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48;
// Vizario.Tools.WebTools/OutputData
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0681424974D431CFCFA699960500FF8A01D3DCCD;
IL2CPP_EXTERN_C String_t* _stringLiteral0FFF9656C11C474760CD6C2245D7F8FC9B7C5D16;
IL2CPP_EXTERN_C String_t* _stringLiteral19C80B519B481C7A1D1EC59582A5D8334625C24A;
IL2CPP_EXTERN_C String_t* _stringLiteral295EF5CE3BB5B28B1E77DA68DAF04D1B5362E748;
IL2CPP_EXTERN_C String_t* _stringLiteral379B8F197399A443EA4DA463C50EA95E2881EE84;
IL2CPP_EXTERN_C String_t* _stringLiteral397A6477BBE0049526DCC1FFC85076BF90D72CDA;
IL2CPP_EXTERN_C String_t* _stringLiteral4FDFA6B15D10938127159A9AF6AD95C09733496C;
IL2CPP_EXTERN_C String_t* _stringLiteral5346501B7613A82B995E41A0702EA50DAB6C7DB4;
IL2CPP_EXTERN_C String_t* _stringLiteral6012EC78DD6292A891EBB980F2BA2FF1D3120E00;
IL2CPP_EXTERN_C String_t* _stringLiteral61FF81C30AA3C76E78AFEA62B2E3BD1DFA49E854;
IL2CPP_EXTERN_C String_t* _stringLiteral629B379617FC329C62D8C02E53D64623463C2FF5;
IL2CPP_EXTERN_C String_t* _stringLiteral6A6D8078AC7505377EA1F4BAF4A935F7C3E59EA3;
IL2CPP_EXTERN_C String_t* _stringLiteral71CF2DBD2224AA599D3F3B66E925AF8BC9A8E2F2;
IL2CPP_EXTERN_C String_t* _stringLiteral735B5E6E69E7486D7719A7F91FF50CA22236CDFD;
IL2CPP_EXTERN_C String_t* _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255;
IL2CPP_EXTERN_C String_t* _stringLiteral81A9A12BAA40820DEEB9D07CB46D0AE0B04C7F02;
IL2CPP_EXTERN_C String_t* _stringLiteral8A628648B5A74331791E9291C61F088CD961FEF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F418EA1E2DEBAE80F2E8148355AE8032358E00;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBB54DB510A92908A5A4DF79FC1AD1EAE8DF50EC3;
IL2CPP_EXTERN_C String_t* _stringLiteralCA1445C305AFB5614E43C2CB11F5CB45F15370D7;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1890D97716BE9422B048262EB4E964D1DF6F85;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F45F1B2FA2278A3BEC4C3119147639F78B1EFF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4B1C77EBCA3C0264B588E53FBD3993B6DF6E3E0;
IL2CPP_EXTERN_C String_t* _stringLiteralE4F81994FED009C24D31EFD799E2D47A74A60F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralF6E8E4507D5217AF29CF5C7BDF16C6F0ACF1C79F;
IL2CPP_EXTERN_C String_t* _stringLiteralF870BA472454DE29F50B36D1C90460E442102EB5;
IL2CPP_EXTERN_C String_t* _stringLiteralFACB855C9CEF68CF9733F539BDE2B57586848293;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mD9A6BD3E06875F409F300B510AE201878D8227C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUploadU3Ed__17_System_Collections_IEnumerator_Reset_m553D89DBA0052E106038BAFF4F6AF3311C1185BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Callback_BeginInvoke_m49A79D94832FA247E54D02280767A93EDEB42BCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUploadU3Ed__17_MoveNext_m248058A9CC9484B039BC2E6A4C2E8F4D63CD327C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CUploadU3Ed__17_System_Collections_IEnumerator_Reset_m553D89DBA0052E106038BAFF4F6AF3311C1185BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools_Awake_m17DBDF058DA57711F457A04EF9F5CC8B43D2873B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools_GET_m60808731F637365629E36DE605405130C14ADAB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools_POSTCurlCookieAuth_m431AE4E18B533628BB074F021A1193E64A82AFC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools_POST_m07CA19CB07B896BC5DF6531E490D8E539AE43860_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools_Start_m6C71BD360671EC572CB0705E03CF73E48172F12A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools_Upload_m1503D9523C80BE0F3C0D150FA1F70E08BA611AC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebTools__ctor_m5BB5C77B6B3A39B11CF83440C9312A15FA88B719_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A;;
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke;
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke;;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDCA9F18B388733F1F06E94F96E9DBE6B9169F43F 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
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
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// UnityEngine.WWWForm
struct WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___formData_0)); }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * get_formData_0() const { return ___formData_0; }
	inline List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t4AB280456F4DE770AC993DE9A7C8C563A6311531 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___fieldNames_1)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___fileNames_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___types_3)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_types_3() const { return ___types_3; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___boundary_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// Vizario.Tools.WebTools/<Upload>d__17
struct U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7  : public RuntimeObject
{
public:
	// System.Int32 Vizario.Tools.WebTools/<Upload>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vizario.Tools.WebTools/<Upload>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest Vizario.Tools.WebTools/<Upload>d__17::www
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www_2;
	// Vizario.Tools.WebTools Vizario.Tools.WebTools/<Upload>d__17::<>4__this
	WebTools_t2E76F89649F658854547978E374D0326C0713781 * ___U3CU3E4__this_3;
	// Vizario.Tools.WebTools/Callback Vizario.Tools.WebTools/<Upload>d__17::ResultCallbackFunc
	Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * ___ResultCallbackFunc_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7, ___www_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_www_2() const { return ___www_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___www_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7, ___U3CU3E4__this_3)); }
	inline WebTools_t2E76F89649F658854547978E374D0326C0713781 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WebTools_t2E76F89649F658854547978E374D0326C0713781 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WebTools_t2E76F89649F658854547978E374D0326C0713781 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_ResultCallbackFunc_4() { return static_cast<int32_t>(offsetof(U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7, ___ResultCallbackFunc_4)); }
	inline Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * get_ResultCallbackFunc_4() const { return ___ResultCallbackFunc_4; }
	inline Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 ** get_address_of_ResultCallbackFunc_4() { return &___ResultCallbackFunc_4; }
	inline void set_ResultCallbackFunc_4(Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * value)
	{
		___ResultCallbackFunc_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResultCallbackFunc_4), (void*)value);
	}
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
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


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// Vizario.Tools.WebTools/OutputData
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A 
{
public:
	// System.String Vizario.Tools.WebTools/OutputData::result
	String_t* ___result_0;
	// System.Boolean Vizario.Tools.WebTools/OutputData::error
	bool ___error_1;
	// System.Int64 Vizario.Tools.WebTools/OutputData::response_code
	int64_t ___response_code_2;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A, ___result_0)); }
	inline String_t* get_result_0() const { return ___result_0; }
	inline String_t** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(String_t* value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A, ___error_1)); }
	inline bool get_error_1() const { return ___error_1; }
	inline bool* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(bool value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_response_code_2() { return static_cast<int32_t>(offsetof(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A, ___response_code_2)); }
	inline int64_t get_response_code_2() const { return ___response_code_2; }
	inline int64_t* get_address_of_response_code_2() { return &___response_code_2; }
	inline void set_response_code_2(int64_t value)
	{
		___response_code_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Vizario.Tools.WebTools/OutputData
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke
{
	char* ___result_0;
	int32_t ___error_1;
	int64_t ___response_code_2;
};
// Native definition for COM marshalling of Vizario.Tools.WebTools/OutputData
struct OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_com
{
	Il2CppChar* ___result_0;
	int32_t ___error_1;
	int64_t ___response_code_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___dictionary_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___current_3)); }
	inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
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

// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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

// System.SystemException
struct SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_11;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_12;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_13;
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Vizario.Tools.WebTools/Callback
struct Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Vizario.Singleton`1<Vizario.Tools.WebTools>
struct Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E_StaticFields
{
public:
	// T Vizario.Singleton`1::_instance
	WebTools_t2E76F89649F658854547978E374D0326C0713781 * ____instance_4;
	// System.Object Vizario.Singleton`1::_lock
	RuntimeObject * ____lock_5;
	// System.Boolean Vizario.Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_6;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E_StaticFields, ____instance_4)); }
	inline WebTools_t2E76F89649F658854547978E374D0326C0713781 * get__instance_4() const { return ____instance_4; }
	inline WebTools_t2E76F89649F658854547978E374D0326C0713781 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(WebTools_t2E76F89649F658854547978E374D0326C0713781 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}

	inline static int32_t get_offset_of__lock_5() { return static_cast<int32_t>(offsetof(Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E_StaticFields, ____lock_5)); }
	inline RuntimeObject * get__lock_5() const { return ____lock_5; }
	inline RuntimeObject ** get_address_of__lock_5() { return &____lock_5; }
	inline void set__lock_5(RuntimeObject * value)
	{
		____lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_6() { return static_cast<int32_t>(offsetof(Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E_StaticFields, ___applicationIsQuitting_6)); }
	inline bool get_applicationIsQuitting_6() const { return ___applicationIsQuitting_6; }
	inline bool* get_address_of_applicationIsQuitting_6() { return &___applicationIsQuitting_6; }
	inline void set_applicationIsQuitting_6(bool value)
	{
		___applicationIsQuitting_6 = value;
	}
};


// Vizario.Tools.SettingsManager
struct SettingsManager_t1E110E4D9356BCEEBF56851BA71D07EC3EEEAEC7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Vizario.Tools.WebTools
struct WebTools_t2E76F89649F658854547978E374D0326C0713781  : public Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E
{
public:
	// System.Boolean Vizario.Tools.WebTools::debug
	bool ___debug_7;
	// System.String Vizario.Tools.WebTools::persistent_path
	String_t* ___persistent_path_8;
	// System.String Vizario.Tools.WebTools::streaming_assets_path
	String_t* ___streaming_assets_path_9;
	// System.String Vizario.Tools.WebTools::curl_cert
	String_t* ___curl_cert_10;
	// System.String Vizario.Tools.WebTools::curl_cert_fn
	String_t* ___curl_cert_fn_11;

public:
	inline static int32_t get_offset_of_debug_7() { return static_cast<int32_t>(offsetof(WebTools_t2E76F89649F658854547978E374D0326C0713781, ___debug_7)); }
	inline bool get_debug_7() const { return ___debug_7; }
	inline bool* get_address_of_debug_7() { return &___debug_7; }
	inline void set_debug_7(bool value)
	{
		___debug_7 = value;
	}

	inline static int32_t get_offset_of_persistent_path_8() { return static_cast<int32_t>(offsetof(WebTools_t2E76F89649F658854547978E374D0326C0713781, ___persistent_path_8)); }
	inline String_t* get_persistent_path_8() const { return ___persistent_path_8; }
	inline String_t** get_address_of_persistent_path_8() { return &___persistent_path_8; }
	inline void set_persistent_path_8(String_t* value)
	{
		___persistent_path_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___persistent_path_8), (void*)value);
	}

	inline static int32_t get_offset_of_streaming_assets_path_9() { return static_cast<int32_t>(offsetof(WebTools_t2E76F89649F658854547978E374D0326C0713781, ___streaming_assets_path_9)); }
	inline String_t* get_streaming_assets_path_9() const { return ___streaming_assets_path_9; }
	inline String_t** get_address_of_streaming_assets_path_9() { return &___streaming_assets_path_9; }
	inline void set_streaming_assets_path_9(String_t* value)
	{
		___streaming_assets_path_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streaming_assets_path_9), (void*)value);
	}

	inline static int32_t get_offset_of_curl_cert_10() { return static_cast<int32_t>(offsetof(WebTools_t2E76F89649F658854547978E374D0326C0713781, ___curl_cert_10)); }
	inline String_t* get_curl_cert_10() const { return ___curl_cert_10; }
	inline String_t** get_address_of_curl_cert_10() { return &___curl_cert_10; }
	inline void set_curl_cert_10(String_t* value)
	{
		___curl_cert_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curl_cert_10), (void*)value);
	}

	inline static int32_t get_offset_of_curl_cert_fn_11() { return static_cast<int32_t>(offsetof(WebTools_t2E76F89649F658854547978E374D0326C0713781, ___curl_cert_fn_11)); }
	inline String_t* get_curl_cert_fn_11() const { return ___curl_cert_fn_11; }
	inline String_t** get_address_of_curl_cert_fn_11() { return &___curl_cert_fn_11; }
	inline void set_curl_cert_fn_11(String_t* value)
	{
		___curl_cert_fn_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curl_cert_fn_11), (void*)value);
	}
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

IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke(const OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A& unmarshaled, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke_back(const OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke& marshaled, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A& unmarshaled);
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke_cleanup(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void Vizario.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mAC619DC43AF6865F32A4E77F04322A64E81D5647_gshared (Singleton_1_tB0104DBB21C8439A60DF0B10D4543073F1875553 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void Vizario.Tools.WebTools::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* ___uri0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m1B54D38BDACC2789FC8EE889EA72EDD7844D2309 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator Vizario.Tools.WebTools::Upload(UnityEngine.Networking.UnityWebRequest,Vizario.Tools.WebTools/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebTools_Upload_m1503D9523C80BE0F3C0D150FA1F70E08BA611AC9 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * ___ResultCallbackFunc1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695 (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8 (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Put_mF4F986692AF2279DDEDD8866E9611E2BA7D6A209 (String_t* ___uri0, String_t* ___bodyData1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Vizario.Tools.WebTools::mainwrapped(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebTools_mainwrapped_m4B845AA2375A2813DB902C376DD3B62BB570F36C (StringBuilder_t * ___argv0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Vizario.Utils.Helper::ReadFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * Helper_ReadFile_m34596D6DCB2CF840784D96D59DEC41966E2FB367 (String_t* ___filename0, const RuntimeMethod* method);
// System.Void Vizario.Tools.WebTools/<Upload>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadU3Ed__17__ctor_m2D611C6813D36AF7710973C40E78D78A241C74A9 (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Vizario.Singleton`1<Vizario.Tools.WebTools>::.ctor()
inline void Singleton_1__ctor_mD9A6BD3E06875F409F300B510AE201878D8227C0 (Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E *, const RuntimeMethod*))Singleton_1__ctor_mAC619DC43AF6865F32A4E77F04322A64E81D5647_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Networking.UnityWebRequest::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * UnityWebRequest_Send_mE2BC0213F05A8E6E8384AB4BB8BA75883BDD801F (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.Networking.UnityWebRequest::GetResponseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UnityWebRequest_GetResponseHeaders_mFA5C7C10F2BA83F21826611AF204BC56E881A863 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_inline (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_method_m0F039F28DD8309D25824D732CE7FF7394E195855 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void Vizario.Tools.WebTools/Callback::Invoke(Vizario.Tools.WebTools/OutputData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_m1BD43ADF4712823EE70473DEF079F960FCB26BFE (Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * __this, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  ___a0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
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
// System.Void Vizario.Tools.SettingsManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsManager__ctor_m449E488965C3772E8A8A77E9C92F35CDBA11DDFF (SettingsManager_t1E110E4D9356BCEEBF56851BA71D07EC3EEEAEC7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL mainwrapped(char*);
#endif
// System.Int32 Vizario.Tools.WebTools::mainwrapped(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebTools_mainwrapped_m4B845AA2375A2813DB902C376DD3B62BB570F36C (StringBuilder_t * ___argv0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("libcurlwrapper"), "mainwrapped", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argv0' to native representation
	char* ____argv0_marshaled = NULL;
	____argv0_marshaled = il2cpp_codegen_marshal_string_builder(___argv0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(mainwrapped)(____argv0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____argv0_marshaled);
	#endif

	// Marshaling of parameter '___argv0' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___argv0, ____argv0_marshaled);

	// Marshaling cleanup of parameter '___argv0' native representation
	il2cpp_codegen_marshal_free(____argv0_marshaled);
	____argv0_marshaled = NULL;

	return returnValue;
}
// System.Void Vizario.Tools.WebTools::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_Awake_m17DBDF058DA57711F457A04EF9F5CC8B43D2873B (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools_Awake_m17DBDF058DA57711F457A04EF9F5CC8B43D2873B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		__this->set_persistent_path_8(L_0);
		String_t* L_1 = Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F(/*hidden argument*/NULL);
		__this->set_streaming_assets_path_9(L_1);
		String_t* L_2 = __this->get_streaming_assets_path_9();
		String_t* L_3 = __this->get_curl_cert_10();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_3, /*hidden argument*/NULL);
		__this->set_curl_cert_fn_11(L_4);
		return;
	}
}
// System.Void Vizario.Tools.WebTools::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_Start_m6C71BD360671EC572CB0705E03CF73E48172F12A (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools_Start_m6C71BD360671EC572CB0705E03CF73E48172F12A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(__this, _stringLiteral735B5E6E69E7486D7719A7F91FF50CA22236CDFD, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vizario.Tools.WebTools::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_Update_m4D3EB401E39966EB5C3273F584DFA46D362D831B (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Vizario.Tools.WebTools::GET(System.String,System.Boolean,System.String,System.Boolean,Vizario.Tools.WebTools/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_GET_m60808731F637365629E36DE605405130C14ADAB7 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, String_t* ___url0, bool ___use_oauth21, String_t* ___oauth2_cookie2, bool ___is_json3, Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * ___ResultCallbackFunc4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools_GET_m60808731F637365629E36DE605405130C14ADAB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	{
		bool L_0 = __this->get_debug_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___url0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4FDFA6B15D10938127159A9AF6AD95C09733496C, L_1, /*hidden argument*/NULL);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(__this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		String_t* L_3 = ___url0;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___use_oauth21;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = V_0;
		String_t* L_7 = ___oauth2_cookie2;
		NullCheck(L_6);
		UnityWebRequest_SetRequestHeader_m1B54D38BDACC2789FC8EE889EA72EDD7844D2309(L_6, _stringLiteralE4F81994FED009C24D31EFD799E2D47A74A60F1F, L_7, /*hidden argument*/NULL);
	}

IL_002f:
	{
		bool L_8 = ___is_json3;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_9 = V_0;
		NullCheck(L_9);
		UnityWebRequest_SetRequestHeader_m1B54D38BDACC2789FC8EE889EA72EDD7844D2309(L_9, _stringLiteralBB54DB510A92908A5A4DF79FC1AD1EAE8DF50EC3, _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C, /*hidden argument*/NULL);
	}

IL_0043:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = V_0;
		Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * L_11 = ___ResultCallbackFunc4;
		RuntimeObject* L_12 = WebTools_Upload_m1503D9523C80BE0F3C0D150FA1F70E08BA611AC9(__this, L_10, L_11, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vizario.Tools.WebTools::SetCurlCertFn(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_SetCurlCertFn_m4B09C0199C2D1ADB54931897F1369B7A500C7783 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		__this->set_curl_cert_fn_11(L_0);
		return;
	}
}
// System.String Vizario.Tools.WebTools::GetCurlCertFn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebTools_GetCurlCertFn_m183E36E343E9932485BF08D5B474ADFECD4DF60E (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_curl_cert_fn_11();
		return L_0;
	}
}
// System.Void Vizario.Tools.WebTools::POST(System.String,System.String,System.Boolean,System.String,System.Boolean,Vizario.Tools.WebTools/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_POST_m07CA19CB07B896BC5DF6531E490D8E539AE43860 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, String_t* ___url0, String_t* ___data1, bool ___use_oauth22, String_t* ___oauth2_cookie3, bool ___is_json4, Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * ___ResultCallbackFunc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools_POST_m07CA19CB07B896BC5DF6531E490D8E539AE43860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	{
		bool L_0 = __this->get_debug_7();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___url0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral295EF5CE3BB5B28B1E77DA68DAF04D1B5362E748, L_1, /*hidden argument*/NULL);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(__this, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 * L_3 = (WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24 *)il2cpp_codegen_object_new(WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_il2cpp_TypeInfo_var);
		WWWForm__ctor_m51016B707A3BDC515538D44EB08D54402CF6F695(L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___data1;
		NullCheck(L_3);
		WWWForm_AddField_m738A7671465A8AF5A85FC7D1164791AA2E874CC8(L_3, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD, L_4, /*hidden argument*/NULL);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_5 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_5, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		String_t* L_6 = ___data1;
		NullCheck(L_5);
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_5, _stringLiteralA17C9AAA61E80A1BF71D0D850AF4E5BAA9800BBD, L_6, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		String_t* L_7 = ___url0;
		String_t* L_8 = ___data1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_9 = UnityWebRequest_Put_mF4F986692AF2279DDEDD8866E9611E2BA7D6A209(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = V_0;
		NullCheck(L_10);
		UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6(L_10, _stringLiteral61FF81C30AA3C76E78AFEA62B2E3BD1DFA49E854, /*hidden argument*/NULL);
		bool L_11 = ___use_oauth22;
		if (!L_11)
		{
			goto IL_005c;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_12 = V_0;
		String_t* L_13 = ___oauth2_cookie3;
		NullCheck(L_12);
		UnityWebRequest_SetRequestHeader_m1B54D38BDACC2789FC8EE889EA72EDD7844D2309(L_12, _stringLiteralE4F81994FED009C24D31EFD799E2D47A74A60F1F, L_13, /*hidden argument*/NULL);
	}

IL_005c:
	{
		bool L_14 = ___is_json4;
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_15 = V_0;
		NullCheck(L_15);
		UnityWebRequest_SetRequestHeader_m1B54D38BDACC2789FC8EE889EA72EDD7844D2309(L_15, _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255, _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = V_0;
		NullCheck(L_16);
		UnityWebRequest_SetRequestHeader_m1B54D38BDACC2789FC8EE889EA72EDD7844D2309(L_16, _stringLiteralBB54DB510A92908A5A4DF79FC1AD1EAE8DF50EC3, _stringLiteralFACB855C9CEF68CF9733F539BDE2B57586848293, /*hidden argument*/NULL);
	}

IL_0080:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_17 = V_0;
		Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * L_18 = ___ResultCallbackFunc5;
		RuntimeObject* L_19 = WebTools_Upload_m1503D9523C80BE0F3C0D150FA1F70E08BA611AC9(__this, L_17, L_18, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vizario.Tools.WebTools::POSTCurlCookieAuth(System.String,System.String,System.Boolean,System.Boolean,System.Collections.Generic.List`1<System.String>&,System.Collections.Generic.List`1<System.String>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_POSTCurlCookieAuth_m431AE4E18B533628BB074F021A1193E64A82AFC7 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, String_t* ___url0, String_t* ___data1, bool ___use_oauth22, bool ___is_json3, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** ___cookie_content_lines4, List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** ___response_content_lines5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools_POSTCurlCookieAuth_m431AE4E18B533628BB074F021A1193E64A82AFC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** L_0 = ___cookie_content_lines4;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_1 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_1, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_1);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** L_2 = ___response_content_lines5;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_3, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_3);
		bool L_4 = __this->get_debug_7();
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___url0;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral397A6477BBE0049526DCC1FFC85076BF90D72CDA, L_5, /*hidden argument*/NULL);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(__this, L_6, /*hidden argument*/NULL);
	}

IL_0029:
	{
		String_t* L_7 = ___data1;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(__this, _stringLiteralCA1445C305AFB5614E43C2CB11F5CB45F15370D7, /*hidden argument*/NULL);
	}

IL_003c:
	{
		String_t* L_9 = __this->get_persistent_path_8();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_10 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_9, _stringLiteral6012EC78DD6292A891EBB980F2BA2FF1D3120E00, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = __this->get_persistent_path_8();
		String_t* L_12 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_11, _stringLiteralF870BA472454DE29F50B36D1C90460E442102EB5, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralE4B1C77EBCA3C0264B588E53FBD3993B6DF6E3E0, /*hidden argument*/NULL);
		String_t* L_14 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_13, _stringLiteralD8F45F1B2FA2278A3BEC4C3119147639F78B1EFF, /*hidden argument*/NULL);
		String_t* L_15 = V_0;
		String_t* L_16 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_14, _stringLiteral19C80B519B481C7A1D1EC59582A5D8334625C24A, L_15, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		String_t* L_17 = ___data1;
		String_t* L_18 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_16, _stringLiteralB3F418EA1E2DEBAE80F2E8148355AE8032358E00, L_17, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		String_t* L_19 = ___url0;
		String_t* L_20 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_18, L_19, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		String_t* L_21 = __this->get_curl_cert_fn_11();
		String_t* L_22 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_20, _stringLiteral629B379617FC329C62D8C02E53D64623463C2FF5, L_21, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		String_t* L_23 = V_1;
		String_t* L_24 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_22, _stringLiteralCC1890D97716BE9422B048262EB4E964D1DF6F85, L_23, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3(L_25, L_24, /*hidden argument*/NULL);
		int32_t L_26 = WebTools_mainwrapped_m4B845AA2375A2813DB902C376DD3B62BB570F36C(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0681424974D431CFCFA699960500FF8A01D3DCCD, L_29, /*hidden argument*/NULL);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(__this, L_30, /*hidden argument*/NULL);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** L_31 = ___response_content_lines5;
		String_t* L_32 = V_0;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_33 = Helper_ReadFile_m34596D6DCB2CF840784D96D59DEC41966E2FB367(L_32, /*hidden argument*/NULL);
		*((RuntimeObject **)L_31) = (RuntimeObject *)L_33;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_31, (void*)(RuntimeObject *)L_33);
		int32_t L_34 = V_2;
		if (L_34)
		{
			goto IL_00f8;
		}
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** L_35 = ___cookie_content_lines4;
		String_t* L_36 = V_1;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_37 = Helper_ReadFile_m34596D6DCB2CF840784D96D59DEC41966E2FB367(L_36, /*hidden argument*/NULL);
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_37;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_37);
	}

IL_00f8:
	{
		return;
	}
}
// System.Void Vizario.Tools.WebTools::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Collections.IEnumerator Vizario.Tools.WebTools::Upload(UnityEngine.Networking.UnityWebRequest,Vizario.Tools.WebTools/Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebTools_Upload_m1503D9523C80BE0F3C0D150FA1F70E08BA611AC9 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * ___ResultCallbackFunc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools_Upload_m1503D9523C80BE0F3C0D150FA1F70E08BA611AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * L_0 = (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 *)il2cpp_codegen_object_new(U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7_il2cpp_TypeInfo_var);
		U3CUploadU3Ed__17__ctor_m2D611C6813D36AF7710973C40E78D78A241C74A9(L_0, 0, /*hidden argument*/NULL);
		U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * L_2 = L_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_3 = ___www0;
		NullCheck(L_2);
		L_2->set_www_2(L_3);
		U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * L_4 = L_2;
		Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * L_5 = ___ResultCallbackFunc1;
		NullCheck(L_4);
		L_4->set_ResultCallbackFunc_4(L_5);
		return L_4;
	}
}
// System.Void Vizario.Tools.WebTools::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebTools__ctor_m5BB5C77B6B3A39B11CF83440C9312A15FA88B719 (WebTools_t2E76F89649F658854547978E374D0326C0713781 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebTools__ctor_m5BB5C77B6B3A39B11CF83440C9312A15FA88B719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_debug_7((bool)1);
		__this->set_curl_cert_10(_stringLiteral5346501B7613A82B995E41A0702EA50DAB6C7DB4);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tDB58AC9111753D9FFBA8C44418E56BB76761084E_il2cpp_TypeInfo_var);
		Singleton_1__ctor_mD9A6BD3E06875F409F300B510AE201878D8227C0(__this, /*hidden argument*/Singleton_1__ctor_mD9A6BD3E06875F409F300B510AE201878D8227C0_RuntimeMethod_var);
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
// System.Void Vizario.Tools.WebTools/<Upload>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadU3Ed__17__ctor_m2D611C6813D36AF7710973C40E78D78A241C74A9 (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Vizario.Tools.WebTools/<Upload>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadU3Ed__17_System_IDisposable_Dispose_mB6B21B8BB9E47FF10E237CE280BBC4FDBE4F9A65 (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Vizario.Tools.WebTools/<Upload>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUploadU3Ed__17_MoveNext_m248058A9CC9484B039BC2E6A4C2E8F4D63CD327C (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadU3Ed__17_MoveNext_m248058A9CC9484B039BC2E6A4C2E8F4D63CD327C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebTools_t2E76F89649F658854547978E374D0326C0713781 * V_1 = NULL;
	OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = __this->get_www_2();
		NullCheck(L_4);
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_5 = UnityWebRequest_Send_mE2BC0213F05A8E6E8384AB4BB8BA75883BDD801F(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		il2cpp_codegen_initobj((&V_2), sizeof(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A ));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_6 = __this->get_www_2();
		NullCheck(L_6);
		bool L_7 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c1;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_8 = __this->get_www_2();
		NullCheck(L_8);
		bool L_9 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		String_t* L_10 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_3), /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_11 = __this->get_www_2();
		NullCheck(L_11);
		String_t* L_12 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral379B8F197399A443EA4DA463C50EA95E2881EE84, L_10, _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_13, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_14 = __this->get_www_2();
		NullCheck(L_14);
		String_t* L_15 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_14, /*hidden argument*/NULL);
		(&V_2)->set_result_0(L_15);
		(&V_2)->set_error_1((bool)1);
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = L_16->get_debug_7();
		if (!L_17)
		{
			goto IL_01b0;
		}
	}
	{
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_18 = V_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_19 = __this->get_www_2();
		NullCheck(L_19);
		String_t* L_20 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_18, L_20, /*hidden argument*/NULL);
		goto IL_01b0;
	}

IL_00c1:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_21 = __this->get_www_2();
		NullCheck(L_21);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_22 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_22, /*hidden argument*/NULL);
		(&V_2)->set_result_0(L_23);
		(&V_2)->set_error_1((bool)0);
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = L_24->get_debug_7();
		if (!L_25)
		{
			goto IL_01b0;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_26 = __this->get_www_2();
		NullCheck(L_26);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_27 = UnityWebRequest_GetResponseHeaders_mFA5C7C10F2BA83F21826611AF204BC56E881A863(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  L_28 = Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5(L_27, /*hidden argument*/Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var);
		V_4 = L_28;
	}

IL_00fd:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0126;
		}

IL_00ff:
		{
			KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  L_29 = Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_inline((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var);
			V_5 = L_29;
			WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_30 = V_1;
			String_t* L_31 = KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var);
			String_t* L_32 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			String_t* L_33 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_31, _stringLiteralF6E8E4507D5217AF29CF5C7BDF16C6F0ACF1C79F, L_32, /*hidden argument*/NULL);
			NullCheck(L_30);
			WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_30, L_33, /*hidden argument*/NULL);
		}

IL_0126:
		{
			bool L_34 = Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_00ff;
			}
		}

IL_012f:
		{
			IL2CPP_LEAVE(0x13F, FINALLY_0131);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0131;
	}

FINALLY_0131:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var);
		IL2CPP_END_FINALLY(305)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(305)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13F, IL_013f)
	}

IL_013f:
	{
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_35 = V_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_36 = __this->get_www_2();
		NullCheck(L_36);
		String_t* L_37 = UnityWebRequest_get_method_m0F039F28DD8309D25824D732CE7FF7394E195855(L_36, /*hidden argument*/NULL);
		String_t* L_38 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral81A9A12BAA40820DEEB9D07CB46D0AE0B04C7F02, L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_35, L_38, /*hidden argument*/NULL);
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_39 = V_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_40 = __this->get_www_2();
		NullCheck(L_40);
		int64_t L_41 = UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070(L_40, /*hidden argument*/NULL);
		int64_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_42);
		String_t* L_44 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral0FFF9656C11C474760CD6C2245D7F8FC9B7C5D16, L_43, /*hidden argument*/NULL);
		NullCheck(L_39);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_39, L_44, /*hidden argument*/NULL);
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_45 = V_1;
		NullCheck(L_45);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_45, _stringLiteral6A6D8078AC7505377EA1F4BAF4A935F7C3E59EA3, /*hidden argument*/NULL);
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_46 = V_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_47 = __this->get_www_2();
		NullCheck(L_47);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_48 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		String_t* L_49 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_48, /*hidden argument*/NULL);
		String_t* L_50 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral71CF2DBD2224AA599D3F3B66E925AF8BC9A8E2F2, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_46, L_50, /*hidden argument*/NULL);
		WebTools_t2E76F89649F658854547978E374D0326C0713781 * L_51 = V_1;
		NullCheck(L_51);
		WebTools_Log_m65439CC2704743C8709A0263ED774CFEC1C61186(L_51, _stringLiteral8A628648B5A74331791E9291C61F088CD961FEF8, /*hidden argument*/NULL);
	}

IL_01b0:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_52 = __this->get_www_2();
		NullCheck(L_52);
		int64_t L_53 = UnityWebRequest_get_responseCode_m34819872549939D1EF9EA3D4010974FBEBAF0070(L_52, /*hidden argument*/NULL);
		(&V_2)->set_response_code_2(L_53);
		Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * L_54 = __this->get_ResultCallbackFunc_4();
		OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  L_55 = V_2;
		NullCheck(L_54);
		Callback_Invoke_m1BD43ADF4712823EE70473DEF079F960FCB26BFE(L_54, L_55, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object Vizario.Tools.WebTools/<Upload>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUploadU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m82FFD48F3899DAE467D84EA5BE1F0A4925DACC33 (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Vizario.Tools.WebTools/<Upload>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadU3Ed__17_System_Collections_IEnumerator_Reset_m553D89DBA0052E106038BAFF4F6AF3311C1185BD (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUploadU3Ed__17_System_Collections_IEnumerator_Reset_m553D89DBA0052E106038BAFF4F6AF3311C1185BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CUploadU3Ed__17_System_Collections_IEnumerator_Reset_m553D89DBA0052E106038BAFF4F6AF3311C1185BD_RuntimeMethod_var);
	}
}
// System.Object Vizario.Tools.WebTools/<Upload>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUploadU3Ed__17_System_Collections_IEnumerator_get_Current_m10BE0A6B3CCF7CD3452E483F6D7FB6287D0D5653 (U3CUploadU3Ed__17_t3F2215460DA37683101A71433B6A59F6FE4195C7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 (Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * __this, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  ___a0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___a0' to native representation
	OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke ____a0_marshaled = {};
	OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke(___a0, ____a0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____a0_marshaled);

	// Marshaling cleanup of parameter '___a0' native representation
	OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke_cleanup(____a0_marshaled);

}
// System.Void Vizario.Tools.WebTools/Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_m9745534A7A10EE6031E0E9BC0552A50E8E17F030 (Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Vizario.Tools.WebTools/Callback::Invoke(Vizario.Tools.WebTools/OutputData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_m1BD43ADF4712823EE70473DEF079F960FCB26BFE (Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * __this, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  ___a0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___a0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___a0, targetMethod);
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
						GenericInterfaceActionInvoker1< OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  >::Invoke(targetMethod, targetThis, ___a0);
					else
						GenericVirtActionInvoker1< OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  >::Invoke(targetMethod, targetThis, ___a0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___a0);
					else
						VirtActionInvoker1< OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___a0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___a0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___a0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___a0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Vizario.Tools.WebTools/Callback::BeginInvoke(Vizario.Tools.WebTools/OutputData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m49A79D94832FA247E54D02280767A93EDEB42BCA (Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * __this, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A  ___a0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Callback_BeginInvoke_m49A79D94832FA247E54D02280767A93EDEB42BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_il2cpp_TypeInfo_var, &___a0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Vizario.Tools.WebTools/Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_mE931FCB044BF4BE8B1F0AE6BDCC7751ECAA00B7D (Callback_t8A5D4EB4C54036B61924EA950CAB18585A347C48 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Conversion methods for marshalling of: Vizario.Tools.WebTools/OutputData
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke(const OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A& unmarshaled, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke& marshaled)
{
	marshaled.___result_0 = il2cpp_codegen_marshal_string(unmarshaled.get_result_0());
	marshaled.___error_1 = static_cast<int32_t>(unmarshaled.get_error_1());
	marshaled.___response_code_2 = unmarshaled.get_response_code_2();
}
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke_back(const OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke& marshaled, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A& unmarshaled)
{
	unmarshaled.set_result_0(il2cpp_codegen_marshal_string_result(marshaled.___result_0));
	bool unmarshaled_error_temp_1 = false;
	unmarshaled_error_temp_1 = static_cast<bool>(marshaled.___error_1);
	unmarshaled.set_error_1(unmarshaled_error_temp_1);
	int64_t unmarshaled_response_code_temp_2 = 0;
	unmarshaled_response_code_temp_2 = marshaled.___response_code_2;
	unmarshaled.set_response_code_2(unmarshaled_response_code_temp_2);
}
// Conversion method for clean up from marshalling of: Vizario.Tools.WebTools/OutputData
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_pinvoke_cleanup(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___result_0);
	marshaled.___result_0 = NULL;
}
// Conversion methods for marshalling of: Vizario.Tools.WebTools/OutputData
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_com(const OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A& unmarshaled, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_com& marshaled)
{
	marshaled.___result_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_result_0());
	marshaled.___error_1 = static_cast<int32_t>(unmarshaled.get_error_1());
	marshaled.___response_code_2 = unmarshaled.get_response_code_2();
}
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_com_back(const OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_com& marshaled, OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A& unmarshaled)
{
	unmarshaled.set_result_0(il2cpp_codegen_marshal_bstring_result(marshaled.___result_0));
	bool unmarshaled_error_temp_1 = false;
	unmarshaled_error_temp_1 = static_cast<bool>(marshaled.___error_1);
	unmarshaled.set_error_1(unmarshaled_error_temp_1);
	int64_t unmarshaled_response_code_temp_2 = 0;
	unmarshaled_response_code_temp_2 = marshaled.___response_code_2;
	unmarshaled.set_response_code_2(unmarshaled_response_code_temp_2);
}
// Conversion method for clean up from marshalling of: Vizario.Tools.WebTools/OutputData
IL2CPP_EXTERN_C void OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshal_com_cleanup(OutputData_tAF6A923E19C25029716393EAC301C2E127851A4A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___result_0);
	marshaled.___result_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
