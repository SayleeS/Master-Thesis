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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Vuforia.TargetFinder>[]
struct EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Vuforia.TargetFinder>
struct KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Vuforia.TargetFinder>
struct ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour>
struct Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>
struct IDictionary_2_t43CAA7C036A3D1B90682708F7EB07B75E137663F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>
struct IDictionary_2_tACB55267A4440676D5E50F91141861E8359ABC5F;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t12D495D4AF335010DEC3E91C58474E59EE2E50D8;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<Unity.Properties.IPropertyVisitorAdapter>
struct List_1_tE806B08BF7A58AA1093F4C82792C5CC70BBFA356;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91;
// System.Collections.Generic.List`1<Vuforia.DataSet>
struct List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50;
// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour>
struct List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3;
// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t9345A2C4627555419189CF853278DE7693A977BB;
// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F;
// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.SByte[]
struct SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.Entities.EntityCommandBuffer/PlaybackChainChunkDelegate
struct PlaybackChainChunkDelegate_t084094D0E838636BD214AF054106DB1942AE5B14;
// Unity.Entities.EntityCommandBuffer/PlaybackUnmanagedCommandDelegate
struct PlaybackUnmanagedCommandDelegate_t265919F17FACB50E28AD3B17E4E414E87C03C06A;
// Unity.Entities.EntityCommandBufferData
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1;
// Unity.Properties.IPropertyVisitorAdapter
struct IPropertyVisitorAdapter_t6F33432DC9B54B9429BEEE36DDA8E74E7960C827;
// Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B;
// Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F;
// Unity.Properties.Property`2<System.Object,System.Int32Enum>
struct Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2;
// Unity.Properties.Property`2<System.Object,System.Object>
struct Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8;
// Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>
struct Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217;
// Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>
struct Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1;
// Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>
struct Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F;
// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>
struct Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5;
// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>
struct Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E;
// Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>
struct Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459;
// Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33;
// Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>
struct Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED;
// Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15;
// Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06;
// Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>
struct Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74;
// Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>
struct Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E;
// Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>
struct Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353;
// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>
struct Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F;
// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>
struct Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t7521247C87411935E8A2CA38683533083459473F;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588;
// Vuforia.DeviceTrackingManager
struct DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A;
// Vuforia.IVuforiaWrapper
struct IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2;
// Vuforia.IlluminationManager
struct IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296;
// Vuforia.ImageTargetBuilder
struct ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755;
// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.RuntimeImageSource
struct RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.VuMarkManager
struct VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9;

IL2CPP_EXTERN_C RuntimeClass* Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137;
IL2CPP_EXTERN_C String_t* _stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsShapeExtensions_FindFirstEnabledAncestor_TisRuntimeObject_m23A3D9831235CBED8547B3DF42AB47456B7C9E1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PhysicsShapeExtensions_FindTopmostEnabledAncestor_TisRuntimeObject_mED96914BDA0878E279EB3B58052D4DEF40DA2E9F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mB1DD60D77E575E5D05C675A60CB741BC85434179_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m204CD8F0F398E868F812EEFEA83CDB1012D434E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m8D5E86928B6C658AF0AD14F25FC1A77643F3F961_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3BCE824CCA7B1DCD2A9EC41858B38820E525EC34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5BE2AAE9878B28AF8BED0777F2AEDE9DDFF3E9E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_TisRuntimeObject_m61FF0F2D3A71540418EFB9C2C636BA7CEB7A64A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m0527246AC58ACB8CB0A9A5AB51DFEBB36C4F631A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDE546355DDF1C332F94D57B4691509CDC4B340EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisPropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936_TisRuntimeObject_mEAD8BB65CB885066570F30173CE53F2975C06142_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_mB7507C717EABBC1CA3B213E301B7A86E719E211F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m0DE1931001D97DA903D9E78E59D22BB2942C8432_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9C1979B5C9941B44FCC9213374560FD3209C1874_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m0039E9E945940576AA321DD2D0554B0C96AAF55D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_m553F0BC0A9966DC7DA0C2CA2A0BFF03923C5B9A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisRuntimeObject_mAC54CADD64DAE7A630C8ED161C7F7BEEB1F6C63C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_m1FB4D91F0A6CA59CB881C80A839D928F025148DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m0AE5811FC1E6F202D562F6297F85F4E6722F9F2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m28F51FB0D9E833A39D3C300D899885818E0AC9F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_TisSectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF3BAE3F17343408E452B27C238117699F0E856E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyVisitorAdapterExtensions_TryVisit_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0ED34D3FF869F3375EDC90FD49B4B4E1C534EBCC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 ;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>
struct Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* ___entries_1;
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
	KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___entries_1)); }
	inline EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t19A63E9364FAE91F97300DD8F6609D0E5208895E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___keys_7)); }
	inline KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF36110202D64D67B7A2C2208131F4481578899FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ___values_8)); }
	inline ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3D082CF9D65E6F73320423F0C28419F2DF287016 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____items_1)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// Unity.Properties.Internal.PropertyVisitorAdapterExtensions
struct PropertyVisitorAdapterExtensions_t8172ADFA9CDD2BF1C7A53ED8F523BE0221C225EC  : public RuntimeObject
{
public:

public:
};


// Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,System.Int32Enum>
struct Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,System.Object>
struct Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>
struct Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>
struct Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>
struct Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>
struct Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>
struct Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>
struct Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>
struct Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>
struct Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>
struct Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>
struct Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>
struct Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>
struct Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>
struct Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>
struct Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>
struct Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Attribute> Unity.Properties.Property`2::m_Attributes
	List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * ___m_Attributes_0;

public:
	inline static int32_t get_offset_of_m_Attributes_0() { return static_cast<int32_t>(offsetof(Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6, ___m_Attributes_0)); }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * get_m_Attributes_0() const { return ___m_Attributes_0; }
	inline List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D ** get_address_of_m_Attributes_0() { return &___m_Attributes_0; }
	inline void set_m_Attributes_0(List_1_t78749B0C0B7951E8C27ADDDC824A4F3D6B82FB6D * value)
	{
		___m_Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Attributes_0), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * ___s_InternalTransformList_18;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t500F03BFA685F0E6C5888E69E10E9A4BDCFF29E4 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerEnterHandler_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t156B38372E4198DF5F3BFB91B163298206561AAA * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerExitHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t94FBBDEF418C6167886272036699D1A74444B57E * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerDownHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_tB4C54A8FCB75F989CB93F264C377A493ADE6C3B6 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerUpHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t7BFB6A90DB6AE5607866DE2A89133CA327285B1E * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PointerClickHandler_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_tBDB74EA8100B6A332148C484883D175247B86418 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InitializePotentialDragHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t51AEB71F82F660F259E3704B0234135B58AFFC27 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_BeginDragHandler_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t0E9496F82F057823DBF9B209D6D8F04FC499CEA1 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DragHandler_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t27247279794E7FDE55DC4CE9990E1DED38CDAF20 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EndDragHandler_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t720BFA53CC728483A4F8F3E442824FBB413960B5 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DropHandler_9), (void*)value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t5B706CE4B39EE6E9686FF18638472F67BD7FB99A * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ScrollHandler_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_tB6296132C4DCDE6C05DD1F342941985DC893E173 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSelectedHandler_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t7521247C87411935E8A2CA38683533083459473F ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t7521247C87411935E8A2CA38683533083459473F * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SelectHandler_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t945B1CBADCA0B509D2BDA6B166CBCCBC80030FC8 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DeselectHandler_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_tB2C19C9019D16125E4D50F9E2BD670A9A4DE01FB * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MoveHandler_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t5BB945D5F864E6359484E402D1FE8929D197BE5B * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubmitHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_tB1E06A1C7DCF49735FC24FF0D18D41AC38573258 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CancelHandler_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t68ABA103C2150D63C7C1D7CE1621CDDA297C9588 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HandlerListPool_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalTransformList_18), (void*)value);
	}
};


// UnityEngine.UIElements.StyleValueExtensions
struct StyleValueExtensions_tB5C36975F3FBDF3E96DF727123E9F2BF45840915  : public RuntimeObject
{
public:

public:
};


// Vuforia.StateManager
struct StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.TrackableBehaviour> Vuforia.StateManager::mTrackableBehaviours
	Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * ___mTrackableBehaviours_0;
	// System.Collections.Generic.List`1<System.Int32> Vuforia.StateManager::mAutomaticallyCreatedBehaviours
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___mAutomaticallyCreatedBehaviours_1;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mBehavioursMarkedForDeletion
	List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * ___mBehavioursMarkedForDeletion_2;
	// System.Collections.Generic.List`1<Vuforia.TrackableBehaviour> Vuforia.StateManager::mActiveTrackableBehaviours
	List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * ___mActiveTrackableBehaviours_3;
	// Vuforia.VuMarkManager Vuforia.StateManager::mVuMarkManager
	VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * ___mVuMarkManager_4;
	// Vuforia.DeviceTrackingManager Vuforia.StateManager::mDeviceTrackingManager
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * ___mDeviceTrackingManager_5;
	// UnityEngine.GameObject Vuforia.StateManager::mCameraPositioningHelper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mCameraPositioningHelper_6;
	// Vuforia.IlluminationManager Vuforia.StateManager::mIlluminationManager
	IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * ___mIlluminationManager_7;

