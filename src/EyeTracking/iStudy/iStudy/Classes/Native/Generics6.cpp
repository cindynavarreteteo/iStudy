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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694;
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
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
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
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5;
// UnityEngine.Events.BaseInvokableCall[]
struct BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3;
// UnityEngine.Events.InvokableCall
struct InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC;
// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26;
// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E;
// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D;
// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89;
// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9;
// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A;
// UnityEngine.ISubsystem
struct ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA;
// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583;
// UnityEngine.Subsystem
struct Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6;
// UnityEngine.SubsystemDescriptor
struct SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA;
// UnityEngine.SubsystemDescriptor`1<System.Object>
struct SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2;
// UnityEngine.Subsystem`1<System.Object>
struct Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Int32Enum>
struct ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF;
// UnityEngine.XR.ARSubsystems.Promise`1/ImmediatePromise<System.Object>
struct ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct TrackingSubsystem_2_tBBEF32426BE0DAA00ED44E62EFDF90DC38EFF4B6;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct TrackingSubsystem_2_tBB99F93D6653B71E3A2C1E2116F8599311DC72D6;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct TrackingSubsystem_2_tE2F49A29D690020049C702A06ED3969AE2A39863;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object>
struct TrackingSubsystem_2_tAE9BB8C8235205F41DFEA520A6AD8877415FA95B;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00;
// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct TrackingSubsystem_2_t463AAAB107BF4F04078A98431C680E92C4B53148;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t IntegratedSubsystemDescriptor_1_Create_m353DF937E50FE54F1022D32EC09A78FF01798EB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SubsystemDescriptor_1_Create_mF01290ECD014B1B0709F1763F81444F034F27611_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;

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


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
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


// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct  List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____items_1)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__items_1() const { return ____items_1; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694_StaticFields, ____emptyArray_5)); }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BaseInvokableCallU5BU5D_t5AA0EABD8006EFF721EE7FCC34BF5AA1418173D3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
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

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemDescriptor::<subsystemImplementationType>k__BackingField
	Type_t * ___U3CsubsystemImplementationTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CsubsystemImplementationTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CsubsystemImplementationTypeU3Ek__BackingField_1() const { return ___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CsubsystemImplementationTypeU3Ek__BackingField_1() { return &___U3CsubsystemImplementationTypeU3Ek__BackingField_1; }
	inline void set_U3CsubsystemImplementationTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CsubsystemImplementationTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemImplementationTypeU3Ek__BackingField_1), (void*)value);
	}
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


// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
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


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.Events.InvokableCall
struct  InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC, ___Delegate_0)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Int32>
struct  InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5, ___Delegate_0)); }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Object>
struct  InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC, ___Delegate_0)); }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`1<System.Single>
struct  InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`1<T1> UnityEngine.Events.InvokableCall`1::Delegate
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26, ___Delegate_0)); }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`2<System.Object,System.Object>
struct  InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`2<T1,T2> UnityEngine.Events.InvokableCall`2::Delegate
	UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E, ___Delegate_0)); }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>
struct  InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`3<T1,T2,T3> UnityEngine.Events.InvokableCall`3::Delegate
	UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D, ___Delegate_0)); }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct  InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6  : public BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5
{
public:
	// UnityEngine.Events.UnityAction`4<T1,T2,T3,T4> UnityEngine.Events.InvokableCall`4::Delegate
	UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6, ___Delegate_0)); }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Delegate_0), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Object>
struct  UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct  UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct  UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`4::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.SubsystemDescriptor`1<System.Object>
struct  SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2  : public SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA
{
public:

public:
};


// UnityEngine.Subsystem`1<System.Object>
struct  Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct  Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	RuntimeObject * ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___U3CresultU3Ek__BackingField_0)); }
	inline RuntimeObject * get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline RuntimeObject ** get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(RuntimeObject * value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CresultU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
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


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
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


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
	intptr_t ___m_Ptr_0;
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


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>
struct  ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1  : public Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct  XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A  : public Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Destroyed
	bool ___m_Destroyed_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Destroyed_2() { return static_cast<int32_t>(offsetof(XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A, ___m_Destroyed_2)); }
	inline bool get_m_Destroyed_2() const { return ___m_Destroyed_2; }
	inline bool* get_address_of_m_Destroyed_2() { return &___m_Destroyed_2; }
	inline void set_m_Destroyed_2(bool value)
	{
		___m_Destroyed_2 = value;
	}
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


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6, ___m_AllocatorLabel_2)); }
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


// UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>
struct  IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB  : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<System.Object>
struct  IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
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


// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct  Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;

public:
	inline static int32_t get_offset_of_U3CresultU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___U3CresultU3Ek__BackingField_0)); }
	inline int32_t get_U3CresultU3Ek__BackingField_0() const { return ___U3CresultU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CresultU3Ek__BackingField_0() { return &___U3CresultU3Ek__BackingField_0; }
	inline void set_U3CresultU3Ek__BackingField_0(int32_t value)
	{
		___U3CresultU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>
struct  TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>
struct  TrackingSubsystem_2_tBBEF32426BE0DAA00ED44E62EFDF90DC38EFF4B6  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>
struct  TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct  TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>
struct  TrackingSubsystem_2_tBB99F93D6653B71E3A2C1E2116F8599311DC72D6  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>
struct  TrackingSubsystem_2_tE2F49A29D690020049C702A06ED3969AE2A39863  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>
struct  TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object>
struct  TrackingSubsystem_2_tAE9BB8C8235205F41DFEA520A6AD8877415FA95B  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>
struct  TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>
struct  TrackingSubsystem_2_t463AAAB107BF4F04078A98431C680E92C4B53148  : public XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A
{
public:

public:
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


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Object>
struct  UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Single>
struct  UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct  UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct  UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct  UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>
struct  UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1  : public MulticastDelegate_t
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


// UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>
struct  ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF  : public Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct  TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Added_1)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Updated_2)); }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct  TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4, ___m_Added_1)); }
	inline NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4, ___m_Updated_2)); }
	inline NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct  TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Added_1)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Updated_2)); }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct  TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B, ___m_Added_1)); }
	inline NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B, ___m_Updated_2)); }
	inline NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct  TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7, ___m_Added_1)); }
	inline NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7, ___m_Updated_2)); }
	inline NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct  TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Added_1)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Updated_2)); }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct  TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3, ___m_Added_1)); }
	inline NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3, ___m_Updated_2)); }
	inline NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct  TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Added_1)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Updated_2)); }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct  TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1::<isCreated>k__BackingField
	bool ___U3CisCreatedU3Ek__BackingField_0;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Added
	NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  ___m_Added_1;
	// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Updated
	NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  ___m_Updated_2;
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1::m_Removed
	NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___m_Removed_3;

