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

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t84A1E76CEF8A66F732C15925C1E1DBC7446DB3A4;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_tD431CA53D2DA04D533C85B6F283DF4535D06B9FC;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t6CC82F01278D7AA7C3DC2939506F0C54E06AAADE;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03;
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t358A375827DE759C632FEC77C83FEE87CCE55529;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Threading.ManualResetEvent
struct ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.BeforeRenderHelper/OrderBlock[]
struct OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80;
// UnityEngine.ISubsystem
struct ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0;
// UnityEngine.XR.ARSubsystems.XRReferenceImage[]
struct XRReferenceImageU5BU5D_t1EEAB0EDA5828C38140B4D8D48E11247C4789BCE;
// UnityEngine.XR.ARSubsystems.XRReferenceObject[]
struct XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t2574091AF57F902BF504098AB113416E8D15186A;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF;
IL2CPP_EXTERN_C String_t* _stringLiteral0DC89F85B619068818F6FFC8B793A74773A52F83;
IL2CPP_EXTERN_C String_t* _stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3199988097E4BB3103E8C34B8DFE8796545D8F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D54973F528B01019A58A52D34D518405A01B891;
IL2CPP_EXTERN_C String_t* _stringLiteral5332787A355F6C7E2C752D24323C8EB3E69C380D;
IL2CPP_EXTERN_C String_t* _stringLiteral5D8C4EB43E44C7CAE91B24474164F33B3D962841;
IL2CPP_EXTERN_C String_t* _stringLiteral64358BBCCF8C380C05E774933982A64691BCEB28;
IL2CPP_EXTERN_C String_t* _stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF;
IL2CPP_EXTERN_C String_t* _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346;
IL2CPP_EXTERN_C String_t* _stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA;
IL2CPP_EXTERN_C String_t* _stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m4638D46950F764E50418FEB995EE29742C5B17C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mD8236EFAEC3C78FAF72A659E8CEEADCD12BF4444_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m63A0A4CC25A7F77EB320B3CD8F1AAFA45AF72781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m184A3AAE2B58BD178A9DCB7D86E275D609FD304F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m94C436080B8BCADEC1392A2800494D5319648195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_mDC79BB386EDCE3494B7191DA53CEFC72FCBDE09D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_m84C596008C9320FCDC3834D171AA87DA6F550EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m1B78EA31ACB22F78148B362DD1EFF5700E0122B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m12DDF4F60DC9EE1E79D82525A989B51E5AADC9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_InternalArray__get_Item_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mEAB0F6AB160AB4D9AC4AFE14862C3C3ACD7F07F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDB8BD60EC7BFC7BD5673CF765B549FABE56B3736_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m4638D46950F764E50418FEB995EE29742C5B17C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mD8236EFAEC3C78FAF72A659E8CEEADCD12BF4444_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m63A0A4CC25A7F77EB320B3CD8F1AAFA45AF72781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m184A3AAE2B58BD178A9DCB7D86E275D609FD304F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m94C436080B8BCADEC1392A2800494D5319648195_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_mDC79BB386EDCE3494B7191DA53CEFC72FCBDE09D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_m84C596008C9320FCDC3834D171AA87DA6F550EBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m1B78EA31ACB22F78148B362DD1EFF5700E0122B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m12DDF4F60DC9EE1E79D82525A989B51E5AADC9E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Array_InternalArray__get_Item_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mEAB0F6AB160AB4D9AC4AFE14862C3C3ACD7F07F9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m7AEF0374A18EED15CB2B6318117FDC6364AC2F3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mA75245E8BF9FAB8A58686B2B26E4FC342453E774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManagedReferenceImage_ResolveGCHandle_TisRuntimeObject_mE69FCDC0DC2CC3F8A89C25CD85559C6AE148E234_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDB8BD60EC7BFC7BD5673CF765B549FABE56B3736_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScriptableObject_CreateInstance_TisRuntimeObject_m7A8F75139352BA04C2EEC1D72D430FAC94C753DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m8D18B6F86DF3BF0F0C2102EFAE7DF661C3A09931_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67GenericMethods2_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F;
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828;
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05;
struct OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101;
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0;
struct XRReferenceImageU5BU5D_t1EEAB0EDA5828C38140B4D8D48E11247C4789BCE;
struct XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498;

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


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.CollectionExtensions
struct  CollectionExtensions_t1943508648E4A2A0FBCF65503E3BD7032F003E0A  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct  Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___entries_1)); }
	inline EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0220FF45E5BFB60B915FDBD07078D14BE4CB9A68* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___keys_7)); }
	inline KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0D15C0166A58F8A2CEE6D84105856B797F7DAC6B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ___values_8)); }
	inline ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCF4DC3453D4D30322E6F91556B0561160EA9612A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Char>
struct  EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields, ___Value_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_Value_0() const { return ___Value_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
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


// System.Linq.Enumerable
struct  Enumerable_tECC271C86C6E8F72E4E27C7C8FD5DB7B63D5D737  : public RuntimeObject
{
public:

public:
};


// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData_LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorInfo_0)); }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t9CB51BFC178DF1CBCA5FD16B2D58229618F23EFF * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctorArgs_1), (void*)value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedArgs_2), (void*)value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t2CD9D78F97B6517D5DEE35DEE97159B02C078F88, ___lazyData_3)); }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t4C5DC81EA7740306D01218D48006034D024FBA38 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lazyData_3), (void*)value);
	}
};


// System.Reflection.CustomAttributeExtensions
struct  CustomAttributeExtensions_t46E823943384E2B9D2E7A6A492117E1A2331F5D3  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t6BCD6CAFCA9C54EDD15CC80B7D7416E8711E8AAB  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Threading.Interlocked
struct  Interlocked_tFC2D55B9E6E624D5151A9DC89A50567677F7F433  : public RuntimeObject
{
public:

public:
};


// System.Threading.LazyInitializer
struct  LazyInitializer_tFC4C124B28D8DA023D36F3298FC7EA95653CB8A7  : public RuntimeObject
{
public:

public:
};


// System.Threading.Volatile
struct  Volatile_tE96815F4BB2ADA7D8E4005AD52AC020C22856632  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_t2B01CE90013CE5874AC6E98925C55FA6C1F5F4BA  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
struct  NativeSliceUnsafeUtility_tB3605A4284F573BC35D116BDDA1914E2CDC5A062  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct  UnsafeUtility_t78D5F2C60E6994F1B44020D1B4368BB8DD559AA8  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.NativeSliceExtensions
struct  NativeSliceExtensions_tD1D9582E4D51457C6738BB68CB4E5A2234EAA775  : public RuntimeObject
{
public:

public:
};


// Unity.Jobs.IJobExtensions
struct  IJobExtensions_t0D416BD0BAAE2577683C1379CC62F29964F4D752  : public RuntimeObject
{
public:

public:
};


// Unity.Jobs.IJobParallelForExtensions
struct  IJobParallelForExtensions_tE5A9098E3E7E5F5617857743A369E9BFF53A5479  : public RuntimeObject
{
public:

public:
};


// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t59E317D853AAC982D5D18D4C1581422FC151F7E3* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____disallowMultipleComponentArray_0), (void*)value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_tAE8DA030BEBA505907556F161EB49FD565976C80* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____executeInEditModeArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t22E0A0A6E68E2DFAFB28B91CC8AFCE4630723601_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t4295259AA991FCAA75878E4731813266CFC5351D* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____requireComponentArray_2), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.NativeCopyUtility
struct  NativeCopyUtility_t829515E8900A8C56970A8DCA18252FF587DA40D1  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
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
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
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
struct  IntPtr_t 
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


// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentType_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
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
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
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
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// Unity.Collections.NativeSlice`1<System.Byte>
struct  NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// Unity.Collections.NativeSlice`1<System.UInt32>
struct  NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A 
{
public:
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.BeforeRenderHelper_OrderBlock
struct  OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper_OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper_OrderBlock::callback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727, ___callback_1)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct  LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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


// UnityEngine.Rendering.BatchVisibility
struct  BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// UnityEngine.UnitySynchronizationContext_WorkRequest
struct  WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateCallback
	SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext_WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext_WorkRequest::m_WaitHandle
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t3F9C0164860E4AA5138DF8B4488DFB0D33147F01 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94, ___m_WaitHandle_2)); }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_tDFAF117B200ECA4CCF4FD09593F949A016D55408 * ___m_WaitHandle_2;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_One_3)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
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


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_7 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int16>
struct  Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1::a
	int16_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1::b
	int16_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1::c
	int16_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127, ___a_0)); }
	inline int16_t get_a_0() const { return ___a_0; }
	inline int16_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int16_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127, ___b_1)); }
	inline int16_t get_b_1() const { return ___b_1; }
	inline int16_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int16_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127, ___c_2)); }
	inline int16_t get_c_2() const { return ___c_2; }
	inline int16_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int16_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int32>
struct  Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1::a
	int32_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1::b
	int32_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SerializableGuid
struct  SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidLow
	uint64_t ___m_GuidLow_1;
	// System.UInt64 UnityEngine.XR.ARSubsystems.SerializableGuid::m_GuidHigh
	uint64_t ___m_GuidHigh_2;

public:
	inline static int32_t get_offset_of_m_GuidLow_1() { return static_cast<int32_t>(offsetof(SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821, ___m_GuidLow_1)); }
	inline uint64_t get_m_GuidLow_1() const { return ___m_GuidLow_1; }
	inline uint64_t* get_address_of_m_GuidLow_1() { return &___m_GuidLow_1; }
	inline void set_m_GuidLow_1(uint64_t value)
	{
		___m_GuidLow_1 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_2() { return static_cast<int32_t>(offsetof(SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821, ___m_GuidHigh_2)); }
	inline uint64_t get_m_GuidHigh_2() const { return ___m_GuidHigh_2; }
	inline uint64_t* get_address_of_m_GuidHigh_2() { return &___m_GuidHigh_2; }
	inline void set_m_GuidHigh_2(uint64_t value)
	{
		___m_GuidHigh_2 = value;
	}
};