public:
	inline static int32_t get_offset_of_mTrackableBehaviours_0() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mTrackableBehaviours_0)); }
	inline Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * get_mTrackableBehaviours_0() const { return ___mTrackableBehaviours_0; }
	inline Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B ** get_address_of_mTrackableBehaviours_0() { return &___mTrackableBehaviours_0; }
	inline void set_mTrackableBehaviours_0(Dictionary_2_t621EF9A2D0D1E14E7E20A549442C4DA2060CAB5B * value)
	{
		___mTrackableBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTrackableBehaviours_0), (void*)value);
	}

	inline static int32_t get_offset_of_mAutomaticallyCreatedBehaviours_1() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mAutomaticallyCreatedBehaviours_1)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_mAutomaticallyCreatedBehaviours_1() const { return ___mAutomaticallyCreatedBehaviours_1; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_mAutomaticallyCreatedBehaviours_1() { return &___mAutomaticallyCreatedBehaviours_1; }
	inline void set_mAutomaticallyCreatedBehaviours_1(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___mAutomaticallyCreatedBehaviours_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAutomaticallyCreatedBehaviours_1), (void*)value);
	}

	inline static int32_t get_offset_of_mBehavioursMarkedForDeletion_2() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mBehavioursMarkedForDeletion_2)); }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * get_mBehavioursMarkedForDeletion_2() const { return ___mBehavioursMarkedForDeletion_2; }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 ** get_address_of_mBehavioursMarkedForDeletion_2() { return &___mBehavioursMarkedForDeletion_2; }
	inline void set_mBehavioursMarkedForDeletion_2(List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * value)
	{
		___mBehavioursMarkedForDeletion_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mBehavioursMarkedForDeletion_2), (void*)value);
	}

	inline static int32_t get_offset_of_mActiveTrackableBehaviours_3() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mActiveTrackableBehaviours_3)); }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * get_mActiveTrackableBehaviours_3() const { return ___mActiveTrackableBehaviours_3; }
	inline List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 ** get_address_of_mActiveTrackableBehaviours_3() { return &___mActiveTrackableBehaviours_3; }
	inline void set_mActiveTrackableBehaviours_3(List_1_t698FB0BD6D2FA15C60EA4F7D7FDADED3A8791332 * value)
	{
		___mActiveTrackableBehaviours_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveTrackableBehaviours_3), (void*)value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_4() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mVuMarkManager_4)); }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * get_mVuMarkManager_4() const { return ___mVuMarkManager_4; }
	inline VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 ** get_address_of_mVuMarkManager_4() { return &___mVuMarkManager_4; }
	inline void set_mVuMarkManager_4(VuMarkManager_tD0288834C61D3F733AD8E4E98FE9C5DED6AC56F9 * value)
	{
		___mVuMarkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVuMarkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDeviceTrackingManager_5() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mDeviceTrackingManager_5)); }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * get_mDeviceTrackingManager_5() const { return ___mDeviceTrackingManager_5; }
	inline DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A ** get_address_of_mDeviceTrackingManager_5() { return &___mDeviceTrackingManager_5; }
	inline void set_mDeviceTrackingManager_5(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A * value)
	{
		___mDeviceTrackingManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDeviceTrackingManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_mCameraPositioningHelper_6() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mCameraPositioningHelper_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mCameraPositioningHelper_6() const { return ___mCameraPositioningHelper_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mCameraPositioningHelper_6() { return &___mCameraPositioningHelper_6; }
	inline void set_mCameraPositioningHelper_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mCameraPositioningHelper_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCameraPositioningHelper_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIlluminationManager_7() { return static_cast<int32_t>(offsetof(StateManager_t3EECC6F13CB23833CF4CE201E0BA0B51B5A546E1, ___mIlluminationManager_7)); }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * get_mIlluminationManager_7() const { return ___mIlluminationManager_7; }
	inline IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 ** get_address_of_mIlluminationManager_7() { return &___mIlluminationManager_7; }
	inline void set_mIlluminationManager_7(IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296 * value)
	{
		___mIlluminationManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIlluminationManager_7), (void*)value);
	}
};


// Vuforia.Tracker
struct Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
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


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>
struct Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE806B08BF7A58AA1093F4C82792C5CC70BBFA356 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9, ___list_0)); }
	inline List_1_tE806B08BF7A58AA1093F4C82792C5CC70BBFA356 * get_list_0() const { return ___list_0; }
	inline List_1_tE806B08BF7A58AA1093F4C82792C5CC70BBFA356 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE806B08BF7A58AA1093F4C82792C5CC70BBFA356 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 
{
public:
	// System.UInt64 Unity.Entities.EditorRenderData::SceneCullingMask
	uint64_t ___SceneCullingMask_0;
	// UnityEngine.GameObject Unity.Entities.EditorRenderData::PickableObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;

public:
	inline static int32_t get_offset_of_SceneCullingMask_0() { return static_cast<int32_t>(offsetof(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55, ___SceneCullingMask_0)); }
	inline uint64_t get_SceneCullingMask_0() const { return ___SceneCullingMask_0; }
	inline uint64_t* get_address_of_SceneCullingMask_0() { return &___SceneCullingMask_0; }
	inline void set_SceneCullingMask_0(uint64_t value)
	{
		___SceneCullingMask_0 = value;
	}

	inline static int32_t get_offset_of_PickableObject_1() { return static_cast<int32_t>(offsetof(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55, ___PickableObject_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PickableObject_1() const { return ___PickableObject_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PickableObject_1() { return &___PickableObject_1; }
	inline void set_PickableObject_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PickableObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PickableObject_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_marshaled_pinvoke
{
	uint64_t ___SceneCullingMask_0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;
};
// Native definition for COM marshalling of Unity.Entities.EditorRenderData
struct EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_marshaled_com
{
	uint64_t ___SceneCullingMask_0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PickableObject_1;
};

// Unity.Entities.Entity
struct Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 
{
public:
	// System.Int32 Unity.Entities.Entity::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Entities.Entity::Version
	int32_t ___Version_1;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Version_1() { return static_cast<int32_t>(offsetof(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8, ___Version_1)); }
	inline int32_t get_Version_1() const { return ___Version_1; }
	inline int32_t* get_address_of_Version_1() { return &___Version_1; }
	inline void set_Version_1(int32_t value)
	{
		___Version_1 = value;
	}
};


// Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 
{
public:
	// Unity.Entities.EntityCommandBufferData* Unity.Entities.EntityCommandBuffer::m_Data
	EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * ___m_Data_0;

public:
	inline static int32_t get_offset_of_m_Data_0() { return static_cast<int32_t>(offsetof(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9, ___m_Data_0)); }
	inline EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * get_m_Data_0() const { return ___m_Data_0; }
	inline EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 ** get_address_of_m_Data_0() { return &___m_Data_0; }
	inline void set_m_Data_0(EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * value)
	{
		___m_Data_0 = value;
	}
};

struct EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_StaticFields
{
public:
	// Unity.Entities.EntityCommandBuffer/PlaybackChainChunkDelegate Unity.Entities.EntityCommandBuffer::PlaybackChainChunk
	PlaybackChainChunkDelegate_t084094D0E838636BD214AF054106DB1942AE5B14 * ___PlaybackChainChunk_1;
	// Unity.Entities.EntityCommandBuffer/PlaybackUnmanagedCommandDelegate Unity.Entities.EntityCommandBuffer::PlaybackUnmanagedCommand
	PlaybackUnmanagedCommandDelegate_t265919F17FACB50E28AD3B17E4E414E87C03C06A * ___PlaybackUnmanagedCommand_2;

public:
	inline static int32_t get_offset_of_PlaybackChainChunk_1() { return static_cast<int32_t>(offsetof(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_StaticFields, ___PlaybackChainChunk_1)); }
	inline PlaybackChainChunkDelegate_t084094D0E838636BD214AF054106DB1942AE5B14 * get_PlaybackChainChunk_1() const { return ___PlaybackChainChunk_1; }
	inline PlaybackChainChunkDelegate_t084094D0E838636BD214AF054106DB1942AE5B14 ** get_address_of_PlaybackChainChunk_1() { return &___PlaybackChainChunk_1; }
	inline void set_PlaybackChainChunk_1(PlaybackChainChunkDelegate_t084094D0E838636BD214AF054106DB1942AE5B14 * value)
	{
		___PlaybackChainChunk_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackChainChunk_1), (void*)value);
	}

	inline static int32_t get_offset_of_PlaybackUnmanagedCommand_2() { return static_cast<int32_t>(offsetof(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_StaticFields, ___PlaybackUnmanagedCommand_2)); }
	inline PlaybackUnmanagedCommandDelegate_t265919F17FACB50E28AD3B17E4E414E87C03C06A * get_PlaybackUnmanagedCommand_2() const { return ___PlaybackUnmanagedCommand_2; }
	inline PlaybackUnmanagedCommandDelegate_t265919F17FACB50E28AD3B17E4E414E87C03C06A ** get_address_of_PlaybackUnmanagedCommand_2() { return &___PlaybackUnmanagedCommand_2; }
	inline void set_PlaybackUnmanagedCommand_2(PlaybackUnmanagedCommandDelegate_t265919F17FACB50E28AD3B17E4E414E87C03C06A * value)
	{
		___PlaybackUnmanagedCommand_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlaybackUnmanagedCommand_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_marshaled_pinvoke
{
	EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * ___m_Data_0;
};
// Native definition for COM marshalling of Unity.Entities.EntityCommandBuffer
struct EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_marshaled_com
{
	EntityCommandBufferData_t1E4108C022592C466AE18E13F1DDD22D368921A1 * ___m_Data_0;
};

// Unity.Entities.SectionMetadataSetup
struct SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 
{
public:
	// System.Int32 Unity.Entities.SectionMetadataSetup::SceneSectionIndex
	int32_t ___SceneSectionIndex_0;

public:
	inline static int32_t get_offset_of_SceneSectionIndex_0() { return static_cast<int32_t>(offsetof(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3, ___SceneSectionIndex_0)); }
	inline int32_t get_SceneSectionIndex_0() const { return ___SceneSectionIndex_0; }
	inline int32_t* get_address_of_SceneSectionIndex_0() { return &___SceneSectionIndex_0; }
	inline void set_SceneSectionIndex_0(int32_t value)
	{
		___SceneSectionIndex_0 = value;
	}
};


// Unity.Mathematics.int3
struct int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F 
{
public:
	// System.Int32 Unity.Mathematics.int3::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int3::y
	int32_t ___y_1;
	// System.Int32 Unity.Mathematics.int3::z
	int32_t ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F, ___z_2)); }
	inline int32_t get_z_2() const { return ___z_2; }
	inline int32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(int32_t value)
	{
		___z_2 = value;
	}
};

struct int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F_StaticFields
{
public:
	// Unity.Mathematics.int3 Unity.Mathematics.int3::zero
	int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F_StaticFields, ___zero_3)); }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  get_zero_3() const { return ___zero_3; }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.uint4
struct uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};

struct uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_StaticFields
{
public:
	// Unity.Mathematics.uint4 Unity.Mathematics.uint4::zero
	uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  ___zero_4;

public:
	inline static int32_t get_offset_of_zero_4() { return static_cast<int32_t>(offsetof(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_StaticFields, ___zero_4)); }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  get_zero_4() const { return ___zero_4; }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * get_address_of_zero_4() { return &___zero_4; }
	inline void set_zero_4(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  value)
	{
		___zero_4 = value;
	}
};