public:
	inline static int32_t get_offset_of_U3CisCreatedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___U3CisCreatedU3Ek__BackingField_0)); }
	inline bool get_U3CisCreatedU3Ek__BackingField_0() const { return ___U3CisCreatedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CisCreatedU3Ek__BackingField_0() { return &___U3CisCreatedU3Ek__BackingField_0; }
	inline void set_U3CisCreatedU3Ek__BackingField_0(bool value)
	{
		___U3CisCreatedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_Added_1() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___m_Added_1)); }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  get_m_Added_1() const { return ___m_Added_1; }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * get_address_of_m_Added_1() { return &___m_Added_1; }
	inline void set_m_Added_1(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  value)
	{
		___m_Added_1 = value;
	}

	inline static int32_t get_offset_of_m_Updated_2() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___m_Updated_2)); }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  get_m_Updated_2() const { return ___m_Updated_2; }
	inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * get_address_of_m_Updated_2() { return &___m_Updated_2; }
	inline void set_m_Updated_2(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  value)
	{
		___m_Updated_2 = value;
	}

	inline static int32_t get_offset_of_m_Removed_3() { return static_cast<int32_t>(offsetof(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874, ___m_Removed_3)); }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  get_m_Removed_3() const { return ___m_Removed_3; }
	inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * get_address_of_m_Removed_3() { return &___m_Removed_3; }
	inline void set_m_Removed_3(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  value)
	{
		___m_Removed_3 = value;
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
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_m9476CE53AA3A940BE39F744C32FAE4EBE670A504_gshared (Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_m22D54796A53F5AB72D435061BAF9A9A100523293_gshared (Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1<System.Byte>::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void DeallocateNativeArrayJob_1_Execute_m2B1B76F8A836E86ECE370174C423C57C04EBE7E1_gshared (DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultValue4, const RuntimeMethod* method);
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___nativeArray0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762_gshared (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m1B7AAFDF26CE66229CC8F95640EE2FE748851443_gshared (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5_gshared (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mF075AE11F3DFF21CA4E5A17B28A0F9D1B52D5926_gshared (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mCD2A36C7D28AD10CA9BD9B9E62478D9E3EF3E4A0_gshared (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B_gshared (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9B5512039EA4C44484269F14D1D6E85756E50770_gshared (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A_gshared (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_added()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_updated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_removed()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_isCreated()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultValue4, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mA88D5D4DAC3D042D2DBB1DBBC45EC820AE85242A_gshared (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, RuntimeObject * ___target0, MethodInfo_t * ___function1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346 (Type_t * ___type0, RuntimeObject * ___firstArgument1, MethodInfo_t * ___method2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.BaseInvokableCall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58 (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Events.BaseInvokableCall::AllowInvoke(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091 (Delegate_t * ___delegate0, const RuntimeMethod* method);
// System.Object System.Delegate::get_Target()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5 (RuntimeObject * ___obj0, String_t* ___functionName1, TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___argumentTypes2, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.UnityEventBase::PrepareInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32)
inline BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Events.InvokableCall::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394 (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count()
inline int32_t List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.IntPtr UnityEngine.Internal_SubsystemDescriptors::Create(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Internal_SubsystemDescriptors_Create_mEB503EBC87BAE5D491C9FCD0C9D177881020EC99 (intptr_t ___descriptorPtr0, const RuntimeMethod* method);
// UnityEngine.IntegratedSubsystem UnityEngine.Internal_SubsystemInstances::Internal_GetInstanceByPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A3E2B194F743DA1505586132038FA64DF8FB407 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor__ctor_m1D87F86FF3A30C3ECCD95D1797802B34B9194039 (IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.IntegratedSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem__ctor_mDBF83DF7F1F0B6DB1C64DD2C585E8A0CC7EE0EF1 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// UnityEngine.Subsystem UnityEngine.Internal_SubsystemInstances::Internal_FindStandaloneSubsystemInstanceGivenDescriptor(UnityEngine.SubsystemDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * Internal_SubsystemInstances_Internal_FindStandaloneSubsystemInstanceGivenDescriptor_mD7E452AE994DB1342208053B8DEF0BC057A09F86 (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * ___descriptor0, const RuntimeMethod* method);
// System.Type UnityEngine.SubsystemDescriptor::get_subsystemImplementationType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_mCF20A5F2E10F34F73853FEC4D3893B49EB49C166_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Internal_SubsystemInstances::Internal_AddStandaloneSubsystem(UnityEngine.Subsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_m93A60FA6B3E9A106B424BB6051B2A553363BF051 (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * ___inst0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor__ctor_m36DDE5770481719052DCBDC48DC4494D886DE747 (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Subsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem__ctor_m00FD26014DE966433A871B78ED54389E8DC59E94 (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>::.ctor(T,T,T)
inline void Triangle_1__ctor_m9476CE53AA3A940BE39F744C32FAE4EBE670A504 (Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method)
{
	((  void (*) (Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 *, int16_t, int16_t, int16_t, const RuntimeMethod*))Triangle_1__ctor_m9476CE53AA3A940BE39F744C32FAE4EBE670A504_gshared)(__this, ___a0, ___b1, ___c2, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>::.ctor(T,T,T)
inline void Triangle_1__ctor_m22D54796A53F5AB72D435061BAF9A9A100523293 (Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	((  void (*) (Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 *, int32_t, int32_t, int32_t, const RuntimeMethod*))Triangle_1__ctor_m22D54796A53F5AB72D435061BAF9A9A100523293_gshared)(__this, ___a0, ___b1, ___c2, method);
}
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase/DeallocateNativeArrayJob`1<System.Byte>::Execute()
inline void DeallocateNativeArrayJob_1_Execute_m2B1B76F8A836E86ECE370174C423C57C04EBE7E1 (DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	((  void (*) (DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A * IL2CPP_PARAMETER_RESTRICT, const RuntimeMethod*))DeallocateNativeArrayJob_1_Execute_m2B1B76F8A836E86ECE370174C423C57C04EBE7E1_gshared)(__this, method);
}
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
inline NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline)(__this, ___value0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0 (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, int32_t, int32_t, int32_t, int32_t, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , const RuntimeMethod*))TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<UnityEngine.XR.ARSubsystems.TrackableId>(Unity.Collections.NativeArray`1<!!0>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 , const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_gshared)(___nativeArray0, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202 (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, void*, int32_t, void*, int32_t, void*, int32_t, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762 (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *, const RuntimeMethod*))NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId>::Dispose()
inline void NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7 (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *, const RuntimeMethod*))NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
inline void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *, const RuntimeMethod*))TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_added()
inline NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, const RuntimeMethod*))TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_updated()
inline NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, int32_t, int32_t, int32_t, int32_t, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , const RuntimeMethod*))TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667 (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, void*, int32_t, void*, int32_t, void*, int32_t, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
inline void NativeArray_1_Dispose_m1B7AAFDF26CE66229CC8F95640EE2FE748851443 (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *, const RuntimeMethod*))NativeArray_1_Dispose_m1B7AAFDF26CE66229CC8F95640EE2FE748851443_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
inline void TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531 (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
inline NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, int32_t, int32_t, int32_t, int32_t, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , const RuntimeMethod*))TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, void*, int32_t, void*, int32_t, void*, int32_t, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
inline void NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5 (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *, const RuntimeMethod*))NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
inline void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_added()
inline NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, const RuntimeMethod*))TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_updated()
inline NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, const RuntimeMethod*))TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, const RuntimeMethod*))TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, int32_t, int32_t, int32_t, int32_t, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , const RuntimeMethod*))TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, void*, int32_t, void*, int32_t, void*, int32_t, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
inline void NativeArray_1_Dispose_mF075AE11F3DFF21CA4E5A17B28A0F9D1B52D5926 (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *, const RuntimeMethod*))NativeArray_1_Dispose_mF075AE11F3DFF21CA4E5A17B28A0F9D1B52D5926_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
inline void TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *, const RuntimeMethod*))TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
inline NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, const RuntimeMethod*))TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
inline NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, const RuntimeMethod*))TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, int32_t, int32_t, int32_t, int32_t, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , const RuntimeMethod*))TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, void*, int32_t, void*, int32_t, void*, int32_t, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
inline void NativeArray_1_Dispose_mCD2A36C7D28AD10CA9BD9B9E62478D9E3EF3E4A0 (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *, const RuntimeMethod*))NativeArray_1_Dispose_mCD2A36C7D28AD10CA9BD9B9E62478D9E3EF3E4A0_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
inline void TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *, const RuntimeMethod*))TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
inline NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, int32_t, int32_t, int32_t, int32_t, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , const RuntimeMethod*))TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, void*, int32_t, void*, int32_t, void*, int32_t, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *, const RuntimeMethod*))NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
inline void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834 (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *, const RuntimeMethod*))TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_added()
inline NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, const RuntimeMethod*))TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_updated()
inline NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, const RuntimeMethod*))TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725 (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, int32_t, int32_t, int32_t, int32_t, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , const RuntimeMethod*))TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26 (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, void*, int32_t, void*, int32_t, void*, int32_t, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
inline void NativeArray_1_Dispose_m9B5512039EA4C44484269F14D1D6E85756E50770 (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *, const RuntimeMethod*))NativeArray_1_Dispose_m9B5512039EA4C44484269F14D1D6E85756E50770_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
inline void TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927 (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
inline NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4 (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, int32_t, int32_t, int32_t, int32_t, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , const RuntimeMethod*))TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *, const RuntimeMethod*))NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
inline void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702 (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *, const RuntimeMethod*))TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_added()
inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, const RuntimeMethod*))TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_updated()
inline NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, const RuntimeMethod*))TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_removed()
inline NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, const RuntimeMethod*))TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_isCreated()
inline bool TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, const RuntimeMethod*))TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_gshared_inline)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::set_isCreated(System.Boolean)
inline void TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, bool, const RuntimeMethod*))TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_gshared_inline)(__this, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
inline void TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultValue4, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, int32_t, int32_t, int32_t, int32_t, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , const RuntimeMethod*))TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F_gshared)(__this, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
inline void TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, void*, int32_t, void*, int32_t, void*, int32_t, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , int32_t, int32_t, const RuntimeMethod*))TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_gshared)(__this, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
inline void NativeArray_1_Dispose_mA88D5D4DAC3D042D2DBB1DBBC45EC820AE85242A (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *, const RuntimeMethod*))NativeArray_1_Dispose_mA88D5D4DAC3D042D2DBB1DBBC45EC820AE85242A_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
inline void TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790 (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *, const RuntimeMethod*))TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_m092F0A272D937E03EB590E19DC2F2B788961018F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_2 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_2;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_5, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_m2ABA630C73B024EB3A47100C48B91D1BE75C117C_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_0 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_1 = NULL;
	UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * V_2 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_1 = V_0;
		V_1 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 ** L_5 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = V_2;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_7 = V_1;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *>((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 **)L_5, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_6, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_7);
		V_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_8;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = V_0;
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_m670F85A0ED4D975C93265F6969B9C1C06A87E8D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m476D3C83264B8980782F15E2A538B679279F61A1_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this);
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)__this, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_mD8CB8DB8289A86D2439ADE6E9BDA008DB448ED37_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_6 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_9 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_9, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_mD81223A0EAE1E7988803B8F92DB9090ECFA259FE_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		RuntimeObject * L_4 = ___args00;
		NullCheck((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_3);
		((  void (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_mB3AD5A37531368D7FC5F37AD22993EE25951B71F_gshared (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_3 = (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::add_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_add_Delegate_mFE30AB74153DFEDBDAAC58B591F3E428C728AE0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_2 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_2;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_5, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::remove_Delegate(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_remove_Delegate_mC3043D0ED54DD94A81FDC076B97C12CC0D9A16F5_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___value0, const RuntimeMethod* method)
{
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_0 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_1 = NULL;
	UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * V_2 = NULL;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0;
	}

IL_0007:
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_1 = V_0;
		V_1 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_2 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D((Delegate_t *)L_2, (Delegate_t *)L_3, /*hidden argument*/NULL);
		V_2 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0)));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 ** L_5 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)__this->get_address_of_Delegate_0();
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = V_2;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_7 = V_1;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_8 = InterlockedCompareExchangeImpl<UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *>((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 **)L_5, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_6, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_7);
		V_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_8;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = V_0;
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9) == ((RuntimeObject*)(UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1__ctor_mD2F6B2A04293002F65F10FC1E15CA20CE07D39A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1__ctor_m67D765DB693A73CCBB66BD79C6A05E92B006B19E_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * ___action0, const RuntimeMethod* method)
{
	{
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m232CE2068209113988BB35B50A2965FC03FC4A58((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, /*hidden argument*/NULL);
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = ___action0;
		NullCheck((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this);
		((  void (*) (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *, UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 *)__this, (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_1_Invoke_m0110810FB1A5E9EB0A3580F08C68C38E028F9E10_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_6 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_7 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_6, /*hidden argument*/NULL);
		V_1 = (bool)L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_9 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = ___args0;
		NullCheck(L_10);
		int32_t L_11 = 0;
		RuntimeObject * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9);
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_9, (float)((*(float*)((float*)UnBox(L_12, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0045:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_1_Invoke_m02605F267CE1A72199776BF4E08D4C81A08DF499_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, float ___args00, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		bool L_1 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_0, /*hidden argument*/NULL);
		V_0 = (bool)L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		float L_4 = ___args00;
		NullCheck((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_3);
		((  void (*) (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *, float, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)L_3, (float)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_001d:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_1_Find_m5F8CC01C8996F78D450562A0A4B128DA2D4E3A0A_gshared (InvokableCall_1_tBB3544B90FAA7CE5880EEB3DB3844C054B0A5A26 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_0 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * L_3 = (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2__ctor_mE80CFA8D8605680746EBD7DC371B30DD42759D38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_2_Invoke_mDEFC536BE86A8E86BEDB0F73A19694B7DCD3E873_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_9 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		bool L_10 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_9, /*hidden argument*/NULL);
		V_1 = (bool)L_10;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_12 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = ___args0;
		NullCheck(L_13);
		int32_t L_14 = 0;
		RuntimeObject * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___args0;
		NullCheck(L_16);
		int32_t L_17 = 1;
		RuntimeObject * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_12);
		((  void (*) (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)L_12, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_15, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
	}

IL_0056:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`2<System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_2_Find_m26B7D50B1D4203B1E9539D5BE727050009CDBEA5_gshared (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_0 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * L_3 = (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3__ctor_mA26C0B9D52E628D915E0C705A735F226BBA9B3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_3_Invoke_m8B47A4F65757A8C6AC1E16C405A0F591BB9098D8_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___args0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_12 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		bool L_13 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_12, /*hidden argument*/NULL);
		V_1 = (bool)L_13;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0067;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_15 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = ___args0;
		NullCheck(L_16);
		int32_t L_17 = 0;
		RuntimeObject * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ___args0;
		NullCheck(L_19);
		int32_t L_20 = 1;
		RuntimeObject * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___args0;
		NullCheck(L_22);
		int32_t L_23 = 2;
		RuntimeObject * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_15);
		((  void (*) (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)L_15, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_18, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_21, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
	}

IL_0067:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`3<System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_3_Find_mC8983BEEB7D91A851B167DA159F31647EF0FD7CE_gshared (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_0 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * L_3 = (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4__ctor_mDF3741C3CF51E23313E2DF7062488C430F25EEF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this);
		BaseInvokableCall__ctor_m71AC21A8840CE45C2600FF784E8B0B556D7B2BA5((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)__this, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_2, /*hidden argument*/NULL);
		RuntimeObject * L_4 = ___target0;
		MethodInfo_t * L_5 = ___theFunction1;
		Delegate_t * L_6 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346((Type_t *)L_3, (RuntimeObject *)L_4, (MethodInfo_t *)L_5, /*hidden argument*/NULL);
		__this->set_Delegate_0(((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)Castclass((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))));
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_2, (String_t*)_stringLiteral3FF5815C401C85877DD9CE70B5F95535C628AA9F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InvokableCall_4_Invoke_mD4E37C63A12BF191FB3D4178A8CF7B2DF4F92FD2_RuntimeMethod_var);
	}

IL_0019:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		RuntimeObject * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((RuntimeObject *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = ___args0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		RuntimeObject * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = ___args0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		RuntimeObject * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = ___args0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		RuntimeObject * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		((  void (*) (RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((RuntimeObject *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_15 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		bool L_16 = BaseInvokableCall_AllowInvoke_m0B193EBF1EF138FC5354933974DD702D3D9FF091((Delegate_t *)L_15, /*hidden argument*/NULL);
		V_1 = (bool)L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_18 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = ___args0;
		NullCheck(L_19);
		int32_t L_20 = 0;
		RuntimeObject * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = ___args0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		RuntimeObject * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = ___args0;
		NullCheck(L_25);
		int32_t L_26 = 2;
		RuntimeObject * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_28 = ___args0;
		NullCheck(L_28);
		int32_t L_29 = 3;
		RuntimeObject * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_18);
		((  void (*) (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)((UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)L_18, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_21, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_24, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_27, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 8))), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_30, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
	}

IL_0078:
	{
		return;
	}
}
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InvokableCall_4_Find_m31A9DD32912CC3F597F67C5B123F65D8D83BCB55_gshared (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * __this, RuntimeObject * ___targetObj0, MethodInfo_t * ___method1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_0 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = ___targetObj0;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_1) == ((RuntimeObject*)(RuntimeObject *)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * L_3 = (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 *)__this->get_Delegate_0();
		NullCheck((Delegate_t *)L_3);
		MethodInfo_t * L_4 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_3, /*hidden argument*/NULL);
		MethodInfo_t * L_5 = ___method1;
		NullCheck((RuntimeObject *)L_4);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)L_4, (RuntimeObject *)L_5);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_7 = V_0;
		return L_7;
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
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m2E86E0D0DEBECD002A246E5E15032AD5C31D573B_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m6BDDE2C02C9B1B969AF9C8E3283A99EDF725308E_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, bool ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m4B1EE21C25114A9D9BAFC50E3F2D67E5F665F5AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03E7697F347F98D3FD8952EC0CE1A714D1FA20BB_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFA3B154991DCD05A05EEF0F8A4ADD01D48BF5F74_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m57B06346DBA8E9878C2A3589AB5F4AACDF0BD1BD_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, int32_t ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m383296E02ACDA4892A49F2B148201A5A37D9F57F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_mC40753D8C3D37080677F4956B214A840380FF011_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m2C1F34094D739A035851500EBC9355B92734EAC8_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___arg00);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m0E6F26B70A39427E3FF824D0C1A2B4A05DC93781_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg00;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m8A8457E16443B452AC53C84F32402BAC6B93E6FF_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mFC7714F2FF67E4A6A886734EF21DB0CEC8D92083_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m23BC5C707027B6C49AE29FB21A4F9F9F0CA72648_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Single>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, float ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_mC8A9A9332EEEA81428669FAD060934954B73DDCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Single>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m03AE0A9995BF8D246D2317542428D220C55160B9_gshared (UnityAction_1_t0064196FB7635B812E65BA9FD08D39F68C75DCD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m35B0A0067C115007E10FBD8E008AE5A04F766BC7_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m28278C6E83173B3BC3CBC240F14DD94D721E78C2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
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
						GenericInterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
					else
						GenericVirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00);
					else
						VirtActionInvoker1< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_1_BeginInvoke_m5DEFA82EDDF619690E524720C4128D58F303EBCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1_EndInvoke_m1B23318369E0A45239A06ACB2AEF27BB6AF8B3A2_gshared (UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mF4DB369856F884CA526A897CB6E86FE396844206_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m06DA8061B2E6984DD80B43D6080FC181B3231267_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mCF4D420D2E1AE5C6A9CBDA25C21702141DF45B40_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4C1A8B33A480934E69D745B3A99F88E761BF16E2_gshared (UnityAction_2_t585826A49A16AB1506410452D61899BB8A3242F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m09EBA3BBF14887A401E08C9C0360EF0BD037C918_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_mADF341B796508D58BEDF95CC8C087F2827F5105D_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, int32_t ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_m5F2C976EFE2F0144C74BB2FE1E3E2247617C81E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_m4D471FEA8177D598ED108C5B2A9A35687D439D09_gshared (UnityAction_2_t77680359D738D69E578F3A74D50CD3FA8D775A60 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_mDC07A3AA1306CA33C495D2954233DBB9B3BB6A04_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m4E5A5335E63C942B335D047296080EB8DA73FB99_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
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
						GenericInterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
					else
						GenericVirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(targetMethod, targetThis, ___arg00, ___arg11);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11);
					else
						VirtActionInvoker2< Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___arg00) - 1), ___arg11, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg00, Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  ___arg11, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityAction_2_BeginInvoke_mC72F0DCBBB077E215EC9ADA58D300288CC39E069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg00);
	__d_args[1] = Box(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_il2cpp_TypeInfo_var, &___arg11);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2_EndInvoke_mAF3A961DD4A745EB47F2C7056216F11449C74F82_gshared (UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mD65DD6F2A7160759B11B9E9402E42889B0308B7C_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::Invoke(T0,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_Invoke_m4CC353FB62BF2996DDB0BDE4B517D4CBAB1388B2_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method)
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
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
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
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_3_BeginInvoke_mF0A7FADCA696D28F879DBE8BB21E0107020310CB_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3_EndInvoke_m40F664442966F777B243BE41660DF4D97FCF9A24_gshared (UnityAction_3_t1301FDE5C65AD243EB7C23AFC96FD5C9C6B49E89 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4__ctor_mD03F869374C55A6F3391C0F2E80DF4DEE5EA1C8A_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::Invoke(T0,T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_Invoke_m91D7864FF201914C04AEC6B34DD6E7C62C367FF8_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, const RuntimeMethod* method)
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
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker3< RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg11) - 1), ___arg22, ___arg33, targetMethod);
				}
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
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
						GenericInterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						GenericVirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
					else
						VirtActionInvoker4< RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___arg00, ___arg11, ___arg22, ___arg33);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___arg00) - 1), ___arg11, ___arg22, ___arg33, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___arg00, ___arg11, ___arg22, ___arg33, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::BeginInvoke(T0,T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAction_4_BeginInvoke_mCED3B2E5714E6AB57D5B05030DBE0851E6970061_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, RuntimeObject * ___arg33, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.Events.UnityAction`4<System.Object,System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_4_EndInvoke_mAA51C4DFA09F01F0AF79FD6A3419925FEE1015EB_gshared (UnityAction_4_tB6FC95EAD5FB1521F9F2CBF11F1B607346AD2AA1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m1EF01690E1F8F81E7C190F8D9610573D5E59490C_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m61C019869D6764D437BD531635FDF61B68471967_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m8802189BD39CB9C93447909FF521F9AF7EC2307B_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_m2EB10E941A967C89B4297A9278FBA88053A2D828_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m0E8B5D5884056FA9248EB6AF8D3243F903735B92_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m8187D8D7A87F912D707BCB8913E01970F7D8F453_gshared (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F * L_0 = ___action0;
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_1 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *, UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t2291ED59024631BF653D2880E0EE63EC7F27B58F *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_gshared (UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914 * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_mAC9BEEF287D58E79A447A57E28D3679F9B199D70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 * L_6 = V_2;
		int32_t L_7 = ___arg00;
		NullCheck((InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_6);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(T1) */, (InvokableCall_1_t39872274B662BF6B73E43C748C83E91947E649E5 *)L_6, (int32_t)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		int32_t L_21 = ___arg00;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_24 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_24);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_24, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_25);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_26 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_27 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_28 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_28);
		int32_t L_29 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_28, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_1 = ((  BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * (*) (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_AddCall_mD45F68C1A40E2BD9B0754490B7709846B84E8075((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD5524309E29952671D52EA873E3A0C63EF9C4455_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___call0, const RuntimeMethod* method)
{
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___call0;
		NullCheck((Delegate_t *)L_0);
		RuntimeObject * L_1 = Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline((Delegate_t *)L_0, /*hidden argument*/NULL);
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_2 = ___call0;
		NullCheck((Delegate_t *)L_2);
		MethodInfo_t * L_3 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048((Delegate_t *)L_2, /*hidden argument*/NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase_RemoveListener_mE7EBC544115373D2357599AC07F41F13A8C5A49E((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, (RuntimeObject *)L_1, (MethodInfo_t *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_FindMethod_Impl_mDD1047ED8F4A1CABD0ACBC76D73B344DCDAC3126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		MethodInfo_t * L_6 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_6;
		goto IL_001e;
	}

IL_001e:
	{
		MethodInfo_t * L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m959B9FFD3D5FEE00DC93EDA9BE5924BDA8217541_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_1_GetDelegate_m1EE511D98201F0DE08C472BFB04DAC8E846243BE_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * ___action0, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * L_0 = ___action0;
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_1 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		((  void (*) (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(L_1, (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * V_0 = NULL;
	int32_t V_1 = 0;
	InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * V_2 = NULL;
	bool V_3 = false;
	InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * V_4 = NULL;
	bool V_5 = false;
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	{
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_0 = UnityEventBase_PrepareInvoke_mFA3E2C97DB776A1089DCC85C9F1DA75C295032AE((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		V_0 = (List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_0;
		V_1 = (int32_t)0;
		goto IL_009b;
	}

IL_000f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_1, (int32_t)L_2, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_2 = (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3)));
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_4 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC * L_6 = V_2;
		RuntimeObject * L_7 = ___arg00;
		NullCheck((InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_6);
		VirtActionInvoker1< RuntimeObject * >::Invoke(6 /* System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(T1) */, (InvokableCall_1_t4C25D83F8CA99D8F1156E28315A6AD077D0951BC *)L_6, (RuntimeObject *)L_7);
		goto IL_0096;
	}

IL_002f:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_10 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_8, (int32_t)L_9, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_4 = (InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)IsInst((RuntimeObject*)L_10, InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC_il2cpp_TypeInfo_var));
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0053;
		}
	}
	{
		InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC * L_13 = V_4;
		NullCheck((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13);
		InvokableCall_Invoke_m0B9E7F14A2C67AB51F01745BD2C6C423114C9394((InvokableCall_t4195709D9C5DF20B7FC3986828A7612C9C28B0FC *)L_13, /*hidden argument*/NULL);
		goto IL_0095;
	}

IL_0053:
	{
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_16 = List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_14, (int32_t)L_15, /*hidden argument*/List_1_get_Item_m34F3D72A7ED5A66F832C6890213B0A5F70D0A42B_RuntimeMethod_var);
		V_6 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		V_7 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_17) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->set_m_InvokeArray_3(L_19);
	}

IL_0078:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		RuntimeObject * L_21 = ___arg00;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_22 = V_6;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get_m_InvokeArray_3();
		NullCheck((BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22);
		VirtActionInvoker1< ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_22, (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_23);
	}

IL_0095:
	{
	}

IL_0096:
	{
		int32_t L_24 = V_1;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_25 = V_1;
		List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 * L_26 = V_0;
		NullCheck((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26);
		int32_t L_27 = List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_inline((List_1_tB6CB50ED979D7494123AC5ADF0C1C587142B5694 *)L_26, /*hidden argument*/List_1_get_Count_m81256FA6A1423E6A61F696EF1268497C43475FB9_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2__ctor_m146206128006F3071AEC91A73E3DDFDC34A53F2D_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_2_FindMethod_Impl_m03311CACE68316DC88479DFD2AF9AA0A88A615A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		MethodInfo_t * L_9 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_9;
		goto IL_002b;
	}

IL_002b:
	{
		MethodInfo_t * L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_2_GetDelegate_m4005C11561312B45709572CA1BB4D0EA630D0534_gshared (UnityEvent_2_tCABE16DD12281C927273F04C2F6D54BE6ED094EC * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E * L_2 = (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (InvokableCall_2_t92DAC0F2FB25BD6576E876379F30AD0C93C4E42E *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3__ctor_mF7A53B951222BC66BE6F471036270FC66C36FAA2_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_3_FindMethod_Impl_mF15A2B2F6BFE33613B6675FD2500E144CEF40FFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_12;
		goto IL_0038;
	}

IL_0038:
	{
		MethodInfo_t * L_13 = V_0;
		return L_13;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_3_GetDelegate_mDD941B02CC78310DE703586880CD8C926CF5EC2C_gshared (UnityEvent_3_t695DB93DCFCA35084D787B62352792D5C4F564C9 * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D * L_2 = (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 3));
		((  void (*) (InvokableCall_3_t4C86EE6D323407D93E34FFFC787D64FE62C5973D *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
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
// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_4__ctor_m04FBFD537FBAF349F05C24B6EB9360FF08685819_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_InvokeArray_3((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)NULL);
		NullCheck((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this);
		UnityEventBase__ctor_m57AF08DAFA9C1B4F4C8DA855116900BAE8DF9595((UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 *)__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, String_t* ___name0, RuntimeObject * ___targetObj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityEvent_4_FindMethod_Impl_m74BBF94AAC7B6B09A4BC3E4A923CBFE4781D08A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___targetObj1;
		String_t* L_1 = ___name0;
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_2 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)SZArrayNew(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_3 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_2;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_4 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_5);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_6 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_3;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_7 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 1)) };
		Type_t * L_8 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t *)L_8);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_9 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_6;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_10 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 2)) };
		Type_t * L_11 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t *)L_11);
		TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* L_12 = (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_9;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_13 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 3)) };
		Type_t * L_14 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6((RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D )L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t *)L_14);
		MethodInfo_t * L_15 = UnityEventBase_GetValidMethodInfo_m4521621AB72C7265A2C0EC6911BE4DC42A99B6A5((RuntimeObject *)L_0, (String_t*)L_1, (TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F*)L_12, /*hidden argument*/NULL);
		V_0 = (MethodInfo_t *)L_15;
		goto IL_0045;
	}

IL_0045:
	{
		MethodInfo_t * L_16 = V_0;
		return L_16;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * UnityEvent_4_GetDelegate_mAD2A7239ECF210269A5974AE66F1CFDB13977F54_gshared (UnityEvent_4_t2145BBDEE01F7E33D8060C904609F2FFD8845A0A * __this, RuntimeObject * ___target0, MethodInfo_t * ___theFunction1, const RuntimeMethod* method)
{
	BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___target0;
		MethodInfo_t * L_1 = ___theFunction1;
		InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 * L_2 = (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 4));
		((  void (*) (InvokableCall_4_t72FB1137599CE871685340E96EFDD317DB4831E6 *, RuntimeObject *, MethodInfo_t *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)(L_2, (RuntimeObject *)L_0, (MethodInfo_t *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 *)L_2;
		goto IL_000b;
	}

IL_000b:
	{
		BaseInvokableCall_tE686BE3371ABBF6DB32C422D433199AD18316DF5 * L_3 = V_0;
		return L_3;
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
// UnityEngine.ISubsystem UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::CreateImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntegratedSubsystemDescriptor_1_CreateImpl_m3EA74C92EB71BB77910FD716E818F4D9E73E7CFE_gshared (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// TSubsystem UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystemDescriptor_1_Create_m353DF937E50FE54F1022D32EC09A78FF01798EB9_gshared (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IntegratedSubsystemDescriptor_1_Create_m353DF937E50FE54F1022D32EC09A78FF01798EB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	{
		intptr_t L_0 = (intptr_t)((IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA *)__this)->get_m_Ptr_0();
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemDescriptors_tC73DE2F7340E4C6650B674A63D0D5D677A7C9234_il2cpp_TypeInfo_var);
		intptr_t L_1 = Internal_SubsystemDescriptors_Create_mEB503EBC87BAE5D491C9FCD0C9D177881020EC99((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_3 = Internal_SubsystemInstances_Internal_GetInstanceByPtr_m2A3E2B194F743DA1505586132038FA64DF8FB407((intptr_t)L_2, /*hidden argument*/NULL);
		V_1 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		RuntimeObject * L_4 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		NullCheck(L_6);
		((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)L_6)->set_m_subsystemDescriptor_1(__this);
	}

IL_0034:
	{
		RuntimeObject * L_7 = V_1;
		V_3 = (RuntimeObject *)L_7;
		goto IL_0038;
	}

IL_0038:
	{
		RuntimeObject * L_8 = V_3;
		return L_8;
	}
}
// System.Void UnityEngine.IntegratedSubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystemDescriptor_1__ctor_m3E14A32CB73A1C21C69CC9860EE2AE95F841876D_gshared (IntegratedSubsystemDescriptor_1_t26346DD8E0AD1C04F25B94E8AD18577ABA15EBCB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA *)__this);
		IntegratedSubsystemDescriptor__ctor_m1D87F86FF3A30C3ECCD95D1797802B34B9194039((IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.IntegratedSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegratedSubsystem_1__ctor_m4F49ABCD91074575D743F3AA68170017E2A29B37_gshared (IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)__this);
		IntegratedSubsystem__ctor_mDBF83DF7F1F0B6DB1C64DD2C585E8A0CC7EE0EF1((IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 *)__this, /*hidden argument*/NULL);
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
// UnityEngine.ISubsystem UnityEngine.SubsystemDescriptor`1<System.Object>::CreateImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SubsystemDescriptor_1_CreateImpl_m5D4EA463067F196DA9D23D5A8AF8D35F02277458_gshared (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		NullCheck((SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *)__this);
		RuntimeObject * L_0 = ((  RuntimeObject * (*) (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		V_0 = (RuntimeObject*)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// TSubsystem UnityEngine.SubsystemDescriptor`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SubsystemDescriptor_1_Create_mF01290ECD014B1B0709F1763F81444F034F27611_gshared (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubsystemDescriptor_1_Create_mF01290ECD014B1B0709F1763F81444F034F27611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 * L_0 = Internal_SubsystemInstances_Internal_FindStandaloneSubsystemInstanceGivenDescriptor_mD7E452AE994DB1342208053B8DEF0BC057A09F86((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		RuntimeObject * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		V_2 = (RuntimeObject *)L_3;
		goto IL_0057;
	}

IL_0024:
	{
		NullCheck((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this);
		Type_t * L_4 = SubsystemDescriptor_get_subsystemImplementationType_mCF20A5F2E10F34F73853FEC4D3893B49EB49C166_inline((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_5 = Activator_CreateInstance_mD06EE47879F606317C6DA91FB63E678CABAC6A16((Type_t *)L_4, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1)));
		RuntimeObject * L_6 = V_3;
		NullCheck(L_6);
		((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_6)->set_m_subsystemDescriptor_0(__this);
		RuntimeObject * L_7 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Internal_SubsystemInstances_tB061667F7AEBE0E336E6DE40389E18414A43BB9A_il2cpp_TypeInfo_var);
		Internal_SubsystemInstances_Internal_AddStandaloneSubsystem_m93A60FA6B3E9A106B424BB6051B2A553363BF051((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)L_7, /*hidden argument*/NULL);
		RuntimeObject * L_8 = V_3;
		V_2 = (RuntimeObject *)L_8;
		goto IL_0057;
	}

IL_0057:
	{
		RuntimeObject * L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.SubsystemDescriptor`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptor_1__ctor_m0DC45BE61DA2407CF2CF78FA57CEF4CFE24A7749_gshared (SubsystemDescriptor_1_tE2E4F2A029DA1A307F018FCE747BA53FB9E344C2 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this);
		SubsystemDescriptor__ctor_m36DDE5770481719052DCBDC48DC4494D886DE747((SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.Subsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subsystem_1__ctor_mF48658BD81F116DB10200B88E096D01B97C6B2A2_gshared (Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		Subsystem__ctor_m00FD26014DE966433A871B78ED54389E8DC59E94((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int16>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_m9476CE53AA3A940BE39F744C32FAE4EBE670A504_gshared (Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method)
{
	{
		// this.a = a;
		int16_t L_0 = ___a0;
		__this->set_a_0(L_0);
		// this.b = b;
		int16_t L_1 = ___b1;
		__this->set_b_1(L_1);
		// this.c = c;
		int16_t L_2 = ___c2;
		__this->set_c_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Triangle_1__ctor_m9476CE53AA3A940BE39F744C32FAE4EBE670A504_AdjustorThunk (RuntimeObject * __this, int16_t ___a0, int16_t ___b1, int16_t ___c2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 * _thisAdjusted = reinterpret_cast<Triangle_1_t8CE491A6245AC21EDB2211D28B04C6933CE9D127 *>(__this + _offset);
	Triangle_1__ctor_m9476CE53AA3A940BE39F744C32FAE4EBE670A504(_thisAdjusted, ___a0, ___b1, ___c2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitFaceSubsystem_ARKitProvider_Triangle`1<System.Int32>::.ctor(T,T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_1__ctor_m22D54796A53F5AB72D435061BAF9A9A100523293_gshared (Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	{
		// this.a = a;
		int32_t L_0 = ___a0;
		__this->set_a_0(L_0);
		// this.b = b;
		int32_t L_1 = ___b1;
		__this->set_b_1(L_1);
		// this.c = c;
		int32_t L_2 = ___c2;
		__this->set_c_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Triangle_1__ctor_m22D54796A53F5AB72D435061BAF9A9A100523293_AdjustorThunk (RuntimeObject * __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 * _thisAdjusted = reinterpret_cast<Triangle_1_t66B6090CD3B932D41D42362B58EE8D8260C4B462 *>(__this + _offset);
	Triangle_1__ctor_m22D54796A53F5AB72D435061BAF9A9A100523293(_thisAdjusted, ___a0, ___b1, ___c2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARKit.ARKitImageDatabase_DeallocateNativeArrayJob`1<System.Byte>::Execute()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void DeallocateNativeArrayJob_1_Execute_m2B1B76F8A836E86ECE370174C423C57C04EBE7E1_gshared (DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	{
		// public void Execute() {}
		return;
	}
}
IL2CPP_EXTERN_C  void DeallocateNativeArrayJob_1_Execute_m2B1B76F8A836E86ECE370174C423C57C04EBE7E1_AdjustorThunk (RuntimeObject * IL2CPP_PARAMETER_RESTRICT __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A * _thisAdjusted = reinterpret_cast<DeallocateNativeArrayJob_1_t59DBA0C9BBC893D25CDD20316BE2D44BCF0BEE5A *>(__this + _offset);
	DeallocateNativeArrayJob_1_Execute_m2B1B76F8A836E86ECE370174C423C57C04EBE7E1(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mA27FCE26D39C737B0D39189A21C594C7FBBC67AD_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, const RuntimeMethod* method)
{
	{
		// protected override void OnKeepWaiting() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_m3C23D5D554693193E9D774F01AAFDD5D42C248DC_gshared (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * __this, int32_t ___immediateResult0, const RuntimeMethod* method)
{
	{
		// public ImmediatePromise(T immediateResult)
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Resolve(immediateResult);
		int32_t L_0 = ___immediateResult0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::OnKeepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise_OnKeepWaiting_mD1171A9214048BBB743143B236981281DA7F58B4_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, const RuntimeMethod* method)
{
	{
		// protected override void OnKeepWaiting() { }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1_ImmediatePromise<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmediatePromise__ctor_mE88D02E2D6748FD79DC319981EEA9737025B98D5_gshared (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * __this, RuntimeObject * ___immediateResult0, const RuntimeMethod* method)
{
	{
		// public ImmediatePromise(T immediateResult)
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		// Resolve(immediateResult);
		RuntimeObject * L_0 = ___immediateResult0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_mB7B580185D69F835FCA4E8DA20527FF6FC537ED4_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		// OnKeepWaiting();
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::OnKeepWaiting() */, (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		// return !m_Complete;
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mBBDFBF348B06877416B4E792897ADFE5E8CA0D5C_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * Promise_1_CreateResolvedPromise_mB605C1D88AB74006BD3AA2C791854687156606DA_gshared (int32_t ___result0, const RuntimeMethod* method)
{
	{
		// return new ImmediatePromise(result);
		int32_t L_0 = ___result0;
		ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF * L_1 = (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_t16B373AE2A03B114E7629932B9CC7A063BD6EACF *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_m504DCDC94B2BA352C3AC50DCB2549CAA67C015FB_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	{
		// this.result = result;
		int32_t L_0 = ___result0;
		NullCheck((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this);
		((  void (*) (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// m_Complete = true;
		__this->set_m_Complete_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m32E79F764B084F1C1978EDE2B76AD9F1A4CDD0BF_gshared (Promise_1_tF9FBB5000BE390F6ECFC210DC39F175828FBA068 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Promise_1_get_keepWaiting_m3BC77691EF491FC7554898C044757953A1059AD7_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		// OnKeepWaiting();
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::OnKeepWaiting() */, (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		// return !m_Complete;
		bool L_0 = (bool)__this->get_m_Complete_1();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::set_result(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_set_result_mB1D488EFEE0DA6A1C22CEE6363403E04AC9BD6B3_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public T result { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CresultU3Ek__BackingField_0(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::CreateResolvedPromise(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * Promise_1_CreateResolvedPromise_mFEF2285EE72DED544C72E164300EBF4F51634667_gshared (RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		// return new ImmediatePromise(result);
		RuntimeObject * L_0 = ___result0;
		ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 * L_1 = (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (ImmediatePromise_tA93EB63F910034B9183ACBF4D6F4C168A19FC8B1 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(L_1, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::Resolve(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1_Resolve_mB8F668BC7267A97F759AB1B008C01BB404EA67BF_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		// this.result = result;
		RuntimeObject * L_0 = ___result0;
		NullCheck((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this);
		((  void (*) (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		// m_Complete = true;
		__this->set_m_Complete_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.Promise`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Promise_1__ctor_m4A14410F2E5858E437D0DD77CDEB8C4C09113C63_gshared (Promise_1_t1A51B563626A69622F5F2FBAF24940E41B6106C4 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this);
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5((CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D *)__this, /*hidden argument*/NULL);
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
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_3 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_7 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1__ctor_m4A193845C3E4725BF34FB7A8C99AD4AE584D65B0(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_5 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_11 = ((  NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  (*) (BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, BoundedPlane_t5FBCC289E172852D4A9C51F6581B3C7EEE17A227  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1__ctor_mD1C95CFBA5AA7D0B4B0E4048D8F7E52246202202(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.BoundedPlane>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_gshared (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * L_1 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 * L_2 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m4DFF1BE1612C27B903F9B66C2B03D09D6E711762((NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)(NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_inline((TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)(TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE *>(__this + _offset);
	TrackableChanges_1_Dispose_m7AF1F8FE11710AD279FA5001D21F0624BF0BFBEB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_0 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	return TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_0 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	return TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	return TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_3 = ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_7 = ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_inline((TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	TrackableChanges_1__ctor_mE2958D473E974152D30E9AD5EB82E9D7517357CA(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_5 = ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_11 = ((  NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  (*) (XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_inline((TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRAnchor_tF8F3D332F0D694D2BDF802B8EF5010D4ECEBAB29  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	TrackableChanges_1__ctor_mA4AA6574F734AF4C1FA04611ED5D718425404667(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRAnchor>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531_gshared (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_inline((TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * L_1 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m1B7AAFDF26CE66229CC8F95640EE2FE748851443((NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *)(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C * L_2 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m1B7AAFDF26CE66229CC8F95640EE2FE748851443((NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *)(NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_inline((TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)(TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 *>(__this + _offset);
	TrackableChanges_1_Dispose_m9F974954910C7BA59645F4503102842B8F1DB531(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_3 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_7 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1__ctor_m38103DC7C2BBD677E6578E74101E733FA148EA2B(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_5 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_11 = ((  NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  (*) (XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XREnvironmentProbe_tDB5526F4BBECB568A61BB4E0BD38612DE053C5A2  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1__ctor_mA5EBEA61571F0A7B407FA704C570562260D560FE(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_gshared (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * L_1 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 * L_2 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mB40809DC629860F868E59D49C1A217628077DED5((NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)(NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_inline((TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)(TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 *>(__this + _offset);
	TrackableChanges_1_Dispose_m79DFEB8FFF32EB7C3AE17D341223E0B9AE5172BE(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_0 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	return TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_0 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	return TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	return TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_3 = ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_7 = ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_inline((TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	TrackableChanges_1__ctor_mAEFA17DC75F101995E9AD141FC2D2A360ED04A9D(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_5 = ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_11 = ((  NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  (*) (XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_inline((TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRHumanBody_t64938399EB40376E99745517E15D42FFC4604BC1  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	TrackableChanges_1__ctor_m859CA5B973D4AD250F12979A582B9F5D56007BFD(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRHumanBody>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A_gshared (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_inline((TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * L_1 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mF075AE11F3DFF21CA4E5A17B28A0F9D1B52D5926((NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *)(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 * L_2 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mF075AE11F3DFF21CA4E5A17B28A0F9D1B52D5926((NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *)(NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_inline((TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)(TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B *>(__this + _offset);
	TrackableChanges_1_Dispose_m7F29A9FDEA683B63D471FB1D5505A6D8EC7A107A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_0 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	return TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_0 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	return TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	return TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_3 = ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_7 = ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_inline((TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	TrackableChanges_1__ctor_mDDC118D5D9C1778A29D53689C6163EFA15E1376E(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_5 = ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_11 = ((  NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  (*) (XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_inline((TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRParticipant_t851D63496AD2945027531CD8ECA527E63F7AC062  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	TrackableChanges_1__ctor_m4280046F729EDD25F80D5B743876A41CE9823D7A(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRParticipant>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F_gshared (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_inline((TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * L_1 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mCD2A36C7D28AD10CA9BD9B9E62478D9E3EF3E4A0((NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *)(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 * L_2 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mCD2A36C7D28AD10CA9BD9B9E62478D9E3EF3E4A0((NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *)(NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_inline((TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)(TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 *>(__this + _offset);
	TrackableChanges_1_Dispose_m60CF6C2CC07EE7048DC9F3B79539DF00AE8E494F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_3 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_7 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1__ctor_m361D34386BF70BD6CE42798F5C8E712472CEA96F(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_5 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_11 = ((  NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  (*) (XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRPointCloud_tA4A412DE503530E1B2953919F1463B9B48504ED0  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1__ctor_mA69A666BCF692D5A8660A564A4450ABF6C80FD90(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRPointCloud>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_gshared (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * L_1 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 * L_2 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mAF31B95CE89FF647372855A4ECFB9FCDDE39C38B((NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)(NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_inline((TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)(TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB *>(__this + _offset);
	TrackableChanges_1_Dispose_mE3DC3C0230641A828B6A91F3CB94441797520834(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_0 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	return TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_0 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	return TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_3 = ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_7 = ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_inline((TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	TrackableChanges_1__ctor_m0F2E4D2290F101D45E1FBD07C6A982353BB82725(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_5 = ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_11 = ((  NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  (*) (XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_inline((TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRRaycast_tF33917AA4977AA3C4FB3743025486D3FE0FC4695  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	TrackableChanges_1__ctor_mDA00031FEF30166C777EAA834AC296CBD3999D26(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRRaycast>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927_gshared (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_inline((TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * L_1 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m9B5512039EA4C44484269F14D1D6E85756E50770((NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *)(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 * L_2 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m9B5512039EA4C44484269F14D1D6E85756E50770((NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *)(NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_inline((TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)(TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 *>(__this + _offset);
	TrackableChanges_1_Dispose_mD94219A546EDDDB49B7F46077FB2BF92C53F4927(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_3 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_7 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1__ctor_m3775F3DF0674338D9E941B0A46CC0169E03556F4(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_5 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_11 = ((  NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  (*) (XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedImage_t178EACF5BFA4228DF4EB1899685C533F3F296AA8  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1__ctor_m3477ECC2A1A2FF3D7287DF3B5BDFC7F272FDB3EE(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_gshared (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * L_1 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 * L_2 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_m8645D533921C8C5BE22919B57D259A4240AB379A((NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)(NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_inline((TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)(TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * _thisAdjusted = reinterpret_cast<TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F *>(__this + _offset);
	TrackableChanges_1_Dispose_m5A25C5A0DF692BA62C0C9E9DD458E28462000702(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_0 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	return TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_0 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	return TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_inline(_thisAdjusted, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.TrackableId> UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	return TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_inline(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::get_isCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	return TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::set_isCreated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Int32,System.Int32,System.Int32,Unity.Collections.Allocator,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultValue4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, addedCount, allocator);
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ___defaultValue4;
		int32_t L_1 = ___addedCount0;
		int32_t L_2 = ___allocator3;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_3 = ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Added_1(L_3);
		// m_Updated = NativeCopyUtility.CreateArrayFilledWithValue(defaultValue, updatedCount, allocator);
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_4 = ___defaultValue4;
		int32_t L_5 = ___updatedCount1;
		int32_t L_6 = ___allocator3;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_7 = ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0)->methodPointer)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_4, (int32_t)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		__this->set_m_Updated_2(L_7);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_8 = ___removedCount2;
		int32_t L_9 = ___allocator3;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_10);
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_inline((TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F_AdjustorThunk (RuntimeObject * __this, int32_t ___addedCount0, int32_t ___updatedCount1, int32_t ___removedCount2, int32_t ___allocator3, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultValue4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	TrackableChanges_1__ctor_m74A03F34FC6ED4588C7CB90F270387DAAC882F8F(_thisAdjusted, ___addedCount0, ___updatedCount1, ___removedCount2, ___allocator3, ___defaultValue4, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::.ctor(System.Void*,System.Int32,System.Void*,System.Int32,System.Void*,System.Int32,T,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Added = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, addedPtr, stride, addedCount, allocator);
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_0 = ___defaultT6;
		void* L_1 = ___addedPtr0;
		int32_t L_2 = ___stride7;
		int32_t L_3 = ___addedCount1;
		int32_t L_4 = ___allocator8;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_5 = ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_0, (void*)(void*)L_1, (int32_t)L_2, (int32_t)L_3, (int32_t)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Added_1(L_5);
		// m_Updated = NativeCopyUtility.PtrToNativeArrayWithDefault<T>(defaultT, updatedPtr, stride, updatedCount, allocator);
		XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  L_6 = ___defaultT6;
		void* L_7 = ___updatedPtr2;
		int32_t L_8 = ___stride7;
		int32_t L_9 = ___updatedCount3;
		int32_t L_10 = ___allocator8;
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_11 = ((  NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  (*) (XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 , void*, int32_t, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)((XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260 )L_6, (void*)(void*)L_7, (int32_t)L_8, (int32_t)L_9, (int32_t)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		__this->set_m_Updated_2(L_11);
		// m_Removed = new NativeArray<TrackableId>(removedCount, allocator);
		int32_t L_12 = ___removedCount5;
		int32_t L_13 = ___allocator8;
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/NativeArray_1__ctor_m49FCF39766C38037835E85C0A677B26599D0BE55_RuntimeMethod_var);
		__this->set_m_Removed_3(L_14);
		// if (removedCount > 0)
		int32_t L_15 = ___removedCount5;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// UnsafeUtility.MemCpy(m_Removed.GetUnsafePtr(), removedPtr, removedCount * sizeof(TrackableId));
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_16 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		void* L_17 = NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )L_16, /*hidden argument*/NativeArrayUnsafeUtility_GetUnsafePtr_TisTrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_m42DF8D6A6A551F03D0019CFD8CD120F308E38FD2_RuntimeMethod_var);
		void* L_18 = ___removedPtr4;
		int32_t L_19 = ___removedCount5;
		uint32_t L_20 = sizeof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 );
		UnsafeUtility_MemCpy_mA675903DD7350CC5EC22947C0899B18944E3578C((void*)(void*)L_17, (void*)(void*)L_18, (int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)L_20))))), /*hidden argument*/NULL);
	}

IL_0058:
	{
		// isCreated = true;
		TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_inline((TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)__this, (bool)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF_AdjustorThunk (RuntimeObject * __this, void* ___addedPtr0, int32_t ___addedCount1, void* ___updatedPtr2, int32_t ___updatedCount3, void* ___removedPtr4, int32_t ___removedCount5, XRTrackedObject_tF08D3523D17E214EC3D7DBE8ED5BFE220BAAE260  ___defaultT6, int32_t ___stride7, int32_t ___allocator8, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	TrackableChanges_1__ctor_mD3BF9E8193EF890B4977549BF6374BE3D5165CBF(_thisAdjusted, ___addedPtr0, ___addedCount1, ___updatedPtr2, ___updatedCount3, ___removedPtr4, ___removedCount5, ___defaultT6, ___stride7, ___allocator8, method);
}
// System.Void UnityEngine.XR.ARSubsystems.TrackableChanges`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790_gshared (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCreated)
		bool L_0 = TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_inline((TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		// m_Added.Dispose();
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * L_1 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *)__this->get_address_of_m_Added_1();
		NativeArray_1_Dispose_mA88D5D4DAC3D042D2DBB1DBBC45EC820AE85242A((NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *)(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Updated.Dispose();
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 * L_2 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *)__this->get_address_of_m_Updated_2();
		NativeArray_1_Dispose_mA88D5D4DAC3D042D2DBB1DBBC45EC820AE85242A((NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *)(NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		// m_Removed.Dispose();
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 * L_3 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)__this->get_address_of_m_Removed_3();
		NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7((NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)(NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 *)L_3, /*hidden argument*/NativeArray_1_Dispose_mB8124101177299FC76251C4E7F6C98BB0E5503C7_RuntimeMethod_var);
	}

IL_0029:
	{
		// isCreated = false;
		TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_inline((TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)(TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *)__this, (bool)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * _thisAdjusted = reinterpret_cast<TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 *>(__this + _offset);
	TrackableChanges_1_Dispose_mA1365656D4814F94F14E5A34A975A00F5892C790(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.BoundedPlane,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mF1761D396F2FC0B6BA3AA3F0DCDF7577A946B13A_gshared (TrackingSubsystem_2_t0D6BC19D17058B4CBF6E3E9122F09A5A86A8566C * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRAnchor,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mFE9A359ABAF0380102B339A75B8BC23F39042694_gshared (TrackingSubsystem_2_tBBEF32426BE0DAA00ED44E62EFDF90DC38EFF4B6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XREnvironmentProbe,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mD1B4842F29FB022CE1B973296BB4D7888A93835E_gshared (TrackingSubsystem_2_tF85E28B67FC3325EEB52CE2A8DA0361B2BD80909 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7625CF45A30E7BA1C410ADCDD6556266E9BDE509_gshared (TrackingSubsystem_2_t810E285415E1644FA85391E12F95806CEE3C50EB * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRHumanBody,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mB17216C41B97F6316E4463418DA55CA2F56FB8AD_gshared (TrackingSubsystem_2_tBB99F93D6653B71E3A2C1E2116F8599311DC72D6 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRParticipant,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mAD87406CF32419E9D04D5D4CF11171730564BAEE_gshared (TrackingSubsystem_2_tE2F49A29D690020049C702A06ED3969AE2A39863 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRPointCloud,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m90E4D38CB60953BC61F7EFCD9B846A9071C9DF4B_gshared (TrackingSubsystem_2_t1EC759A75AE7EFD4E4446A20009C8472E1C8AED1 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRRaycast,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_m7009123249648CD9809E3549375C56DB6B583772_gshared (TrackingSubsystem_2_tAE9BB8C8235205F41DFEA520A6AD8877415FA95B * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedImage,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mE7AF1FD3521B4B3FE7D13D6BA44F324F0C0AC745_gshared (TrackingSubsystem_2_t9DCCF84BEF8FF140325BC90B18398D78CACAFF00 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.TrackingSubsystem`2<UnityEngine.XR.ARSubsystems.XRTrackedObject,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackingSubsystem_2__ctor_mFD6F43BFD4E9884C5B789EA27DF50136997A057B_gshared (TrackingSubsystem_2_t463AAAB107BF4F04078A98431C680E92C4B53148 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		((  void (*) (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
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
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_m1C3927954CD17660201ED1010789DEF485923F98_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// if (m_Destroyed)
		bool L_0 = (bool)__this->get_m_Destroyed_2();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_Destroyed = true;
		__this->set_m_Destroyed_2((bool)1);
		// Stop();
		NullCheck((Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		VirtActionInvoker0::Invoke(8 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6 *)__this);
		// OnDestroyed();
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnDestroyed() */, (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_m79AAFA344C82E9EA7A9B601C5CB86226D9662A21_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		VirtActionInvoker0::Invoke(10 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStart() */, (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->set_m_Running_1((bool)1);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mFF7A9B03AD6DC511B2A48D501EA850102666040E_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->get_m_Running_1();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		NullCheck((XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
		VirtActionInvoker0::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::OnStop() */, (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A *)__this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->set_m_Running_1((bool)0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mE4899E6701EB0E563C03F950450FDDAC4FF21BAF_gshared (XRSubsystem_1_tF1AF6BF44AE813FB0C425AC60D3C9E9DF5904C3A * __this, const RuntimeMethod* method)
{
	{
		NullCheck((Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A *)__this);
		((  void (*) (Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((Subsystem_1_t1D247421E3BB147A2EA5818A6547BDB24291316A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject * Delegate_get_Target_m5371341CE435E001E9FD407AE78F728824CE20E2_inline (Delegate_t * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_m_target_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * SubsystemDescriptor_get_subsystemImplementationType_mCF20A5F2E10F34F73853FEC4D3893B49EB49C166_inline (SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CsubsystemImplementationTypeU3Ek__BackingField_1();
		return L_0;
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
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_added_m63AFCF25226B28A1F645793B0148358240C9309E_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  TrackableChanges_1_get_updated_m1D7AFC816EACE233551588E18E321BDA0F3919A8_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5  L_0 = (NativeArray_1_tA6F096859415F695BE7D1C4788FFBE2BB3FEB7D5 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mFC97F3FE78DFC548F04543CF1246DC1EC61B8214_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mA423E6EE5F48904DF767922DF13E2E0CF69535C6_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m13ACF4058532E679A8DE069092C203B86CBDCAE0_gshared_inline (TrackableChanges_1_t58DA4DDCECFD0F3DF5CFA68485A8D322B2D83CAE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_added_m1F518D8511B8C544AA80441F431DCBE292D28549_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_0 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  TrackableChanges_1_get_updated_m6550ABAC065887E1A8BCACB32C20F6F982ACD2E9_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C  L_0 = (NativeArray_1_tB25D2108AC3D7F9423783678FD37E3D5ACAF8E0C )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF5E5272376F66EDFCDA7468EDC91EDFCF88B5579_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m4F35A0983294E9F5BFD0A43828034564C644DD5D_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m44A14A5C71CAF1DE37527CC686FB40F7621DE727_gshared_inline (TrackableChanges_1_t7EC0E5114566AC87222078BB8FE730B14C63EAE4 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_added_mE0848158257AE8C982CC5C7DD696842859B17723_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  TrackableChanges_1_get_updated_mB2CED16796CCEF038435DE562D4559E8253C913C_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3  L_0 = (NativeArray_1_t053AA43438F6D2A21608DBC7110B8063B3FB6EA3 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m069C4B80B5FE4272B0281B25ABD38C0505A9737F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6C6A939E68AC32FE0B9979B5AE2169F6D4BCC9A4_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m24C26B088F3D010E0CD26E6783A735BFF8B3A03F_gshared_inline (TrackableChanges_1_t5B1E235F751BB96851611F0EE82810617DA588C7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_added_mAC12696B7D12A00A3FE9C34A2FF8F22ED6A3BD6C_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_0 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  TrackableChanges_1_get_updated_mCD92C9A6154DC58C63992B59E6671BC8AE07F9C8_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8  L_0 = (NativeArray_1_t140FCB442630D549508192A9E3737425E84D15F8 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m377C6A3BFE41CC689AFE09CE1529B79113140DD2_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m68F2E3D10D821918F3C0002EAA07440EC60CB4B0_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m6FF97BC809D88ABBCD88D515340CBC1F1EE27D83_gshared_inline (TrackableChanges_1_t8F77CF9D37FD0DCA052A7D6B34E1A489AF13C41B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_added_mB04DBD3BE41499A2EF2DE7526EAF99320F6A756C_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_0 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  TrackableChanges_1_get_updated_m54F7E4A07B0A06215ACD1E258FECA69ADB35775A_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839  L_0 = (NativeArray_1_t6D63EE174652E6706D62F78177F0A2C25DD14839 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mD4DBD0C1F36479738568BDFAD7593F18AD67E77D_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m067B52246049E2A270AD9361E9785E01220C3653_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m2B7703A08CA684B2B5F7DDB1A9F038606B6DEFB7_gshared_inline (TrackableChanges_1_tADA077C1D8520E93DBAF760C434863B1E46EABF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_added_mBB3A80E298216A6D8826422F62A11A1A4CB7CBD9_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  TrackableChanges_1_get_updated_m80DB51775906B404AEE4C7454E7A517ECFD6A003_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582  L_0 = (NativeArray_1_t5F0698DD293100E2FECB8BC55FCBC3A3F6FEA582 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mC49E91CAF67469CDD76DBCF18D1423DC3971AF99_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_m6BDB6E85EF722CE4F115552E754E059F9BBA87B8_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_mE659C5BCD61914E799B4D6AAE6AD5AD7B9DDCE76_gshared_inline (TrackableChanges_1_t67F5E50C0B7A063774AEC211C4C81BA7679876BB * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_added_m3D40B25E1DBFA2CE12A65E40E7AC06E818AD9E52_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_0 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  TrackableChanges_1_get_updated_mF70FB659BBDD40064C52ABA36021CCB637733421_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820  L_0 = (NativeArray_1_t711C0619935632A17A06268FC39D95AAD4267820 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_mF48037B3FBE8CDCE917EF589128FEF13EB22466A_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mE7062CDEA7A2A8C0D4870958F3AAC7638023B042_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m6C230A7A4F1E10944B60F12D988B1B0186897EDD_gshared_inline (TrackableChanges_1_t05F219FC68E80EA9891CEEB35CBABA06F836FDD3 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_added_mC35012A2E03A744ECF4A6E58D2DA1C34D85CA6ED_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  TrackableChanges_1_get_updated_mF1CCDAA99909A241F138D24B4175AD6806E65323_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1  L_0 = (NativeArray_1_t70F653CBE89924503B639B2438D6FF5973388AC1 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m7CF311E706E890B2CC9281BC392849E4DE880ECA_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mEEE0707FBE540E3961450502B2C2771AA02ABF83_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m360183150F0DE3BAE45AD1C6C942146BF81F51D4_gshared_inline (TrackableChanges_1_tE90399F00562881A054A3592F7AF134BA053AF4F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_added_m6B4AFC77B682299AFAB977EDEAF164E6B63E3670_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> added { get { return m_Added; } }
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_0 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )__this->get_m_Added_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  TrackableChanges_1_get_updated_mDDB738464599270A745A15C57FC941EEBEC00700_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<T> updated { get { return m_Updated; } }
		NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529  L_0 = (NativeArray_1_t738892D030F76D319525B8C000F49D41505DD529 )__this->get_m_Updated_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  TrackableChanges_1_get_removed_m53E0E551E0ACC552E62D8BA2A0A234D72CAB6C74_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<TrackableId> removed { get { return m_Removed; } }
		NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6  L_0 = (NativeArray_1_tD7797CC5848BA9ECBD1172056474C8DD8022B1D6 )__this->get_m_Removed_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool TrackableChanges_1_get_isCreated_mBFB9748C1EA377BE047EC13F736E0C8C207E441C_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = (bool)__this->get_U3CisCreatedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR void TrackableChanges_1_set_isCreated_m085A94096B2D33690423DF6A6777D7586B582D14_gshared_inline (TrackableChanges_1_t03A664B58E58E32B5EC1F7CB7133E87F804EE874 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool isCreated { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3CisCreatedU3Ek__BackingField_0(L_0);
		return;
	}
}