struct SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.SerializableGuid::k_Empty
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___k_Empty_0;

public:
	inline static int32_t get_offset_of_k_Empty_0() { return static_cast<int32_t>(offsetof(SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821_StaticFields, ___k_Empty_0)); }
	inline SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  get_k_Empty_0() const { return ___k_Empty_0; }
	inline SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821 * get_address_of_k_Empty_0() { return &___k_Empty_0; }
	inline void set_k_Empty_0(SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  value)
	{
		___k_Empty_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct  XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___m_Entries_3;

public:
	inline static int32_t get_offset_of_m_GuidLow_0() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_GuidLow_0)); }
	inline uint64_t get_m_GuidLow_0() const { return ___m_GuidLow_0; }
	inline uint64_t* get_address_of_m_GuidLow_0() { return &___m_GuidLow_0; }
	inline void set_m_GuidLow_0(uint64_t value)
	{
		___m_GuidLow_0 = value;
	}

	inline static int32_t get_offset_of_m_GuidHigh_1() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_GuidHigh_1)); }
	inline uint64_t get_m_GuidHigh_1() const { return ___m_GuidHigh_1; }
	inline uint64_t* get_address_of_m_GuidHigh_1() { return &___m_GuidHigh_1; }
	inline void set_m_GuidHigh_1(uint64_t value)
	{
		___m_GuidHigh_1 = value;
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA, ___m_Entries_3)); }
	inline List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Entries_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_t564CABFE377BD9215732520DE10D1FEB72E336AE * ___m_Entries_3;
};

// System.ByteEnum
struct  ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct  KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B, ___key_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_key_0() const { return ___key_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
struct  Exception_t  : public RuntimeObject
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

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
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


// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly_ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t5267893EB7CB9C12F7B9B463FD4C221BEA03326E * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
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


// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		___typedArgument_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___typedArgument_0))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_marshaled_com
{
	CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
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


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct  JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// Unity.Jobs.LowLevel.Unsafe.ScheduleMode
struct  ScheduleMode_t83F3C482EFD55A9D2FA6F84D626EF24DFACB2E37 
{
public:
	// System.Int32 Unity.Jobs.LowLevel.Unsafe.ScheduleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScheduleMode_t83F3C482EFD55A9D2FA6F84D626EF24DFACB2E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct  FalloffType_t7875E80627449B25D89C044D11A2BA22AB4996E9 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t7875E80627449B25D89C044D11A2BA22AB4996E9, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct  LightMode_t2EFF26B7FB14FB7D2ACF550C591375B5A95A854A 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t2EFF26B7FB14FB7D2ACF550C591375B5A95A854A, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct  LightType_t684FE1E4FB26D1A27EFCDB36446F55984C414E88 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t684FE1E4FB26D1A27EFCDB36446F55984C414E88, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.Plane
struct  Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Normal_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_t90D0E4110D3F4D062F3E8C0F69809BFBBDF8E19C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job
struct  ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 
{
public:
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job::rgbaImage
	NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  ___rgbaImage_0;
	// Unity.Collections.NativeSlice`1<System.UInt32> UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job::argbImage
	NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  ___argbImage_1;

public:
	inline static int32_t get_offset_of_rgbaImage_0() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0, ___rgbaImage_0)); }
	inline NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  get_rgbaImage_0() const { return ___rgbaImage_0; }
	inline NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A * get_address_of_rgbaImage_0() { return &___rgbaImage_0; }
	inline void set_rgbaImage_0(NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  value)
	{
		___rgbaImage_0 = value;
	}

	inline static int32_t get_offset_of_argbImage_1() { return static_cast<int32_t>(offsetof(ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0, ___argbImage_1)); }
	inline NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  get_argbImage_1() const { return ___argbImage_1; }
	inline NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A * get_address_of_argbImage_1() { return &___argbImage_1; }
	inline void set_argbImage_1(NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  value)
	{
		___argbImage_1 = value;
	}
};