// Unity.Properties.Internal.PropertyWrapper`1<System.Object>
struct PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 
{
public:
	// T Unity.Properties.Internal.PropertyWrapper`1::Value
	RuntimeObject * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Keyframe
struct Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Vuforia.DatasetTracker
struct DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mActiveDataSets
	List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * ___mActiveDataSets_1;
	// System.Collections.Generic.List`1<Vuforia.DataSet> Vuforia.DatasetTracker::mDataSets
	List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * ___mDataSets_2;

public:
	inline static int32_t get_offset_of_mActiveDataSets_1() { return static_cast<int32_t>(offsetof(DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65, ___mActiveDataSets_1)); }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * get_mActiveDataSets_1() const { return ___mActiveDataSets_1; }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A ** get_address_of_mActiveDataSets_1() { return &___mActiveDataSets_1; }
	inline void set_mActiveDataSets_1(List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * value)
	{
		___mActiveDataSets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mActiveDataSets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mDataSets_2() { return static_cast<int32_t>(offsetof(DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65, ___mDataSets_2)); }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * get_mDataSets_2() const { return ___mDataSets_2; }
	inline List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A ** get_address_of_mDataSets_2() { return &___mDataSets_2; }
	inline void set_mDataSets_2(List_1_tD1FD69B17D2A7688C07228584F1E6346CB82829A * value)
	{
		___mDataSets_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDataSets_2), (void*)value);
	}
};


// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)


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

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Entities.Hash128
struct Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F 
{
public:
	// Unity.Mathematics.uint4 Unity.Entities.Hash128::Value
	uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F, ___Value_0)); }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  get_Value_0() const { return ___Value_0; }
	inline uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  value)
	{
		___Value_0 = value;
	}
};

struct Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields
{
public:
	// System.Char[] Unity.Entities.Hash128::k_HexToLiteral
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___k_HexToLiteral_1;
	// System.SByte[] Unity.Entities.Hash128::k_LiteralToHex
	SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* ___k_LiteralToHex_2;

public:
	inline static int32_t get_offset_of_k_HexToLiteral_1() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields, ___k_HexToLiteral_1)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_k_HexToLiteral_1() const { return ___k_HexToLiteral_1; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_k_HexToLiteral_1() { return &___k_HexToLiteral_1; }
	inline void set_k_HexToLiteral_1(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___k_HexToLiteral_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_HexToLiteral_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_LiteralToHex_2() { return static_cast<int32_t>(offsetof(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_StaticFields, ___k_LiteralToHex_2)); }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* get_k_LiteralToHex_2() const { return ___k_LiteralToHex_2; }
	inline SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889** get_address_of_k_LiteralToHex_2() { return &___k_LiteralToHex_2; }
	inline void set_k_LiteralToHex_2(SByteU5BU5D_t623D1F33C61DEAC564E2B0560E00F1E1364F7889* value)
	{
		___k_LiteralToHex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_LiteralToHex_2), (void*)value);
	}
};


// Unity.Entities.SceneTag
struct SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 
{
public:
	// Unity.Entities.Entity Unity.Entities.SceneTag::SceneEntity
	Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  ___SceneEntity_0;

public:
	inline static int32_t get_offset_of_SceneEntity_0() { return static_cast<int32_t>(offsetof(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04, ___SceneEntity_0)); }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  get_SceneEntity_0() const { return ___SceneEntity_0; }
	inline Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * get_address_of_SceneEntity_0() { return &___SceneEntity_0; }
	inline void set_SceneEntity_0(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  value)
	{
		___SceneEntity_0 = value;
	}
};


// Unity.Physics.Authoring.PhysicsShapeExtensions
struct PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C  : public RuntimeObject
{
public:

public:
};

struct PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields
{
public:
	// System.Int32[] Unity.Physics.Authoring.PhysicsShapeExtensions::k_NextAxis
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___k_NextAxis_0;
	// System.Int32[] Unity.Physics.Authoring.PhysicsShapeExtensions::k_PrevAxis
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___k_PrevAxis_1;
	// Unity.Mathematics.int3 Unity.Physics.Authoring.PhysicsShapeExtensions::k_DefaultAxisPriority
	int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  ___k_DefaultAxisPriority_2;

public:
	inline static int32_t get_offset_of_k_NextAxis_0() { return static_cast<int32_t>(offsetof(PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields, ___k_NextAxis_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_k_NextAxis_0() const { return ___k_NextAxis_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_k_NextAxis_0() { return &___k_NextAxis_0; }
	inline void set_k_NextAxis_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___k_NextAxis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_NextAxis_0), (void*)value);
	}

	inline static int32_t get_offset_of_k_PrevAxis_1() { return static_cast<int32_t>(offsetof(PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields, ___k_PrevAxis_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_k_PrevAxis_1() const { return ___k_PrevAxis_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_k_PrevAxis_1() { return &___k_PrevAxis_1; }
	inline void set_k_PrevAxis_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___k_PrevAxis_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_PrevAxis_1), (void*)value);
	}

	inline static int32_t get_offset_of_k_DefaultAxisPriority_2() { return static_cast<int32_t>(offsetof(PhysicsShapeExtensions_t2F844C0EB62854D12582AD6F34668C21A0ECB11C_StaticFields, ___k_DefaultAxisPriority_2)); }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  get_k_DefaultAxisPriority_2() const { return ___k_DefaultAxisPriority_2; }
	inline int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F * get_address_of_k_DefaultAxisPriority_2() { return &___k_DefaultAxisPriority_2; }
	inline void set_k_DefaultAxisPriority_2(int3_tD07EEECF4AB7A330ACFA57CF080BC8C43F66623F  value)
	{
		___k_DefaultAxisPriority_2 = value;
	}
};


// Unity.Properties.VisitStatus
struct VisitStatus_tB90B24DF1B51ED4E0AA3B38C9CDE222254ECC8BE 
{
public:
	// System.Int32 Unity.Properties.VisitStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisitStatus_tB90B24DF1B51ED4E0AA3B38C9CDE222254ECC8BE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.UIElements.StyleKeyword
struct StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560 
{
public:
	// System.Int32 UnityEngine.UIElements.StyleKeyword::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StyleKeyword_t5C285A4249A1A7A807C1B4D2AAF5D1350B0A3560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E  : public DatasetTracker_t860522009F3FBF93ABBDE421FA6AFAD71A8DFE65
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder> Vuforia.ObjectTracker::mTargetFinders
	Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * ___mTargetFinders_3;
	// Vuforia.ImageTargetBuilder Vuforia.ObjectTracker::mImageTargetBuilder
	ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * ___mImageTargetBuilder_4;
	// Vuforia.RuntimeImageSource Vuforia.ObjectTracker::mRuntimeImageSource
	RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * ___mRuntimeImageSource_5;

public:
	inline static int32_t get_offset_of_mTargetFinders_3() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mTargetFinders_3)); }
	inline Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * get_mTargetFinders_3() const { return ___mTargetFinders_3; }
	inline Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 ** get_address_of_mTargetFinders_3() { return &___mTargetFinders_3; }
	inline void set_mTargetFinders_3(Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * value)
	{
		___mTargetFinders_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargetFinders_3), (void*)value);
	}

	inline static int32_t get_offset_of_mImageTargetBuilder_4() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mImageTargetBuilder_4)); }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * get_mImageTargetBuilder_4() const { return ___mImageTargetBuilder_4; }
	inline ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 ** get_address_of_mImageTargetBuilder_4() { return &___mImageTargetBuilder_4; }
	inline void set_mImageTargetBuilder_4(ImageTargetBuilder_t5BA66A134696E24A591FA066087BAABE66F00755 * value)
	{
		___mImageTargetBuilder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageTargetBuilder_4), (void*)value);
	}

	inline static int32_t get_offset_of_mRuntimeImageSource_5() { return static_cast<int32_t>(offsetof(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E, ___mRuntimeImageSource_5)); }
	inline RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * get_mRuntimeImageSource_5() const { return ___mRuntimeImageSource_5; }
	inline RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E ** get_address_of_mRuntimeImageSource_5() { return &___mRuntimeImageSource_5; }
	inline void set_mRuntimeImageSource_5(RuntimeImageSource_t3C908BFEF3B429954ADA4028284F160782A5F72E * value)
	{
		___mRuntimeImageSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRuntimeImageSource_5), (void*)value);
	}
};


// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t30EDE1CBE7E437D553406B97F2FBD179A2352E67 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTargets_1), (void*)value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_tA1CF07E747B9AC691A6E29C9ADF270446EEF2D50 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNewResults_4), (void*)value);
	}
};


// Vuforia.TrackableBehaviour/Status
struct Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackableBehaviour/StatusInfo
struct StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)


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

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Unity.Entities.SceneSection
struct SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E 
{
public:
	// Unity.Entities.Hash128 Unity.Entities.SceneSection::SceneGUID
	Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  ___SceneGUID_0;
	// System.Int32 Unity.Entities.SceneSection::Section
	int32_t ___Section_1;

public:
	inline static int32_t get_offset_of_SceneGUID_0() { return static_cast<int32_t>(offsetof(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E, ___SceneGUID_0)); }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  get_SceneGUID_0() const { return ___SceneGUID_0; }
	inline Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * get_address_of_SceneGUID_0() { return &___SceneGUID_0; }
	inline void set_SceneGUID_0(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  value)
	{
		___SceneGUID_0 = value;
	}

	inline static int32_t get_offset_of_Section_1() { return static_cast<int32_t>(offsetof(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E, ___Section_1)); }
	inline int32_t get_Section_1() const { return ___Section_1; }
	inline int32_t* get_address_of_Section_1() { return &___Section_1; }
	inline void set_Section_1(int32_t value)
	{
		___Section_1 = value;
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>
struct StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleEnum`1::m_Keyword
	int32_t ___m_Keyword_0;
	// T UnityEngine.UIElements.StyleEnum`1::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleEnum`1::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// UnityEngine.UIElements.StyleInt
struct StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 
{
public:
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::m_Keyword
	int32_t ___m_Keyword_0;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Value
	int32_t ___m_Value_1;
	// System.Int32 UnityEngine.UIElements.StyleInt::m_Specificity
	int32_t ___m_Specificity_2;

public:
	inline static int32_t get_offset_of_m_Keyword_0() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Keyword_0)); }
	inline int32_t get_m_Keyword_0() const { return ___m_Keyword_0; }
	inline int32_t* get_address_of_m_Keyword_0() { return &___m_Keyword_0; }
	inline void set_m_Keyword_0(int32_t value)
	{
		___m_Keyword_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Value_1)); }
	inline int32_t get_m_Value_1() const { return ___m_Value_1; }
	inline int32_t* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(int32_t value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_Specificity_2() { return static_cast<int32_t>(offsetof(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89, ___m_Specificity_2)); }
	inline int32_t get_m_Specificity_2() const { return ___m_Specificity_2; }
	inline int32_t* get_address_of_m_Specificity_2() { return &___m_Specificity_2; }
	inline void set_m_Specificity_2(int32_t value)
	{
		___m_Specificity_2 = value;
	}
};


// Vuforia.ImageTargetFinder
struct ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:

public:
};


// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInfo
	int32_t ___statusInfo_3;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_4;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_statusInfo_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInfo_3)); }
	inline int32_t get_statusInfo_3() const { return ___statusInfo_3; }
	inline int32_t* get_address_of_statusInfo_3() { return &___statusInfo_3; }
	inline void set_statusInfo_3(int32_t value)
	{
		___statusInfo_3 = value;
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// Vuforia.TrackerData/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/VuMarkTargetResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData/VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)


// System.Func`2<System.Object,Vuforia.TrackableBehaviour/Status>
struct Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t9345A2C4627555419189CF853278DE7693A977BB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData/TrackableResultData,Vuforia.TrackableBehaviour/StatusInfo>
struct Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Vuforia.TrackerData/VuMarkTargetResultData,Vuforia.TrackableBehaviour/Status>
struct Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C  : public MulticastDelegate_t
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


// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// !0 System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>::MoveNext()
inline bool Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110 (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, RuntimeObject* ___eventChain1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleInt::get_keyword()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104 (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::.ctor(T,UnityEngine.UIElements.StyleKeyword)
inline void StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82 (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___v0, int32_t ___keyword1, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, int32_t, const RuntimeMethod*))StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82_gshared)(__this, ___v0, ___keyword1, method);
}
// System.Int32 UnityEngine.UIElements.StyleInt::get_specificity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UIElements.StyleEnum`1<System.Int32Enum>::set_specificity(System.Int32)
inline void StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *, int32_t, const RuntimeMethod*))StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B_gshared)(__this, ___value0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7 (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// Vuforia.IVuforiaWrapper Vuforia.VuforiaWrapper::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Vuforia.ImageTargetFinder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetFinder__ctor_mC6A817206F021AC47283AE1E4E5E42AA9E6A3FB1 (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * __this, intptr_t ___targetFinderPtr0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Vuforia.TargetFinder>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * __this, Type_t * ___key0, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *, Type_t *, TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryExclude<UnityEngine.Keyframe,System.Single>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mB1DD60D77E575E5D05C675A60CB741BC85434179_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, float* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryExclude_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mB1DD60D77E575E5D05C675A60CB741BC85434179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		goto IL_0096;
	}

IL_0005:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0096;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_1 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_0049;
		}
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_0;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_2 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0056;
		}
	}

IL_0027:
	{
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_3 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0068;
		}
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_4 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_0075;
		}
	}

IL_003c:
	{
		RuntimeObject* L_10 = V_0;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IExclude_t7A3A4EC4D142CC3FEEB4E1014952133CEB47AE9E_il2cpp_TypeInfo_var));
		V_5 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_0096;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		RuntimeObject* L_12 = V_1;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		float* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		bool L_16 = InterfaceFuncInvoker3< bool, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.IExclude`2<UnityEngine.Keyframe,System.Single>::IsExcluded(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (float*)(float*)L_15);
		if (!L_16)
		{
			goto IL_001d;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0056:
	{
		RuntimeObject* L_17 = V_2;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_18 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_19 = ___container2;
		float* L_20 = ___value3;
		float L_21 = (*(float*)L_20);
		NullCheck((RuntimeObject*)L_17);
		bool L_22 = InterfaceFuncInvoker3< bool, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(0 /* System.Boolean Unity.Properties.Adapters.Contravariant.IExclude`2<UnityEngine.Keyframe,System.Single>::IsExcluded(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_17, (RuntimeObject*)L_18, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_19, (float)L_21);
		if (!L_22)
		{
			goto IL_0027;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0068:
	{
		RuntimeObject* L_23 = V_3;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_24 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_25 = ___container2;
		float* L_26 = ___value3;
		NullCheck((RuntimeObject*)L_23);
		bool L_27 = GenericInterfaceFuncInvoker3< bool, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4), (RuntimeObject*)L_23, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_24, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_25, (float*)(float*)L_26);
		if (!L_27)
		{
			goto IL_0031;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0075:
	{
		RuntimeObject* L_28 = V_4;
		// when typed.IsExcluded(property, ref container, value):
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_29 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_30 = ___container2;
		float* L_31 = ___value3;
		float L_32 = (*(float*)L_31);
		NullCheck((RuntimeObject*)L_28);
		bool L_33 = GenericInterfaceFuncInvoker3< bool, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 5), (RuntimeObject*)L_28, (RuntimeObject*)L_29, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_30, (float)L_32);
		if (!L_33)
		{
			goto IL_003c;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0088:
	{
		RuntimeObject* L_34 = V_5;
		// when typed.IsExcluded(property, ref container, ref value):
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_35 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_36 = ___container2;
		float* L_37 = ___value3;
		NullCheck((RuntimeObject*)L_34);
		bool L_38 = GenericInterfaceFuncInvoker3< bool, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_34, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_35, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_36, (float*)(float*)L_37);
		if (!L_38)
		{
			goto IL_0096;
		}
	}
	{
		// return VisitStatus.Stop;
		return (int32_t)(2);
	}