// UnityEngine.XR.ARKit.ManagedReferenceImage
struct  ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789 
{
public:
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___size_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_size_2() const { return ___size_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Feature
struct  Feature_tDAB1CF43CABADCA755120264C62FD06F426AA7CA 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_tDAB1CF43CABADCA755120264C62FD06F426AA7CA, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct  PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t8959E33A181E8A5B46387DDC30F957DD14B48783, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct  PlaneClassification_t71F2A910A03A3173EC07FA011082D6ED7B8851C2 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_t71F2A910A03A3173EC07FA011082D6ED7B8851C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct  TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t078FFF635AE2E4FC51E7D7DB8AB1CB884D30EA1F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct  XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Resolution_0)); }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_t339DA203C037FA6BCFC926C36DC2194D52D5F905  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct  XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_Position_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_3() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B, ___m_Tracked_3)); }
	inline int32_t get_m_Tracked_3() const { return ___m_Tracked_3; }
	inline int32_t* get_address_of_m_Tracked_3() { return &___m_Tracked_3; }
	inline void set_m_Tracked_3(int32_t value)
	{
		___m_Tracked_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferenceImage
struct  XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E 
{
public:
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedGuid
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___m_SerializedGuid_0;
	// UnityEngine.XR.ARSubsystems.SerializableGuid UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SerializedTextureGuid
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___m_SerializedTextureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_2;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRReferenceImage::m_SpecifySize
	bool ___m_SpecifySize_3;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Name
	String_t* ___m_Name_4;
	// UnityEngine.Texture2D UnityEngine.XR.ARSubsystems.XRReferenceImage::m_Texture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Texture_5;

public:
	inline static int32_t get_offset_of_m_SerializedGuid_0() { return static_cast<int32_t>(offsetof(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E, ___m_SerializedGuid_0)); }
	inline SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  get_m_SerializedGuid_0() const { return ___m_SerializedGuid_0; }
	inline SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821 * get_address_of_m_SerializedGuid_0() { return &___m_SerializedGuid_0; }
	inline void set_m_SerializedGuid_0(SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  value)
	{
		___m_SerializedGuid_0 = value;
	}

	inline static int32_t get_offset_of_m_SerializedTextureGuid_1() { return static_cast<int32_t>(offsetof(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E, ___m_SerializedTextureGuid_1)); }
	inline SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  get_m_SerializedTextureGuid_1() const { return ___m_SerializedTextureGuid_1; }
	inline SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821 * get_address_of_m_SerializedTextureGuid_1() { return &___m_SerializedTextureGuid_1; }
	inline void set_m_SerializedTextureGuid_1(SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  value)
	{
		___m_SerializedTextureGuid_1 = value;
	}

	inline static int32_t get_offset_of_m_Size_2() { return static_cast<int32_t>(offsetof(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E, ___m_Size_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_2() const { return ___m_Size_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_2() { return &___m_Size_2; }
	inline void set_m_Size_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_2 = value;
	}

	inline static int32_t get_offset_of_m_SpecifySize_3() { return static_cast<int32_t>(offsetof(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E, ___m_SpecifySize_3)); }
	inline bool get_m_SpecifySize_3() const { return ___m_SpecifySize_3; }
	inline bool* get_address_of_m_SpecifySize_3() { return &___m_SpecifySize_3; }
	inline void set_m_SpecifySize_3(bool value)
	{
		___m_SpecifySize_3 = value;
	}

	inline static int32_t get_offset_of_m_Name_4() { return static_cast<int32_t>(offsetof(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E, ___m_Name_4)); }
	inline String_t* get_m_Name_4() const { return ___m_Name_4; }
	inline String_t** get_address_of_m_Name_4() { return &___m_Name_4; }
	inline void set_m_Name_4(String_t* value)
	{
		___m_Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Texture_5() { return static_cast<int32_t>(offsetof(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E, ___m_Texture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Texture_5() const { return ___m_Texture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Texture_5() { return &___m_Texture_5; }
	inline void set_m_Texture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Texture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_marshaled_pinvoke
{
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___m_SerializedGuid_0;
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___m_SerializedTextureGuid_1;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	char* ___m_Name_4;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Texture_5;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceImage
struct XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_marshaled_com
{
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___m_SerializedGuid_0;
	SerializableGuid_tF7CD988878BEBB3281FA1C06B4457569DFD75821  ___m_SerializedTextureGuid_1;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_2;
	int32_t ___m_SpecifySize_3;
	Il2CppChar* ___m_Name_4;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Texture_5;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
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


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.ByteEnum>
struct  NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct  NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct  NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Quaternion>
struct  NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Rendering.BatchVisibility>
struct  NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct  NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct  NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct  NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct  NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters
struct  JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F 
{
public:
	// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::Dependency
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___Dependency_0;
	// System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::ScheduleMode
	int32_t ___ScheduleMode_1;
	// System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::ReflectionData
	intptr_t ___ReflectionData_2;
	// System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility_JobScheduleParameters::JobDataPtr
	intptr_t ___JobDataPtr_3;

public:
	inline static int32_t get_offset_of_Dependency_0() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___Dependency_0)); }
	inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  get_Dependency_0() const { return ___Dependency_0; }
	inline JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 * get_address_of_Dependency_0() { return &___Dependency_0; }
	inline void set_Dependency_0(JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  value)
	{
		___Dependency_0 = value;
	}

	inline static int32_t get_offset_of_ScheduleMode_1() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___ScheduleMode_1)); }
	inline int32_t get_ScheduleMode_1() const { return ___ScheduleMode_1; }
	inline int32_t* get_address_of_ScheduleMode_1() { return &___ScheduleMode_1; }
	inline void set_ScheduleMode_1(int32_t value)
	{
		___ScheduleMode_1 = value;
	}

	inline static int32_t get_offset_of_ReflectionData_2() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___ReflectionData_2)); }
	inline intptr_t get_ReflectionData_2() const { return ___ReflectionData_2; }
	inline intptr_t* get_address_of_ReflectionData_2() { return &___ReflectionData_2; }
	inline void set_ReflectionData_2(intptr_t value)
	{
		___ReflectionData_2 = value;
	}

	inline static int32_t get_offset_of_JobDataPtr_3() { return static_cast<int32_t>(offsetof(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F, ___JobDataPtr_3)); }
	inline intptr_t get_JobDataPtr_3() const { return ___JobDataPtr_3; }
	inline intptr_t* get_address_of_JobDataPtr_3() { return &___JobDataPtr_3; }
	inline void set_JobDataPtr_3(intptr_t value)
	{
		___JobDataPtr_3 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct  LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  ___color_1;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  ___indirectColor_2;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_3;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_4;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_5;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_9;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_10;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_11;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_12;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_13;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___color_1)); }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  get_color_1() const { return ___color_1; }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_indirectColor_2() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___indirectColor_2)); }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  get_indirectColor_2() const { return ___indirectColor_2; }
	inline LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD * get_address_of_indirectColor_2() { return &___indirectColor_2; }
	inline void set_indirectColor_2(LinearColor_tB8D05FA20CBA5254EA4D27D2B47D7B067FE506CD  value)
	{
		___indirectColor_2 = value;
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___orientation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_3() const { return ___orientation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_3 = value;
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___position_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_4() const { return ___position_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_range_5() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___range_5)); }
	inline float get_range_5() const { return ___range_5; }
	inline float* get_address_of_range_5() { return &___range_5; }
	inline void set_range_5(float value)
	{
		___range_5 = value;
	}

	inline static int32_t get_offset_of_coneAngle_6() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___coneAngle_6)); }
	inline float get_coneAngle_6() const { return ___coneAngle_6; }
	inline float* get_address_of_coneAngle_6() { return &___coneAngle_6; }
	inline void set_coneAngle_6(float value)
	{
		___coneAngle_6 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_7() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___innerConeAngle_7)); }
	inline float get_innerConeAngle_7() const { return ___innerConeAngle_7; }
	inline float* get_address_of_innerConeAngle_7() { return &___innerConeAngle_7; }
	inline void set_innerConeAngle_7(float value)
	{
		___innerConeAngle_7 = value;
	}

	inline static int32_t get_offset_of_shape0_8() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shape0_8)); }
	inline float get_shape0_8() const { return ___shape0_8; }
	inline float* get_address_of_shape0_8() { return &___shape0_8; }
	inline void set_shape0_8(float value)
	{
		___shape0_8 = value;
	}

	inline static int32_t get_offset_of_shape1_9() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shape1_9)); }
	inline float get_shape1_9() const { return ___shape1_9; }
	inline float* get_address_of_shape1_9() { return &___shape1_9; }
	inline void set_shape1_9(float value)
	{
		___shape1_9 = value;
	}

	inline static int32_t get_offset_of_type_10() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___type_10)); }
	inline uint8_t get_type_10() const { return ___type_10; }
	inline uint8_t* get_address_of_type_10() { return &___type_10; }
	inline void set_type_10(uint8_t value)
	{
		___type_10 = value;
	}

	inline static int32_t get_offset_of_mode_11() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___mode_11)); }
	inline uint8_t get_mode_11() const { return ___mode_11; }
	inline uint8_t* get_address_of_mode_11() { return &___mode_11; }
	inline void set_mode_11(uint8_t value)
	{
		___mode_11 = value;
	}

	inline static int32_t get_offset_of_shadow_12() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___shadow_12)); }
	inline uint8_t get_shadow_12() const { return ___shadow_12; }
	inline uint8_t* get_address_of_shadow_12() { return &___shadow_12; }
	inline void set_shadow_12(uint8_t value)
	{
		___shadow_12 = value;
	}

	inline static int32_t get_offset_of_falloff_13() { return static_cast<int32_t>(offsetof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2, ___falloff_13)); }
	inline uint8_t get_falloff_13() const { return ___falloff_13; }
	inline uint8_t* get_address_of_falloff_13() { return &___falloff_13; }
	inline void set_falloff_13(uint8_t value)
	{
		___falloff_13 = value;
	}
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob
struct  AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B 
{
public:
	// Unity.Collections.NativeSlice`1<System.Byte> UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::image
	NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  ___image_0;
	// System.IntPtr UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::database
	intptr_t ___database_1;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::width
	int32_t ___width_2;
	// System.Int32 UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::height
	int32_t ___height_3;
	// System.Single UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::physicalWidth
	float ___physicalWidth_4;
	// UnityEngine.TextureFormat UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::format
	int32_t ___format_5;
	// UnityEngine.XR.ARKit.ManagedReferenceImage UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob::managedReferenceImage
	ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  ___managedReferenceImage_6;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___image_0)); }
	inline NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  get_image_0() const { return ___image_0; }
	inline NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  value)
	{
		___image_0 = value;
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___database_1)); }
	inline intptr_t get_database_1() const { return ___database_1; }
	inline intptr_t* get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(intptr_t value)
	{
		___database_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___width_2)); }
	inline int32_t get_width_2() const { return ___width_2; }
	inline int32_t* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(int32_t value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___height_3)); }
	inline int32_t get_height_3() const { return ___height_3; }
	inline int32_t* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(int32_t value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_physicalWidth_4() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___physicalWidth_4)); }
	inline float get_physicalWidth_4() const { return ___physicalWidth_4; }
	inline float* get_address_of_physicalWidth_4() { return &___physicalWidth_4; }
	inline void set_physicalWidth_4(float value)
	{
		___physicalWidth_4 = value;
	}

	inline static int32_t get_offset_of_format_5() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___format_5)); }
	inline int32_t get_format_5() const { return ___format_5; }
	inline int32_t* get_address_of_format_5() { return &___format_5; }
	inline void set_format_5(int32_t value)
	{
		___format_5 = value;
	}

	inline static int32_t get_offset_of_managedReferenceImage_6() { return static_cast<int32_t>(offsetof(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B, ___managedReferenceImage_6)); }
	inline ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  get_managedReferenceImage_6() const { return ___managedReferenceImage_6; }
	inline ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789 * get_address_of_managedReferenceImage_6() { return &___managedReferenceImage_6; }
	inline void set_managedReferenceImage_6(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  value)
	{
		___managedReferenceImage_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct  BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_SubsumedById_2)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Center_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Pose_4)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Size_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct  ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct  XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29, ___m_Id_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29_StaticFields, ___s_Default_0)); }
	inline XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct  XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct  XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_LocalScale_2() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_LocalScale_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_LocalScale_2() const { return ___m_LocalScale_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_LocalScale_2() { return &___m_LocalScale_2; }
	inline void set_m_LocalScale_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_LocalScale_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalPose_3() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_LocalPose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_LocalPose_3() const { return ___m_LocalPose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_LocalPose_3() { return &___m_LocalPose_3; }
	inline void set_m_LocalPose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_LocalPose_3 = value;
	}

	inline static int32_t get_offset_of_m_AnchorScale_4() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_AnchorScale_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AnchorScale_4() const { return ___m_AnchorScale_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AnchorScale_4() { return &___m_AnchorScale_4; }
	inline void set_m_AnchorScale_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AnchorScale_4 = value;
	}

	inline static int32_t get_offset_of_m_AnchorPose_5() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_AnchorPose_5)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_AnchorPose_5() const { return ___m_AnchorPose_5; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_AnchorPose_5() { return &___m_AnchorPose_5; }
	inline void set_m_AnchorPose_5(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_AnchorPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_6() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF, ___m_Tracked_6)); }
	inline int32_t get_m_Tracked_6() const { return ___m_Tracked_6; }
	inline int32_t* get_address_of_m_Tracked_6() { return &___m_Tracked_6; }
	inline void set_m_Tracked_6(int32_t value)
	{
		___m_Tracked_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct  XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct  XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct  XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695, ___m_HitTrackableId_6)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct  XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Pose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct  XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct  XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Id_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_Size_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct  XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackableId_0)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_Pose_1)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  value)
	{
		___s_Default_5 = value;
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// System.Converter`2<System.Object,System.Object>
struct  Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct  Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<System.Object>
struct  Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1<System.Byte>
struct  DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A 
{
public:
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1::array
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___array_0;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A, ___array_0)); }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  get_array_0() const { return ___array_0; }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  value)
	{
		___array_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob
struct  TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Quaternion> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsIn
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob::positionsOut
	NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsIn_0)); }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283, ___positionsOut_1)); }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t20B0E97D613353CCC2889E9B3D97A5612374FE74  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob
struct  FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob::positions
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positions_0;

public:
	inline static int32_t get_offset_of_positions_0() { return static_cast<int32_t>(offsetof(FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B, ___positions_0)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positions_0() const { return ___positions_0; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positions_0() { return &___positions_0; }
	inline void set_positions_0(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positions_0 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob
struct  TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector4> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob::positionsIn
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  ___positionsIn_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob::positionsOut
	NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  ___positionsOut_1;

public:
	inline static int32_t get_offset_of_positionsIn_0() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872, ___positionsIn_0)); }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  get_positionsIn_0() const { return ___positionsIn_0; }
	inline NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 * get_address_of_positionsIn_0() { return &___positionsIn_0; }
	inline void set_positionsIn_0(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  value)
	{
		___positionsIn_0 = value;
	}

	inline static int32_t get_offset_of_positionsOut_1() { return static_cast<int32_t>(offsetof(TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872, ___positionsOut_1)); }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  get_positionsOut_1() const { return ___positionsOut_1; }
	inline NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71 * get_address_of_positionsOut_1() { return &___positionsOut_1; }
	inline void set_positionsOut_1(NativeArray_1_t86AEDFC03CDAC131E54ED6A68B102EBD947A3F71  value)
	{
		___positionsOut_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct  XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackableId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Scale_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Pose_3)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_Size_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_t2574091AF57F902BF504098AB113416E8D15186A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct  XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * ___m_Loaders_8;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_Loaders_8)); }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}
};

struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields
{
public:
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::s_ActiveLoader
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * ___s_ActiveLoader_9;

public:
	inline static int32_t get_offset_of_s_ActiveLoader_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields, ___s_ActiveLoader_9)); }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * get_s_ActiveLoader_9() const { return ___s_ActiveLoader_9; }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A ** get_address_of_s_ActiveLoader_9() { return &___s_ActiveLoader_9; }
	inline void set_s_ActiveLoader_9(XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * value)
	{
		___s_ActiveLoader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActiveLoader_9), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoaderHelper
struct  XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3  : public XRLoader_t2574091AF57F902BF504098AB113416E8D15186A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>[]
struct KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  m_Items[1];

public:
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
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
// UnityEngine.BeforeRenderHelper_OrderBlock[]
struct OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  m_Items[1];

public:
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback_1), (void*)NULL);
	}
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback_1), (void*)NULL);
	}
};
// UnityEngine.UnitySynchronizationContext_WorkRequest[]
struct WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  m_Items[1];

public:
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateCallback_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DelagateState_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_WaitHandle_2), (void*)NULL);
		#endif
	}
};
// UnityEngine.XR.ARSubsystems.XRReferenceImage[]
struct XRReferenceImageU5BU5D_t1EEAB0EDA5828C38140B4D8D48E11247C4789BCE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  m_Items[1];

public:
	inline XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture_5), (void*)NULL);
		#endif
	}
	inline XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture_5), (void*)NULL);
		#endif
	}
};
// UnityEngine.XR.ARSubsystems.XRReferenceObject[]
struct XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  m_Items[1];

public:
	inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Entries_3), (void*)NULL);
		#endif
	}
	inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Entries_3), (void*)NULL);
		#endif
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  m_Items[1];

public:
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___typedArgument_0))->___value_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___memberInfo_1), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  m_Items[1];