IL_0096:
	{
		// while (adapters.MoveNext())
		bool L_39 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0005;
		}
	}
	{
		// return VisitStatus.Handled;
		return (int32_t)(1);
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_TisRuntimeObject_m61FF0F2D3A71540418EFB9C2C636BA7CEB7A64A2_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * ___property1, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_TisRuntimeObject_m61FF0F2D3A71540418EFB9C2C636BA7CEB7A64A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_13 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_13, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_18 = ___property1;
		NullCheck((Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_20 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_20);
		VirtActionInvoker2< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_20, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_26 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_34 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_34, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_39 = ___property1;
		NullCheck((Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_41 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_41);
		VirtActionInvoker2< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_41, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_47 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_55 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_55, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_60 = ___property1;
		NullCheck((Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B * L_62 = ___property1;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_62);
		VirtActionInvoker2< KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t12A58EF618433F0333E498C73CCE7DA32E14A96B *)L_62, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m0039E9E945940576AA321DD2D0554B0C96AAF55D_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * ___property1, RuntimeObject ** ___container2, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_m0039E9E945940576AA321DD2D0554B0C96AAF55D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_18 = ___property1;
		NullCheck((Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_22 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_23 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_22);
		NullCheck((Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_20);
		VirtActionInvoker2< RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetValue(TContainer&,TValue) */, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_28 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_29 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_39 = ___property1;
		NullCheck((Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_43 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_44 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_43);
		NullCheck((Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_41);
		VirtActionInvoker2< RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetValue(TContainer&,TValue) */, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_49 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_50 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *, RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_60 = ___property1;
		NullCheck((Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_IsReadOnly() */, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * L_64 = ___value3;
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_65 = (*(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *)L_64);
		NullCheck((Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_62);
		VirtActionInvoker2< RuntimeObject **, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::SetValue(TContainer&,TValue) */, (Property_2_t61D7A82E49473E805F19F677EBC0AD7D4F6AE27F *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,System.Int32Enum>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9C1979B5C9941B44FCC9213374560FD3209C1874_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * ___property1, RuntimeObject ** ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m9C1979B5C9941B44FCC9213374560FD3209C1874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *, RuntimeObject **, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,System.Int32Enum>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_18 = ___property1;
		NullCheck((Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Int32Enum>::get_IsReadOnly() */, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_20);
		VirtActionInvoker2< RuntimeObject **, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,System.Int32Enum>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *, RuntimeObject **, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_39 = ___property1;
		NullCheck((Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Int32Enum>::get_IsReadOnly() */, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_41);
		VirtActionInvoker2< RuntimeObject **, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *, RuntimeObject **, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_60 = ___property1;
		NullCheck((Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Int32Enum>::get_IsReadOnly() */, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_62);
		VirtActionInvoker2< RuntimeObject **, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_t8547FB142F9DB4B05581C1E3C5E8922266DDDBB2 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,System.Object>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisRuntimeObject_mAC54CADD64DAE7A630C8ED161C7F7BEEB1F6C63C_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * ___property1, RuntimeObject ** ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisRuntimeObject_mAC54CADD64DAE7A630C8ED161C7F7BEEB1F6C63C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *, RuntimeObject **, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_18 = ___property1;
		NullCheck((Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Object>::get_IsReadOnly() */, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_20);
		VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *, RuntimeObject **, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_39 = ___property1;
		NullCheck((Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Object>::get_IsReadOnly() */, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_41);
		VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *, RuntimeObject **, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_60 = ___property1;
		NullCheck((Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,System.Object>::get_IsReadOnly() */, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_62);
		VirtActionInvoker2< RuntimeObject **, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t12CD218C43CF591708EB094D69FE4071A28FE2E8 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,Unity.Entities.Entity>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m0DE1931001D97DA903D9E78E59D22BB2942C8432_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * ___property1, RuntimeObject ** ___container2, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m0DE1931001D97DA903D9E78E59D22BB2942C8432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,Unity.Entities.Entity>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_18 = ___property1;
		NullCheck((Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_22 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_23 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_22);
		NullCheck((Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_20);
		VirtActionInvoker2< RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_28 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_29 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,Unity.Entities.Entity>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_39 = ___property1;
		NullCheck((Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_43 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_44 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_43);
		NullCheck((Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_41);
		VirtActionInvoker2< RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_49 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_50 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *, RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_60 = ___property1;
		NullCheck((Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_64 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_65 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_64);
		NullCheck((Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_62);
		VirtActionInvoker2< RuntimeObject **, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t7E49F3C1C0CFE4396C6CF1E0F882C005A40F9217 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,Unity.Entities.EntityCommandBuffer>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_mB7507C717EABBC1CA3B213E301B7A86E719E211F_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * ___property1, RuntimeObject ** ___container2, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisEntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9_mB7507C717EABBC1CA3B213E301B7A86E719E211F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *, RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,Unity.Entities.EntityCommandBuffer>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_18 = ___property1;
		NullCheck((Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>::get_IsReadOnly() */, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_22 = ___value3;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_23 = (*(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_22);
		NullCheck((Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_20);
		VirtActionInvoker2< RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>::SetValue(TContainer&,TValue) */, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_28 = ___value3;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_29 = (*(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,Unity.Entities.EntityCommandBuffer>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *, RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_39 = ___property1;
		NullCheck((Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>::get_IsReadOnly() */, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_43 = ___value3;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_44 = (*(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_43);
		NullCheck((Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_41);
		VirtActionInvoker2< RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>::SetValue(TContainer&,TValue) */, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_49 = ___value3;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_50 = (*(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *, RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_60 = ___property1;
		NullCheck((Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>::get_IsReadOnly() */, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 * L_64 = ___value3;
		EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  L_65 = (*(EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 *)L_64);
		NullCheck((Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_62);
		VirtActionInvoker2< RuntimeObject **, EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,Unity.Entities.EntityCommandBuffer>::SetValue(TContainer&,TValue) */, (Property_2_t94DAF5F493BA394F0AABEECD43108B309FF89CC1 *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (EntityCommandBuffer_tE01DDB5E7946C7C7162A2F332EE8903CAAF23BD9 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<System.Object,UnityEngine.Keyframe>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_m553F0BC0A9966DC7DA0C2CA2A0BFF03923C5B9A2_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * ___property1, RuntimeObject ** ___container2, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisRuntimeObject_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_m553F0BC0A9966DC7DA0C2CA2A0BFF03923C5B9A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_13 = ___property1;
		RuntimeObject ** L_14 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<System.Object,UnityEngine.Keyframe>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_13, (RuntimeObject **)(RuntimeObject **)L_14, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_18 = ___property1;
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::get_IsReadOnly() */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_20 = ___property1;
		RuntimeObject ** L_21 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_22 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_23 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_22);
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_20);
		VirtActionInvoker2< RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::SetValue(TContainer&,TValue) */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_20, (RuntimeObject **)(RuntimeObject **)L_21, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_26 = ___property1;
		RuntimeObject ** L_27 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_28 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_29 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<System.Object,UnityEngine.Keyframe>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (RuntimeObject **)(RuntimeObject **)L_27, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_34 = ___property1;
		RuntimeObject ** L_35 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_34, (RuntimeObject **)(RuntimeObject **)L_35, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_39 = ___property1;
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::get_IsReadOnly() */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_41 = ___property1;
		RuntimeObject ** L_42 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_43 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_44 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_43);
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_41);
		VirtActionInvoker2< RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::SetValue(TContainer&,TValue) */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_41, (RuntimeObject **)(RuntimeObject **)L_42, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_47 = ___property1;
		RuntimeObject ** L_48 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_49 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_50 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (RuntimeObject **)(RuntimeObject **)L_48, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_55 = ___property1;
		RuntimeObject ** L_56 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *, RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_55, (RuntimeObject **)(RuntimeObject **)L_56, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_60 = ___property1;
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::get_IsReadOnly() */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F * L_62 = ___property1;
		RuntimeObject ** L_63 = ___container2;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_64 = ___value3;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  L_65 = (*(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_64);
		NullCheck((Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_62);
		VirtActionInvoker2< RuntimeObject **, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74  >::Invoke(13 /* System.Void Unity.Properties.Property`2<System.Object,UnityEngine.Keyframe>::SetValue(TContainer&,TValue) */, (Property_2_t34BC35646FF6893BEE49A4155E58D035340CF69F *)L_62, (RuntimeObject **)(RuntimeObject **)L_63, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.EditorRenderData,System.Object>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m204CD8F0F398E868F812EEFEA83CDB1012D434E8_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * ___property1, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisRuntimeObject_m204CD8F0F398E868F812EEFEA83CDB1012D434E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_13 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.EditorRenderData,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_13, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_18 = ___property1;
		NullCheck((Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::get_IsReadOnly() */, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_20 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_20);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_20, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_26 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.EditorRenderData,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_34 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_34, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_39 = ___property1;
		NullCheck((Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::get_IsReadOnly() */, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_41 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_41);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_41, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_47 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_55 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_55, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_60 = ___property1;
		NullCheck((Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::get_IsReadOnly() */, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 * L_62 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_62);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_tE92A1BF1C27076E9344ADE6410A157910F1F18A5 *)L_62, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.EditorRenderData,System.UInt64>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m8D5E86928B6C658AF0AD14F25FC1A77643F3F961_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * ___property1, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * ___container2, uint64_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisEditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m8D5E86928B6C658AF0AD14F25FC1A77643F3F961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_13 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_14 = ___container2;
		uint64_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.EditorRenderData,System.UInt64>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_13, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_14, (uint64_t*)(uint64_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_18 = ___property1;
		NullCheck((Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::get_IsReadOnly() */, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_20 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_21 = ___container2;
		uint64_t* L_22 = ___value3;
		uint64_t L_23 = (*(uint64_t*)L_22);
		NullCheck((Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_20);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::SetValue(TContainer&,TValue) */, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_20, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_21, (uint64_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_26 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_27 = ___container2;
		uint64_t* L_28 = ___value3;
		uint64_t L_29 = (*(uint64_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.EditorRenderData,System.UInt64>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_27, (uint64_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_34 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_35 = ___container2;
		uint64_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_34, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_35, (uint64_t*)(uint64_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_39 = ___property1;
		NullCheck((Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::get_IsReadOnly() */, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_41 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_42 = ___container2;
		uint64_t* L_43 = ___value3;
		uint64_t L_44 = (*(uint64_t*)L_43);
		NullCheck((Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_41);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::SetValue(TContainer&,TValue) */, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_41, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_42, (uint64_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_47 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_48 = ___container2;
		uint64_t* L_49 = ___value3;
		uint64_t L_50 = (*(uint64_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_48, (uint64_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_55 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_56 = ___container2;
		uint64_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *, EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_55, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_56, (uint64_t*)(uint64_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_60 = ___property1;
		NullCheck((Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::get_IsReadOnly() */, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E * L_62 = ___property1;
		EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 * L_63 = ___container2;
		uint64_t* L_64 = ___value3;
		uint64_t L_65 = (*(uint64_t*)L_64);
		NullCheck((Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_62);
		VirtActionInvoker2< EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *, uint64_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.EditorRenderData,System.UInt64>::SetValue(TContainer&,TValue) */, (Property_2_t2FD36AB14FB4F62E1CF4F44CEB7D780C46F95D8E *)L_62, (EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)(EditorRenderData_t0C93D83FC567667DCB378CCB964393071BC82E55 *)L_63, (uint64_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.Entity,System.Int32>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3BCE824CCA7B1DCD2A9EC41858B38820E525EC34_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * ___property1, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m3BCE824CCA7B1DCD2A9EC41858B38820E525EC34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_13 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.Entity,System.Int32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_13, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_18 = ___property1;
		NullCheck((Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::get_IsReadOnly() */, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_20 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_20);
		VirtActionInvoker2< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_20, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_26 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.Entity,System.Int32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_34 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_34, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_39 = ___property1;
		NullCheck((Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::get_IsReadOnly() */, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_41 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_41);
		VirtActionInvoker2< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_41, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_47 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_55 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_55, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_60 = ___property1;
		NullCheck((Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::get_IsReadOnly() */, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 * L_62 = ___property1;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_62);
		VirtActionInvoker2< Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Entity,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t8FC03750960ACEC5A0B5CF33C8BD9A3EA8917459 *)L_62, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.Hash128,Unity.Mathematics.uint4>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5BE2AAE9878B28AF8BED0777F2AEDE9DDFF3E9E0_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * ___property1, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___container2, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_m5BE2AAE9878B28AF8BED0777F2AEDE9DDFF3E9E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_13 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_14 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_13, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_14, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_18 = ___property1;
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::get_IsReadOnly() */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_20 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_21 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_22 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_23 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_22);
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_20);
		VirtActionInvoker2< Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::SetValue(TContainer&,TValue) */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_20, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_21, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_26 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_27 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_28 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_29 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_27, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_34 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_35 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_34, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_35, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_39 = ___property1;
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::get_IsReadOnly() */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_41 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_42 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_43 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_44 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_43);
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_41);
		VirtActionInvoker2< Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::SetValue(TContainer&,TValue) */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_41, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_42, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_47 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_48 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_49 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_50 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_48, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_55 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_56 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_55, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_56, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_60 = ___property1;
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::get_IsReadOnly() */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 * L_62 = ___property1;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_63 = ___container2;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_64 = ___value3;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  L_65 = (*(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_64);
		NullCheck((Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_62);
		VirtActionInvoker2< Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.Hash128,Unity.Mathematics.uint4>::SetValue(TContainer&,TValue) */, (Property_2_t0579F6755418EBE535BB3E8216FC0416BC399E33 *)L_62, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_63, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SceneSection,System.Int32>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m0AE5811FC1E6F202D562F6297F85F4E6722F9F2B_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * ___property1, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m0AE5811FC1E6F202D562F6297F85F4E6722F9F2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_13 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SceneSection,System.Int32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_13, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_18 = ___property1;
		NullCheck((Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::get_IsReadOnly() */, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_20 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_20);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_20, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_26 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SceneSection,System.Int32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_34 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_34, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_39 = ___property1;
		NullCheck((Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::get_IsReadOnly() */, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_41 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_41);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_41, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_47 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_55 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_55, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_60 = ___property1;
		NullCheck((Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::get_IsReadOnly() */, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED * L_62 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_62);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_tC7A1A84D922A72BBF654609E4FBB589733E37BED *)L_62, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SceneSection,Unity.Entities.Hash128>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_m1FB4D91F0A6CA59CB881C80A839D928F025148DA_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * ___property1, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * ___container2, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E_TisHash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F_m1FB4D91F0A6CA59CB881C80A839D928F025148DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_13 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_14 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_13, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_14, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_18 = ___property1;
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::get_IsReadOnly() */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_20 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_21 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_22 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_23 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_22);
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_20);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::SetValue(TContainer&,TValue) */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_20, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_21, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_26 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_27 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_28 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_29 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_27, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_34 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_35 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_34, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_35, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_39 = ___property1;
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::get_IsReadOnly() */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_41 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_42 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_43 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_44 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_43);
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_41);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::SetValue(TContainer&,TValue) */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_41, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_42, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_47 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_48 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_49 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_50 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_48, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_55 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_56 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *, SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_55, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_56, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_60 = ___property1;
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::get_IsReadOnly() */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 * L_62 = ___property1;
		SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E * L_63 = ___container2;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F * L_64 = ___value3;
		Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  L_65 = (*(Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F *)L_64);
		NullCheck((Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_62);
		VirtActionInvoker2< SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *, Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneSection,Unity.Entities.Hash128>::SetValue(TContainer&,TValue) */, (Property_2_t54A9D2E7EF0CDE4800E784E5E55AC55B4DC30A15 *)L_62, (SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)(SceneSection_tF75507E8B7A892A61D6323905DA289372ACEFC4E *)L_63, (Hash128_t0D3BE6C275B2086CAFB0B193CAC054C1B70E3D9F )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SceneTag,Unity.Entities.Entity>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m28F51FB0D9E833A39D3C300D899885818E0AC9F9_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * ___property1, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * ___container2, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04_TisEntity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8_m28F51FB0D9E833A39D3C300D899885818E0AC9F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_13 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_14 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_13, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_14, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_18 = ___property1;
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_20 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_21 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_22 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_23 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_22);
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_20);
		VirtActionInvoker2< SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_20, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_21, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_26 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_27 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_28 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_29 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_27, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_34 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_35 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_34, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_35, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_39 = ___property1;
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_41 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_42 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_43 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_44 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_43);
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_41);
		VirtActionInvoker2< SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_41, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_42, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_47 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_48 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_49 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_50 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_48, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_55 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_56 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *, SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_55, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_56, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_60 = ___property1;
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::get_IsReadOnly() */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 * L_62 = ___property1;
		SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 * L_63 = ___container2;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 * L_64 = ___value3;
		Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  L_65 = (*(Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 *)L_64);
		NullCheck((Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_62);
		VirtActionInvoker2< SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *, Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8  >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SceneTag,Unity.Entities.Entity>::SetValue(TContainer&,TValue) */, (Property_2_t2204417AEECF0C2033B43A6659824C66CB7D9E06 *)L_62, (SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)(SceneTag_t153A17EBF54933A1C1BD94BBFA7E8FF38DB43D04 *)L_63, (Entity_t514FBEC5923A575B6549FFCE0A7E0928BBB9F3D8 )L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Entities.SectionMetadataSetup,System.Int32>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisSectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF3BAE3F17343408E452B27C238117699F0E856E4_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * ___property1, SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisSectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mF3BAE3F17343408E452B27C238117699F0E856E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_13 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *, SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Entities.SectionMetadataSetup,System.Int32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_13, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_18 = ___property1;
		NullCheck((Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>::get_IsReadOnly() */, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_20 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_20);
		VirtActionInvoker2< SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_20, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_26 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Entities.SectionMetadataSetup,System.Int32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_34 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *, SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_34, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_39 = ___property1;
		NullCheck((Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>::get_IsReadOnly() */, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_41 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_41);
		VirtActionInvoker2< SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_41, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_47 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_55 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *, SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_55, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_60 = ___property1;
		NullCheck((Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>::get_IsReadOnly() */, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 * L_62 = ___property1;
		SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_62);
		VirtActionInvoker2< SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Entities.SectionMetadataSetup,System.Int32>::SetValue(TContainer&,TValue) */, (Property_2_t53202569C0A62547D2DFBC0C59B97FF7C2E90B74 *)L_62, (SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)(SectionMetadataSetup_t1E259423F861859A8F01FCC8CAEC7EACEB7E56E3 *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Mathematics.uint4,System.UInt32>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0ED34D3FF869F3375EDC90FD49B4B4E1C534EBCC_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * ___property1, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * ___container2, uint32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_Tisuint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m0ED34D3FF869F3375EDC90FD49B4B4E1C534EBCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_13 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_14 = ___container2;
		uint32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Mathematics.uint4,System.UInt32>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_13, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_14, (uint32_t*)(uint32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_18 = ___property1;
		NullCheck((Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::get_IsReadOnly() */, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_20 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_21 = ___container2;
		uint32_t* L_22 = ___value3;
		uint32_t L_23 = (*(uint32_t*)L_22);
		NullCheck((Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_20);
		VirtActionInvoker2< uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::SetValue(TContainer&,TValue) */, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_20, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_21, (uint32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_26 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_27 = ___container2;
		uint32_t* L_28 = ___value3;
		uint32_t L_29 = (*(uint32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Mathematics.uint4,System.UInt32>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_27, (uint32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_34 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_35 = ___container2;
		uint32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_34, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_35, (uint32_t*)(uint32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_39 = ___property1;
		NullCheck((Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::get_IsReadOnly() */, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_41 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_42 = ___container2;
		uint32_t* L_43 = ___value3;
		uint32_t L_44 = (*(uint32_t*)L_43);
		NullCheck((Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_41);
		VirtActionInvoker2< uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::SetValue(TContainer&,TValue) */, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_41, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_42, (uint32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_47 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_48 = ___container2;
		uint32_t* L_49 = ___value3;
		uint32_t L_50 = (*(uint32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_48, (uint32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_55 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_56 = ___container2;
		uint32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *, uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_55, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_56, (uint32_t*)(uint32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_60 = ___property1;
		NullCheck((Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::get_IsReadOnly() */, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E * L_62 = ___property1;
		uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC * L_63 = ___container2;
		uint32_t* L_64 = ___value3;
		uint32_t L_65 = (*(uint32_t*)L_64);
		NullCheck((Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_62);
		VirtActionInvoker2< uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *, uint32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Mathematics.uint4,System.UInt32>::SetValue(TContainer&,TValue) */, (Property_2_tFE7B1625D83DB06D5D98B6A2510B9B5D5556C70E *)L_62, (uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)(uint4_t630BFFF601EDEFA92809E170C8A91B3A2B7B57AC *)L_63, (uint32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisPropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936_TisRuntimeObject_mEAD8BB65CB885066570F30173CE53F2975C06142_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * ___property1, PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * ___container2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisPropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936_TisRuntimeObject_mEAD8BB65CB885066570F30173CE53F2975C06142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_13 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_14 = ___container2;
		RuntimeObject ** L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *, PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject ** >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_13, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_14, (RuntimeObject **)(RuntimeObject **)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_18 = ___property1;
		NullCheck((Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_20 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_21 = ___container2;
		RuntimeObject ** L_22 = ___value3;
		RuntimeObject * L_23 = (*(RuntimeObject **)L_22);
		NullCheck((Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_20);
		VirtActionInvoker2< PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_20, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_21, (RuntimeObject *)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_26 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_27 = ___container2;
		RuntimeObject ** L_28 = ___value3;
		RuntimeObject * L_29 = (*(RuntimeObject **)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject * >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_27, (RuntimeObject *)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_34 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_35 = ___container2;
		RuntimeObject ** L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *, PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_34, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_35, (RuntimeObject **)(RuntimeObject **)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_39 = ___property1;
		NullCheck((Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_41 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_42 = ___container2;
		RuntimeObject ** L_43 = ___value3;
		RuntimeObject * L_44 = (*(RuntimeObject **)L_43);
		NullCheck((Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_41);
		VirtActionInvoker2< PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_41, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_42, (RuntimeObject *)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_47 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_48 = ___container2;
		RuntimeObject ** L_49 = ___value3;
		RuntimeObject * L_50 = (*(RuntimeObject **)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_48, (RuntimeObject *)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_55 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_56 = ___container2;
		RuntimeObject ** L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *, PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject ** >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_55, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_56, (RuntimeObject **)(RuntimeObject **)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_60 = ___property1;
		NullCheck((Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::get_IsReadOnly() */, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 * L_62 = ___property1;
		PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 * L_63 = ___container2;
		RuntimeObject ** L_64 = ___value3;
		RuntimeObject * L_65 = (*(RuntimeObject **)L_64);
		NullCheck((Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_62);
		VirtActionInvoker2< PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *, RuntimeObject * >::Invoke(13 /* System.Void Unity.Properties.Property`2<Unity.Properties.Internal.PropertyWrapper`1<System.Object>,System.Object>::SetValue(TContainer&,TValue) */, (Property_2_t032C08C2FDFDDE6502CB0E1C9197E60079EE9353 *)L_62, (PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)(PropertyWrapper_1_t991EC57970ADC3680B53E1DF131309263B718936 *)L_63, (RuntimeObject *)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<UnityEngine.Keyframe,System.Int32Enum>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m0527246AC58ACB8CB0A9A5AB51DFEBB36C4F631A_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, int32_t* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m0527246AC58ACB8CB0A9A5AB51DFEBB36C4F631A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		int32_t* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<UnityEngine.Keyframe,System.Int32Enum>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (int32_t*)(int32_t*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_18 = ___property1;
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_20 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_21 = ___container2;
		int32_t* L_22 = ___value3;
		int32_t L_23 = (*(int32_t*)L_22);
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_20);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_20, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_21, (int32_t)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_26 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_27 = ___container2;
		int32_t* L_28 = ___value3;
		int32_t L_29 = (*(int32_t*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<UnityEngine.Keyframe,System.Int32Enum>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_27, (int32_t)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_34 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_35 = ___container2;
		int32_t* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_34, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_35, (int32_t*)(int32_t*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_39 = ___property1;
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_41 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_42 = ___container2;
		int32_t* L_43 = ___value3;
		int32_t L_44 = (*(int32_t*)L_43);
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_41);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_41, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_42, (int32_t)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_47 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_48 = ___container2;
		int32_t* L_49 = ___value3;
		int32_t L_50 = (*(int32_t*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_48, (int32_t)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_55 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_56 = ___container2;
		int32_t* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_55, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_56, (int32_t*)(int32_t*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_60 = ___property1;
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::get_IsReadOnly() */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F * L_62 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_63 = ___container2;
		int32_t* L_64 = ___value3;
		int32_t L_65 = (*(int32_t*)L_64);
		NullCheck((Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_62);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, int32_t >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Int32Enum>::SetValue(TContainer&,TValue) */, (Property_2_tAEC2E4F2D388DF6FEAD1E61BAC4BC94AFCE08D0F *)L_62, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_63, (int32_t)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// Unity.Properties.VisitStatus Unity.Properties.Internal.PropertyVisitorAdapterExtensions::TryVisit<UnityEngine.Keyframe,System.Single>(System.Collections.Generic.List`1/Enumerator<Unity.Properties.IPropertyVisitorAdapter>,Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDE546355DDF1C332F94D57B4691509CDC4B340EF_gshared (Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9  ___adapters0, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * ___property1, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * ___container2, float* ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyVisitorAdapterExtensions_TryVisit_TisKeyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDE546355DDF1C332F94D57B4691509CDC4B340EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// var status = VisitStatus.Unhandled;
		V_0 = (int32_t)0;
		goto IL_00e6;
	}

IL_0007:
	{
		// var adapter = adapters.Current;
		RuntimeObject* L_0 = Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_inline((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_get_Current_m0404DDA82B19BA92B739AD23C35F841470F0EBB1_RuntimeMethod_var);
		// switch (adapter)
		V_1 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_00e6;
		}
	}
	{
		RuntimeObject* L_2 = V_1;
		RuntimeObject* L_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		V_2 = (RuntimeObject*)L_3;
		if (L_3)
		{
			goto IL_004f;
		}
	}

IL_001f:
	{
		RuntimeObject* L_4 = V_1;
		RuntimeObject* L_5 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		V_3 = (RuntimeObject*)L_5;
		if (L_5)
		{
			goto IL_0073;
		}
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 2)));
		V_4 = (RuntimeObject*)L_7;
		if (L_7)
		{
			goto IL_0087;
		}
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_1;
		RuntimeObject* L_9 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, IL2CPP_RGCTX_DATA(method->rgctx_data, 3)));
		V_5 = (RuntimeObject*)L_9;
		if (L_9)
		{
			goto IL_00ac;
		}
	}

IL_003f:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_10, IVisit_t76AABCADA3B958FDFB317C47CA8D95F44458CDDF_il2cpp_TypeInfo_var));
		V_6 = (RuntimeObject*)L_11;
		if (!L_11)
		{
			goto IL_00e6;
		}
	}
	{
		goto IL_00c1;
	}

IL_004f:
	{
		RuntimeObject* L_12 = V_2;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_13 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_14 = ___container2;
		float* L_15 = ___value3;
		NullCheck((RuntimeObject*)L_12);
		int32_t L_16 = InterfaceFuncInvoker3< int32_t, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.IVisit`2<UnityEngine.Keyframe,System.Single>::Visit(Unity.Properties.Property`2<TContainer,TValue>,TContainer&,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_12, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_13, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_14, (float*)(float*)L_15);
		int32_t L_17 = (int32_t)L_16;
		V_0 = (int32_t)L_17;
		if (!L_17)
		{
			goto IL_001f;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_18 = ___property1;
		NullCheck((Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_18);
		bool L_19 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::get_IsReadOnly() */, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_18);
		if (L_19)
		{
			goto IL_0071;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_20 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_21 = ___container2;
		float* L_22 = ___value3;
		float L_23 = (*(float*)L_22);
		NullCheck((Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_20);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::SetValue(TContainer&,TValue) */, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_20, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_21, (float)L_23);
	}

IL_0071:
	{
		// return status;
		int32_t L_24 = V_0;
		return (int32_t)L_24;
	}

IL_0073:
	{
		RuntimeObject* L_25 = V_3;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_26 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_27 = ___container2;
		float* L_28 = ___value3;
		float L_29 = (*(float*)L_28);
		NullCheck((RuntimeObject*)L_25);
		int32_t L_30 = InterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(0 /* Unity.Properties.VisitStatus Unity.Properties.Adapters.Contravariant.IVisit`2<UnityEngine.Keyframe,System.Single>::Visit(Unity.Properties.IProperty`1<TContainer>,TContainer&,TValue) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_25, (RuntimeObject*)L_26, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_27, (float)L_29);
		int32_t L_31 = (int32_t)L_30;
		V_0 = (int32_t)L_31;
		if (!L_31)
		{
			goto IL_0029;
		}
	}
	{
		// return status;
		int32_t L_32 = V_0;
		return (int32_t)L_32;
	}

IL_0087:
	{
		RuntimeObject* L_33 = V_4;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_34 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_35 = ___container2;
		float* L_36 = ___value3;
		NullCheck((RuntimeObject*)L_33);
		int32_t L_37 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6), (RuntimeObject*)L_33, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_34, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_35, (float*)(float*)L_36);
		int32_t L_38 = (int32_t)L_37;
		V_0 = (int32_t)L_38;
		if (!L_38)
		{
			goto IL_0034;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_39 = ___property1;
		NullCheck((Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_39);
		bool L_40 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::get_IsReadOnly() */, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_39);
		if (L_40)
		{
			goto IL_00aa;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_41 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_42 = ___container2;
		float* L_43 = ___value3;
		float L_44 = (*(float*)L_43);
		NullCheck((Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_41);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::SetValue(TContainer&,TValue) */, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_41, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_42, (float)L_44);
	}

IL_00aa:
	{
		// return status;
		int32_t L_45 = V_0;
		return (int32_t)L_45;
	}

IL_00ac:
	{
		RuntimeObject* L_46 = V_5;
		// when (status = typed.Visit(property, ref container, value)) != VisitStatus.Unhandled:
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_47 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_48 = ___container2;
		float* L_49 = ___value3;
		float L_50 = (*(float*)L_49);
		NullCheck((RuntimeObject*)L_46);
		int32_t L_51 = GenericInterfaceFuncInvoker3< int32_t, RuntimeObject*, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 7), (RuntimeObject*)L_46, (RuntimeObject*)L_47, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_48, (float)L_50);
		int32_t L_52 = (int32_t)L_51;
		V_0 = (int32_t)L_52;
		if (!L_52)
		{
			goto IL_003f;
		}
	}
	{
		// return status;
		int32_t L_53 = V_0;
		return (int32_t)L_53;
	}

IL_00c1:
	{
		RuntimeObject* L_54 = V_6;
		// when (status = typed.Visit(property, ref container, ref value)) != VisitStatus.Unhandled:
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_55 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_56 = ___container2;
		float* L_57 = ___value3;
		NullCheck((RuntimeObject*)L_54);
		int32_t L_58 = GenericInterfaceFuncInvoker3< int32_t, Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *, Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 8), (RuntimeObject*)L_54, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_55, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_56, (float*)(float*)L_57);
		int32_t L_59 = (int32_t)L_58;
		V_0 = (int32_t)L_59;
		if (!L_59)
		{
			goto IL_00e6;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_60 = ___property1;
		NullCheck((Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_60);
		bool L_61 = VirtFuncInvoker0< bool >::Invoke(11 /* System.Boolean Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::get_IsReadOnly() */, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_60);
		if (L_61)
		{
			goto IL_00e4;
		}
	}
	{
		// if (!property.IsReadOnly) property.SetValue(ref container, value);
		Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 * L_62 = ___property1;
		Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 * L_63 = ___container2;
		float* L_64 = ___value3;
		float L_65 = (*(float*)L_64);
		NullCheck((Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_62);
		VirtActionInvoker2< Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *, float >::Invoke(13 /* System.Void Unity.Properties.Property`2<UnityEngine.Keyframe,System.Single>::SetValue(TContainer&,TValue) */, (Property_2_t9058680C55503EC5EB1F071811C0A354E1BB59B6 *)L_62, (Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)(Keyframe_t9E945CACC5AC36E067B15A634096A223A06D2D74 *)L_63, (float)L_65);
	}

IL_00e4:
	{
		// return status;
		int32_t L_66 = V_0;
		return (int32_t)L_66;
	}

IL_00e6:
	{
		// while (adapters.MoveNext())
		bool L_67 = Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110((Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(Enumerator_t78934865F744EF5741DD44596A2189C64D06D8C9 *)(&___adapters0), /*hidden argument*/Enumerator_MoveNext_mB7EB9E34E94B6AAEC9C82FFF20B7B4EEB42E7110_RuntimeMethod_var);
		if (L_67)
		{
			goto IL_0007;
		}
	}
	{
		// return status;
		int32_t L_68 = V_0;
		return (int32_t)L_68;
	}
}
// UnityEngine.GameObject Unity.Physics.Authoring.PhysicsShapeExtensions::FindFirstEnabledAncestor<System.Object>(UnityEngine.GameObject,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PhysicsShapeExtensions_FindFirstEnabledAncestor_TisRuntimeObject_m23A3D9831235CBED8547B3DF42AB47456B7C9E1D_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___shape0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsShapeExtensions_FindFirstEnabledAncestor_TisRuntimeObject_m23A3D9831235CBED8547B3DF42AB47456B7C9E1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B5_0 = NULL;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B2_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B4_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// shape.GetComponentsInParent(true, buffer);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___shape0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___buffer1;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		((  void (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)1, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// GameObject result = null;
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		V_1 = (int32_t)0;
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (int32_t)L_3;
		goto IL_0068;
	}

IL_0015:
	{
		//                 if (
		// #if LEGACY_PHYSICS
		//                     (buffer[i] as LegacyCollider)?.enabled ??
		// #endif
		//                     (buffer[i] as MonoBehaviour)?.enabled ?? true)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___buffer1;
		int32_t L_5 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)IsInst((RuntimeObject*)L_6, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_il2cpp_TypeInfo_var));
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0049;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = ___buffer1;
		int32_t L_9 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_11 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)IsInst((RuntimeObject*)L_10, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var));
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_004e;
	}

IL_0042:
	{
		NullCheck((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0);
		bool L_12 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_12));
		goto IL_004e;
	}

IL_0049:
	{
		NullCheck((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B5_0);
		bool L_13 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_13));
	}

IL_004e:
	{
		if (!G_B6_0)
		{
			goto IL_0064;
		}
	}
	{
		// result = buffer[i].gameObject;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ___buffer1;
		int32_t L_15 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14);
		RuntimeObject * L_16 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_16, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_17;
		// break;
		goto IL_006c;
	}

IL_0064:
	{
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		int32_t L_18 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0068:
	{
		// for (int i = 0, count = buffer.Count; i < count; ++i)
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0015;
		}
	}

IL_006c:
	{
		// buffer.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_21 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_21, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		// return result;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = V_0;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_22;
	}
}
// UnityEngine.GameObject Unity.Physics.Authoring.PhysicsShapeExtensions::FindTopmostEnabledAncestor<System.Object>(UnityEngine.GameObject,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PhysicsShapeExtensions_FindTopmostEnabledAncestor_TisRuntimeObject_mED96914BDA0878E279EB3B58052D4DEF40DA2E9F_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___shape0, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___buffer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicsShapeExtensions_FindTopmostEnabledAncestor_TisRuntimeObject_mED96914BDA0878E279EB3B58052D4DEF40DA2E9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	int32_t V_1 = 0;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B5_0 = NULL;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * G_B2_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B4_0 = NULL;
	MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		// shape.GetComponentsInParent(true, buffer);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___shape0;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_1 = ___buffer1;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0);
		((  void (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, bool, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (bool)1, (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// GameObject result = null;
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// for (var i = buffer.Count - 1; i >= 0; --i)
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_2 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2);
		int32_t L_3 = ((  int32_t (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		goto IL_0068;
	}

IL_0015:
	{
		//                 if (
		// #if LEGACY_PHYSICS
		//                     (buffer[i] as LegacyCollider)?.enabled ??
		// #endif
		//                     (buffer[i] as MonoBehaviour)?.enabled ?? true
		//                 )
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = ___buffer1;
		int32_t L_5 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4);
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_4, (int32_t)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_7 = (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)IsInst((RuntimeObject*)L_6, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_il2cpp_TypeInfo_var));
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_0049;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = ___buffer1;
		int32_t L_9 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8);
		RuntimeObject * L_10 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * L_11 = (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)((MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 *)IsInst((RuntimeObject*)L_10, MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429_il2cpp_TypeInfo_var));
		G_B3_0 = L_11;
		if (L_11)
		{
			G_B4_0 = L_11;
			goto IL_0042;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_004e;
	}

IL_0042:
	{
		NullCheck((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0);
		bool L_12 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB((Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 *)G_B4_0, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_12));
		goto IL_004e;
	}

IL_0049:
	{
		NullCheck((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B5_0);
		bool L_13 = Collider_get_enabled_mED644D98C6AC2DF95BD86145E8D31AD7081C76EB((Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF *)G_B5_0, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_13));
	}

IL_004e:
	{
		if (!G_B6_0)
		{
			goto IL_0064;
		}
	}
	{
		// result = buffer[i].gameObject;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_14 = ___buffer1;
		int32_t L_15 = V_1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14);
		RuntimeObject * L_16 = ((  RuntimeObject * (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_14, (int32_t)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_16, /*hidden argument*/NULL);
		V_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_17;
		// break;
		goto IL_006c;
	}

IL_0064:
	{
		// for (var i = buffer.Count - 1; i >= 0; --i)
		int32_t L_18 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_0068:
	{
		// for (var i = buffer.Count - 1; i >= 0; --i)
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}

IL_006c:
	{
		// buffer.Clear();
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_20 = ___buffer1;
		NullCheck((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20);
		((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)L_20, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		// return result;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_21 = V_0;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_21;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<System.Object>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * ___eventData1, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * ___callbackFunction2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_ExecuteHierarchy_TisRuntimeObject_m2E66C1E626886F04E8AEC36183F9E982392C62F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	{
		// GetEventChain(root, s_InternalTransformList);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_1 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		ExecuteEvents_GetEventChain_m27DBBF6D0FE769C131AB96781E9BFFEDA545F155((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_0, (RuntimeObject*)L_1, /*hidden argument*/NULL);
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		V_0 = (int32_t)0;
		goto IL_0035;
	}

IL_000f:
	{
		// var transform = s_InternalTransformList[i];
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_2 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		int32_t L_3 = V_0;
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_2, (int32_t)L_3, /*hidden argument*/List_1_get_Item_mA33D8A6F21573AD262EE055BA64C73668489B86D_RuntimeMethod_var);
		V_1 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_4;
		// if (Execute(transform.gameObject, eventData, callbackFunction))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_5, /*hidden argument*/NULL);
		BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 * L_7 = ___eventData1;
		EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D * L_8 = ___callbackFunction2;
		bool L_9 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *, EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_6, (BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5 *)L_7, (EventFunction_1_tCDB8D379DD3CEC56B7828A86C5DCF113D208CF8D *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return transform.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_1;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_10, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_11;
	}

IL_0031:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		// for (var i = 0; i < s_InternalTransformList.Count; i++)
		int32_t L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 * L_14 = ((ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_StaticFields*)il2cpp_codegen_static_fields_for(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var))->get_s_InternalTransformList_18();
		NullCheck((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14);
		int32_t L_15 = List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_inline((List_1_tE2895D6ED3A7C02005A89712BECBA7812B6CCC91 *)L_14, /*hidden argument*/List_1_get_Count_m60ECB73FE15B95838DB91630185659793A5B3B8B_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ExecuteEvents_GetEventHandler_TisRuntimeObject_m5740E26204A115597421DC622828C0601C2BECA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	{
		// if (root == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_000b:
	{
		// Transform t = root.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = ___root0;
		NullCheck((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_2, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_3;
		goto IL_002f;
	}

IL_0014:
	{
		// if (CanHandleEvent<T>(t.gameObject))
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ExecuteEvents_t622B95FF46A568C8205B76C1D4111049FC265985_il2cpp_TypeInfo_var);
		bool L_6 = ((  bool (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		// return t.gameObject;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C((Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *)L_7, /*hidden argument*/NULL);
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)L_8;
	}

IL_0028:
	{
		// t = t.parent;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = V_0;
		NullCheck((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_9, /*hidden argument*/NULL);
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)L_10;
	}

IL_002f:
	{
		// while (t != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1((Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}
}
// UnityEngine.UIElements.StyleEnum`1<T> UnityEngine.UIElements.StyleValueExtensions::ToStyleEnum<System.Int32Enum>(UnityEngine.UIElements.StyleInt,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  StyleValueExtensions_ToStyleEnum_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m23F1DB8B35560B2F8A54DBB59C111DE0ED0FF86E_gshared (StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89  ___styleInt0, int32_t ___value1, const RuntimeMethod* method)
{
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___value1;
		int32_t L_1 = StyleInt_get_keyword_mB6F2DD4026E11125E24BC9EABD08C98900B02104((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1__ctor_m9808A49AC4955C97AB41242A2EB776741D566E82((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_2 = StyleInt_get_specificity_m1D4B1CE4C250A58A554AB4A3F9EB135842107CDA((StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(StyleInt_tA03B68441BD5D45C1660DF32B2A287FB7113FA89 *)(&___styleInt0), /*hidden argument*/NULL);
		StyleEnum_1_set_specificity_mF1C94EF10622C93C04EA507D94C7294E5AFAC06B((StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C *)(&V_0), (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_3 = V_0;
		V_1 = (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_3;
		goto IL_0023;
	}

IL_0023:
	{
		StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C  L_4 = V_1;
		return (StyleEnum_1_tA4AF2FC0364C1E39AD284C192C959587F92E411C )L_4;
	}
}
// Vuforia.TargetFinder Vuforia.ObjectTracker::GetTargetFinder<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_gshared (ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectTracker_GetTargetFinder_TisRuntimeObject_m6E27168139E06DBCEAF9295459F4EEB80B4D0169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * V_0 = NULL;
	int32_t V_1 = 0;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		bool L_4 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_1, (Type_t *)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		V_1 = (int32_t)0;
		goto IL_002d;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral7C31430FA20B8B31FA24474349C2089797CD5898, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_002d:
	{
		Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * L_5 = (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)__this->get_mTargetFinders_3();
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_6, /*hidden argument*/NULL);
		NullCheck((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_5);
		bool L_8 = Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_5, (Type_t *)L_7, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m80C7C339369BBCBEC167894A5D8AF61911BF74F7_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_009f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaWrapper_tDC7A7816CA0A902A65EAE1EEBA8A27D87F94C1FD_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = VuforiaWrapper_get_Instance_mF9297136720EAA4FA0D0EF61C6C874CCF5CFFF18(/*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck((RuntimeObject*)L_9);
		intptr_t L_11 = InterfaceFuncInvoker1< intptr_t, int32_t >::Invoke(107 /* System.IntPtr Vuforia.IVuforiaWrapper::ObjectTrackerGetTargetFinder(System.Int32) */, IVuforiaWrapper_t9B4B3D91B44F2ECED1836F91D6320F8F30724FE2_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (int32_t)L_10);
		V_2 = (intptr_t)L_11;
		intptr_t L_12 = V_2;
		bool L_13 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29((RuntimeObject *)_stringLiteral3FED6A49E132919E1671DD9D12FC98604DA18137, /*hidden argument*/NULL);
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)NULL;
	}

IL_006b:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_14, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_0_0_0_var) };
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_16, /*hidden argument*/NULL);
		bool L_18 = Type_op_Equality_m7040622C9E1037EFC73E1F0EDB1DD241282BE3D8((Type_t *)L_15, (Type_t *)L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		intptr_t L_19 = V_2;
		ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 * L_20 = (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957 *)il2cpp_codegen_object_new(ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957_il2cpp_TypeInfo_var);
		ImageTargetFinder__ctor_mC6A817206F021AC47283AE1E4E5E42AA9E6A3FB1(L_20, (intptr_t)L_19, /*hidden argument*/NULL);
		V_0 = (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_20;
	}

IL_008d:
	{
		Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 * L_21 = (Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)__this->get_mTargetFinders_3();
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		Type_t * L_23 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60((RuntimeObject *)L_22, /*hidden argument*/NULL);
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_24 = V_0;
		NullCheck((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_21);
		Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D((Dictionary_2_tEC75AD26217DE6224C04ADE3564B30C385577729 *)L_21, (Type_t *)L_23, (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_24, /*hidden argument*/Dictionary_2_set_Item_mDEA4ABC0C629C2B32407FF9EBF537D93A868365D_RuntimeMethod_var);
	}

IL_009f:
	{
		TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * L_25 = V_0;
		return (TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC *)L_25;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.StateManager::GetStatusOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisRuntimeObject_m34680F576B6F65E63B55C78557E632C82933F0CC_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_tEF67DEC5E1E2460BDDFC809FAD92AA33526C37F3 *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData/TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m9E595C9E16CE48D868DA1E2D28B606B9A2F3ABC5_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t9345A2C4627555419189CF853278DE7693A977BB * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t9345A2C4627555419189CF853278DE7693A977BB * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t9345A2C4627555419189CF853278DE7693A977BB *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t9345A2C4627555419189CF853278DE7693A977BB *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t9345A2C4627555419189CF853278DE7693A977BB *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/Status Vuforia.StateManager::GetStatusOrDefault<Vuforia.TrackerData/VuMarkTargetResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/Status>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusOrDefault_TisVuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE_m8A51714769F1CF0F89FF3C0AE0EFC3B28414B6B8_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C * ___statusGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000b:
	{
		Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C * L_3 = ___statusGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE  L_6 = InterfaceFuncInvoker1< VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/VuMarkTargetResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *, VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t10E5DCBF8BB788A1F193C7AB0B6AF702429C617C *)L_3, (VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<System.Object>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisRuntimeObject_m2D5D65EE543C7D597BB5A15970948AEA99480704_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject * L_6 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t748D32FB416A2F35B07669BC8B2FBCE73CA15A9A *)L_3, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
// Vuforia.TrackableBehaviour/StatusInfo Vuforia.StateManager::GetStatusInfoOrDefault<Vuforia.TrackerData/TrackableResultData>(System.Collections.Generic.IDictionary`2<System.Int32,T>,System.Int32,System.Func`2<T,Vuforia.TrackableBehaviour/StatusInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateManager_GetStatusInfoOrDefault_TisTrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_m97A6B43AFA084BEC5979CA58AC21EBB171588D40_gshared (RuntimeObject* ___map0, int32_t ___id1, Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F * ___statusInfoGetFunc2, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___map0;
		int32_t L_1 = ___id1;
		NullCheck((RuntimeObject*)L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::ContainsKey(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_0, (int32_t)L_1);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(1);
	}

IL_000b:
	{
		Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F * L_3 = ___statusInfoGetFunc2;
		RuntimeObject* L_4 = ___map0;
		int32_t L_5 = ___id1;
		NullCheck((RuntimeObject*)L_4);
		TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA  L_6 = InterfaceFuncInvoker1< TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.TrackerData/TrackableResultData>::get_Item(!0) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4, (int32_t)L_5);
		NullCheck((Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *)L_3);
		int32_t L_7 = ((  int32_t (*) (Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *, TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Func_2_t94A1AE9A30A777BA5369BD76A4B820A0B133434F *)L_3, (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA )L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (int32_t)L_7;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