public:
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___argumentType_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mADC445CD821A933F7F3DF060145383EF6362D6A9_gshared (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m5ECD2716F7A19ADBB6ED2DDC79B25A3D7983D06D_gshared (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m717B5DF783F192540056AE7A5A94B6DBDB8F9F25_gshared (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m87D45453553F68A516214FEABB8E004027B6F4EA_gshared (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mF5A1714C6870A3DF6F61BB87B0700F0A8A67F9CC_gshared (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m85DB628EAE00AF8BB965FD039008854D41957968_gshared (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m04C9732607058C6721B91A719DE872C3550D169C_gshared (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m0A7431FE284605A389AB455AFBC44304CAE118CF_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFA221BBFDAD06D365325509293E19F52C72ABF4F_gshared (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mEEF6B5C996FEF2597C318C267E2B6CFB88175518_gshared (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m192CF93170B36E61ACE804945C3B18481D07B1C5_gshared (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m16425BC62E9AC48C88E58870411D0D63CCE985A9_gshared (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeSlice`1<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m10629E73F4A5C8EFCF25200B0753B32740CE4241_gshared (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___array0, const RuntimeMethod* method);
// Unity.Collections.NativeSlice`1<U> Unity.Collections.NativeSlice`1<System.Byte>::SliceConvert<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m80E1CA48C3B8A9E51D8BE04FDCD3BF59BBF7034C_gshared (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * __this, const RuntimeMethod* method);

// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * CustomAttributeExtensions_GetCustomAttribute_m4F400BBA3D1EBE458C4CCEC26DF2A5F926AE3F34 (Assembly_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396 (Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * __this, Type_t * ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *, Type_t *, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7 (String_t* ___s0, const RuntimeMethod* method);
// System.Exception System.Linq.Error::MoreThanOneMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623 (const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mADC445CD821A933F7F3DF060145383EF6362D6A9 (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mADC445CD821A933F7F3DF060145383EF6362D6A9_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m5ECD2716F7A19ADBB6ED2DDC79B25A3D7983D06D (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m5ECD2716F7A19ADBB6ED2DDC79B25A3D7983D06D_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m717B5DF783F192540056AE7A5A94B6DBDB8F9F25 (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m717B5DF783F192540056AE7A5A94B6DBDB8F9F25_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m87D45453553F68A516214FEABB8E004027B6F4EA (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m87D45453553F68A516214FEABB8E004027B6F4EA_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mF5A1714C6870A3DF6F61BB87B0700F0A8A67F9CC (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mF5A1714C6870A3DF6F61BB87B0700F0A8A67F9CC_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m85DB628EAE00AF8BB965FD039008854D41957968 (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m85DB628EAE00AF8BB965FD039008854D41957968_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m04C9732607058C6721B91A719DE872C3550D169C (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m04C9732607058C6721B91A719DE872C3550D169C_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m0A7431FE284605A389AB455AFBC44304CAE118CF (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m0A7431FE284605A389AB455AFBC44304CAE118CF_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFA221BBFDAD06D365325509293E19F52C72ABF4F (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFA221BBFDAD06D365325509293E19F52C72ABF4F_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mEEF6B5C996FEF2597C318C267E2B6CFB88175518 (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mEEF6B5C996FEF2597C318C267E2B6CFB88175518_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m192CF93170B36E61ACE804945C3B18481D07B1C5 (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m192CF93170B36E61ACE804945C3B18481D07B1C5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m16425BC62E9AC48C88E58870411D0D63CCE985A9 (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m16425BC62E9AC48C88E58870411D0D63CCE985A9_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F (void* ___destination0, int32_t ___destinationStride1, void* ___source2, int32_t ___sourceStride3, int32_t ___elementSize4, int32_t ___count5, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeSlice`1<System.Byte>::.ctor(Unity.Collections.NativeArray`1<T>)
inline void NativeSlice_1__ctor_m10629E73F4A5C8EFCF25200B0753B32740CE4241 (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * __this, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E *, NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 , const RuntimeMethod*))NativeSlice_1__ctor_m10629E73F4A5C8EFCF25200B0753B32740CE4241_gshared)(__this, ___array0, method);
}
// Unity.Collections.NativeSlice`1<U> Unity.Collections.NativeSlice`1<System.Byte>::SliceConvert<System.UInt32>()
inline NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m80E1CA48C3B8A9E51D8BE04FDCD3BF59BBF7034C (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * __this, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  (*) (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E *, const RuntimeMethod*))NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m80E1CA48C3B8A9E51D8BE04FDCD3BF59BBF7034C_gshared)(__this, method);
}
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters::.ctor(System.Void*,System.IntPtr,Unity.Jobs.JobHandle,Unity.Jobs.LowLevel.Unsafe.ScheduleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48 (JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F * __this, void* ___i_jobData0, intptr_t ___i_reflectionData1, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___i_dependency2, int32_t ___i_scheduleMode3, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility::Schedule(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3 (JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F * ___parameters0, const RuntimeMethod* method);
// Unity.Jobs.JobHandle Unity.Jobs.LowLevel.Unsafe.JobsUtility::ScheduleParallelFor(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF (JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F * ___parameters0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, const RuntimeMethod* method);
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  Array_InternalArray__get_Item_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m4638D46950F764E50418FEB995EE29742C5B17C8_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m4638D46950F764E50418FEB995EE29742C5B17C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m4638D46950F764E50418FEB995EE29742C5B17C8_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B *)(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B *)(&V_0));
		XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  Array_InternalArray__get_Item_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mD8236EFAEC3C78FAF72A659E8CEEADCD12BF4444_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mD8236EFAEC3C78FAF72A659E8CEEADCD12BF4444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mD8236EFAEC3C78FAF72A659E8CEEADCD12BF4444_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 *)(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 *)(&V_0));
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  Array_InternalArray__get_Item_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m63A0A4CC25A7F77EB320B3CD8F1AAFA45AF72781_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m63A0A4CC25A7F77EB320B3CD8F1AAFA45AF72781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m63A0A4CC25A7F77EB320B3CD8F1AAFA45AF72781_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)(&V_0));
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  Array_InternalArray__get_Item_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m94C436080B8BCADEC1392A2800494D5319648195_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m94C436080B8BCADEC1392A2800494D5319648195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m94C436080B8BCADEC1392A2800494D5319648195_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 *)(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 *)(&V_0));
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  Array_InternalArray__get_Item_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m184A3AAE2B58BD178A9DCB7D86E275D609FD304F_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m184A3AAE2B58BD178A9DCB7D86E275D609FD304F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m184A3AAE2B58BD178A9DCB7D86E275D609FD304F_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)(&V_0));
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRReferenceImage>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  Array_InternalArray__get_Item_TisXRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_mDC79BB386EDCE3494B7191DA53CEFC72FCBDE09D_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_mDC79BB386EDCE3494B7191DA53CEFC72FCBDE09D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_mDC79BB386EDCE3494B7191DA53CEFC72FCBDE09D_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E *)(XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E *)(&V_0));
		XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRReferenceObject>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  Array_InternalArray__get_Item_TisXRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_m84C596008C9320FCDC3834D171AA87DA6F550EBB_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_m84C596008C9320FCDC3834D171AA87DA6F550EBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_m84C596008C9320FCDC3834D171AA87DA6F550EBB_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)(XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA *)(&V_0));
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  Array_InternalArray__get_Item_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m1B78EA31ACB22F78148B362DD1EFF5700E0122B0_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m1B78EA31ACB22F78148B362DD1EFF5700E0122B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m1B78EA31ACB22F78148B362DD1EFF5700E0122B0_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)(&V_0));
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  Array_InternalArray__get_Item_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m12DDF4F60DC9EE1E79D82525A989B51E5AADC9E9_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m12DDF4F60DC9EE1E79D82525A989B51E5AADC9E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m12DDF4F60DC9EE1E79D82525A989B51E5AADC9E9_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)(&V_0));
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::InternalArray__get_Item<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  Array_InternalArray__get_Item_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mEAB0F6AB160AB4D9AC4AFE14862C3C3ACD7F07F9_gshared (RuntimeArray * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_InternalArray__get_Item_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mEAB0F6AB160AB4D9AC4AFE14862C3C3ACD7F07F9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___index0;
		NullCheck((RuntimeArray *)__this);
		int32_t L_1 = Array_get_Length_m2239B6393651C3F4631D900EFC1B05DBE8F5466D((RuntimeArray *)__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_2 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_2, (String_t*)_stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, Array_InternalArray__get_Item_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mEAB0F6AB160AB4D9AC4AFE14862C3C3ACD7F07F9_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_3 = ___index0;
		NullCheck((RuntimeArray *)__this);
		ArrayGetGenericValueImpl((RuntimeArray *)__this, (int32_t)L_3, (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)(&V_0));
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_4 = V_0;
		return L_4;
	}
}
// T System.Array::UnsafeLoad<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  Array_UnsafeLoad_TisKeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B_m8882092DDF50416A52C0344EA23E22A421741486_gshared (KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		KeyValuePair_2U5BU5D_tAC201058159F8B6B433415A0AB937BD11FC8A36F* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B  L_3 = (KeyValuePair_2_t5DDBBB9A3C8CBE3A4A39721E8F0A10AEBF13737B )(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int32>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_mA280B8BD39968B72F8DC966D4912D8C4F892920F_gshared (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Int32Enum>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_UnsafeLoad_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_mE7C3675ADBE9782510F7FC36BE298932CBDA1AB3_gshared (Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_UnsafeLoad_TisRuntimeObject_mF7D8C97071DB474A614395C952930E9E3E249586_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.BeforeRenderHelper_OrderBlock>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  Array_UnsafeLoad_TisOrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727_mEED156545A2169401C6F00D1EDBE0DCBAFEEA27E_gshared (OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		OrderBlockU5BU5D_t1C62FB945EC1F218FB6301A770FBF3C67B0AA101* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		OrderBlock_t3B2BBCE8320FAEC3DB605F7DC9AB641102F53727  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.UnitySynchronizationContext_WorkRequest>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  Array_UnsafeLoad_TisWorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94_mAB6878E92EDE4386DDE730A8BED98339AD1D2CB3_gshared (WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		WorkRequestU5BU5D_tB89678B9C27973604A434C63C8BD307990C8EBF0* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		WorkRequest_t0247B62D135204EAA95FC0B2EC829CB27B433F94  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.XR.ARSubsystems.XRReferenceImage>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  Array_UnsafeLoad_TisXRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E_m63A9435C413E8F4AE2C3AE3538544ACE33A51D31_gshared (XRReferenceImageU5BU5D_t1EEAB0EDA5828C38140B4D8D48E11247C4789BCE* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		XRReferenceImageU5BU5D_t1EEAB0EDA5828C38140B4D8D48E11247C4789BCE* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		XRReferenceImage_t5A53387AC6253D5D3DFD62BC583A45BBDFC1347E  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Array::UnsafeLoad<UnityEngine.XR.ARSubsystems.XRReferenceObject>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  Array_UnsafeLoad_TisXRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA_m48E447116D29FD8ADE87F37A1B474926557C7A20_gshared (XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		XRReferenceObjectU5BU5D_t0AF9158E0468305ABEAA331C8925977310FBD498* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		XRReferenceObject_t4DAB86DD7C1E4245ABD473120BD1625265465BAA  L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mA75245E8BF9FAB8A58686B2B26E4FC342453E774_gshared (Assembly_t * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mA75245E8BF9FAB8A58686B2B26E4FC342453E774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t * L_0 = ___element0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_1, /*hidden argument*/NULL);
		Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * L_3 = CustomAttributeExtensions_GetCustomAttribute_m4F400BBA3D1EBE458C4CCEC26DF2A5F926AE3F34((Assembly_t *)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JitHelpers_UnsafeCast_TisRuntimeObject_m73BCB2D74DD9491AC08870D92BE47CFF9731990C_gshared (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___o0;
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_1;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitialized_TisRuntimeObject_m7B0E3E50F3847BD7E9A7254C24D6DAA8994F6CC7_gshared (RuntimeObject ** ___target0, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueFactory1, const RuntimeMethod* method)
{
	{
		RuntimeObject ** L_0 = ___target0;
		RuntimeObject * L_1 = VolatileRead((RuntimeObject **)(RuntimeObject **)L_0);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject ** L_2 = ___target0;
		RuntimeObject * L_3 = (*(RuntimeObject **)L_2);
		return L_3;
	}

IL_0014:
	{
		RuntimeObject ** L_4 = ___target0;
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_5 = ___valueFactory1;
		RuntimeObject * L_6 = ((  RuntimeObject * (*) (RuntimeObject **, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((RuntimeObject **)(RuntimeObject **)L_4, (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return L_6;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_gshared (RuntimeObject ** ___target0, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueFactory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * L_0 = ___valueFactory1;
		NullCheck((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_0);
		RuntimeObject * L_1 = ((  RuntimeObject * (*) (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_1;
		RuntimeObject * L_2 = V_0;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m2C75C2AF268F01E2BF34AD1C2E1352CF4BA51AD9((String_t*)_stringLiteral64358BBCCF8C380C05E774933982A64691BCEB28, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_4 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_4, (String_t*)L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m4289829E8C0F3DA67A5B3E27721CF5D1C203CED2_RuntimeMethod_var);
	}

IL_001f:
	{
		RuntimeObject ** L_5 = ___target0;
		RuntimeObject * L_6 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		InterlockedCompareExchangeImpl<RuntimeObject *>((RuntimeObject **)(RuntimeObject **)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_7);
		RuntimeObject ** L_8 = ___target0;
		RuntimeObject * L_9 = (*(RuntimeObject **)L_8);
		return L_9;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_mE1E5C9FEE7986D0DC142899647016794AD72FE41_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDF06AB711FBC60539DDB6B10F618FA665889118B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.ByteEnum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD_mF38FDFC9918CACE2C7E723970361A387EFE687F5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m4035A16640EF0CD46AA8C5531ACB424DEE4EBBF0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mEA464E7502775F297FD24174B32518004C16A032_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mFB5C9954F5B0C58A86DDD762F7CC3BCD09E95E83_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m58575BD64B35CAD3BB6C5C0EADE39A0312CB71E6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m6DB299DD3BA1526BAEF7ECFEB04606E8551FC51F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_m066AC8133B3E249008AEBBE6A0E9850D87EC154E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 );
		LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2  L_3 = (*(LightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  UnsafeUtility_ReadArrayElement_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_mD81CD0DB631C7A002FB9464FD069992596794125_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED );
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_3 = (*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  UnsafeUtility_ReadArrayElement_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m32F38C708328D3B7D937971C2783D57AAADE4FA3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 );
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = (*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  UnsafeUtility_ReadArrayElement_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_m77A1347F6614ADCB969BC6ED40CBFA1A7BD3A2A8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 );
		BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062  L_3 = (*(BatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  UnsafeUtility_ReadArrayElement_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFDC1B603033BE1288E3B2F36DEAD36084C0BD033_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D );
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = (*(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  UnsafeUtility_ReadArrayElement_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_m8F2EA2A189460F5DD4AF1E99C58E813F73D326F4_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 );
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  UnsafeUtility_ReadArrayElement_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m7220AA5DA4E211D9E51DF8A811E613B95D1BF751_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E );
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3 = (*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int16>>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127  UnsafeUtility_ReadArrayElement_TisTriangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127_mDD6BD18D6E5D0E6A1C4C96C92E8DE1BA3E02B9CD_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 );
		Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127  L_3 = (*(Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int32>>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462  UnsafeUtility_ReadArrayElement_TisTriangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462_m66AC11494C6FBBFA66F617209F33D028DA615C7A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 );
		Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462  L_3 = (*(Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789_m6D8F05D6CF71586D68AF70DE23E65DF13FAB361C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789 );
		ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789  L_3 = (*(ManagedReferenceImage_tEA2FA0180249C069693B51BC6AA10DBF0EDC3789 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  UnsafeUtility_ReadArrayElement_TisBoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_mAA1BFD3AE9D0D2DA42CC5056ECB16D85136FA0A0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 );
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_3 = (*(BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0  UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0_m267D2C61838672EDD29EC62573DAF55D660D432F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0 );
		ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0  L_3 = (*(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  UnsafeUtility_ReadArrayElement_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m4C29027034AB15C278E18E01C13488FC3722A450_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_3 = (*(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  UnsafeUtility_ReadArrayElement_TisXRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29_m45BDC076A0C7B31E97E56F533E58421EFAB2C8F8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 );
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_3 = (*(XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_mD621498E137870B4C29703FCBBAE09604B9283DE_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 );
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_3 = (*(XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_m599EB904C734B2AC1C29E59D81B411109589DE04_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 );
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_3 = (*(XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  UnsafeUtility_ReadArrayElement_TisXRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_m45901469EFDFE8C0EFAD098E53A9E8FA7988327B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 );
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_3 = (*(XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF  UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF_m64DABDE40D113B19ABBEB468B823188903366A06_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF );
		XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF  L_3 = (*(XRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_m06FA071B5673C030AF16B6AFF60AAA7D56D3BE44_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B );
		XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  L_3 = (*(XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  UnsafeUtility_ReadArrayElement_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_m982ED9FA525AB293356D77B81570D0D146E9B0A9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 );
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_3 = (*(XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  UnsafeUtility_ReadArrayElement_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m03CCC43211A58E373583D31E63F4FF0050CB0C53_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 );
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_3 = (*(XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  UnsafeUtility_ReadArrayElement_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_mB5937224E64EE1C0ACF99D047D1528F62310E1D7_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 );
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_3 = (*(XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82_m4930088F6012BFA8E7D0C73E8AFC58244652C123_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 );
		XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82  L_3 = (*(XRRaycastHit_t2DE122E601B75E2070D4A542A13E2486DEE60E82 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_m21C378F1D6179A245E7D1545C6372D398264B20B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD );
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_3 = (*(XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m9A49B95A1EA461CEA4AE2117D3C52720D4A3F257_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 );
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_3 = (*(XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  UnsafeUtility_ReadArrayElement_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mFB4E04A67EA2C15AA30AB9844FB5DD7ED8D6203B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 );
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_3 = (*(XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)L_2)))))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m3CC8DF7A60C3A15C2346D40122109788F00E4C08_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)L_2))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_m2D68259238EC67FE1F08376D8E1800544502F570_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)L_2))))))))));
		return L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mD14193F3F54A967F41682B22B4303E65439773F3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)(((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_1))), (int64_t)(((int64_t)((int64_t)L_2))))))))));
		return L_3;
	}
}
// T UnityEngine.AttributeHelperEngine::GetCustomAttributeOfType<System.Object>(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m7AEF0374A18EED15CB2B6318117FDC6364AC2F3B_gshared (Type_t * ___klass0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeHelperEngine_GetCustomAttributeOfType_TisRuntimeObject_m7AEF0374A18EED15CB2B6318117FDC6364AC2F3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		Type_t * L_2 = ___klass0;
		Type_t * L_3 = V_0;
		NullCheck((MemberInfo_t *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = VirtFuncInvoker2< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, Type_t *, bool >::Invoke(11 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, (MemberInfo_t *)L_2, (Type_t *)L_3, (bool)1);
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_1;
		NullCheck(L_6);
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_6)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_2 = (bool)G_B3_0;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		RuntimeObject * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_003c;
	}

IL_002f:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_4;
		V_3 = (RuntimeObject *)L_11;
		goto IL_003c;
	}

IL_003c:
	{
		RuntimeObject * L_12 = V_3;
		return L_12;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_m7A8F75139352BA04C2EEC1D72D430FAC94C753DE_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject_CreateInstance_TisRuntimeObject_m7A8F75139352BA04C2EEC1D72D430FAC94C753DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * L_2 = ScriptableObject_CreateInstance_mDC77B7257A5E276CB272D3475B9B473B23A7128D((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// T UnityEngine.XR.ARKit.ManagedReferenceImage::ResolveGCHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ManagedReferenceImage_ResolveGCHandle_TisRuntimeObject_mE69FCDC0DC2CC3F8A89C25CD85559C6AE148E234_gshared (intptr_t ___ptr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManagedReferenceImage_ResolveGCHandle_TisRuntimeObject_mE69FCDC0DC2CC3F8A89C25CD85559C6AE148E234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	{
		// static T ResolveGCHandle<T>(IntPtr ptr) where T : class => (ptr == IntPtr.Zero) ? null : GCHandle.FromIntPtr(ptr).Target as T;
		intptr_t L_0 = ___ptr0;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		intptr_t L_2 = ___ptr0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 )L_3;
		RuntimeObject * L_4 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_0026:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m8D18B6F86DF3BF0F0C2102EFAE7DF661C3A09931_gshared (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m8D18B6F86DF3BF0F0C2102EFAE7DF661C3A09931_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 * L_2 = (Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_3 = V_0;
		NullCheck((Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *)L_2);
		Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396((Dictionary_2_tC06ADAF88DFDFFDB3CD31E5BD4C77FBB46281E86 *)L_2, (Type_t *)L_3, (RuntimeObject**)(RuntimeObject**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m0145FEACBF5643445A468A312880F27CA4205396_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_4 = V_1;
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_mBC795755F293A7193C0E8800895EA19FCC4AF067_gshared (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method)
{
	{
		// return activeLoader as T;
		NullCheck((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 *)__this);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_0 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 *)__this, /*hidden argument*/NULL);
		return ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// TOutput[] System.Array::ConvertAll<System.Object,System.Object>(TInput[],System.Converter`2<TInput,TOutput>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 * ___converter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_RuntimeMethod_var);
	}

IL_000e:
	{
		Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 * L_2 = ___converter1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteral2C3199988097E4BB3103E8C34B8DFE8796545D8F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_ConvertAll_TisRuntimeObject_TisRuntimeObject_m4EB6BCB9266D31902A76F2F846B438DDC3B6A79D_RuntimeMethod_var);
	}

IL_001c:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___array0;
		NullCheck(L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_5;
		V_1 = (int32_t)0;
		goto IL_0041;
	}

IL_0029:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = V_0;
		int32_t L_7 = V_1;
		Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 * L_8 = ___converter1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___array0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 *)L_8);
		RuntimeObject * L_13 = ((  RuntimeObject * (*) (Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Converter_2_t2E64EC99491AE527ACFE8BC9D48EA74E27D7A979 *)L_8, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_13);
		int32_t L_14 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0041:
	{
		int32_t L_15 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___array0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_0;
		return L_17;
	}
}
// TSource System.Linq.Enumerable::SingleOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_gshared (RuntimeObject* ___source0, Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject* L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t * L_1 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral828D338A9B04221C9CBE286F50CD389F68DE4ECF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_000e:
	{
		Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = Error_ArgumentNull_mCA126ED8F4F3B343A70E201C44B3A509690F1EA7((String_t*)_stringLiteral04444310B8C9D216A6BC1D1CC9542ECC75BC02DF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}

IL_001c:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		V_1 = (int64_t)(((int64_t)((int64_t)0)));
		RuntimeObject* L_4 = ___source0;
		NullCheck((RuntimeObject*)L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_4);
		V_2 = (RuntimeObject*)L_5;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0047;
		}

IL_0030:
		{
			RuntimeObject* L_6 = V_2;
			NullCheck((RuntimeObject*)L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (RuntimeObject*)L_6);
			V_3 = (RuntimeObject *)L_7;
			Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC * L_8 = ___predicate1;
			RuntimeObject * L_9 = V_3;
			NullCheck((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8);
			bool L_10 = ((  bool (*) (Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Func_2_t4B4B1E74248F38404B56001A709D81142DE730CC *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
			if (!L_10)
			{
				goto IL_0047;
			}
		}

IL_0040:
		{
			RuntimeObject * L_11 = V_3;
			V_0 = (RuntimeObject *)L_11;
			int64_t L_12 = V_1;
			if (il2cpp_codegen_check_add_overflow((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
			V_1 = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))));
		}

IL_0047:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck((RuntimeObject*)L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
			if (L_14)
			{
				goto IL_0030;
			}
		}

IL_004f:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0051);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0051;
	}

FINALLY_0051:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_2;
			if (!L_15)
			{
				goto IL_005a;
			}
		}

IL_0054:
		{
			RuntimeObject* L_16 = V_2;
			NullCheck((RuntimeObject*)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
		}

IL_005a:
		{
			IL2CPP_END_FINALLY(81)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(81)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		int64_t L_17 = V_1;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		int64_t L_18 = V_1;
		if ((((int64_t)L_18) == ((int64_t)(((int64_t)((int64_t)1))))))
		{
			goto IL_0070;
		}
	}
	{
		goto IL_0072;
	}

IL_0065:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_19 = V_4;
		return L_19;
	}

IL_0070:
	{
		RuntimeObject * L_20 = V_0;
		return L_20;
	}

IL_0072:
	{
		Exception_t * L_21 = Error_MoreThanOneMatch_m85C3617F782E9F2333FC1FDF42821BE069F24623(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, Enumerable_SingleOrDefault_TisRuntimeObject_m4C9F6C91DBB44BA8D94999E3EC7EF87729B81802_RuntimeMethod_var);
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m65245601C668347780A2F6D1A8D7EEC7D79AD673_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		RuntimeObject * L_1 = ___key1;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		RuntimeObject * L_3 = ((  RuntimeObject * (*) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((RuntimeObject*)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return L_3;
	}
}
// TValue System.Collections.Generic.CollectionExtensions::GetValueOrDefault<System.Object,System.Object>(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>,TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_gshared (RuntimeObject* ___dictionary0, RuntimeObject * ___key1, RuntimeObject * ___defaultValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___dictionary0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteralF18BFB74E613AFB11F36BDD80CF05CD5DFAD98D6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, CollectionExtensions_GetValueOrDefault_TisRuntimeObject_TisRuntimeObject_m5D116C3383F95724C01C628C0D0069F3D7F65621_RuntimeMethod_var);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dictionary0;
		RuntimeObject * L_3 = ___key1;
		NullCheck((RuntimeObject*)L_2);
		bool L_4 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (RuntimeObject*)L_2, (RuntimeObject *)L_3, (RuntimeObject **)(RuntimeObject **)(&V_0));
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject * L_5 = ___defaultValue2;
		return L_5;
	}

IL_001b:
	{
		RuntimeObject * L_6 = V_0;
		return L_6;
	}
}
// T[] System.Array::Empty<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* Array_Empty_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_mB69B3E7C1276AE609F2B9FA977634893619F966D_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_0 = ((EmptyArray_1_t40AF87279AA6E3AEEABB0CBA1425F6720C40961A_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return L_0;
	}
}
// T[] System.Array::FindAll<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___array0, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_1 = NULL;
	int32_t V_2 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B9_0 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** G_B10_1 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, (String_t*)_stringLiteral19EDC1210777BA4D45049C29280D9CC5E1064C25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_000e:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_2 = ___match1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, (String_t*)_stringLiteralEF5C844EAB88BCACA779BD2F3AD67B573BBBBFCA, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Array_FindAll_TisRuntimeObject_mA98E5A13A8737A1E5CD968D85C81A5275D98270D_RuntimeMethod_var);
	}

IL_001c:
	{
		V_0 = (int32_t)0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_4;
		V_2 = (int32_t)0;
		goto IL_006b;
	}

IL_0028:
	{
		Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * L_5 = ___match1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___array0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5);
		bool L_10 = ((  bool (*) (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 *)L_5, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_11 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_1;
		NullCheck(L_12);
		if ((!(((uint32_t)L_11) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_13 = V_0;
		G_B8_0 = (&V_1);
		if (!L_13)
		{
			G_B9_0 = (&V_1);
			goto IL_0047;
		}
	}
	{
		int32_t L_14 = V_0;
		G_B10_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2));
		G_B10_1 = G_B8_0;
		goto IL_0048;
	}

IL_0047:
	{
		G_B10_0 = 4;
		G_B10_1 = G_B9_0;
	}

IL_0048:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = ___array0;
		NullCheck(L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		int32_t L_16 = Math_Min_mC950438198519FB2B0260FCB91220847EE4BB525((int32_t)G_B10_0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))), /*hidden argument*/NULL);
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)G_B10_1, (int32_t)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0055:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = V_1;
		int32_t L_18 = V_0;
		int32_t L_19 = (int32_t)L_18;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = ___array0;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject *)L_23);
	}

IL_0067:
	{
		int32_t L_24 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_25 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = ___array0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_27 = V_0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = V_1;
		NullCheck(L_28);
		if ((((int32_t)L_27) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_0;
		((  void (*) (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A**)(&V_1), (int32_t)L_29, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_007f:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = V_1;
		return L_30;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* CustomAttributeData_UnboxValues_TisRuntimeObject_mFB1257FB7BD27255281B2111A20203E3A93E7050_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E_mC152FBD94252DA2417B7773AE16C51154C9F6A72_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_1 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)(CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E )((*(CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)((CustomAttributeNamedArgument_t08BA731A94FD7F173551DF3098384CB9B3056E9E *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tFD37F6CE782EF87006B5F999D53A711D1A7B9828* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8_m846F81B95C445180214406E0D355EBA8EC9644D1_gshared (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___values0, const RuntimeMethod* method)
{
	CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___values0;
		NullCheck(L_0);
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_1 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)(CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = (CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05*)L_1;
		V_1 = (int32_t)0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = ___values0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 )((*(CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)((CustomAttributeTypedArgument_t238ACCB3A438CB5EDE4A924C637B288CCEC958E8 *)UnBox(L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___values0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t9F6789B0E2215365EA8161484FC1E4B6F9446C05* L_11 = V_0;
		return L_11;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m703A74A313FE9EA25911440A31960B0CCF2A3324_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_3 = V_1;
		V_0 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_3;
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_4 = V_0;
		V_2 = (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.ByteEnum>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByteEnum_t406C975039F6312CDE58A265A6ECFD861F8C06CD_m9E0B0F97B4EA331173FD618E220DE62D4CA1F0C3_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  L_3 = V_1;
		V_0 = (NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 )L_3;
		NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  L_4 = V_0;
		V_2 = (NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m79812A22661959D2B4F290958FD9C61E69528D28_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_3 = V_1;
		V_0 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_3;
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_4 = V_0;
		V_2 = (NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tC6374EC584BF0D6DD4AD6FA0FD00C2C82F82CCAF  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt64>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_m7C4E01CEB98A8E22A31B069C2AC8922A0FD565DA_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  L_3 = V_1;
		V_0 = (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C )L_3;
		NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  L_4 = V_0;
		V_2 = (NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t910D4CAEE55F7F4F3664BD3DB14835AB6D8F5F3C  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t922D8894A3151C4F87AFD0A3562252320CA3B2A2_mD7AFB293FDB633E3BAAE963C0F5DB9A4A25E9649_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_3 = V_1;
		V_0 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_3;
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_4 = V_0;
		V_2 = (NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t8C7BA311FA83977B4520E39644CB5AD8F1E9E0FE  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED_m9610FDE0388D2A14248C97656170DC5B83C8BA88_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_3 = V_1;
		V_0 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_3;
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_4 = V_0;
		V_2 = (NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t83B803BC075802611FE185566F7FE576D1B85F52  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Quaternion>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m5E90E07135964B330DD3BE2DF32CE88F5345D4E1_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_3 = V_1;
		V_0 = (NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 )L_3;
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_4 = V_0;
		V_2 = (NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t9C70B1A7759D3AEB5D78FECCCDB8DCDEB9CCA684  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisBatchVisibility_t56334E279A62622BD0640403186E9A1017CF3062_mB397E70D8182B23E8F1F1F3D18CC3EF2290AC0D6_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_3 = V_1;
		V_0 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_3;
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_4 = V_0;
		V_2 = (NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t1D9423FECCE6FE0EBBFAB0CF4124B39FF8B66520  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector4>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_m232BEF2DF0ED0D4454BEA486B5A1DFCF985A283F_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_3 = V_1;
		V_0 = (NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 )L_3;
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_4 = V_0;
		V_2 = (NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t32E6297AF854BD125529357115F7C02BA25C4C96  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisXRHumanBodyJoint_t25AFBF64748D0CE197DE5496B800AE53AF32C4DF_mC9D4A0EE7A1A06849CF16FBD66F04CD6AFF53B63_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  L_3 = V_1;
		V_0 = (NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B )L_3;
		NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  L_4 = V_0;
		V_2 = (NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCDF99CDC7942304F6031B260BDC24620BDA9B27B  L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.BoundedPlane>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  NativeCopyUtility_CreateArrayFilledWithValue_TisBoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_mCF444CF847CB7563802D15E28498D01C76792CA7_gshared (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mADC445CD821A933F7F3DF060145383EF6362D6A9((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_3 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_2;
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_4 = ___value0;
		((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 , BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_3, (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRAnchor>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  NativeCopyUtility_CreateArrayFilledWithValue_TisXRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29_m2DFCA29A0E8B41B11EB4F80DEA9812313976079A_gshared (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m5ECD2716F7A19ADBB6ED2DDC79B25A3D7983D06D((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_3 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )L_2;
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_4 = ___value0;
		((  void (*) (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C , XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )L_3, (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_CreateArrayFilledWithValue_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_mDECF69140E7AAC575AADB08877E9D530635F899E_gshared (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m717B5DF783F192540056AE7A5A94B6DBDB8F9F25((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_3 = (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_2;
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_4 = ___value0;
		((  void (*) (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 , XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_3, (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  NativeCopyUtility_CreateArrayFilledWithValue_TisXREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_m9A53D9D195B8A6DF68C37F5CCC1CFA28CF4B42CC_gshared (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m87D45453553F68A516214FEABB8E004027B6F4EA((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_3 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_2;
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_4 = ___value0;
		((  void (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 , XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_3, (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRHumanBody>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_mC21A90B76A382CD6B9DB8259C86F4107EC26AC31_gshared (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mF5A1714C6870A3DF6F61BB87B0700F0A8A67F9CC((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_3 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_2;
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_4 = ___value0;
		((  void (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 , XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_3, (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  NativeCopyUtility_CreateArrayFilledWithValue_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_mED2B477B61542571E3A697C54DAD046E2E444823_gshared (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m85DB628EAE00AF8BB965FD039008854D41957968((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_3 = (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_2;
		XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  L_4 = ___value0;
		((  void (*) (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 , XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_3, (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRParticipant>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  NativeCopyUtility_CreateArrayFilledWithValue_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mDD66D9BD1B50F0719301EA1F26C9C9C968574BD1_gshared (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m04C9732607058C6721B91A719DE872C3550D169C((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_3 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_2;
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_4 = ___value0;
		((  void (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 , XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_3, (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRPointCloud>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  NativeCopyUtility_CreateArrayFilledWithValue_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m33D9CB8C49D6C1365A033D3D3CA4D6CFD1DF5FAB_gshared (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m0A7431FE284605A389AB455AFBC44304CAE118CF((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_3 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_2;
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_4 = ___value0;
		((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 , XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_3, (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRRaycast>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  NativeCopyUtility_CreateArrayFilledWithValue_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m1CAC2C4491AFDD8D71DF9CD6C568CAAFDB262541_gshared (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mFA221BBFDAD06D365325509293E19F52C72ABF4F((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_3 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )L_2;
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_4 = ___value0;
		((  void (*) (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 , XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )L_3, (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_CreateArrayFilledWithValue_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mD5AD8AB967D7AD59F250499066D3B65425423BD1_gshared (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_mEEF6B5C996FEF2597C318C267E2B6CFB88175518((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_3 = (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_2;
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_4 = ___value0;
		((  void (*) (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 , XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_3, (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_m6D8727E097D5EA0068F8F3EECE44F6D6E64B9821_gshared (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m192CF93170B36E61ACE804945C3B18481D07B1C5((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_3 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_2;
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_4 = ___value0;
		((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 , XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_3, (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::CreateArrayFilledWithValue<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  NativeCopyUtility_CreateArrayFilledWithValue_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_m9EF9B5F475BE3CCC378A60A6F7C4B279FA21651E_gshared (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___value0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	{
		// var array = new NativeArray<T>(length, allocator, NativeArrayOptions.UninitializedMemory);
		int32_t L_0 = ___length1;
		int32_t L_1 = ___allocator2;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeArray_1__ctor_m16425BC62E9AC48C88E58870411D0D63CCE985A9((&L_2), (int32_t)L_0, (int32_t)L_1, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		// FillArrayWithValue(array, value);
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_3 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_2;
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_4 = ___value0;
		((  void (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 , XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_3, (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// return array;
		return L_3;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.BoundedPlane>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  NativeCopyUtility_PtrToNativeArrayWithDefault_TisBoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227_m5D340E17401EC897446CB63237976C2358132EB3_gshared (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_3 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_4 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRAnchor>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29_m4F83A1D1BE3E9CF86E272CA7EFA1A02A312A5A0B_gshared (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_3 = ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_4 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97_m6E35508831B85BC2F5F713370CB50A9F2A53406C_gshared (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_3 = ((  NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  (*) (XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRCameraConfiguration_t2D43C7394DAE2223CF48F09DF55076DE5B2A5E97 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7  L_4 = (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tE5CEB105A05A940128DD35911654FAC07904E8D7 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2_mB5001154770AB89529E27FED293EE406729BD263_gshared (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_3 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_4 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRHumanBody>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1_m418CE0C581DD16C233AB05E6477408931C583BF7_gshared (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_3 = ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_4 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B_mB65216F29849FE793E2171D284F7A6651F2A253B_gshared (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_3 = ((  NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  (*) (XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRHumanBodyPose2DJoint_t35FE1E25C24031BE3AA240F3ED8079954F315D9B )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0  L_4 = (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tE9E77364BEDB2946A0FA99724C759EAA2EC032B0 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRParticipant>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062_mB4B02E5BAE5CB5F188C9315F3434A545E7AAA387_gshared (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_3 = ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_4 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRPointCloud>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0_m08B1FFAECA8B6F75C969F7DC53A4F8CFCFAB18C4_gshared (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_3 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_4 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRRaycast>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695_m5C27C50ED9AAFFFAF4864FACDB0F515C104E6FA4_gshared (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_3 = ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_4 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD_mCC0BDC0BC676BB82A0A9839B2A59C975EA9A3ADA_gshared (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_3 = ((  NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  (*) (XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRTextureDescriptor_t56503F48CEBC183AF26EE86935E918F31D09E9FD )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4  L_4 = (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_tDAF0F4880AF8B000465CDA62C8389E82D86A9BC4 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTrackedImage>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8_mEA9D2F67734282CFBD346D3FD4FA53F4D392FC78_gshared (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_3 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_4 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.NativeCopyUtility::PtrToNativeArrayWithDefault<UnityEngine.XR.ARSubsystems.XRTrackedObject>(T,System.Void*,System.Int32,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  NativeCopyUtility_PtrToNativeArrayWithDefault_TisXRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260_mD083DB6D403D0BBA833B3B770388D016E262EC0F_gshared (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultT0, void* ___source1, int32_t ___sourceElementSize2, int32_t ___length3, int32_t ___allocator4, const RuntimeMethod* method)
{
	{
		// var array = CreateArrayFilledWithValue(defaultT, length, allocator);
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ___defaultT0;
		int32_t L_1 = ___length3;
		int32_t L_2 = ___allocator4;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_3 = ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// UnsafeUtility.MemCpyStride(
		//     array.GetUnsafePtr(),
		//     UnsafeUtility.SizeOf<T>(),
		//     source,
		//     sourceElementSize,
		//     sourceElementSize, length);
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_4 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_3;
		void* L_5 = ((  void* (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_6 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		void* L_7 = ___source1;
		int32_t L_8 = ___sourceElementSize2;
		int32_t L_9 = ___sourceElementSize2;
		int32_t L_10 = ___length3;
		UnsafeUtility_MemCpyStride_m9B2594714412AEAD04CA5B4392D30E8DD252CC6F((void*)(void*)L_5, (int32_t)L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/NULL);
		// return array;
		return L_4;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::ConvertExistingDataToNativeSlice<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDB8BD60EC7BFC7BD5673CF765B549FABE56B3736_gshared (void* ___dataPointer0, int32_t ___stride1, int32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDB8BD60EC7BFC7BD5673CF765B549FABE56B3736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___length2;
		V_1 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___length2;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral5332787A355F6C7E2C752D24323C8EB3E69C380D, (RuntimeObject *)L_4, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_6, (String_t*)L_5, (String_t*)_stringLiteral3D54973F528B01019A58A52D34D518405A01B891, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDB8BD60EC7BFC7BD5673CF765B549FABE56B3736_RuntimeMethod_var);
	}

IL_0024:
	{
		int32_t L_7 = ___stride1;
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_9 = ___stride1;
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA((String_t*)_stringLiteral5D8C4EB43E44C7CAE91B24474164F33B3D962841, (RuntimeObject *)L_11, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_13 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_13, (String_t*)L_12, (String_t*)_stringLiteral0DC89F85B619068818F6FFC8B793A74773A52F83, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_mDB8BD60EC7BFC7BD5673CF765B549FABE56B3736_RuntimeMethod_var);
	}

IL_0047:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E ));
		int32_t L_14 = ___stride1;
		(&V_3)->set_m_Stride_1(L_14);
		void* L_15 = ___dataPointer0;
		(&V_3)->set_m_Buffer_0((uint8_t*)L_15);
		int32_t L_16 = ___length2;
		(&V_3)->set_m_Length_2(L_16);
		NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  L_17 = V_3;
		V_0 = (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E )L_17;
		NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  L_18 = V_0;
		V_4 = (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E )L_18;
		goto IL_006e;
	}

IL_006e:
	{
		NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  L_19 = V_4;
		return L_19;
	}
}
// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  NativeSliceExtensions_Slice_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m9B190E82775941D0B3EB762E1BA409301413196D_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___thisArray0, const RuntimeMethod* method)
{
	NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_0 = ___thisArray0;
		NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m10629E73F4A5C8EFCF25200B0753B32740CE4241((&L_1), (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E )L_1;
		goto IL_000a;
	}

IL_000a:
	{
		NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E  L_2 = V_0;
		return L_2;
	}
}
// Unity.Collections.NativeSlice`1<U> Unity.Collections.NativeSlice`1<System.Byte>::SliceConvert<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m80E1CA48C3B8A9E51D8BE04FDCD3BF59BBF7034C_gshared (NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_0;
		uint8_t* L_1 = (uint8_t*)__this->get_m_Buffer_0();
		(&V_1)->set_m_Buffer_0((uint8_t*)L_1);
		int32_t L_2 = V_0;
		(&V_1)->set_m_Stride_1(L_2);
		int32_t L_3 = (int32_t)__this->get_m_Length_2();
		int32_t L_4 = (int32_t)__this->get_m_Stride_1();
		int32_t L_5 = V_0;
		(&V_1)->set_m_Length_2(((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4))/(int32_t)L_5)));
		NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  L_6 = V_1;
		V_2 = (NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A )L_6;
		goto IL_0036;
	}

IL_0036:
	{
		NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  L_7 = V_2;
		return L_7;
	}
}
IL2CPP_EXTERN_C  NativeSlice_1_t5A391A20CD036E6DDA16E7B725B6103A1509785A  NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m80E1CA48C3B8A9E51D8BE04FDCD3BF59BBF7034C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E * _thisAdjusted = reinterpret_cast<NativeSlice_1_t78EFBF8E09E93928E76B220A7F73CAA90271B58E *>(__this + _offset);
	return NativeSlice_1_SliceConvert_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_m80E1CA48C3B8A9E51D8BE04FDCD3BF59BBF7034C(_thisAdjusted, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitImageDatabase_AddImageJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisAddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B_m12CD1FBAE67BF46B4440804B77E1F15C406C97AD_gshared (AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B *)(AddImageJob_t6881DFF5CA052839DF708884504DD6FD4335AC7B *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0020;
	}

IL_0020:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1<System.Byte>>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisDeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A_m5BB3622F3280861D656C58F16B7CA59F9CCA03C5_gshared (DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A *)(DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0020;
	}

IL_0020:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_FlipBoundaryWindingJob>(T,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobExtensions_Schedule_TisFlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B_m605C8197A937A1468D3F3F7FA0C969B2D8A9A04D_gshared (FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B  ___jobData0, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn1, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B *)(FlipBoundaryWindingJob_t5FB548E1D853A28EE666EC1E24E5D3D213B7247B *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn1;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_3 = JobsUtility_Schedule_m544BE1DBAEFF069809AE5304FD6BBFEE2927D4C3((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_3;
		goto IL_0020;
	}

IL_0020:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_4 = V_1;
		return L_4;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitImageDatabase_ConvertRGBA32ToARGB32Job>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0_mFBDC2947FE6DFF1FDED917907B380A70820B035A_gshared (ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 *)(ConvertRGBA32ToARGB32Job_t81AAD60557C255D4A08CBD6789644DCA20D61AA0 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0022;
	}

IL_0022:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRDepthSubsystem_TransformPositionsJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283_mC9224B9B04CFAD8D88AE139FA6C5A527E1AEC6DB_gshared (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *)(TransformPositionsJob_t4BCA4844CF5EFB6C0A19B9E5059390B2E499E283 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0022;
	}

IL_0022:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<UnityEngine.XR.ARKit.ARKitXRPlaneSubsystem_ARKitProvider_TransformBoundaryPositionsJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  IJobParallelForExtensions_Schedule_TisTransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872_mEFD98E2FA8598E542B584F49614EEA56224DDDC8_gshared (TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872  ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  ___dependsOn3, const RuntimeMethod* method)
{
	JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ((  void* (*) (TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 *)(TransformBoundaryPositionsJob_t1AEFA76DC77740E7CA334DC8C60612BF6D6FA872 *)(&___jobData0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		intptr_t L_1 = ((  intptr_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_2 = ___dependsOn3;
		JobScheduleParameters__ctor_m09A522B620ED79BDFD86DE2544175159B6179E48((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (void*)(void*)L_0, (intptr_t)L_1, (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_2, (int32_t)1, /*hidden argument*/NULL);
		int32_t L_3 = ___arrayLength1;
		int32_t L_4 = ___innerloopBatchCount2;
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_5 = JobsUtility_ScheduleParallelFor_mD0B7FD9589FB242D9C4E21F93054C526FA6B1DBF((JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(JobScheduleParameters_t55DC8564D72859191CE4E81639EFD25F6C6A698F *)(&V_0), (int32_t)L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_1 = (JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1 )L_5;
		goto IL_0022;
	}

IL_0022:
	{
		JobHandle_tDA498A2E49AEDE014468F416A8A98A6B258D73D1  L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67_inline (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67GenericMethods2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRLoader activeLoader { get { return s_ActiveLoader; } private set { s_ActiveLoader = value; } }
		IL2CPP_RUNTIME_CLASS_INIT(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_il2cpp_TypeInfo_var);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_0 = ((XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields*)il2cpp_codegen_static_fields_for(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_il2cpp_TypeInfo_var))->get_s_ActiveLoader_9();
		return L_0;
	}
}
