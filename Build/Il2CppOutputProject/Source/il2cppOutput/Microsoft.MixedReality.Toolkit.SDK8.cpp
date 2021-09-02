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

// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A;
// Microsoft.MixedReality.Toolkit.Input.ICursorModifier
struct ICursorModifier_tC7EAC7836F81313A50041DF0C8D9944C5FEF7ED9;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor
struct IMixedRealityCursor_t99802F140174CC14C3D1B9EC3D4EDCBC044A5EB2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler
struct IMixedRealityFocusHandler_t7741C0B9EB12FAACCA95AB3040CA1AC7E0BD32B0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_t3DF047626F1FC0EB07427CE95E81C663076DA440;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t86B8C18CE9950C6BCA684AA052D5C04802DA1CC0;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_t901F277C8246CF316986DCE1DB0F5D6A2F25118D;
// Microsoft.MixedReality.Toolkit.Input.IPointerResult
struct IPointerResult_t6774D3B7743DFF4CB0742648178AFC8D9815A75D;
// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29;
// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer
struct IBaseRayStabilizer_t29BE11769A7BE970972E65EC6156953A1F6C8376;
// Microsoft.MixedReality.Toolkit.Physics.RayStep[]
struct RayStepU5BU5D_t32267AAE356422BFF0DCFFF0C55A63D3A2A977D2;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider
struct BaseMixedRealityLineDataProvider_t1071EE153B6506F41816A2D9D875ACA2CBCB27BA;
// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[]
struct BaseMixedRealityLineRendererU5BU5D_tB8AFA282090BF3861BC68D4E533D2176CF3D042F;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t894852CBF487B61F12185C0FB8416BF0AC3CCB4D;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace
struct TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C;
// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.IEnumerable`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IEnumerable_1_t041D7B32236E217FAAE9E985A381829396FCE691;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2F75FCBEC68AFE08982DA43985F9D04056E2BE73;
// System.Collections.Generic.IList`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IList_1_tA0346830366F058962665E31B15BF3D8022495E3;
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct IReadOnlyCollection_1_tCEB7BFA8B3B0DD548945E97BBD18FA3F490BC278;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gradient
struct Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityRaycaster_t47BFF3EED078208D092DAAA9A9A6BCD47F8C5660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8470CF56DD2F02DFDDA06EEF61875E5092940A;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF0514AA4017533AA16ED833590C7207CDFAE67;
IL2CPP_EXTERN_C String_t* _stringLiteral73D602FC6589B323CB25EF3AB5EC890722F0462E;
IL2CPP_EXTERN_C String_t* _stringLiteral787C1414705A5BB205FC61C22B67643D57F90A57;
IL2CPP_EXTERN_C String_t* _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E;
IL2CPP_EXTERN_C String_t* _stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B;
IL2CPP_EXTERN_C String_t* _stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7;
IL2CPP_EXTERN_C String_t* _stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F;
IL2CPP_EXTERN_C String_t* _stringLiteralB77BEAEBB0343C40DD9CDA270E3835797BAB5BA9;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E0DFEC468C7B19CACF875ACED4277DD39E045;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionsExtensions_ToReadOnlyCollection_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m309E75CDB2DA1A8D4F50612AB0BE2E001189B514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501_m2965018DFE5FFC05ACC011EDA7F672A7B6A2EF7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m9DD6502110C019F389D0C86476463981E511F822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_mCD2D3703A678EBAFD1A2514798F8CE126EDDDEAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Intersect_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_mCF21AD9C7C2FE01C274CB1370BA7396F45A6B044_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m3E18C38802A2B0E1B9A84AD00662CB6EABCBD6B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t1CC0D711077526528D28237124307E0A87413A96_mE70BFAB467C51859DCFD8A78B6A5871C1D822D2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t1CC0D711077526528D28237124307E0A87413A96_mD7885C37BD9F1F9C5203320C41C5D0F8D10EA28C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m2FEB6842262E25D4CBBAE48F1840A8264B1FEABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBFDBBE482FD4D2AF4EE3CFC074DAAE67A92056DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_mD0C00451CFB952F363D49587A3436D017A0658B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2A165951652FCC06814639B891FC8838266A9F08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m682835B28BE5F66157663280FF94749AF30C56DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m22D50C60B17E77F037E2FD9D11B78939BDA6ACCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3702853AF510D376673D23469224159196DC8EB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1F0092E76A507C944CEB3B67F71943125E085CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD36DB698E3AD46A37D1ABADB693108DC5CCF6BA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Momentum_OnEnable_m49EC0175968942DCEDCB1C2C8E19A110A774CBEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_SnapTo_m2C2BA0F157D61704DD09048FB729E629C26BCB62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_SolverUpdate_m491EE68A79D846BA9CDD78931225230D93667BC5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Momentum_get_ReferencePosition_mDB8660C4637560B1743C1B418140F8A6BD554A8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_CalculateDesiredRotation_m6793868E20221B070ACF90D4094712236BA93462_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_SolverUpdate_m9B09457CDF6ADBFCBD0B5A5DE8136D9F832656BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital__ctor_m2F6384E0145B3C94EF360AA7452925CF89E0471F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Orbital_set_TetherAngleSteps_m6E8BC8B932156806A58B69E288B685BC00D0C5BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Overlap_SolverUpdate_m0D89318A45E99C770FA53F543AD7A2397A14D052_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_DistanceOnly_m584779D7E90A94456F2EE2157A27D04B46DD9340_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_GetDesiredOrientation_m7DB62412E0FAB98950B971E65E92B2B505B00235_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_SolverUpdate_m0605B7A94CD016262154F575F2FE6849C72333D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_SolverReferenceDirection_m73CEA7B7891BA0CD0ABBCD1A2EF121A8F7B1AE7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RadialView_get_UpReference_m36C2E33E67FFD01F25BD4F8ADC9BF33883C189A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_AttachToNewTrackedObject_m6E2D857093F469D170B6FC45CE1ED0E71393D95D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_Awake_m6DDAB07F75C14E121459755FD391852CADBDF0F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_DetachFromCurrentTrackedObject_m58C69606D58AEF85E36AE327E4D1DD44342DB7DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_GetControllerRay_m7281DA096D3758AD3875AB744CF0EEDC51F646C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_IsInvalidTracking_m37DD4B94E581FD9FE47D8A027162EBAC2E713442_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_LateUpdate_m12579A78DD81D0069793159B468AF12715707B3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_OnDestroy_mE83C7BE9B085077248ECF9C12023FCAE6898A339_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_RegisterSolver_m3C4B116418D15240948AD3029E55C158B42C6F94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_TrackTransform_m50749290308A0EE7A3A5E93DEFEF9FF85EE49B26_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_UnregisterSolver_m68B32538166479A949860FF44E9C48FCC93BA7E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler__ctor_m72F745CFE501CC5E150725E515030304F8D23681_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_Solvers_mA7501548CF08C0DC572659DC0C48CA117B1C6242_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalOffset_m528D684769DD82E5D957A541A76ED51A12606B58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_AdditionalRotation_m5278A1C1E7C734120C1BAC528ADB4048B0EB9008_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_Solvers_m9514DEB62A0BD1895DDDA839B10E3A0150B6271E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SolverHandler_set_TransformOverride_m47DA98C80E1563ADFF3661A54F225EA20074BD95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_AddOffset_m57C6EF7C8D03C35D35AD38BE936F3AF3295B0E44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Awake_m5EE45BA9448D89DEEFF754434210C419C2ADA5C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnDestroy_mC8B56BB544AD68883AC0DCFBF404B9AE488957D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_OnEnable_mB6DD8190940503B99BC53E3CDA3DF9E4FB769781_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_m44001F16B93ACE262FFA7D9A4546C0FB40314F90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Solver_Start_mCB1F0A3A2CD41A1A8C366B2B6EC3D0A8DAD71C74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_BoxRaycastStepUpdate_m4FA3FD2D1AE4221D77FB79D3175823CF569E4D40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_FindPlacementPlane_mD0D9C9C330948C4BB29B884B99C4EC3F4D3FD88C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_IsNormalVertical_mF42D13EE4FB3677BBDB98B2FC92D1C0BAC87C4AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SimpleRaycastStepUpdate_m590C867746E830E90179EDB02D026A9CE3F58EFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SolverUpdate_m3FE3D967ACF8B0C13A7A6D0413228A046474D683_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_SphereRaycastStepUpdate_m7944656CD8B05E89D28F39152A2C8C538F3D9F91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism__ctor_m4FF17D2334C99590F580CCD2B6C69558F5D03B99_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastDirection_m51EEB965B00823275BC485EDCF0B0D7EF5045E38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastEndPoint_mE3A641FE9A6DCB50F540117D4F6CD9A64C15D61E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_OnDisable_mF04F684BACFD389B51A52392A268D4767FB0ECCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_PerformRaycast_m8C3C83693E7E008A4B363AC271AEFB66B6EE2590_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SetPosition_m4F269E62677A0CAFCC32157639C332BFCA22EF47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SetRotation_mB3C9579915AF909F079ED354836B113B40D17BE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_SolverUpdate_mAAE0691045B1DE58337A80569F280E68CEA8075F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_StartPlacement_m17CC1BA56E14964D481963A2C2B2EA612CD7FD80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_Start_mA115017039E3534D3BEB5CA31BE14E73D61F2812_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_StopPlacement_m69A27ABC3B825CBCF8F7060DE229D7425D795F89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace__ctor_mD7C30E353C299223963A7FC592445C7180CCA511_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_get_IsColliderPresent_mE464DA1626A9BC121799D7B04979D042BFB3E52D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_get_defaultSurfaceNormalOffset_m48B37A29846BE7BC4A94EA420F87256A34115E37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TapToPlace_set_SurfaceNormalOffset_m6EED862192CB4D629DFB7D1BDD99FAB014B0EAB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_GetListPosition_m1BB305DD11B4128E43C782303B923D559785CFE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection_Update_m90FBE8E1EAC0CA2FBC24F967F96F9401BFAC9D3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TileGridObjectCollection__ctor_m7FCB55CF7374500CF57517B83F908ABD572B53CE_MetadataUsageId;

struct SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC;
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

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


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E, ____items_1)); }
	inline SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* get__items_1() const { return ____items_1; }
	inline SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E_StaticFields, ____emptyArray_5)); }
	inline SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.ObjectModel.ReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>
struct ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
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


// System.DateTime
struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
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


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.LayerMask
struct LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
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


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
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


// Microsoft.MixedReality.Toolkit.Physics.RayStep
struct RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Origin>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3COriginU3Ek__BackingField_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Terminus>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CTerminusU3Ek__BackingField_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::<Direction>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CDirectionU3Ek__BackingField_5;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_6;
	// System.Single Microsoft.MixedReality.Toolkit.Physics.RayStep::epsilon
	float ___epsilon_7;

public:
	inline static int32_t get_offset_of_U3COriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258, ___U3COriginU3Ek__BackingField_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3COriginU3Ek__BackingField_3() const { return ___U3COriginU3Ek__BackingField_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3COriginU3Ek__BackingField_3() { return &___U3COriginU3Ek__BackingField_3; }
	inline void set_U3COriginU3Ek__BackingField_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3COriginU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTerminusU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258, ___U3CTerminusU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CTerminusU3Ek__BackingField_4() const { return ___U3CTerminusU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CTerminusU3Ek__BackingField_4() { return &___U3CTerminusU3Ek__BackingField_4; }
	inline void set_U3CTerminusU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CTerminusU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDirectionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258, ___U3CDirectionU3Ek__BackingField_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CDirectionU3Ek__BackingField_5() const { return ___U3CDirectionU3Ek__BackingField_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CDirectionU3Ek__BackingField_5() { return &___U3CDirectionU3Ek__BackingField_5; }
	inline void set_U3CDirectionU3Ek__BackingField_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CDirectionU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258, ___U3CLengthU3Ek__BackingField_6)); }
	inline float get_U3CLengthU3Ek__BackingField_6() const { return ___U3CLengthU3Ek__BackingField_6; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_6() { return &___U3CLengthU3Ek__BackingField_6; }
	inline void set_U3CLengthU3Ek__BackingField_6(float value)
	{
		___U3CLengthU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_epsilon_7() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258, ___epsilon_7)); }
	inline float get_epsilon_7() const { return ___epsilon_7; }
	inline float* get_address_of_epsilon_7() { return &___epsilon_7; }
	inline void set_epsilon_7(float value)
	{
		___epsilon_7 = value;
	}
};

struct RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258_StaticFields
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dist
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dist_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::dir
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir_1;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::pos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos_2;

public:
	inline static int32_t get_offset_of_dist_0() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258_StaticFields, ___dist_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dist_0() const { return ___dist_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dist_0() { return &___dist_0; }
	inline void set_dist_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dist_0 = value;
	}

	inline static int32_t get_offset_of_dir_1() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258_StaticFields, ___dir_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_dir_1() const { return ___dir_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_dir_1() { return &___dir_1; }
	inline void set_dir_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___dir_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258_StaticFields, ___pos_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_pos_2() const { return ___pos_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___pos_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType
struct SceneQueryType_tC1685E15BC5EDF2F8A2E12475989DB2735A07229 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Physics.SceneQueryType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SceneQueryType_tC1685E15BC5EDF2F8A2E12475989DB2735A07229, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.TrackingState
struct TrackingState_t3F3BA5829CF29CE39CE69DCF16B4709EB29B3566 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t3F3BA5829CF29CE39CE69DCF16B4709EB29B3566, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t301E8BC803842961C6D57055922A242B17CC242D 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t301E8BC803842961C6D57055922A242B17CC242D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection
struct RadialViewReferenceDirection_t44D37575757F7E1C18B7B39FC6A2E3072B738AD0 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RadialViewReferenceDirection_t44D37575757F7E1C18B7B39FC6A2E3072B738AD0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType
struct SolverOrientationType_tC5BD961897F7B7D0A0A6F1617299530D6720954D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SolverOrientationType_tC5BD961897F7B7D0A0A6F1617299530D6720954D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode
struct OrientationMode_tB41CC920152B71F65B5EE829BE2D08F0862061F9 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationMode_tB41CC920152B71F65B5EE829BE2D08F0862061F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode
struct RaycastDirectionMode_t262F9A61DF5BF292056F502C0C63EF1F40ACBB93 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RaycastDirectionMode_t262F9A61DF5BF292056F502C0C63EF1F40ACBB93, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions
struct GridDivisions_t3A1B71D2298F70106C20F02FC702D57FD1558081 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GridDivisions_t3A1B71D2298F70106C20F02FC702D57FD1558081, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct TrackedHandJoint_tC369FA2A7A327BDD9AB9D899A8D82F1976C15FDB 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tC369FA2A7A327BDD9AB9D899A8D82F1976C15FDB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType
struct TrackedObjectType_t70FE763981CBEA7824AE848FF40078784B3BF208 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t70FE763981CBEA7824AE848FF40078784B3BF208, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed
struct Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
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

// UnityEngine.Plane
struct Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED 
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


// UnityEngine.Ray
struct Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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


// Microsoft.MixedReality.Toolkit.Input.BaseInputEventData
struct BaseInputEventData_tCE749D5FF599CCB04D16F84A848870D1F0397235  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// System.DateTime Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<EventTime>k__BackingField
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___U3CEventTimeU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CEventTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_tCE749D5FF599CCB04D16F84A848870D1F0397235, ___U3CEventTimeU3Ek__BackingField_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_U3CEventTimeU3Ek__BackingField_2() const { return ___U3CEventTimeU3Ek__BackingField_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_U3CEventTimeU3Ek__BackingField_2() { return &___U3CEventTimeU3Ek__BackingField_2; }
	inline void set_U3CEventTimeU3Ek__BackingField_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___U3CEventTimeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_tCE749D5FF599CCB04D16F84A848870D1F0397235, ___U3CInputSourceU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_3() const { return ___U3CInputSourceU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_3() { return &___U3CInputSourceU3Ek__BackingField_3; }
	inline void set_U3CInputSourceU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_tCE749D5FF599CCB04D16F84A848870D1F0397235, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CMixedRealityInputActionU3Ek__BackingField_4))->___description_2), (void*)NULL);
	}
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


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputEventData
struct InputEventData_tF991208D59CB1227E15FFAC33831BE7102738A68  : public BaseInputEventData_tCE749D5FF599CCB04D16F84A848870D1F0397235
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_tF991208D59CB1227E15FFAC33831BE7102738A68, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};


// UnityEngine.BoxCollider
struct BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener
struct InputSystemGlobalHandlerListener_t8EDFEA237240E69AC3A886ED126AB656F4196E1C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.InputSystemGlobalHandlerListener::lateInitialize
	bool ___lateInitialize_4;

public:
	inline static int32_t get_offset_of_lateInitialize_4() { return static_cast<int32_t>(offsetof(InputSystemGlobalHandlerListener_t8EDFEA237240E69AC3A886ED126AB656F4196E1C, ___lateInitialize_4)); }
	inline bool get_lateInitialize_4() const { return ___lateInitialize_4; }
	inline bool* get_address_of_lateInitialize_4() { return &___lateInitialize_4; }
	inline void set_lateInitialize_4(bool value)
	{
		___lateInitialize_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29  : public InputEventData_tF991208D59CB1227E15FFAC33831BE7102738A68
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPointerU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver
struct Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::updateLinkedTransform
	bool ___updateLinkedTransform_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::moveLerpTime
	float ___moveLerpTime_5;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::rotateLerpTime
	float ___rotateLerpTime_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::scaleLerpTime
	float ___scaleLerpTime_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::maintainScaleOnInitialization
	bool ___maintainScaleOnInitialization_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::smoothing
	bool ___smoothing_9;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::lifetime
	float ___lifetime_10;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::currentLifetime
	float ___currentLifetime_11;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverHandler
	SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * ___SolverHandler_12;

public:
	inline static int32_t get_offset_of_updateLinkedTransform_4() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___updateLinkedTransform_4)); }
	inline bool get_updateLinkedTransform_4() const { return ___updateLinkedTransform_4; }
	inline bool* get_address_of_updateLinkedTransform_4() { return &___updateLinkedTransform_4; }
	inline void set_updateLinkedTransform_4(bool value)
	{
		___updateLinkedTransform_4 = value;
	}

	inline static int32_t get_offset_of_moveLerpTime_5() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___moveLerpTime_5)); }
	inline float get_moveLerpTime_5() const { return ___moveLerpTime_5; }
	inline float* get_address_of_moveLerpTime_5() { return &___moveLerpTime_5; }
	inline void set_moveLerpTime_5(float value)
	{
		___moveLerpTime_5 = value;
	}

	inline static int32_t get_offset_of_rotateLerpTime_6() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___rotateLerpTime_6)); }
	inline float get_rotateLerpTime_6() const { return ___rotateLerpTime_6; }
	inline float* get_address_of_rotateLerpTime_6() { return &___rotateLerpTime_6; }
	inline void set_rotateLerpTime_6(float value)
	{
		___rotateLerpTime_6 = value;
	}

	inline static int32_t get_offset_of_scaleLerpTime_7() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___scaleLerpTime_7)); }
	inline float get_scaleLerpTime_7() const { return ___scaleLerpTime_7; }
	inline float* get_address_of_scaleLerpTime_7() { return &___scaleLerpTime_7; }
	inline void set_scaleLerpTime_7(float value)
	{
		___scaleLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_maintainScaleOnInitialization_8() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___maintainScaleOnInitialization_8)); }
	inline bool get_maintainScaleOnInitialization_8() const { return ___maintainScaleOnInitialization_8; }
	inline bool* get_address_of_maintainScaleOnInitialization_8() { return &___maintainScaleOnInitialization_8; }
	inline void set_maintainScaleOnInitialization_8(bool value)
	{
		___maintainScaleOnInitialization_8 = value;
	}

	inline static int32_t get_offset_of_smoothing_9() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___smoothing_9)); }
	inline bool get_smoothing_9() const { return ___smoothing_9; }
	inline bool* get_address_of_smoothing_9() { return &___smoothing_9; }
	inline void set_smoothing_9(bool value)
	{
		___smoothing_9 = value;
	}

	inline static int32_t get_offset_of_lifetime_10() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___lifetime_10)); }
	inline float get_lifetime_10() const { return ___lifetime_10; }
	inline float* get_address_of_lifetime_10() { return &___lifetime_10; }
	inline void set_lifetime_10(float value)
	{
		___lifetime_10 = value;
	}

	inline static int32_t get_offset_of_currentLifetime_11() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___currentLifetime_11)); }
	inline float get_currentLifetime_11() const { return ___currentLifetime_11; }
	inline float* get_address_of_currentLifetime_11() { return &___currentLifetime_11; }
	inline void set_currentLifetime_11(float value)
	{
		___currentLifetime_11 = value;
	}

	inline static int32_t get_offset_of_SolverHandler_12() { return static_cast<int32_t>(offsetof(Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF, ___SolverHandler_12)); }
	inline SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * get_SolverHandler_12() const { return ___SolverHandler_12; }
	inline SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 ** get_address_of_SolverHandler_12() { return &___SolverHandler_12; }
	inline void set_SolverHandler_12(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * value)
	{
		___SolverHandler_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SolverHandler_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler
struct SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedTargetType
	int32_t ___trackedTargetType_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandness
	uint8_t ___trackedHandness_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackedHandJoint
	int32_t ___trackedHandJoint_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::transformOverride
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transformOverride_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalOffset_8;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___additionalRotation_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::solvers
	List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * ___solvers_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::updateSolversList
	bool ___updateSolversList_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalPositionU3Ek__BackingField_13;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___U3CGoalRotationU3Ek__BackingField_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CGoalScaleU3Ek__BackingField_15;
	// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  ___U3CAltScaleU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_17;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::currentTrackedHandedness
	uint8_t ___currentTrackedHandedness_18;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::preferredTrackedHandedness
	uint8_t ___preferredTrackedHandedness_19;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::trackingTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___trackingTarget_20;
	// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::controllerRay
	LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * ___controllerRay_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_22;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::handJointService
	RuntimeObject* ___handJointService_23;

public:
	inline static int32_t get_offset_of_trackedTargetType_4() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___trackedTargetType_4)); }
	inline int32_t get_trackedTargetType_4() const { return ___trackedTargetType_4; }
	inline int32_t* get_address_of_trackedTargetType_4() { return &___trackedTargetType_4; }
	inline void set_trackedTargetType_4(int32_t value)
	{
		___trackedTargetType_4 = value;
	}

	inline static int32_t get_offset_of_trackedHandness_5() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___trackedHandness_5)); }
	inline uint8_t get_trackedHandness_5() const { return ___trackedHandness_5; }
	inline uint8_t* get_address_of_trackedHandness_5() { return &___trackedHandness_5; }
	inline void set_trackedHandness_5(uint8_t value)
	{
		___trackedHandness_5 = value;
	}

	inline static int32_t get_offset_of_trackedHandJoint_6() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___trackedHandJoint_6)); }
	inline int32_t get_trackedHandJoint_6() const { return ___trackedHandJoint_6; }
	inline int32_t* get_address_of_trackedHandJoint_6() { return &___trackedHandJoint_6; }
	inline void set_trackedHandJoint_6(int32_t value)
	{
		___trackedHandJoint_6 = value;
	}

	inline static int32_t get_offset_of_transformOverride_7() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___transformOverride_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_transformOverride_7() const { return ___transformOverride_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_transformOverride_7() { return &___transformOverride_7; }
	inline void set_transformOverride_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___transformOverride_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformOverride_7), (void*)value);
	}

	inline static int32_t get_offset_of_additionalOffset_8() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___additionalOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalOffset_8() const { return ___additionalOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalOffset_8() { return &___additionalOffset_8; }
	inline void set_additionalOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalOffset_8 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_9() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___additionalRotation_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_additionalRotation_9() const { return ___additionalRotation_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_additionalRotation_9() { return &___additionalRotation_9; }
	inline void set_additionalRotation_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___additionalRotation_9 = value;
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_solvers_11() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___solvers_11)); }
	inline List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * get_solvers_11() const { return ___solvers_11; }
	inline List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E ** get_address_of_solvers_11() { return &___solvers_11; }
	inline void set_solvers_11(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * value)
	{
		___solvers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___solvers_11), (void*)value);
	}

	inline static int32_t get_offset_of_updateSolversList_12() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___updateSolversList_12)); }
	inline bool get_updateSolversList_12() const { return ___updateSolversList_12; }
	inline bool* get_address_of_updateSolversList_12() { return &___updateSolversList_12; }
	inline void set_updateSolversList_12(bool value)
	{
		___updateSolversList_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___U3CGoalPositionU3Ek__BackingField_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalPositionU3Ek__BackingField_13() const { return ___U3CGoalPositionU3Ek__BackingField_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalPositionU3Ek__BackingField_13() { return &___U3CGoalPositionU3Ek__BackingField_13; }
	inline void set_U3CGoalPositionU3Ek__BackingField_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalPositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___U3CGoalRotationU3Ek__BackingField_14)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_U3CGoalRotationU3Ek__BackingField_14() const { return ___U3CGoalRotationU3Ek__BackingField_14; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_U3CGoalRotationU3Ek__BackingField_14() { return &___U3CGoalRotationU3Ek__BackingField_14; }
	inline void set_U3CGoalRotationU3Ek__BackingField_14(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___U3CGoalRotationU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___U3CGoalScaleU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CGoalScaleU3Ek__BackingField_15() const { return ___U3CGoalScaleU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CGoalScaleU3Ek__BackingField_15() { return &___U3CGoalScaleU3Ek__BackingField_15; }
	inline void set_U3CGoalScaleU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CGoalScaleU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___U3CAltScaleU3Ek__BackingField_16)); }
	inline Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  get_U3CAltScaleU3Ek__BackingField_16() const { return ___U3CAltScaleU3Ek__BackingField_16; }
	inline Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F * get_address_of_U3CAltScaleU3Ek__BackingField_16() { return &___U3CAltScaleU3Ek__BackingField_16; }
	inline void set_U3CAltScaleU3Ek__BackingField_16(Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  value)
	{
		___U3CAltScaleU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___U3CDeltaTimeU3Ek__BackingField_17)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_17() const { return ___U3CDeltaTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_17() { return &___U3CDeltaTimeU3Ek__BackingField_17; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_17(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_currentTrackedHandedness_18() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___currentTrackedHandedness_18)); }
	inline uint8_t get_currentTrackedHandedness_18() const { return ___currentTrackedHandedness_18; }
	inline uint8_t* get_address_of_currentTrackedHandedness_18() { return &___currentTrackedHandedness_18; }
	inline void set_currentTrackedHandedness_18(uint8_t value)
	{
		___currentTrackedHandedness_18 = value;
	}

	inline static int32_t get_offset_of_preferredTrackedHandedness_19() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___preferredTrackedHandedness_19)); }
	inline uint8_t get_preferredTrackedHandedness_19() const { return ___preferredTrackedHandedness_19; }
	inline uint8_t* get_address_of_preferredTrackedHandedness_19() { return &___preferredTrackedHandedness_19; }
	inline void set_preferredTrackedHandedness_19(uint8_t value)
	{
		___preferredTrackedHandedness_19 = value;
	}

	inline static int32_t get_offset_of_trackingTarget_20() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___trackingTarget_20)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_trackingTarget_20() const { return ___trackingTarget_20; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_trackingTarget_20() { return &___trackingTarget_20; }
	inline void set_trackingTarget_20(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___trackingTarget_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingTarget_20), (void*)value);
	}

	inline static int32_t get_offset_of_controllerRay_21() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___controllerRay_21)); }
	inline LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * get_controllerRay_21() const { return ___controllerRay_21; }
	inline LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E ** get_address_of_controllerRay_21() { return &___controllerRay_21; }
	inline void set_controllerRay_21(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * value)
	{
		___controllerRay_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerRay_21), (void*)value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_22() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___lastUpdateTime_22)); }
	inline float get_lastUpdateTime_22() const { return ___lastUpdateTime_22; }
	inline float* get_address_of_lastUpdateTime_22() { return &___lastUpdateTime_22; }
	inline void set_lastUpdateTime_22(float value)
	{
		___lastUpdateTime_22 = value;
	}

	inline static int32_t get_offset_of_handJointService_23() { return static_cast<int32_t>(offsetof(SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501, ___handJointService_23)); }
	inline RuntimeObject* get_handJointService_23() const { return ___handJointService_23; }
	inline RuntimeObject** get_address_of_handJointService_23() { return &___handJointService_23; }
	inline void set_handJointService_23(RuntimeObject* value)
	{
		___handJointService_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_23), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection
struct TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Columns
	int32_t ___Columns_4;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::TileSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___TileSize_5;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Gutters
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Gutters_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::LayoutDireciton
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___LayoutDireciton_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::StartPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___StartPosition_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Centered
	bool ___Centered_9;
	// Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection/GridDivisions Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::DepthCalculatedBy
	int32_t ___DepthCalculatedBy_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnlyInEditMode
	bool ___OnlyInEditMode_11;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::offSet
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offSet_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::editorUpdated
	bool ___editorUpdated_13;

public:
	inline static int32_t get_offset_of_Columns_4() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___Columns_4)); }
	inline int32_t get_Columns_4() const { return ___Columns_4; }
	inline int32_t* get_address_of_Columns_4() { return &___Columns_4; }
	inline void set_Columns_4(int32_t value)
	{
		___Columns_4 = value;
	}

	inline static int32_t get_offset_of_TileSize_5() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___TileSize_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_TileSize_5() const { return ___TileSize_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_TileSize_5() { return &___TileSize_5; }
	inline void set_TileSize_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___TileSize_5 = value;
	}

	inline static int32_t get_offset_of_Gutters_6() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___Gutters_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Gutters_6() const { return ___Gutters_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Gutters_6() { return &___Gutters_6; }
	inline void set_Gutters_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Gutters_6 = value;
	}

	inline static int32_t get_offset_of_LayoutDireciton_7() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___LayoutDireciton_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_LayoutDireciton_7() const { return ___LayoutDireciton_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_LayoutDireciton_7() { return &___LayoutDireciton_7; }
	inline void set_LayoutDireciton_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___LayoutDireciton_7 = value;
	}

	inline static int32_t get_offset_of_StartPosition_8() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___StartPosition_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_StartPosition_8() const { return ___StartPosition_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_StartPosition_8() { return &___StartPosition_8; }
	inline void set_StartPosition_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___StartPosition_8 = value;
	}

	inline static int32_t get_offset_of_Centered_9() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___Centered_9)); }
	inline bool get_Centered_9() const { return ___Centered_9; }
	inline bool* get_address_of_Centered_9() { return &___Centered_9; }
	inline void set_Centered_9(bool value)
	{
		___Centered_9 = value;
	}

	inline static int32_t get_offset_of_DepthCalculatedBy_10() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___DepthCalculatedBy_10)); }
	inline int32_t get_DepthCalculatedBy_10() const { return ___DepthCalculatedBy_10; }
	inline int32_t* get_address_of_DepthCalculatedBy_10() { return &___DepthCalculatedBy_10; }
	inline void set_DepthCalculatedBy_10(int32_t value)
	{
		___DepthCalculatedBy_10 = value;
	}

	inline static int32_t get_offset_of_OnlyInEditMode_11() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___OnlyInEditMode_11)); }
	inline bool get_OnlyInEditMode_11() const { return ___OnlyInEditMode_11; }
	inline bool* get_address_of_OnlyInEditMode_11() { return &___OnlyInEditMode_11; }
	inline void set_OnlyInEditMode_11(bool value)
	{
		___OnlyInEditMode_11 = value;
	}

	inline static int32_t get_offset_of_offSet_12() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___offSet_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offSet_12() const { return ___offSet_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offSet_12() { return &___offSet_12; }
	inline void set_offSet_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offSet_12 = value;
	}

	inline static int32_t get_offset_of_editorUpdated_13() { return static_cast<int32_t>(offsetof(TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82, ___editorUpdated_13)); }
	inline bool get_editorUpdated_13() const { return ___editorUpdated_13; }
	inline bool* get_address_of_editorUpdated_13() { return &___editorUpdated_13; }
	inline void set_editorUpdated_13(bool value)
	{
		___editorUpdated_13 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer
struct ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A  : public InputSystemGlobalHandlerListener_t8EDFEA237240E69AC3A886ED126AB656F4196E1C
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::destroyOnSourceLost
	bool ___destroyOnSourceLost_5;
	// Microsoft.MixedReality.Toolkit.TrackingState Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::TrackingState
	int32_t ___TrackingState_6;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::controller
	RuntimeObject* ___controller_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::useSourcePoseData
	bool ___useSourcePoseData_8;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::poseAction
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___poseAction_9;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::handedness
	uint8_t ___handedness_10;

public:
	inline static int32_t get_offset_of_destroyOnSourceLost_5() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A, ___destroyOnSourceLost_5)); }
	inline bool get_destroyOnSourceLost_5() const { return ___destroyOnSourceLost_5; }
	inline bool* get_address_of_destroyOnSourceLost_5() { return &___destroyOnSourceLost_5; }
	inline void set_destroyOnSourceLost_5(bool value)
	{
		___destroyOnSourceLost_5 = value;
	}

	inline static int32_t get_offset_of_TrackingState_6() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A, ___TrackingState_6)); }
	inline int32_t get_TrackingState_6() const { return ___TrackingState_6; }
	inline int32_t* get_address_of_TrackingState_6() { return &___TrackingState_6; }
	inline void set_TrackingState_6(int32_t value)
	{
		___TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_controller_7() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A, ___controller_7)); }
	inline RuntimeObject* get_controller_7() const { return ___controller_7; }
	inline RuntimeObject** get_address_of_controller_7() { return &___controller_7; }
	inline void set_controller_7(RuntimeObject* value)
	{
		___controller_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_7), (void*)value);
	}

	inline static int32_t get_offset_of_useSourcePoseData_8() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A, ___useSourcePoseData_8)); }
	inline bool get_useSourcePoseData_8() const { return ___useSourcePoseData_8; }
	inline bool* get_address_of_useSourcePoseData_8() { return &___useSourcePoseData_8; }
	inline void set_useSourcePoseData_8(bool value)
	{
		___useSourcePoseData_8 = value;
	}

	inline static int32_t get_offset_of_poseAction_9() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A, ___poseAction_9)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_poseAction_9() const { return ___poseAction_9; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_poseAction_9() { return &___poseAction_9; }
	inline void set_poseAction_9(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___poseAction_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___poseAction_9))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_handedness_10() { return static_cast<int32_t>(offsetof(ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A, ___handedness_10)); }
	inline uint8_t get_handedness_10() const { return ___handedness_10; }
	inline uint8_t* get_address_of_handedness_10() { return &___handedness_10; }
	inline void set_handedness_10(uint8_t value)
	{
		___handedness_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum
struct Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E  : public Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistance
	float ___resistance_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::resistanceVelocityPower
	float ___resistanceVelocityPower_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::accelerationRate
	float ___accelerationRate_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::springiness
	float ___springiness_16;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::snapZ
	bool ___snapZ_17;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity_18;

public:
	inline static int32_t get_offset_of_resistance_13() { return static_cast<int32_t>(offsetof(Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E, ___resistance_13)); }
	inline float get_resistance_13() const { return ___resistance_13; }
	inline float* get_address_of_resistance_13() { return &___resistance_13; }
	inline void set_resistance_13(float value)
	{
		___resistance_13 = value;
	}

	inline static int32_t get_offset_of_resistanceVelocityPower_14() { return static_cast<int32_t>(offsetof(Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E, ___resistanceVelocityPower_14)); }
	inline float get_resistanceVelocityPower_14() const { return ___resistanceVelocityPower_14; }
	inline float* get_address_of_resistanceVelocityPower_14() { return &___resistanceVelocityPower_14; }
	inline void set_resistanceVelocityPower_14(float value)
	{
		___resistanceVelocityPower_14 = value;
	}

	inline static int32_t get_offset_of_accelerationRate_15() { return static_cast<int32_t>(offsetof(Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E, ___accelerationRate_15)); }
	inline float get_accelerationRate_15() const { return ___accelerationRate_15; }
	inline float* get_address_of_accelerationRate_15() { return &___accelerationRate_15; }
	inline void set_accelerationRate_15(float value)
	{
		___accelerationRate_15 = value;
	}

	inline static int32_t get_offset_of_springiness_16() { return static_cast<int32_t>(offsetof(Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E, ___springiness_16)); }
	inline float get_springiness_16() const { return ___springiness_16; }
	inline float* get_address_of_springiness_16() { return &___springiness_16; }
	inline void set_springiness_16(float value)
	{
		___springiness_16 = value;
	}

	inline static int32_t get_offset_of_snapZ_17() { return static_cast<int32_t>(offsetof(Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E, ___snapZ_17)); }
	inline bool get_snapZ_17() const { return ___snapZ_17; }
	inline bool* get_address_of_snapZ_17() { return &___snapZ_17; }
	inline void set_snapZ_17(bool value)
	{
		___snapZ_17 = value;
	}

	inline static int32_t get_offset_of_velocity_18() { return static_cast<int32_t>(offsetof(Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E, ___velocity_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_velocity_18() const { return ___velocity_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_velocity_18() { return &___velocity_18; }
	inline void set_velocity_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___velocity_18 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital
struct Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD  : public Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::orientationType
	int32_t ___orientationType_13;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::localOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___localOffset_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::worldOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldOffset_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::useAngleStepping
	bool ___useAngleStepping_16;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::tetherAngleSteps
	int32_t ___tetherAngleSteps_17;

public:
	inline static int32_t get_offset_of_orientationType_13() { return static_cast<int32_t>(offsetof(Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD, ___orientationType_13)); }
	inline int32_t get_orientationType_13() const { return ___orientationType_13; }
	inline int32_t* get_address_of_orientationType_13() { return &___orientationType_13; }
	inline void set_orientationType_13(int32_t value)
	{
		___orientationType_13 = value;
	}

	inline static int32_t get_offset_of_localOffset_14() { return static_cast<int32_t>(offsetof(Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD, ___localOffset_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_localOffset_14() const { return ___localOffset_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_localOffset_14() { return &___localOffset_14; }
	inline void set_localOffset_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___localOffset_14 = value;
	}

	inline static int32_t get_offset_of_worldOffset_15() { return static_cast<int32_t>(offsetof(Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD, ___worldOffset_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldOffset_15() const { return ___worldOffset_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldOffset_15() { return &___worldOffset_15; }
	inline void set_worldOffset_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldOffset_15 = value;
	}

	inline static int32_t get_offset_of_useAngleStepping_16() { return static_cast<int32_t>(offsetof(Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD, ___useAngleStepping_16)); }
	inline bool get_useAngleStepping_16() const { return ___useAngleStepping_16; }
	inline bool* get_address_of_useAngleStepping_16() { return &___useAngleStepping_16; }
	inline void set_useAngleStepping_16(bool value)
	{
		___useAngleStepping_16 = value;
	}

	inline static int32_t get_offset_of_tetherAngleSteps_17() { return static_cast<int32_t>(offsetof(Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD, ___tetherAngleSteps_17)); }
	inline int32_t get_tetherAngleSteps_17() const { return ___tetherAngleSteps_17; }
	inline int32_t* get_address_of_tetherAngleSteps_17() { return &___tetherAngleSteps_17; }
	inline void set_tetherAngleSteps_17(int32_t value)
	{
		___tetherAngleSteps_17 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap
struct Overlap_t894852CBF487B61F12185C0FB8416BF0AC3CCB4D  : public Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView
struct RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6  : public Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::referenceDirection
	int32_t ___referenceDirection_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minDistance
	float ___minDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxDistance
	float ___maxDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::minViewDegrees
	float ___minViewDegrees_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::maxViewDegrees
	float ___maxViewDegrees_17;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::aspectV
	float ___aspectV_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreAngleClamp
	bool ___ignoreAngleClamp_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::ignoreDistanceClamp
	bool ___ignoreDistanceClamp_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::useFixedVerticalPosition
	bool ___useFixedVerticalPosition_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::fixedVerticalPosition
	float ___fixedVerticalPosition_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::orientToReferenceDirection
	bool ___orientToReferenceDirection_23;

public:
	inline static int32_t get_offset_of_referenceDirection_13() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___referenceDirection_13)); }
	inline int32_t get_referenceDirection_13() const { return ___referenceDirection_13; }
	inline int32_t* get_address_of_referenceDirection_13() { return &___referenceDirection_13; }
	inline void set_referenceDirection_13(int32_t value)
	{
		___referenceDirection_13 = value;
	}

	inline static int32_t get_offset_of_minDistance_14() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___minDistance_14)); }
	inline float get_minDistance_14() const { return ___minDistance_14; }
	inline float* get_address_of_minDistance_14() { return &___minDistance_14; }
	inline void set_minDistance_14(float value)
	{
		___minDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxDistance_15() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___maxDistance_15)); }
	inline float get_maxDistance_15() const { return ___maxDistance_15; }
	inline float* get_address_of_maxDistance_15() { return &___maxDistance_15; }
	inline void set_maxDistance_15(float value)
	{
		___maxDistance_15 = value;
	}

	inline static int32_t get_offset_of_minViewDegrees_16() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___minViewDegrees_16)); }
	inline float get_minViewDegrees_16() const { return ___minViewDegrees_16; }
	inline float* get_address_of_minViewDegrees_16() { return &___minViewDegrees_16; }
	inline void set_minViewDegrees_16(float value)
	{
		___minViewDegrees_16 = value;
	}

	inline static int32_t get_offset_of_maxViewDegrees_17() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___maxViewDegrees_17)); }
	inline float get_maxViewDegrees_17() const { return ___maxViewDegrees_17; }
	inline float* get_address_of_maxViewDegrees_17() { return &___maxViewDegrees_17; }
	inline void set_maxViewDegrees_17(float value)
	{
		___maxViewDegrees_17 = value;
	}

	inline static int32_t get_offset_of_aspectV_18() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___aspectV_18)); }
	inline float get_aspectV_18() const { return ___aspectV_18; }
	inline float* get_address_of_aspectV_18() { return &___aspectV_18; }
	inline void set_aspectV_18(float value)
	{
		___aspectV_18 = value;
	}

	inline static int32_t get_offset_of_ignoreAngleClamp_19() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___ignoreAngleClamp_19)); }
	inline bool get_ignoreAngleClamp_19() const { return ___ignoreAngleClamp_19; }
	inline bool* get_address_of_ignoreAngleClamp_19() { return &___ignoreAngleClamp_19; }
	inline void set_ignoreAngleClamp_19(bool value)
	{
		___ignoreAngleClamp_19 = value;
	}

	inline static int32_t get_offset_of_ignoreDistanceClamp_20() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___ignoreDistanceClamp_20)); }
	inline bool get_ignoreDistanceClamp_20() const { return ___ignoreDistanceClamp_20; }
	inline bool* get_address_of_ignoreDistanceClamp_20() { return &___ignoreDistanceClamp_20; }
	inline void set_ignoreDistanceClamp_20(bool value)
	{
		___ignoreDistanceClamp_20 = value;
	}

	inline static int32_t get_offset_of_useFixedVerticalPosition_21() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___useFixedVerticalPosition_21)); }
	inline bool get_useFixedVerticalPosition_21() const { return ___useFixedVerticalPosition_21; }
	inline bool* get_address_of_useFixedVerticalPosition_21() { return &___useFixedVerticalPosition_21; }
	inline void set_useFixedVerticalPosition_21(bool value)
	{
		___useFixedVerticalPosition_21 = value;
	}

	inline static int32_t get_offset_of_fixedVerticalPosition_22() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___fixedVerticalPosition_22)); }
	inline float get_fixedVerticalPosition_22() const { return ___fixedVerticalPosition_22; }
	inline float* get_address_of_fixedVerticalPosition_22() { return &___fixedVerticalPosition_22; }
	inline void set_fixedVerticalPosition_22(float value)
	{
		___fixedVerticalPosition_22 = value;
	}

	inline static int32_t get_offset_of_orientToReferenceDirection_23() { return static_cast<int32_t>(offsetof(RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6, ___orientToReferenceDirection_23)); }
	inline bool get_orientToReferenceDirection_23() const { return ___orientToReferenceDirection_23; }
	inline bool* get_address_of_orientToReferenceDirection_23() { return &___orientToReferenceDirection_23; }
	inline void set_orientToReferenceDirection_23(bool value)
	{
		___orientToReferenceDirection_23 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism
struct SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7  : public Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF
{
public:
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maxRaycastDistance
	float ___maxRaycastDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::closestDistance
	float ___closestDistance_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceNormalOffset
	float ___surfaceNormalOffset_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::surfaceRayOffset
	float ___surfaceRayOffset_17;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::raycastMode
	int32_t ___raycastMode_18;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxRaysPerEdge
	int32_t ___boxRaysPerEdge_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orthographicBoxCast
	bool ___orthographicBoxCast_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::maximumNormalVariance
	float ___maximumNormalVariance_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::sphereSize
	float ___sphereSize_22;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::volumeCastSizeOverride
	float ___volumeCastSizeOverride_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::useLinkedAltScaleOverride
	bool ___useLinkedAltScaleOverride_24;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRaycastDirectionMode
	int32_t ___currentRaycastDirectionMode_25;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationMode
	int32_t ___orientationMode_26;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::orientationBlend
	float ___orientationBlend_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::keepOrientationVertical
	bool ___keepOrientationVertical_28;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::debugEnabled
	bool ___debugEnabled_29;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::<OnSurface>k__BackingField
	bool ___U3COnSurfaceU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::currentRayStep
	RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  ___currentRayStep_32;
	// UnityEngine.BoxCollider Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::boxCollider
	BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * ___boxCollider_33;

public:
	inline static int32_t get_offset_of_magneticSurfaces_13() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___magneticSurfaces_13)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_13() const { return ___magneticSurfaces_13; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_13() { return &___magneticSurfaces_13; }
	inline void set_magneticSurfaces_13(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_13), (void*)value);
	}

	inline static int32_t get_offset_of_maxRaycastDistance_14() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___maxRaycastDistance_14)); }
	inline float get_maxRaycastDistance_14() const { return ___maxRaycastDistance_14; }
	inline float* get_address_of_maxRaycastDistance_14() { return &___maxRaycastDistance_14; }
	inline void set_maxRaycastDistance_14(float value)
	{
		___maxRaycastDistance_14 = value;
	}

	inline static int32_t get_offset_of_closestDistance_15() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___closestDistance_15)); }
	inline float get_closestDistance_15() const { return ___closestDistance_15; }
	inline float* get_address_of_closestDistance_15() { return &___closestDistance_15; }
	inline void set_closestDistance_15(float value)
	{
		___closestDistance_15 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_16() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___surfaceNormalOffset_16)); }
	inline float get_surfaceNormalOffset_16() const { return ___surfaceNormalOffset_16; }
	inline float* get_address_of_surfaceNormalOffset_16() { return &___surfaceNormalOffset_16; }
	inline void set_surfaceNormalOffset_16(float value)
	{
		___surfaceNormalOffset_16 = value;
	}

	inline static int32_t get_offset_of_surfaceRayOffset_17() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___surfaceRayOffset_17)); }
	inline float get_surfaceRayOffset_17() const { return ___surfaceRayOffset_17; }
	inline float* get_address_of_surfaceRayOffset_17() { return &___surfaceRayOffset_17; }
	inline void set_surfaceRayOffset_17(float value)
	{
		___surfaceRayOffset_17 = value;
	}

	inline static int32_t get_offset_of_raycastMode_18() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___raycastMode_18)); }
	inline int32_t get_raycastMode_18() const { return ___raycastMode_18; }
	inline int32_t* get_address_of_raycastMode_18() { return &___raycastMode_18; }
	inline void set_raycastMode_18(int32_t value)
	{
		___raycastMode_18 = value;
	}

	inline static int32_t get_offset_of_boxRaysPerEdge_19() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___boxRaysPerEdge_19)); }
	inline int32_t get_boxRaysPerEdge_19() const { return ___boxRaysPerEdge_19; }
	inline int32_t* get_address_of_boxRaysPerEdge_19() { return &___boxRaysPerEdge_19; }
	inline void set_boxRaysPerEdge_19(int32_t value)
	{
		___boxRaysPerEdge_19 = value;
	}

	inline static int32_t get_offset_of_orthographicBoxCast_20() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___orthographicBoxCast_20)); }
	inline bool get_orthographicBoxCast_20() const { return ___orthographicBoxCast_20; }
	inline bool* get_address_of_orthographicBoxCast_20() { return &___orthographicBoxCast_20; }
	inline void set_orthographicBoxCast_20(bool value)
	{
		___orthographicBoxCast_20 = value;
	}

	inline static int32_t get_offset_of_maximumNormalVariance_21() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___maximumNormalVariance_21)); }
	inline float get_maximumNormalVariance_21() const { return ___maximumNormalVariance_21; }
	inline float* get_address_of_maximumNormalVariance_21() { return &___maximumNormalVariance_21; }
	inline void set_maximumNormalVariance_21(float value)
	{
		___maximumNormalVariance_21 = value;
	}

	inline static int32_t get_offset_of_sphereSize_22() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___sphereSize_22)); }
	inline float get_sphereSize_22() const { return ___sphereSize_22; }
	inline float* get_address_of_sphereSize_22() { return &___sphereSize_22; }
	inline void set_sphereSize_22(float value)
	{
		___sphereSize_22 = value;
	}

	inline static int32_t get_offset_of_volumeCastSizeOverride_23() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___volumeCastSizeOverride_23)); }
	inline float get_volumeCastSizeOverride_23() const { return ___volumeCastSizeOverride_23; }
	inline float* get_address_of_volumeCastSizeOverride_23() { return &___volumeCastSizeOverride_23; }
	inline void set_volumeCastSizeOverride_23(float value)
	{
		___volumeCastSizeOverride_23 = value;
	}

	inline static int32_t get_offset_of_useLinkedAltScaleOverride_24() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___useLinkedAltScaleOverride_24)); }
	inline bool get_useLinkedAltScaleOverride_24() const { return ___useLinkedAltScaleOverride_24; }
	inline bool* get_address_of_useLinkedAltScaleOverride_24() { return &___useLinkedAltScaleOverride_24; }
	inline void set_useLinkedAltScaleOverride_24(bool value)
	{
		___useLinkedAltScaleOverride_24 = value;
	}

	inline static int32_t get_offset_of_currentRaycastDirectionMode_25() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___currentRaycastDirectionMode_25)); }
	inline int32_t get_currentRaycastDirectionMode_25() const { return ___currentRaycastDirectionMode_25; }
	inline int32_t* get_address_of_currentRaycastDirectionMode_25() { return &___currentRaycastDirectionMode_25; }
	inline void set_currentRaycastDirectionMode_25(int32_t value)
	{
		___currentRaycastDirectionMode_25 = value;
	}

	inline static int32_t get_offset_of_orientationMode_26() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___orientationMode_26)); }
	inline int32_t get_orientationMode_26() const { return ___orientationMode_26; }
	inline int32_t* get_address_of_orientationMode_26() { return &___orientationMode_26; }
	inline void set_orientationMode_26(int32_t value)
	{
		___orientationMode_26 = value;
	}

	inline static int32_t get_offset_of_orientationBlend_27() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___orientationBlend_27)); }
	inline float get_orientationBlend_27() const { return ___orientationBlend_27; }
	inline float* get_address_of_orientationBlend_27() { return &___orientationBlend_27; }
	inline void set_orientationBlend_27(float value)
	{
		___orientationBlend_27 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_28() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___keepOrientationVertical_28)); }
	inline bool get_keepOrientationVertical_28() const { return ___keepOrientationVertical_28; }
	inline bool* get_address_of_keepOrientationVertical_28() { return &___keepOrientationVertical_28; }
	inline void set_keepOrientationVertical_28(bool value)
	{
		___keepOrientationVertical_28 = value;
	}

	inline static int32_t get_offset_of_debugEnabled_29() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___debugEnabled_29)); }
	inline bool get_debugEnabled_29() const { return ___debugEnabled_29; }
	inline bool* get_address_of_debugEnabled_29() { return &___debugEnabled_29; }
	inline void set_debugEnabled_29(bool value)
	{
		___debugEnabled_29 = value;
	}

	inline static int32_t get_offset_of_U3COnSurfaceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___U3COnSurfaceU3Ek__BackingField_30)); }
	inline bool get_U3COnSurfaceU3Ek__BackingField_30() const { return ___U3COnSurfaceU3Ek__BackingField_30; }
	inline bool* get_address_of_U3COnSurfaceU3Ek__BackingField_30() { return &___U3COnSurfaceU3Ek__BackingField_30; }
	inline void set_U3COnSurfaceU3Ek__BackingField_30(bool value)
	{
		___U3COnSurfaceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_currentRayStep_32() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___currentRayStep_32)); }
	inline RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  get_currentRayStep_32() const { return ___currentRayStep_32; }
	inline RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * get_address_of_currentRayStep_32() { return &___currentRayStep_32; }
	inline void set_currentRayStep_32(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  value)
	{
		___currentRayStep_32 = value;
	}

	inline static int32_t get_offset_of_boxCollider_33() { return static_cast<int32_t>(offsetof(SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7, ___boxCollider_33)); }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * get_boxCollider_33() const { return ___boxCollider_33; }
	inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA ** get_address_of_boxCollider_33() { return &___boxCollider_33; }
	inline void set_boxCollider_33(BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * value)
	{
		___boxCollider_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxCollider_33), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace
struct TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C  : public Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::autoStart
	bool ___autoStart_13;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::defaultPlacementDistance
	float ___defaultPlacementDistance_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::maxRaycastDistance
	float ___maxRaycastDistance_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::<IsBeingPlaced>k__BackingField
	bool ___U3CIsBeingPlacedU3Ek__BackingField_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::surfaceNormalOffset
	float ___surfaceNormalOffset_17;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::useDefaultSurfaceNormalOffset
	bool ___useDefaultSurfaceNormalOffset_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::keepOrientationVertical
	bool ___keepOrientationVertical_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::rotateAccordingToSurface
	bool ___rotateAccordingToSurface_20;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::magneticSurfaces
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___magneticSurfaces_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::debugEnabled
	bool ___debugEnabled_22;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::onPlacingStarted
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPlacingStarted_23;
	// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::onPlacingStopped
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPlacingStopped_24;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::<GameObjectLayer>k__BackingField
	int32_t ___U3CGameObjectLayerU3Ek__BackingField_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::ignoreRaycastLayer
	int32_t ___ignoreRaycastLayer_26;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::CurrentRay
	RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  ___CurrentRay_27;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::DidHitSurface
	bool ___DidHitSurface_28;
	// UnityEngine.RaycastHit Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::CurrentHit
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___CurrentHit_29;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::LastTimeClicked
	float ___LastTimeClicked_30;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::DoubleClickTimeout
	float ___DoubleClickTimeout_31;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::startCalled
	bool ___startCalled_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::placementRequested
	bool ___placementRequested_33;

public:
	inline static int32_t get_offset_of_autoStart_13() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___autoStart_13)); }
	inline bool get_autoStart_13() const { return ___autoStart_13; }
	inline bool* get_address_of_autoStart_13() { return &___autoStart_13; }
	inline void set_autoStart_13(bool value)
	{
		___autoStart_13 = value;
	}

	inline static int32_t get_offset_of_defaultPlacementDistance_14() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___defaultPlacementDistance_14)); }
	inline float get_defaultPlacementDistance_14() const { return ___defaultPlacementDistance_14; }
	inline float* get_address_of_defaultPlacementDistance_14() { return &___defaultPlacementDistance_14; }
	inline void set_defaultPlacementDistance_14(float value)
	{
		___defaultPlacementDistance_14 = value;
	}

	inline static int32_t get_offset_of_maxRaycastDistance_15() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___maxRaycastDistance_15)); }
	inline float get_maxRaycastDistance_15() const { return ___maxRaycastDistance_15; }
	inline float* get_address_of_maxRaycastDistance_15() { return &___maxRaycastDistance_15; }
	inline void set_maxRaycastDistance_15(float value)
	{
		___maxRaycastDistance_15 = value;
	}

	inline static int32_t get_offset_of_U3CIsBeingPlacedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___U3CIsBeingPlacedU3Ek__BackingField_16)); }
	inline bool get_U3CIsBeingPlacedU3Ek__BackingField_16() const { return ___U3CIsBeingPlacedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsBeingPlacedU3Ek__BackingField_16() { return &___U3CIsBeingPlacedU3Ek__BackingField_16; }
	inline void set_U3CIsBeingPlacedU3Ek__BackingField_16(bool value)
	{
		___U3CIsBeingPlacedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_surfaceNormalOffset_17() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___surfaceNormalOffset_17)); }
	inline float get_surfaceNormalOffset_17() const { return ___surfaceNormalOffset_17; }
	inline float* get_address_of_surfaceNormalOffset_17() { return &___surfaceNormalOffset_17; }
	inline void set_surfaceNormalOffset_17(float value)
	{
		___surfaceNormalOffset_17 = value;
	}

	inline static int32_t get_offset_of_useDefaultSurfaceNormalOffset_18() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___useDefaultSurfaceNormalOffset_18)); }
	inline bool get_useDefaultSurfaceNormalOffset_18() const { return ___useDefaultSurfaceNormalOffset_18; }
	inline bool* get_address_of_useDefaultSurfaceNormalOffset_18() { return &___useDefaultSurfaceNormalOffset_18; }
	inline void set_useDefaultSurfaceNormalOffset_18(bool value)
	{
		___useDefaultSurfaceNormalOffset_18 = value;
	}

	inline static int32_t get_offset_of_keepOrientationVertical_19() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___keepOrientationVertical_19)); }
	inline bool get_keepOrientationVertical_19() const { return ___keepOrientationVertical_19; }
	inline bool* get_address_of_keepOrientationVertical_19() { return &___keepOrientationVertical_19; }
	inline void set_keepOrientationVertical_19(bool value)
	{
		___keepOrientationVertical_19 = value;
	}

	inline static int32_t get_offset_of_rotateAccordingToSurface_20() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___rotateAccordingToSurface_20)); }
	inline bool get_rotateAccordingToSurface_20() const { return ___rotateAccordingToSurface_20; }
	inline bool* get_address_of_rotateAccordingToSurface_20() { return &___rotateAccordingToSurface_20; }
	inline void set_rotateAccordingToSurface_20(bool value)
	{
		___rotateAccordingToSurface_20 = value;
	}

	inline static int32_t get_offset_of_magneticSurfaces_21() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___magneticSurfaces_21)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_magneticSurfaces_21() const { return ___magneticSurfaces_21; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_magneticSurfaces_21() { return &___magneticSurfaces_21; }
	inline void set_magneticSurfaces_21(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___magneticSurfaces_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___magneticSurfaces_21), (void*)value);
	}

	inline static int32_t get_offset_of_debugEnabled_22() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___debugEnabled_22)); }
	inline bool get_debugEnabled_22() const { return ___debugEnabled_22; }
	inline bool* get_address_of_debugEnabled_22() { return &___debugEnabled_22; }
	inline void set_debugEnabled_22(bool value)
	{
		___debugEnabled_22 = value;
	}

	inline static int32_t get_offset_of_onPlacingStarted_23() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___onPlacingStarted_23)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPlacingStarted_23() const { return ___onPlacingStarted_23; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPlacingStarted_23() { return &___onPlacingStarted_23; }
	inline void set_onPlacingStarted_23(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPlacingStarted_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStarted_23), (void*)value);
	}

	inline static int32_t get_offset_of_onPlacingStopped_24() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___onPlacingStopped_24)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPlacingStopped_24() const { return ___onPlacingStopped_24; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPlacingStopped_24() { return &___onPlacingStopped_24; }
	inline void set_onPlacingStopped_24(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPlacingStopped_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPlacingStopped_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameObjectLayerU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___U3CGameObjectLayerU3Ek__BackingField_25)); }
	inline int32_t get_U3CGameObjectLayerU3Ek__BackingField_25() const { return ___U3CGameObjectLayerU3Ek__BackingField_25; }
	inline int32_t* get_address_of_U3CGameObjectLayerU3Ek__BackingField_25() { return &___U3CGameObjectLayerU3Ek__BackingField_25; }
	inline void set_U3CGameObjectLayerU3Ek__BackingField_25(int32_t value)
	{
		___U3CGameObjectLayerU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_ignoreRaycastLayer_26() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___ignoreRaycastLayer_26)); }
	inline int32_t get_ignoreRaycastLayer_26() const { return ___ignoreRaycastLayer_26; }
	inline int32_t* get_address_of_ignoreRaycastLayer_26() { return &___ignoreRaycastLayer_26; }
	inline void set_ignoreRaycastLayer_26(int32_t value)
	{
		___ignoreRaycastLayer_26 = value;
	}

	inline static int32_t get_offset_of_CurrentRay_27() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___CurrentRay_27)); }
	inline RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  get_CurrentRay_27() const { return ___CurrentRay_27; }
	inline RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * get_address_of_CurrentRay_27() { return &___CurrentRay_27; }
	inline void set_CurrentRay_27(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  value)
	{
		___CurrentRay_27 = value;
	}

	inline static int32_t get_offset_of_DidHitSurface_28() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___DidHitSurface_28)); }
	inline bool get_DidHitSurface_28() const { return ___DidHitSurface_28; }
	inline bool* get_address_of_DidHitSurface_28() { return &___DidHitSurface_28; }
	inline void set_DidHitSurface_28(bool value)
	{
		___DidHitSurface_28 = value;
	}

	inline static int32_t get_offset_of_CurrentHit_29() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___CurrentHit_29)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_CurrentHit_29() const { return ___CurrentHit_29; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_CurrentHit_29() { return &___CurrentHit_29; }
	inline void set_CurrentHit_29(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___CurrentHit_29 = value;
	}

	inline static int32_t get_offset_of_LastTimeClicked_30() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___LastTimeClicked_30)); }
	inline float get_LastTimeClicked_30() const { return ___LastTimeClicked_30; }
	inline float* get_address_of_LastTimeClicked_30() { return &___LastTimeClicked_30; }
	inline void set_LastTimeClicked_30(float value)
	{
		___LastTimeClicked_30 = value;
	}

	inline static int32_t get_offset_of_DoubleClickTimeout_31() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___DoubleClickTimeout_31)); }
	inline float get_DoubleClickTimeout_31() const { return ___DoubleClickTimeout_31; }
	inline float* get_address_of_DoubleClickTimeout_31() { return &___DoubleClickTimeout_31; }
	inline void set_DoubleClickTimeout_31(float value)
	{
		___DoubleClickTimeout_31 = value;
	}

	inline static int32_t get_offset_of_startCalled_32() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___startCalled_32)); }
	inline bool get_startCalled_32() const { return ___startCalled_32; }
	inline bool* get_address_of_startCalled_32() { return &___startCalled_32; }
	inline void set_startCalled_32(bool value)
	{
		___startCalled_32 = value;
	}

	inline static int32_t get_offset_of_placementRequested_33() { return static_cast<int32_t>(offsetof(TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C, ___placementRequested_33)); }
	inline bool get_placementRequested_33() const { return ___placementRequested_33; }
	inline bool* get_address_of_placementRequested_33() { return &___placementRequested_33; }
	inline void set_placementRequested_33(bool value)
	{
		___placementRequested_33 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer
struct BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758  : public ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorPrefab_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::disableCursorOnStart
	bool ___disableCursorOnStart_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::setCursorVisibilityOnSourceDetected
	bool ___setCursorVisibilityOnSourceDetected_13;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::cursorInstance
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cursorInstance_14;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::raycastOrigin
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___raycastOrigin_15;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::activeHoldAction
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___activeHoldAction_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerAction
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___pointerAction_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::grabAction
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___grabAction_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsGrabPressed
	bool ___IsGrabPressed_19;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresHoldAction
	bool ___requiresHoldAction_20;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::requiresActionBeforeEnabling
	bool ___requiresActionBeforeEnabling_21;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsSelectPressed
	bool ___IsSelectPressed_22;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::HasSelectPressedOnce
	bool ___HasSelectPressedOnce_23;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::IsHoldPressed
	bool ___IsHoldPressed_24;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::isCursorInstantiatedFromPrefab
	bool ___isCursorInstantiatedFromPrefab_25;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerId
	uint32_t ___pointerId_27;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::basePointerName
	String_t* ___basePointerName_28;
	// System.String Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerName
	String_t* ___pointerName_29;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<InputSourceParent>k__BackingField
	RuntimeObject* ___U3CInputSourceParentU3Ek__BackingField_30;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityCursor Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<BaseCursor>k__BackingField
	RuntimeObject* ___U3CBaseCursorU3Ek__BackingField_31;
	// Microsoft.MixedReality.Toolkit.Input.ICursorModifier Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<CursorModifier>k__BackingField
	RuntimeObject* ___U3CCursorModifierU3Ek__BackingField_32;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_33;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsFocusLocked>k__BackingField
	bool ___U3CIsFocusLockedU3Ek__BackingField_34;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<IsTargetPositionLockedOnFocusLock>k__BackingField
	bool ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::overrideGlobalPointerExtent
	bool ___overrideGlobalPointerExtent_36;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::pointerExtent
	float ___pointerExtent_37;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::defaultPointerExtent
	float ___defaultPointerExtent_38;
	// Microsoft.MixedReality.Toolkit.Physics.RayStep[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Rays>k__BackingField
	RayStepU5BU5D_t32267AAE356422BFF0DCFFF0C55A63D3A2A977D2* ___U3CRaysU3Ek__BackingField_39;
	// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<PrioritizedLayerMasksOverride>k__BackingField
	LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityFocusHandler Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<FocusTarget>k__BackingField
	RuntimeObject* ___U3CFocusTargetU3Ek__BackingField_41;
	// Microsoft.MixedReality.Toolkit.Input.IPointerResult Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<Result>k__BackingField
	RuntimeObject* ___U3CResultU3Ek__BackingField_42;
	// Microsoft.MixedReality.Toolkit.Physics.IBaseRayStabilizer Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<RayStabilizer>k__BackingField
	RuntimeObject* ___U3CRayStabilizerU3Ek__BackingField_43;
	// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::<SceneQueryType>k__BackingField
	int32_t ___U3CSceneQueryTypeU3Ek__BackingField_44;
	// System.Single Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::sphereCastRadius
	float ___sphereCastRadius_45;

public:
	inline static int32_t get_offset_of_cursorPrefab_11() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___cursorPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorPrefab_11() const { return ___cursorPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorPrefab_11() { return &___cursorPrefab_11; }
	inline void set_cursorPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_disableCursorOnStart_12() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___disableCursorOnStart_12)); }
	inline bool get_disableCursorOnStart_12() const { return ___disableCursorOnStart_12; }
	inline bool* get_address_of_disableCursorOnStart_12() { return &___disableCursorOnStart_12; }
	inline void set_disableCursorOnStart_12(bool value)
	{
		___disableCursorOnStart_12 = value;
	}

	inline static int32_t get_offset_of_setCursorVisibilityOnSourceDetected_13() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___setCursorVisibilityOnSourceDetected_13)); }
	inline bool get_setCursorVisibilityOnSourceDetected_13() const { return ___setCursorVisibilityOnSourceDetected_13; }
	inline bool* get_address_of_setCursorVisibilityOnSourceDetected_13() { return &___setCursorVisibilityOnSourceDetected_13; }
	inline void set_setCursorVisibilityOnSourceDetected_13(bool value)
	{
		___setCursorVisibilityOnSourceDetected_13 = value;
	}

	inline static int32_t get_offset_of_cursorInstance_14() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___cursorInstance_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cursorInstance_14() const { return ___cursorInstance_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cursorInstance_14() { return &___cursorInstance_14; }
	inline void set_cursorInstance_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cursorInstance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cursorInstance_14), (void*)value);
	}

	inline static int32_t get_offset_of_raycastOrigin_15() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___raycastOrigin_15)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_raycastOrigin_15() const { return ___raycastOrigin_15; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_raycastOrigin_15() { return &___raycastOrigin_15; }
	inline void set_raycastOrigin_15(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___raycastOrigin_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastOrigin_15), (void*)value);
	}

	inline static int32_t get_offset_of_activeHoldAction_16() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___activeHoldAction_16)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_activeHoldAction_16() const { return ___activeHoldAction_16; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_activeHoldAction_16() { return &___activeHoldAction_16; }
	inline void set_activeHoldAction_16(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___activeHoldAction_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___activeHoldAction_16))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_pointerAction_17() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___pointerAction_17)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_pointerAction_17() const { return ___pointerAction_17; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_pointerAction_17() { return &___pointerAction_17; }
	inline void set_pointerAction_17(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___pointerAction_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___pointerAction_17))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_grabAction_18() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___grabAction_18)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_grabAction_18() const { return ___grabAction_18; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_grabAction_18() { return &___grabAction_18; }
	inline void set_grabAction_18(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___grabAction_18 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___grabAction_18))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_IsGrabPressed_19() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___IsGrabPressed_19)); }
	inline bool get_IsGrabPressed_19() const { return ___IsGrabPressed_19; }
	inline bool* get_address_of_IsGrabPressed_19() { return &___IsGrabPressed_19; }
	inline void set_IsGrabPressed_19(bool value)
	{
		___IsGrabPressed_19 = value;
	}

	inline static int32_t get_offset_of_requiresHoldAction_20() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___requiresHoldAction_20)); }
	inline bool get_requiresHoldAction_20() const { return ___requiresHoldAction_20; }
	inline bool* get_address_of_requiresHoldAction_20() { return &___requiresHoldAction_20; }
	inline void set_requiresHoldAction_20(bool value)
	{
		___requiresHoldAction_20 = value;
	}

	inline static int32_t get_offset_of_requiresActionBeforeEnabling_21() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___requiresActionBeforeEnabling_21)); }
	inline bool get_requiresActionBeforeEnabling_21() const { return ___requiresActionBeforeEnabling_21; }
	inline bool* get_address_of_requiresActionBeforeEnabling_21() { return &___requiresActionBeforeEnabling_21; }
	inline void set_requiresActionBeforeEnabling_21(bool value)
	{
		___requiresActionBeforeEnabling_21 = value;
	}

	inline static int32_t get_offset_of_IsSelectPressed_22() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___IsSelectPressed_22)); }
	inline bool get_IsSelectPressed_22() const { return ___IsSelectPressed_22; }
	inline bool* get_address_of_IsSelectPressed_22() { return &___IsSelectPressed_22; }
	inline void set_IsSelectPressed_22(bool value)
	{
		___IsSelectPressed_22 = value;
	}

	inline static int32_t get_offset_of_HasSelectPressedOnce_23() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___HasSelectPressedOnce_23)); }
	inline bool get_HasSelectPressedOnce_23() const { return ___HasSelectPressedOnce_23; }
	inline bool* get_address_of_HasSelectPressedOnce_23() { return &___HasSelectPressedOnce_23; }
	inline void set_HasSelectPressedOnce_23(bool value)
	{
		___HasSelectPressedOnce_23 = value;
	}

	inline static int32_t get_offset_of_IsHoldPressed_24() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___IsHoldPressed_24)); }
	inline bool get_IsHoldPressed_24() const { return ___IsHoldPressed_24; }
	inline bool* get_address_of_IsHoldPressed_24() { return &___IsHoldPressed_24; }
	inline void set_IsHoldPressed_24(bool value)
	{
		___IsHoldPressed_24 = value;
	}

	inline static int32_t get_offset_of_isCursorInstantiatedFromPrefab_25() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___isCursorInstantiatedFromPrefab_25)); }
	inline bool get_isCursorInstantiatedFromPrefab_25() const { return ___isCursorInstantiatedFromPrefab_25; }
	inline bool* get_address_of_isCursorInstantiatedFromPrefab_25() { return &___isCursorInstantiatedFromPrefab_25; }
	inline void set_isCursorInstantiatedFromPrefab_25(bool value)
	{
		___isCursorInstantiatedFromPrefab_25 = value;
	}

	inline static int32_t get_offset_of_pointerId_27() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___pointerId_27)); }
	inline uint32_t get_pointerId_27() const { return ___pointerId_27; }
	inline uint32_t* get_address_of_pointerId_27() { return &___pointerId_27; }
	inline void set_pointerId_27(uint32_t value)
	{
		___pointerId_27 = value;
	}

	inline static int32_t get_offset_of_basePointerName_28() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___basePointerName_28)); }
	inline String_t* get_basePointerName_28() const { return ___basePointerName_28; }
	inline String_t** get_address_of_basePointerName_28() { return &___basePointerName_28; }
	inline void set_basePointerName_28(String_t* value)
	{
		___basePointerName_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basePointerName_28), (void*)value);
	}

	inline static int32_t get_offset_of_pointerName_29() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___pointerName_29)); }
	inline String_t* get_pointerName_29() const { return ___pointerName_29; }
	inline String_t** get_address_of_pointerName_29() { return &___pointerName_29; }
	inline void set_pointerName_29(String_t* value)
	{
		___pointerName_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerName_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInputSourceParentU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CInputSourceParentU3Ek__BackingField_30)); }
	inline RuntimeObject* get_U3CInputSourceParentU3Ek__BackingField_30() const { return ___U3CInputSourceParentU3Ek__BackingField_30; }
	inline RuntimeObject** get_address_of_U3CInputSourceParentU3Ek__BackingField_30() { return &___U3CInputSourceParentU3Ek__BackingField_30; }
	inline void set_U3CInputSourceParentU3Ek__BackingField_30(RuntimeObject* value)
	{
		___U3CInputSourceParentU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInputSourceParentU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBaseCursorU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CBaseCursorU3Ek__BackingField_31)); }
	inline RuntimeObject* get_U3CBaseCursorU3Ek__BackingField_31() const { return ___U3CBaseCursorU3Ek__BackingField_31; }
	inline RuntimeObject** get_address_of_U3CBaseCursorU3Ek__BackingField_31() { return &___U3CBaseCursorU3Ek__BackingField_31; }
	inline void set_U3CBaseCursorU3Ek__BackingField_31(RuntimeObject* value)
	{
		___U3CBaseCursorU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBaseCursorU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCursorModifierU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CCursorModifierU3Ek__BackingField_32)); }
	inline RuntimeObject* get_U3CCursorModifierU3Ek__BackingField_32() const { return ___U3CCursorModifierU3Ek__BackingField_32; }
	inline RuntimeObject** get_address_of_U3CCursorModifierU3Ek__BackingField_32() { return &___U3CCursorModifierU3Ek__BackingField_32; }
	inline void set_U3CCursorModifierU3Ek__BackingField_32(RuntimeObject* value)
	{
		___U3CCursorModifierU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCursorModifierU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CIsActiveU3Ek__BackingField_33)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_33() const { return ___U3CIsActiveU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_33() { return &___U3CIsActiveU3Ek__BackingField_33; }
	inline void set_U3CIsActiveU3Ek__BackingField_33(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CIsFocusLockedU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CIsFocusLockedU3Ek__BackingField_34)); }
	inline bool get_U3CIsFocusLockedU3Ek__BackingField_34() const { return ___U3CIsFocusLockedU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CIsFocusLockedU3Ek__BackingField_34() { return &___U3CIsFocusLockedU3Ek__BackingField_34; }
	inline void set_U3CIsFocusLockedU3Ek__BackingField_34(bool value)
	{
		___U3CIsFocusLockedU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35)); }
	inline bool get_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35() const { return ___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35; }
	inline bool* get_address_of_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35() { return &___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35; }
	inline void set_U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35(bool value)
	{
		___U3CIsTargetPositionLockedOnFocusLockU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_overrideGlobalPointerExtent_36() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___overrideGlobalPointerExtent_36)); }
	inline bool get_overrideGlobalPointerExtent_36() const { return ___overrideGlobalPointerExtent_36; }
	inline bool* get_address_of_overrideGlobalPointerExtent_36() { return &___overrideGlobalPointerExtent_36; }
	inline void set_overrideGlobalPointerExtent_36(bool value)
	{
		___overrideGlobalPointerExtent_36 = value;
	}

	inline static int32_t get_offset_of_pointerExtent_37() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___pointerExtent_37)); }
	inline float get_pointerExtent_37() const { return ___pointerExtent_37; }
	inline float* get_address_of_pointerExtent_37() { return &___pointerExtent_37; }
	inline void set_pointerExtent_37(float value)
	{
		___pointerExtent_37 = value;
	}

	inline static int32_t get_offset_of_defaultPointerExtent_38() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___defaultPointerExtent_38)); }
	inline float get_defaultPointerExtent_38() const { return ___defaultPointerExtent_38; }
	inline float* get_address_of_defaultPointerExtent_38() { return &___defaultPointerExtent_38; }
	inline void set_defaultPointerExtent_38(float value)
	{
		___defaultPointerExtent_38 = value;
	}

	inline static int32_t get_offset_of_U3CRaysU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CRaysU3Ek__BackingField_39)); }
	inline RayStepU5BU5D_t32267AAE356422BFF0DCFFF0C55A63D3A2A977D2* get_U3CRaysU3Ek__BackingField_39() const { return ___U3CRaysU3Ek__BackingField_39; }
	inline RayStepU5BU5D_t32267AAE356422BFF0DCFFF0C55A63D3A2A977D2** get_address_of_U3CRaysU3Ek__BackingField_39() { return &___U3CRaysU3Ek__BackingField_39; }
	inline void set_U3CRaysU3Ek__BackingField_39(RayStepU5BU5D_t32267AAE356422BFF0DCFFF0C55A63D3A2A977D2* value)
	{
		___U3CRaysU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRaysU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40)); }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* get_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40() const { return ___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40; }
	inline LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D** get_address_of_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40() { return &___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40; }
	inline void set_U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* value)
	{
		___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPrioritizedLayerMasksOverrideU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFocusTargetU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CFocusTargetU3Ek__BackingField_41)); }
	inline RuntimeObject* get_U3CFocusTargetU3Ek__BackingField_41() const { return ___U3CFocusTargetU3Ek__BackingField_41; }
	inline RuntimeObject** get_address_of_U3CFocusTargetU3Ek__BackingField_41() { return &___U3CFocusTargetU3Ek__BackingField_41; }
	inline void set_U3CFocusTargetU3Ek__BackingField_41(RuntimeObject* value)
	{
		___U3CFocusTargetU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CFocusTargetU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CResultU3Ek__BackingField_42)); }
	inline RuntimeObject* get_U3CResultU3Ek__BackingField_42() const { return ___U3CResultU3Ek__BackingField_42; }
	inline RuntimeObject** get_address_of_U3CResultU3Ek__BackingField_42() { return &___U3CResultU3Ek__BackingField_42; }
	inline void set_U3CResultU3Ek__BackingField_42(RuntimeObject* value)
	{
		___U3CResultU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRayStabilizerU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CRayStabilizerU3Ek__BackingField_43)); }
	inline RuntimeObject* get_U3CRayStabilizerU3Ek__BackingField_43() const { return ___U3CRayStabilizerU3Ek__BackingField_43; }
	inline RuntimeObject** get_address_of_U3CRayStabilizerU3Ek__BackingField_43() { return &___U3CRayStabilizerU3Ek__BackingField_43; }
	inline void set_U3CRayStabilizerU3Ek__BackingField_43(RuntimeObject* value)
	{
		___U3CRayStabilizerU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRayStabilizerU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSceneQueryTypeU3Ek__BackingField_44() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___U3CSceneQueryTypeU3Ek__BackingField_44)); }
	inline int32_t get_U3CSceneQueryTypeU3Ek__BackingField_44() const { return ___U3CSceneQueryTypeU3Ek__BackingField_44; }
	inline int32_t* get_address_of_U3CSceneQueryTypeU3Ek__BackingField_44() { return &___U3CSceneQueryTypeU3Ek__BackingField_44; }
	inline void set_U3CSceneQueryTypeU3Ek__BackingField_44(int32_t value)
	{
		___U3CSceneQueryTypeU3Ek__BackingField_44 = value;
	}

	inline static int32_t get_offset_of_sphereCastRadius_45() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758, ___sphereCastRadius_45)); }
	inline float get_sphereCastRadius_45() const { return ___sphereCastRadius_45; }
	inline float* get_address_of_sphereCastRadius_45() { return &___sphereCastRadius_45; }
	inline void set_sphereCastRadius_45(float value)
	{
		___sphereCastRadius_45 = value;
	}
};

struct BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::SetCursorPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___SetCursorPerfMarker_26;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPostSceneQueryPerfMarker_46;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnSourceLostPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnSourceLostPerfMarker_47;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputUpPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnInputUpPerfMarker_48;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.BaseControllerPointer::OnInputDownPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnInputDownPerfMarker_49;

public:
	inline static int32_t get_offset_of_SetCursorPerfMarker_26() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758_StaticFields, ___SetCursorPerfMarker_26)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_SetCursorPerfMarker_26() const { return ___SetCursorPerfMarker_26; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_SetCursorPerfMarker_26() { return &___SetCursorPerfMarker_26; }
	inline void set_SetCursorPerfMarker_26(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___SetCursorPerfMarker_26 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_46() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758_StaticFields, ___OnPostSceneQueryPerfMarker_46)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPostSceneQueryPerfMarker_46() const { return ___OnPostSceneQueryPerfMarker_46; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPostSceneQueryPerfMarker_46() { return &___OnPostSceneQueryPerfMarker_46; }
	inline void set_OnPostSceneQueryPerfMarker_46(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPostSceneQueryPerfMarker_46 = value;
	}

	inline static int32_t get_offset_of_OnSourceLostPerfMarker_47() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758_StaticFields, ___OnSourceLostPerfMarker_47)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnSourceLostPerfMarker_47() const { return ___OnSourceLostPerfMarker_47; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnSourceLostPerfMarker_47() { return &___OnSourceLostPerfMarker_47; }
	inline void set_OnSourceLostPerfMarker_47(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnSourceLostPerfMarker_47 = value;
	}

	inline static int32_t get_offset_of_OnInputUpPerfMarker_48() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758_StaticFields, ___OnInputUpPerfMarker_48)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnInputUpPerfMarker_48() const { return ___OnInputUpPerfMarker_48; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnInputUpPerfMarker_48() { return &___OnInputUpPerfMarker_48; }
	inline void set_OnInputUpPerfMarker_48(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnInputUpPerfMarker_48 = value;
	}

	inline static int32_t get_offset_of_OnInputDownPerfMarker_49() { return static_cast<int32_t>(offsetof(BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758_StaticFields, ___OnInputDownPerfMarker_49)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnInputDownPerfMarker_49() const { return ___OnInputDownPerfMarker_49; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnInputDownPerfMarker_49() { return &___OnInputDownPerfMarker_49; }
	inline void set_OnInputDownPerfMarker_49(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnInputDownPerfMarker_49 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.LinePointer
struct LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E  : public BaseControllerPointer_tBA492C26A963B7DCE3EB1DDA99B46A18868D4758
{
public:
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorSelected
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorSelected_50;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorValid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorValid_51;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorInvalid
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorInvalid_52;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorNoTarget
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorNoTarget_53;
	// UnityEngine.Gradient Microsoft.MixedReality.Toolkit.Input.LinePointer::LineColorLockFocus
	Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * ___LineColorLockFocus_54;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineDataProvider Microsoft.MixedReality.Toolkit.Input.LinePointer::lineBase
	BaseMixedRealityLineDataProvider_t1071EE153B6506F41816A2D9D875ACA2CBCB27BA * ___lineBase_55;
	// Microsoft.MixedReality.Toolkit.Utilities.BaseMixedRealityLineRenderer[] Microsoft.MixedReality.Toolkit.Input.LinePointer::lineRenderers
	BaseMixedRealityLineRendererU5BU5D_tB8AFA282090BF3861BC68D4E533D2176CF3D042F* ___lineRenderers_56;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineStartPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineStartPoint_57;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.LinePointer::lineEndPoint
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lineEndPoint_58;

public:
	inline static int32_t get_offset_of_LineColorSelected_50() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___LineColorSelected_50)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorSelected_50() const { return ___LineColorSelected_50; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorSelected_50() { return &___LineColorSelected_50; }
	inline void set_LineColorSelected_50(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorSelected_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorSelected_50), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorValid_51() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___LineColorValid_51)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorValid_51() const { return ___LineColorValid_51; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorValid_51() { return &___LineColorValid_51; }
	inline void set_LineColorValid_51(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorValid_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorValid_51), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorInvalid_52() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___LineColorInvalid_52)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorInvalid_52() const { return ___LineColorInvalid_52; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorInvalid_52() { return &___LineColorInvalid_52; }
	inline void set_LineColorInvalid_52(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorInvalid_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorInvalid_52), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorNoTarget_53() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___LineColorNoTarget_53)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorNoTarget_53() const { return ___LineColorNoTarget_53; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorNoTarget_53() { return &___LineColorNoTarget_53; }
	inline void set_LineColorNoTarget_53(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorNoTarget_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorNoTarget_53), (void*)value);
	}

	inline static int32_t get_offset_of_LineColorLockFocus_54() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___LineColorLockFocus_54)); }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * get_LineColorLockFocus_54() const { return ___LineColorLockFocus_54; }
	inline Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A ** get_address_of_LineColorLockFocus_54() { return &___LineColorLockFocus_54; }
	inline void set_LineColorLockFocus_54(Gradient_t35A694DDA1066524440E325E582B01E33DE66A3A * value)
	{
		___LineColorLockFocus_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LineColorLockFocus_54), (void*)value);
	}

	inline static int32_t get_offset_of_lineBase_55() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___lineBase_55)); }
	inline BaseMixedRealityLineDataProvider_t1071EE153B6506F41816A2D9D875ACA2CBCB27BA * get_lineBase_55() const { return ___lineBase_55; }
	inline BaseMixedRealityLineDataProvider_t1071EE153B6506F41816A2D9D875ACA2CBCB27BA ** get_address_of_lineBase_55() { return &___lineBase_55; }
	inline void set_lineBase_55(BaseMixedRealityLineDataProvider_t1071EE153B6506F41816A2D9D875ACA2CBCB27BA * value)
	{
		___lineBase_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineBase_55), (void*)value);
	}

	inline static int32_t get_offset_of_lineRenderers_56() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___lineRenderers_56)); }
	inline BaseMixedRealityLineRendererU5BU5D_tB8AFA282090BF3861BC68D4E533D2176CF3D042F* get_lineRenderers_56() const { return ___lineRenderers_56; }
	inline BaseMixedRealityLineRendererU5BU5D_tB8AFA282090BF3861BC68D4E533D2176CF3D042F** get_address_of_lineRenderers_56() { return &___lineRenderers_56; }
	inline void set_lineRenderers_56(BaseMixedRealityLineRendererU5BU5D_tB8AFA282090BF3861BC68D4E533D2176CF3D042F* value)
	{
		___lineRenderers_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lineRenderers_56), (void*)value);
	}

	inline static int32_t get_offset_of_lineStartPoint_57() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___lineStartPoint_57)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineStartPoint_57() const { return ___lineStartPoint_57; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineStartPoint_57() { return &___lineStartPoint_57; }
	inline void set_lineStartPoint_57(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineStartPoint_57 = value;
	}

	inline static int32_t get_offset_of_lineEndPoint_58() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E, ___lineEndPoint_58)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_lineEndPoint_58() const { return ___lineEndPoint_58; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_lineEndPoint_58() { return &___lineEndPoint_58; }
	inline void set_lineEndPoint_58(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___lineEndPoint_58 = value;
	}
};

struct LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPreSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPreSceneQueryPerfMarker_59;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::OnPostSceneQueryPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___OnPostSceneQueryPerfMarker_60;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PreUpdateLineRenderersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___PreUpdateLineRenderersPerfMarker_61;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::PostUpdateLineRenderersPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___PostUpdateLineRenderersPerfMarker_62;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Input.LinePointer::UpdateRaysPerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateRaysPerfMarker_63;

public:
	inline static int32_t get_offset_of_OnPreSceneQueryPerfMarker_59() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_StaticFields, ___OnPreSceneQueryPerfMarker_59)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPreSceneQueryPerfMarker_59() const { return ___OnPreSceneQueryPerfMarker_59; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPreSceneQueryPerfMarker_59() { return &___OnPreSceneQueryPerfMarker_59; }
	inline void set_OnPreSceneQueryPerfMarker_59(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPreSceneQueryPerfMarker_59 = value;
	}

	inline static int32_t get_offset_of_OnPostSceneQueryPerfMarker_60() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_StaticFields, ___OnPostSceneQueryPerfMarker_60)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_OnPostSceneQueryPerfMarker_60() const { return ___OnPostSceneQueryPerfMarker_60; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_OnPostSceneQueryPerfMarker_60() { return &___OnPostSceneQueryPerfMarker_60; }
	inline void set_OnPostSceneQueryPerfMarker_60(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___OnPostSceneQueryPerfMarker_60 = value;
	}

	inline static int32_t get_offset_of_PreUpdateLineRenderersPerfMarker_61() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_StaticFields, ___PreUpdateLineRenderersPerfMarker_61)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_PreUpdateLineRenderersPerfMarker_61() const { return ___PreUpdateLineRenderersPerfMarker_61; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_PreUpdateLineRenderersPerfMarker_61() { return &___PreUpdateLineRenderersPerfMarker_61; }
	inline void set_PreUpdateLineRenderersPerfMarker_61(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___PreUpdateLineRenderersPerfMarker_61 = value;
	}

	inline static int32_t get_offset_of_PostUpdateLineRenderersPerfMarker_62() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_StaticFields, ___PostUpdateLineRenderersPerfMarker_62)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_PostUpdateLineRenderersPerfMarker_62() const { return ___PostUpdateLineRenderersPerfMarker_62; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_PostUpdateLineRenderersPerfMarker_62() { return &___PostUpdateLineRenderersPerfMarker_62; }
	inline void set_PostUpdateLineRenderersPerfMarker_62(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___PostUpdateLineRenderersPerfMarker_62 = value;
	}

	inline static int32_t get_offset_of_UpdateRaysPerfMarker_63() { return static_cast<int32_t>(offsetof(LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_StaticFields, ___UpdateRaysPerfMarker_63)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateRaysPerfMarker_63() const { return ___UpdateRaysPerfMarker_63; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateRaysPerfMarker_63() { return &___UpdateRaysPerfMarker_63; }
	inline void set_UpdateRaysPerfMarker_63(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateRaysPerfMarker_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver[]
struct SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * m_Items[1];

public:
	inline Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  m_Items[1];

public:
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mA1F757D4BC3F2CA0475C2EF484403877E53FD63C_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5D996E967221C71E4EC5CC11210C3076432D5A50 * CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m6CDBFB12AD6DA935E506D21A79A21689D3AFDD63_gshared (RuntimeObject* ___elements0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<System.Object>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PointerUtils_GetPointer_TisRuntimeObject_m65506434A833B5D7693D0F0548D65406FB800BB7_gshared (uint8_t ___handedness0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_mB6DD8190940503B99BC53E3CDA3DF9E4FB769781 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mC440DBCD8BE447E4C662DD20914E440D630F405B (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mDB8660C4637560B1743C1B418140F8A6BD554A8E (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_mBCAC29736D5AF04E815F0AB2737D7D4F65CAD7EA (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Springiness_m5E0C4F31E448A9F9F10073C5989E660DB58EC4A4 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m5B199D4AA213B263B4BFF62F0DC0E660845EF3CB (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m4CE87846B0C5ED98E477C1721D93FF3C46398F19 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_mB1B9FE0E54314807C40AB36FE117BEFB3FDF1B3B (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389 (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m6B26C7ECFF95DCED495410DE5DBEFC5B5161423E (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m718A37EDEE57BF7F7314F2613C1CE31A6775FB36 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m6793868E20221B070ACF90D4094712236BA93462 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_mC13F23925CAA4FF1A992E18E86B9BD1122905F86 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m57DF2992833EF269022FA9477A7348EB603194C5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_mA4C856CF849A5163446B8BCA56DAE60AECA47E87 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m584779D7E90A94456F2EE2157A27D04B46DD9340 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m7DB62412E0FAB98950B971E65E92B2B505B00235 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m36C2E33E67FFD01F25BD4F8ADC9BF33883C189A3 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m73CEA7B7891BA0CD0ABBCD1A2EF121A8F7B1AE7D (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forward0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upwards1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mFF4BF50C8718DF67EDF3B5B10A94E3DD85E445DC_inline (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mB6C3B212C66E3892CC9E45BE806C7AA13F3D703E_inline (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___from0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___to1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mCAA9D07CC0BFCB2AE54D3285FDA0656683D1E503_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m7CC782A2B148CAE1827CD01062D55411C5048DF8_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m0085195A750DBA6588E9BD695E8DAF659105A80D_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m7E3D68D6DD90E2E869AF83C0512A0D86494AA257_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m4B34D8D3E280C1950F170650AF964E021990E36D_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m967B4B5EE036C0A9DDC5E3DF2DEF5014B1F8A260 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler>()
inline SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * Component_GetComponent_TisSolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501_m2965018DFE5FFC05ACC011EDA7F672A7B6A2EF7B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m3C4B116418D15240948AD3029E55C158B42C6F94 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___solver0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m68B32538166479A949860FF44E9C48FCC93BA7E4 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___solver0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m463CEE7BB0F52EACA053C8903FDA988D08DAC3D0 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m43EFDACF0AB9A9C9297D54C83F1CDF633129998A (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m1EBC1ECA64CC63F3DA275634F0634745A4524CDF (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m0DE8458CBC9428CCDD0599D9394EACB341D2B609 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m44001F16B93ACE262FFA7D9A4546C0FB40314F90 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_mBD57A2E546113CFB97CCD9928CF0E0F9416B6772 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_mABDC8511B1FCF1E7A99CDBDEC632834501EF2A59 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m0F23CC04992A6D243FA2411E357EA5FDEBF311A6 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m807EFEA3D2AEC22B7D45A10616CA8F15EFA0FA01 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m85D8E92EE465041A2C3DDECF159C698D6E3391C3 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m25C16FDECF2AD2868BFEFADF8A314CC04BA0CD92 (int32_t ___type0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mECBAA763A22CEFBD5CB4D4C00A9B621DD729142E (uint8_t ___hand0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AsReadOnly()
inline ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525 * List_1_AsReadOnly_mD0C00451CFB952F363D49587A3436D017A0658B5 (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525 * (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, const RuntimeMethod*))List_1_AsReadOnly_mA3A95833512F80018CC1A0B37766AEF91A1FD34B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Clear()
inline void List_1_Clear_m2A165951652FCC06814639B891FC8838266A9F08 (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m2FEB6842262E25D4CBBAE48F1840A8264B1FEABC (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m629B40CD4286736C328FA496AAFC388F697CF984_gshared)(__this, ___collection0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m37DD4B94E581FD9FE47D8A027162EBAC2E713442 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsLeft(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsLeft_mEE9668500F66DF4D6F459525612649216F39739B (uint8_t ___current0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsRight(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsRight_mA6D17C95F12FC041F6A8A8A943CD74A904EF3334 (uint8_t ___current0, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_mCD2D3703A678EBAFD1A2514798F8CE126EDDDEAD (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mA1F757D4BC3F2CA0475C2EF484403877E53FD63C_gshared)(method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::.ctor(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Smoothed__ctor_m52381A2A7FDBD27EE9C9CB8424156808302274AF (Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, float ___smoothingTime1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m5695B8D843BCB16EA49F5CFAAFC837FB86EF063E_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m62DA25E1A388E7BF681CF610FE3B3A6CC922E9E4_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m4A2495EB8D941CBD45E432AB654C0A92691CAA22 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m2B0538978A5CA3EF325964763952A6CB670824B5 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>()
inline SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* Component_GetComponents_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m9DD6502110C019F389D0C86476463981E511F822 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m1B7342AF989DE9DCE4CED42BF55A0AC6FFCBF6C6_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Intersect<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Intersect_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_mCF21AD9C7C2FE01C274CB1370BA7396F45A6B044 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Intersect_TisRuntimeObject_m4D7F0556812B095D1D2C66EF2AF1EF98D6201333_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mA7501548CF08C0DC572659DC0C48CA117B1C6242 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m3E18C38802A2B0E1B9A84AD00662CB6EABCBD6B5 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisRuntimeObject_m176BEF1318CEDA82CAC53F47013E273574719157_gshared)(___first0, ___second1, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!!0> Microsoft.MixedReality.Toolkit.CollectionsExtensions::ToReadOnlyCollection<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>(System.Collections.Generic.IEnumerable`1<!!0>)
inline ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525 * CollectionsExtensions_ToReadOnlyCollection_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m309E75CDB2DA1A8D4F50612AB0BE2E001189B514 (RuntimeObject* ___elements0, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525 * (*) (RuntimeObject*, const RuntimeMethod*))CollectionsExtensions_ToReadOnlyCollection_TisRuntimeObject_m6CDBFB12AD6DA935E506D21A79A21689D3AFDD63_gshared)(___elements0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m9514DEB62A0BD1895DDDA839B10E3A0150B6271E (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mAF78F2915FBE4DA8E23A6ED6093335AC64AD6CDA_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Item(System.Int32)
inline Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * List_1_get_Item_mD36DB698E3AD46A37D1ABADB693108DC5CCF6BA7_inline (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m294DF13A09EA78B0578D68B67C25F1854704EE78 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::get_Count()
inline int32_t List_1_get_Count_m1F0092E76A507C944CEB3B67F71943125E085CD6_inline (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Contains(!0)
inline bool List_1_Contains_m682835B28BE5F66157663280FF94749AF30C56DD (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *, const RuntimeMethod*))List_1_Contains_mE08D561E86879A26245096C572A8593279383FDB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Add(!0)
inline void List_1_Add_mBFDBBE482FD4D2AF4EE3CFC074DAAE67A92056DF (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::Remove(!0)
inline bool List_1_Remove_m22D50C60B17E77F037E2FD9D11B78939BDA6ACCA (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m30696C1A80D3D9E0049E582206E8D3182CD6F465_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// T Microsoft.MixedReality.Toolkit.Input.PointerUtils::GetPointer<Microsoft.MixedReality.Toolkit.Input.LinePointer>(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
inline LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E (uint8_t ___handedness0, const RuntimeMethod* method)
{
	return ((  LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * (*) (uint8_t, const RuntimeMethod*))PointerUtils_GetPointer_TisRuntimeObject_m65506434A833B5D7693D0F0548D65406FB800BB7_gshared)(___handedness0, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.HandednessExtensions::GetOppositeHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t HandednessExtensions_GetOppositeHandedness_m85C616428490107B18881BCF9FC225956EB3E931 (uint8_t ___current0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m33F371A69CE6F16B0D7F5974B0D235070D782275_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m50749290308A0EE7A3A5E93DEFEF9FF85EE49B26 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m378E41C77B4CE61361DCD48F6A7995911038D895_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mE0B39302AE8851CD573EADCE0E1CE2023046FACE_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.ControllerPoseSynchronizer::get_IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerPoseSynchronizer_get_IsTracked_mDA8B5159E3A6C3718E3E42A86031E69759ED4CD3 (ControllerPoseSynchronizer_t2BA7B2EABD24C4DF9850A0BD5E29C9394A5C164A * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.HandednessExtensions::IsNone(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandednessExtensions_IsNone_mB2FF98CFB70616D90BC88FF9E4E27C61F00F5CB3 (uint8_t ___current0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>::.ctor()
inline void List_1__ctor_m3702853AF510D376673D23469224159196DC8EB0 (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m64059CBA457D2219997E4CF4E6DD8CCA111E5CEE_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_mE3A641FE9A6DCB50F540117D4F6CD9A64C15D61E (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  SolverHandler_get_AltScale_m96F1E6C1935F3F8284AFC7483A845789F5A79592_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed::get_Current()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m7A9D0CEB18725E8EC98588CAA979454EA6B8DA27_inline (Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mAA5DED9E580EE50E705A4058D6966B67096287C4_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m4E11FEAA068491A4074871B2F2C357F9F9050BC4_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Physics.RayStep::UpdateRayStep(UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RayStep_UpdateRayStep_m7698792F824A2DF6B256FEBE538C953F072DF479 (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___terminus1, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Direction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m1B1D1DDDC60A941B0C70F52ECD95F85F5A66F6CE_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Origin()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Physics.RayStep::get_Terminus()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_mFF2F8EA7BF186B548F076EB85F608E3D62B1C5F9_inline (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___end1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mE798CCC55BE47DDDA62261A3B8837A350E479905_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m590C867746E830E90179EDB02D026A9CE3F58EFD (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m4FA3FD2D1AE4221D77FB79D3175823CF569E4D40 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m7944656CD8B05E89D28F39152A2C8C538F3D9F91 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * ___rayStep0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSimplePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSimplePhysicsStep_mE3608D5EBCBB17E4B2DFB19673125CAD16199642 (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  ___step0, float ___maxDistance1, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks2, bool ___focusIndividualCompoundCollider3, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit4, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RaycastHit::set_point(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m3A784999A9118C2ADF8874A23D3560AE8B369984 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastSpherePhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,System.Single,System.Single,UnityEngine.LayerMask[],System.Boolean,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastSpherePhysicsStep_m8B4B5B469D02E117E57DC96EA887C0F2CE60CD6A (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  ___step0, float ___radius1, float ___maxDistance2, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks3, bool ___focusIndividualCompoundCollider4, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___physicsHit5, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2 (BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Physics.MixedRealityRaycaster::RaycastBoxPhysicsStep(Microsoft.MixedReality.Toolkit.Physics.RayStep,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Matrix4x4,System.Single,UnityEngine.LayerMask[],System.Int32,System.Boolean,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector3[]&,System.Boolean[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityRaycaster_RaycastBoxPhysicsStep_m4DA32EC54916789644FDC6A83F5ABEBAC8789253 (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  ___step0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___targetPosition2, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___matrix3, float ___maxDistance4, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___prioritizedLayerMasks5, int32_t ___raysPerEdge6, bool ___isOrthographic7, bool ___focusIndividualCompoundCollider8, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___points9, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** ___normals10, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040** ___hits11, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mD0D9C9C330948C4BB29B884B99C4EC3F4D3FD88C (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mF42D13EE4FB3677BBDB98B2FC92D1C0BAC87C4AE (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inNormal0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9 (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * __this, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, float* ___enter1, const RuntimeMethod* method);
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300 (int32_t ___intVal0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m482FE4AF50A4CE022E578E258A7D45D5B1C700F0_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_mCB1F0A3A2CD41A1A8C366B2B6EC3D0A8DAD71C74 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_mE464DA1626A9BC121799D7B04979D042BFB3E52D (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::SyncTransforms()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SyncTransforms_mCC0AB451C1384416298E5FAEF4E818503929AE58 (const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901 (String_t* ___layerName0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mE675094086D1E8C981094EB0AF5230F35448D80D_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m17CC1BA56E14964D481963A2C2B2EA612CD7FD80 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m9EFF18C8C4ADBC30606C0AFFFE729A4233C5B4B1 (const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m348BCCFB3EB83D6434A976DBBB815C4F76E6DE3F_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m1BD3DFCC099D6C80D0AE2559576A63B8FD30E82C_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_mA5C1201B5520C8E537C4D471C528E835BFBAA4FF_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m0BBD72B3257646E64D808EAE61731EE5064B73D7_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m2DF512D58B09E285A1890CA236F8E625D590BF63_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_m60880F67A9462B70419EAB9DC3DE980BCFE97082_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m623F8AAAD5E4D7C6AEE924BDC44C5F77ADFB213F_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_m8F188D5D0C05268FCD44B3565D5FDBBFBB72F154_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m3DFD30899BF1FA577868CFDBE33B8D4351462E38_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_defaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_defaultSurfaceNormalOffset_m48B37A29846BE7BC4A94EA420F87256A34115E37 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m0D84CBDB4C3E937ABFA03EB992AA28A57E05837F_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m5992288009A8A423B91FAF116E730846E9101B3C_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m69A27ABC3B825CBCF8F7060DE229D7425D795F89 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float ___f0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B (float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Resistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Resistance_m4CE87846B0C5ED98E477C1721D93FF3C46398F19 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return resistance; }
		float L_0 = __this->get_resistance_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return resistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Resistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_Resistance_m367D6F9630DBC8F7178630E5291FCC509FB172F7 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistance = value; }
		float L_0 = ___value0;
		__this->set_resistance_13(L_0);
		// set { resistance = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ResistanceVelocityPower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_ResistanceVelocityPower_m5B199D4AA213B263B4BFF62F0DC0E660845EF3CB (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return resistanceVelocityPower; }
		float L_0 = __this->get_resistanceVelocityPower_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return resistanceVelocityPower; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_ResistanceVelocityPower(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_ResistanceVelocityPower_m44CD2D583B0B44EE2CA109A021805C804CE79CCD (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { resistanceVelocityPower = value; }
		float L_0 = ___value0;
		__this->set_resistanceVelocityPower_14(L_0);
		// set { resistanceVelocityPower = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_AccelerationRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_AccelerationRate_mBCAC29736D5AF04E815F0AB2737D7D4F65CAD7EA (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return accelerationRate; }
		float L_0 = __this->get_accelerationRate_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return accelerationRate; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_AccelerationRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_AccelerationRate_m0951A4F920B37E95112554125BA5ACD65F8D0664 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { accelerationRate = value; }
		float L_0 = ___value0;
		__this->set_accelerationRate_15(L_0);
		// set { accelerationRate = value; }
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_Springiness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Momentum_get_Springiness_m5E0C4F31E448A9F9F10073C5989E660DB58EC4A4 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return springiness; }
		float L_0 = __this->get_springiness_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return springiness; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_Springiness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_Springiness_m0DAFADA020BD63F9B08133E9BC94C5D57204E533 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { springiness = value; }
		float L_0 = ___value0;
		__this->set_springiness_16(L_0);
		// set { springiness = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_SnapZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Momentum_get_SnapZ_mC440DBCD8BE447E4C662DD20914E440D630F405B (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return snapZ; }
		bool L_0 = __this->get_snapZ_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return snapZ; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::set_SnapZ(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_set_SnapZ_mD2C010163B36183C20658D8F1B7ABD1A9000BBB0 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { snapZ = value; }
		bool L_0 = ___value0;
		__this->set_snapZ_17(L_0);
		// set { snapZ = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::get_ReferencePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Momentum_get_ReferencePosition_mDB8660C4637560B1743C1B418140F8A6BD554A8E (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_get_ReferencePosition_mDB8660C4637560B1743C1B418140F8A6BD554A8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 ReferencePosition => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_OnEnable_m49EC0175968942DCEDCB1C2C8E19A110A774CBEF (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_OnEnable_m49EC0175968942DCEDCB1C2C8E19A110A774CBEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		Solver_OnEnable_mB6DD8190940503B99BC53E3CDA3DF9E4FB769781(__this, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_0);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_SolverUpdate_m491EE68A79D846BA9CDD78931225230D93667BC5 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SolverUpdate_m491EE68A79D846BA9CDD78931225230D93667BC5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_14;
	memset((&V_14), 0, sizeof(V_14));
	float V_15 = 0.0f;
	bool V_16 = false;
	float G_B10_0 = 0.0f;
	{
		// if (SnapZ)
		bool L_0 = Momentum_get_SnapZ_mC440DBCD8BE447E4C662DD20914E440D630F405B(__this, /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		// var referencePosition = ReferencePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Momentum_get_ReferencePosition_mDB8660C4637560B1743C1B418140F8A6BD554A8E(__this, /*hidden argument*/NULL);
		V_4 = L_2;
		// float goalDepth = (SolverHandler.GoalPosition - referencePosition).magnitude;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB_inline(L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_4, L_5, /*hidden argument*/NULL);
		V_8 = L_6;
		float L_7 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_8), /*hidden argument*/NULL);
		V_5 = L_7;
		// Vector3 currentDelta = transform.position - referencePosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_9, L_10, /*hidden argument*/NULL);
		V_6 = L_11;
		// float currentDeltaMagnitude = currentDelta.magnitude;
		float L_12 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_6), /*hidden argument*/NULL);
		V_7 = L_12;
		// if (!Mathf.Approximately(currentDeltaMagnitude, 0))
		float L_13 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_14 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_13, (0.0f), /*hidden argument*/NULL);
		V_9 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_9;
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		// Vector3 currentDeltaNorm = currentDelta / currentDeltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_6;
		float L_17 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_16, L_17, /*hidden argument*/NULL);
		V_10 = L_18;
		// transform.position += currentDeltaNorm * (goalDepth - currentDeltaMagnitude);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = L_19;
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_10;
		float L_23 = V_5;
		float L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_22, ((float)il2cpp_codegen_subtract((float)L_23, (float)L_24)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_21, L_25, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_20, L_26, /*hidden argument*/NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		// Vector3 delta = SolverHandler.GoalPosition - transform.position;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_27 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB_inline(L_27, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_28, L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		// float deltaMagnitude = delta.magnitude;
		float L_32 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_32;
		// if (deltaMagnitude > 0.01f)
		float L_33 = V_1;
		V_11 = (bool)((((float)L_33) > ((float)(0.01f)))? 1 : 0);
		bool L_34 = V_11;
		if (!L_34)
		{
			goto IL_0107;
		}
	}
	{
		// Vector3 deltaNorm = delta / deltaMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = V_0;
		float L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_35, L_36, /*hidden argument*/NULL);
		V_12 = L_37;
		// velocity += deltaNorm * (SolverHandler.DeltaTime * (AccelerationRate + Springiness * deltaMagnitude));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_12;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_40 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_40);
		float L_41 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_40, /*hidden argument*/NULL);
		float L_42 = Momentum_get_AccelerationRate_mBCAC29736D5AF04E815F0AB2737D7D4F65CAD7EA(__this, /*hidden argument*/NULL);
		float L_43 = Momentum_get_Springiness_m5E0C4F31E448A9F9F10073C5989E660DB58EC4A4(__this, /*hidden argument*/NULL);
		float L_44 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_39, ((float)il2cpp_codegen_multiply((float)L_41, (float)((float)il2cpp_codegen_add((float)L_42, (float)((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)))))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_38, L_45, /*hidden argument*/NULL);
		__this->set_velocity_18(L_46);
	}

IL_0107:
	{
		// float velocityMagnitude = velocity.magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_47 = __this->get_address_of_velocity_18();
		float L_48 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_47, /*hidden argument*/NULL);
		V_2 = L_48;
		// if (!Mathf.Approximately(velocityMagnitude, 0))
		float L_49 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_50 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_49, (0.0f), /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)L_50) == ((int32_t)0))? 1 : 0);
		bool L_51 = V_13;
		if (!L_51)
		{
			goto IL_017d;
		}
	}
	{
		// Vector3 velocityNormal = velocity / velocityMagnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = __this->get_velocity_18();
		float L_53 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_52, L_53, /*hidden argument*/NULL);
		V_14 = L_54;
		// float powFactor = velocityMagnitude > 1f ? Mathf.Pow(velocityMagnitude, ResistanceVelocityPower) : velocityMagnitude;
		float L_55 = V_2;
		if ((((float)L_55) > ((float)(1.0f))))
		{
			goto IL_0141;
		}
	}
	{
		float L_56 = V_2;
		G_B10_0 = L_56;
		goto IL_014d;
	}

IL_0141:
	{
		float L_57 = V_2;
		float L_58 = Momentum_get_ResistanceVelocityPower_m5B199D4AA213B263B4BFF62F0DC0E660845EF3CB(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_59 = powf(L_57, L_58);
		G_B10_0 = L_59;
	}

IL_014d:
	{
		V_15 = G_B10_0;
		// velocity -= velocityNormal * (powFactor * Resistance * SolverHandler.DeltaTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = __this->get_velocity_18();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = V_14;
		float L_62 = V_15;
		float L_63 = Momentum_get_Resistance_m4CE87846B0C5ED98E477C1721D93FF3C46398F19(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_64 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_64);
		float L_65 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_61, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_62, (float)L_63)), (float)L_65)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_60, L_66, /*hidden argument*/NULL);
		__this->set_velocity_18(L_67);
	}

IL_017d:
	{
		// if (velocity.sqrMagnitude < 0.001f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = __this->get_address_of_velocity_18();
		float L_69 = Vector3_get_sqrMagnitude_m1C6E190B4A933A183B308736DEC0DD64B0588968((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68, /*hidden argument*/NULL);
		V_16 = (bool)((((float)L_69) < ((float)(0.001f)))? 1 : 0);
		bool L_70 = V_16;
		if (!L_70)
		{
			goto IL_01a2;
		}
	}
	{
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_71);
	}

IL_01a2:
	{
		// transform.position += velocity * SolverHandler.DeltaTime;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_72 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_73 = L_72;
		NullCheck(L_73);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_73, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = __this->get_velocity_18();
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_76 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_76);
		float L_77 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_75, L_77, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_74, L_78, /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_73, L_79, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum_SnapTo_m2C2BA0F157D61704DD09048FB729E629C26BCB62 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Momentum_SnapTo_m2C2BA0F157D61704DD09048FB729E629C26BCB62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.SnapTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_SnapTo_mB1B9FE0E54314807C40AB36FE117BEFB3FDF1B3B(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// velocity = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_velocity_18(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Momentum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Momentum__ctor_mC067AE82FC9E9DB73E622FC6EA62E85E5BCA0AB7 (Momentum_t98C21813E66B853FF7F5F91F96D9B969DE05709E * __this, const RuntimeMethod* method)
{
	{
		// private float resistance = 0.99f;
		__this->set_resistance_13((0.99f));
		// private float resistanceVelocityPower = 1.5f;
		__this->set_resistanceVelocityPower_14((1.5f));
		// private float accelerationRate = 10f;
		__this->set_accelerationRate_15((10.0f));
		// private float springiness = 0;
		__this->set_springiness_16((0.0f));
		// private bool snapZ = true;
		__this->set_snapZ_17((bool)1);
		Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_OrientationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_OrientationType_m6ABD600639983618554267DC7F7A4DD11B798551 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return orientationType; }
		int32_t L_0 = __this->get_orientationType_13();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return orientationType; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_OrientationType(Microsoft.MixedReality.Toolkit.Utilities.SolverOrientationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_OrientationType_m7682BA81C4E5E5B9D720189AEA736F3A66298B91 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { orientationType = value; }
		int32_t L_0 = ___value0;
		__this->set_orientationType_13(L_0);
		// set { orientationType = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_LocalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_LocalOffset_m6B26C7ECFF95DCED495410DE5DBEFC5B5161423E (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_localOffset_14();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return localOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_LocalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_LocalOffset_m830B22C8DDAD4CE7888FD1DB9D206757F8A35849 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { localOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_localOffset_14(L_0);
		// set { localOffset = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_WorldOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Orbital_get_WorldOffset_m718A37EDEE57BF7F7314F2613C1CE31A6775FB36 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_worldOffset_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return worldOffset; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_WorldOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_WorldOffset_m7590D77B6E8B908D659A0D2331FD7C6C23FB45B6 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { worldOffset = value; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_worldOffset_15(L_0);
		// set { worldOffset = value; }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_UseAngleStepping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Orbital_get_UseAngleStepping_mC13F23925CAA4FF1A992E18E86B9BD1122905F86 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return useAngleStepping; }
		bool L_0 = __this->get_useAngleStepping_16();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return useAngleStepping; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_UseAngleStepping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_UseAngleStepping_m81E56AB98F643BAAD03A3DBF58D5F5326B14FA90 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { useAngleStepping = value; }
		bool L_0 = ___value0;
		__this->set_useAngleStepping_16(L_0);
		// set { useAngleStepping = value; }
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::get_TetherAngleSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Orbital_get_TetherAngleSteps_m4425AB2DF10C1F8B674F5C838D3B6916A3FE59E6 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return tetherAngleSteps; }
		int32_t L_0 = __this->get_tetherAngleSteps_17();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return tetherAngleSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::set_TetherAngleSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_set_TetherAngleSteps_m6E8BC8B932156806A58B69E288B685BC00D0C5BE (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_set_TetherAngleSteps_m6E8BC8B932156806A58B69E288B685BC00D0C5BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tetherAngleSteps = Mathf.Clamp(value, 2, 24);
		int32_t L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_1 = Mathf_Clamp_mE1EA15D719BF2F632741D42DF96F0BC797A20389(L_0, 2, ((int32_t)24), /*hidden argument*/NULL);
		__this->set_tetherAngleSteps_17(L_1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital_SolverUpdate_m9B09457CDF6ADBFCBD0B5A5DE8136D9F832656BC (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SolverUpdate_m9B09457CDF6ADBFCBD0B5A5DE8136D9F832656BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 desiredPos = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002b;
	}

IL_001b:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002b:
	{
		V_0 = G_B3_0;
		// Quaternion targetRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.Euler(0, 1, 0);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_7 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0055;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0065;
	}

IL_0055:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_11 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		G_B6_0 = L_13;
	}

IL_0065:
	{
		V_1 = G_B6_0;
		// Quaternion yawOnlyRot = Quaternion.Euler(0, targetRot.eulerAngles.y, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		float L_15 = L_14.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_15, (0.0f), /*hidden argument*/NULL);
		V_2 = L_16;
		// desiredPos += (SnapToTetherAngleSteps(targetRot) * LocalOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2(__this, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Orbital_get_LocalOffset_m6B26C7ECFF95DCED495410DE5DBEFC5B5161423E(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_17, L_21, /*hidden argument*/NULL);
		V_0 = L_22;
		// desiredPos += (SnapToTetherAngleSteps(yawOnlyRot) * WorldOffset);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_25 = Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2(__this, L_24, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Orbital_get_WorldOffset_m718A37EDEE57BF7F7314F2613C1CE31A6775FB36(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_25, L_26, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// Quaternion desiredRot = CalculateDesiredRotation(desiredPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Orbital_CalculateDesiredRotation_m6793868E20221B070ACF90D4094712236BA93462(__this, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// GoalPosition = desiredPos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_0;
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_31, /*hidden argument*/NULL);
		// GoalRotation = desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = V_3;
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::SnapToTetherAngleSteps(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationToSnap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B3_0 = 0;
	{
		// if (!UseAngleStepping || SolverHandler.TransformTarget == null)
		bool L_0 = Orbital_get_UseAngleStepping_mC13F23925CAA4FF1A992E18E86B9BD1122905F86(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_1 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_3 = (bool)G_B3_0;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return rotationToSnap;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = ___rotationToSnap0;
		V_4 = L_5;
		goto IL_007e;
	}

IL_0027:
	{
		// float stepAngle = 360f / tetherAngleSteps;
		int32_t L_6 = __this->get_tetherAngleSteps_17();
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_6)))));
		// int numberOfSteps = Mathf.RoundToInt(SolverHandler.TransformTarget.transform.eulerAngles.y / stepAngle);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_7 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_13 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)((float)L_11/(float)L_12)), /*hidden argument*/NULL);
		V_1 = L_13;
		// float newAngle = stepAngle * numberOfSteps;
		float L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply((float)L_14, (float)(((float)((float)L_15)))));
		// return Quaternion.Euler(rotationToSnap.eulerAngles.x, newAngle, rotationToSnap.eulerAngles.z);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_17 = L_16.get_x_2();
		float L_18 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___rotationToSnap0), /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05(L_17, L_18, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::CalculateDesiredRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Orbital_CalculateDesiredRotation_m6793868E20221B070ACF90D4094712236BA93462 (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital_CalculateDesiredRotation_m6793868E20221B070ACF90D4094712236BA93462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	bool V_3 = false;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float G_B5_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B15_0;
	memset((&G_B15_0), 0, sizeof(G_B15_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	{
		// Quaternion desiredRot = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (orientationType)
		int32_t L_1 = __this->get_orientationType_13();
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_010f;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_00d8;
			}
			case 5:
			{
				goto IL_0088;
			}
		}
	}
	{
		goto IL_013c;
	}

IL_0031:
	{
		// float targetYRotation = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.eulerAngles.y : 0.0f;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0060;
	}

IL_004b:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_6 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_eulerAngles_mF2D798FA8B18F7A1A0C4A2198329ADBAF07E37CA(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_y_3();
		G_B5_0 = L_9;
	}

IL_0060:
	{
		V_2 = G_B5_0;
		// desiredRot = Quaternion.Euler(0f, targetYRotation, 0f);
		float L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_10, (0.0f), /*hidden argument*/NULL);
		V_0 = L_11;
		// break;
		goto IL_0159;
	}

IL_0077:
	{
		// desiredRot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// break;
		goto IL_0159;
	}

IL_0088:
	{
		// desiredRot = CameraCache.Main.transform.rotation;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = CameraCache_get_Main_m57DF2992833EF269022FA9477A7348EB603194C5(/*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		// break;
		goto IL_0159;
	}

IL_009d:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(SolverHandler.TransformTarget.position - desiredPos) : Quaternion.identity;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_17 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_19 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_18, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_20 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B11_0 = L_20;
		goto IL_00d2;
	}

IL_00b7:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_21 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_21);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_23, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_26 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_25, /*hidden argument*/NULL);
		G_B11_0 = L_26;
	}

IL_00d2:
	{
		V_0 = G_B11_0;
		// break;
		goto IL_0159;
	}

IL_00d8:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? Quaternion.LookRotation(CameraCache.Main.transform.position - desiredPos) : Quaternion.identity;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_27 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_27);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_28, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B15_0 = L_30;
		goto IL_010c;
	}

IL_00f2:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = CameraCache_get_Main_m57DF2992833EF269022FA9477A7348EB603194C5(/*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = ___desiredPos0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_33, L_34, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = Quaternion_LookRotation_m465C08262650385D02ADDE78C9791AED47D2155F(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
	}

IL_010c:
	{
		V_0 = G_B15_0;
		// break;
		goto IL_0159;
	}

IL_010f:
	{
		// desiredRot = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.rotation : Quaternion.identity;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_37 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_37);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_39 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0129;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_40 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		G_B19_0 = L_40;
		goto IL_0139;
	}

IL_0129:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_41 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_42, /*hidden argument*/NULL);
		G_B19_0 = L_43;
	}

IL_0139:
	{
		V_0 = G_B19_0;
		// break;
		goto IL_0159;
	}

IL_013c:
	{
		// Debug.LogError($"Invalid OrientationType for Orbital Solver on {gameObject.name}");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_44 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_45 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_44, /*hidden argument*/NULL);
		String_t* L_46 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF7E8D8FA41CB0C1CCEB687AB4AE503CE4773E4AE, L_45, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_46, /*hidden argument*/NULL);
		// break;
		goto IL_0159;
	}

IL_0159:
	{
		// if (UseAngleStepping)
		bool L_47 = Orbital_get_UseAngleStepping_mC13F23925CAA4FF1A992E18E86B9BD1122905F86(__this, /*hidden argument*/NULL);
		V_3 = L_47;
		bool L_48 = V_3;
		if (!L_48)
		{
			goto IL_016d;
		}
	}
	{
		// desiredRot = SnapToTetherAngleSteps(desiredRot);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_50 = Orbital_SnapToTetherAngleSteps_m7B71C61209F9410EB98F2D3BF4EDE1B3A5AF4BE2(__this, L_49, /*hidden argument*/NULL);
		V_0 = L_50;
	}

IL_016d:
	{
		// return desiredRot;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_51 = V_0;
		V_4 = L_51;
		goto IL_0172;
	}

IL_0172:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_52 = V_4;
		return L_52;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Orbital::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Orbital__ctor_m2F6384E0145B3C94EF360AA7452925CF89E0471F (Orbital_tF38DD38EC94F5585E3330AC72567AD674E0C9FAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Orbital__ctor_m2F6384E0145B3C94EF360AA7452925CF89E0471F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private SolverOrientationType orientationType = SolverOrientationType.FollowTrackedObject;
		__this->set_orientationType_13(0);
		// private Vector3 localOffset = new Vector3(0, -1, 1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.0f), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_localOffset_14(L_0);
		// private Vector3 worldOffset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_worldOffset_15(L_1);
		// private bool useAngleStepping = false;
		__this->set_useAngleStepping_16((bool)0);
		// private int tetherAngleSteps = 6;
		__this->set_tetherAngleSteps_17(6);
		Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap_SolverUpdate_m0D89318A45E99C770FA53F543AD7A2397A14D052 (Overlap_t894852CBF487B61F12185C0FB8416BF0AC3CCB4D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Overlap_SolverUpdate_m0D89318A45E99C770FA53F543AD7A2397A14D052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	{
		// var target = SolverHandler.TransformTarget;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// GoalPosition = target.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = V_0;
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_6, /*hidden argument*/NULL);
		// GoalRotation = target.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = V_0;
		NullCheck(L_7);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_8 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_7, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_8, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Overlap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Overlap__ctor_m3E786281D5367FF1CF121D0428CC865DD10B0411 (Overlap_t894852CBF487B61F12185C0FB8416BF0AC3CCB4D * __this, const RuntimeMethod* method)
{
	{
		Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RadialView_get_ReferenceDirection_m5AE27B71CF8CD2E12BC247B5A3A3FB8D89DF5A09 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => referenceDirection;
		int32_t L_0 = __this->get_referenceDirection_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_ReferenceDirection(Microsoft.MixedReality.Toolkit.Utilities.RadialViewReferenceDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_ReferenceDirection_m2E8BB5117E96F0F208722FBD744BA408AA6354B7 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => referenceDirection = value;
		int32_t L_0 = ___value0;
		__this->set_referenceDirection_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinDistance_mC6734E126CA43C2F1DC5094F5B8EDBEA495F9FD2 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => minDistance;
		float L_0 = __this->get_minDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinDistance_mD8ABD51EF6A5A14B0E9B0F8E46E0E88F9BCCA244 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minDistance = value;
		float L_0 = ___value0;
		__this->set_minDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxDistance_m31337E59ECB4F12B072F5885BD48B2087FE6F2E4 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => maxDistance;
		float L_0 = __this->get_maxDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxDistance_m52BCEA0B3479D4535FB15B40F89998DFFD183BB4 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxDistance = value;
		float L_0 = ___value0;
		__this->set_maxDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MinViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MinViewDegrees_m2344849D030D06F0EA7D4F2B62CBBB87E2A5D421 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => minViewDegrees;
		float L_0 = __this->get_minViewDegrees_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MinViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MinViewDegrees_m74FCE1600BA2033839BDC90FC7E7EC4D3F0FAC9B (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => minViewDegrees = value;
		float L_0 = ___value0;
		__this->set_minViewDegrees_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_MaxViewDegrees()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_MaxViewDegrees_m2116ED9FBD6641EAF60C77B3D27304F3F9D2F38C (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => maxViewDegrees;
		float L_0 = __this->get_maxViewDegrees_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_MaxViewDegrees(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_MaxViewDegrees_m99FB8DCB5C77CA638D6B1D1DC05F46C94523D5A5 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxViewDegrees = value;
		float L_0 = ___value0;
		__this->set_maxViewDegrees_17(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_AspectV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_AspectV_m6703B00CBD890507E9CB3C0768D5D490F7B8D19D (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => aspectV;
		float L_0 = __this->get_aspectV_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_AspectV(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_AspectV_m3BDB742071C0662115DF3C0F7765836272B5DC0C (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => aspectV = value;
		float L_0 = ___value0;
		__this->set_aspectV_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreAngleClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreAngleClamp_m948D37976F2973DB6AF07CEF1906966F907FC340 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => ignoreAngleClamp;
		bool L_0 = __this->get_ignoreAngleClamp_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreAngleClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreAngleClamp_mE84764B10052DB3F6A946645E00814C55BBE7514 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => ignoreAngleClamp = value;
		bool L_0 = ___value0;
		__this->set_ignoreAngleClamp_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_IgnoreDistanceClamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_IgnoreDistanceClamp_mC06F417F013BD38E66DD514448B8BA816831A329 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => ignoreDistanceClamp;
		bool L_0 = __this->get_ignoreDistanceClamp_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_IgnoreDistanceClamp(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_IgnoreDistanceClamp_m0FE5108DFBE7B9C402E4E681F0CB0FA6A14C05F3 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => ignoreDistanceClamp = value;
		bool L_0 = ___value0;
		__this->set_ignoreDistanceClamp_20(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UseFixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mFF4BF50C8718DF67EDF3B5B10A94E3DD85E445DC (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_UseFixedVerticalPosition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_UseFixedVerticalPosition_m032476E4D9E4BD64D1B8F64BE3B78216E1696B36 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useFixedVerticalPosition = value;
		bool L_0 = ___value0;
		__this->set_useFixedVerticalPosition_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_FixedVerticalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mB6C3B212C66E3892CC9E45BE806C7AA13F3D703E (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_FixedVerticalPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_FixedVerticalPosition_mFEDE82AD575B23FB6B4ED39AB7FA41A0A029A3B4 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => fixedVerticalPosition = value;
		float L_0 = ___value0;
		__this->set_fixedVerticalPosition_22(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_OrientToReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RadialView_get_OrientToReferenceDirection_m3E3D7EAF00835D27B2F548C1C6AF44A50260B6A9 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => orientToReferenceDirection;
		bool L_0 = __this->get_orientToReferenceDirection_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::set_OrientToReferenceDirection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_set_OrientToReferenceDirection_m50DF031872F1AA34A5B210C4DC9039EC9826A321 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orientToReferenceDirection = value;
		bool L_0 = ___value0;
		__this->set_orientToReferenceDirection_23(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_SolverReferenceDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_SolverReferenceDirection_m73CEA7B7891BA0CD0ABBCD1A2EF121A8F7B1AE7D (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_SolverReferenceDirection_m73CEA7B7891BA0CD0ABBCD1A2EF121A8F7B1AE7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 SolverReferenceDirection => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.forward : Vector3.forward;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_UpReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_UpReference_m36C2E33E67FFD01F25BD4F8ADC9BF33883C189A3 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_UpReference_m36C2E33E67FFD01F25BD4F8ADC9BF33883C189A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		// Vector3 upReference = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (referenceDirection == RadialViewReferenceDirection.ObjectOriented)
		int32_t L_1 = __this->get_referenceDirection_13();
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// upReference = SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.up : Vector3.up;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B4_0 = L_6;
		goto IL_003f;
	}

IL_002f:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_7 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_up_m3E443F6EB278D547946E80D77065A871BEEEE282(L_8, /*hidden argument*/NULL);
		G_B4_0 = L_9;
	}

IL_003f:
	{
		V_0 = G_B4_0;
	}

IL_0041:
	{
		// return upReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = V_0;
		V_2 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::get_ReferencePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 ReferencePoint => SolverHandler.TransformTarget != null ? SolverHandler.TransformTarget.position : Vector3.zero;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_002a;
	}

IL_001a:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_SolverUpdate_m0605B7A94CD016262154F575F2FE6849C72333D6 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_SolverUpdate_m0605B7A94CD016262154F575F2FE6849C72333D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	bool V_8 = false;
	{
		// Vector3 goalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_mA4C856CF849A5163446B8BCA56DAE60AECA47E87(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreAngleClamp)
		bool L_1 = __this->get_ignoreAngleClamp_19();
		V_3 = L_1;
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if (ignoreDistanceClamp)
		bool L_3 = __this->get_ignoreDistanceClamp_20();
		V_4 = L_3;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// goalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_003a;
	}

IL_002f:
	{
		// GetDesiredOrientation_DistanceOnly(ref goalPosition);
		RadialView_GetDesiredOrientation_DistanceOnly_m584779D7E90A94456F2EE2157A27D04B46DD9340(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_003a:
	{
		goto IL_0048;
	}

IL_003d:
	{
		// GetDesiredOrientation(ref goalPosition);
		RadialView_GetDesiredOrientation_m7DB62412E0FAB98950B971E65E92B2B505B00235(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0048:
	{
		// Vector3 refDirUp = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = RadialView_get_UpReference_m36C2E33E67FFD01F25BD4F8ADC9BF33883C189A3(__this, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (orientToReferenceDirection)
		bool L_8 = __this->get_orientToReferenceDirection_23();
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// goalRotation = Quaternion.LookRotation(SolverReferenceDirection, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RadialView_get_SolverReferenceDirection_m73CEA7B7891BA0CD0ABBCD1A2EF121A8F7B1AE7D(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		goto IL_0081;
	}

IL_006c:
	{
		// goalRotation = Quaternion.LookRotation(goalPosition - ReferencePoint, refDirUp);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0081:
	{
		// if (referenceDirection == RadialViewReferenceDirection.GravityAligned)
		int32_t L_18 = __this->get_referenceDirection_13();
		V_6 = (bool)((((int32_t)L_18) == ((int32_t)2))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_00aa;
		}
	}
	{
		// goalRotation.x = goalRotation.z = 0f;
		float L_20 = (0.0f);
		V_7 = L_20;
		(&V_2)->set_z_2(L_20);
		float L_21 = V_7;
		(&V_2)->set_x_0(L_21);
	}

IL_00aa:
	{
		// if (UseFixedVerticalPosition)
		bool L_22 = RadialView_get_UseFixedVerticalPosition_mFF4BF50C8718DF67EDF3B5B10A94E3DD85E445DC_inline(__this, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_00d1;
		}
	}
	{
		// goalPosition.y = ReferencePoint.y + FixedVerticalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150(__this, /*hidden argument*/NULL);
		float L_25 = L_24.get_y_3();
		float L_26 = RadialView_get_FixedVerticalPosition_mB6C3B212C66E3892CC9E45BE806C7AA13F3D703E_inline(__this, /*hidden argument*/NULL);
		(&V_0)->set_y_3(((float)il2cpp_codegen_add((float)L_25, (float)L_26)));
	}

IL_00d1:
	{
		// GoalPosition = goalPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_0;
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_27, /*hidden argument*/NULL);
		// GoalRotation = goalRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = V_2;
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_28, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation_DistanceOnly(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_DistanceOnly_m584779D7E90A94456F2EE2157A27D04B46DD9340 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_DistanceOnly_m584779D7E90A94456F2EE2157A27D04B46DD9340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	bool V_6 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector3 refPoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// Vector3 elementDelta = elementPoint - refPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// float elementDist = elementDelta.magnitude;
		float L_6 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_7 = V_3;
		if ((((float)L_7) > ((float)(0.0f))))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_8;
		goto IL_003a;
	}

IL_0033:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_2;
		float L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_9, L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
	}

IL_003a:
	{
		V_4 = G_B3_0;
		// float clampedDistance = Mathf.Clamp(elementDist, minDistance, maxDistance);
		float L_12 = V_3;
		float L_13 = __this->get_minDistance_14();
		float L_14 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_5 = L_15;
		// if (!clampedDistance.Equals(elementDist))
		float L_16 = V_3;
		bool L_17 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_5), L_16, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		// desiredPos = refPoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_19 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_21, L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_20, L_23, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_19 = L_24;
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::GetDesiredOrientation(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView_GetDesiredOrientation_m7DB62412E0FAB98950B971E65E92B2B505B00235 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___desiredPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RadialView_GetDesiredOrientation_m7DB62412E0FAB98950B971E65E92B2B505B00235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	bool V_13 = false;
	float V_14 = 0.0f;
	bool V_15 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	float G_B6_0 = 0.0f;
	{
		// Vector3 direction = SolverReferenceDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = RadialView_get_SolverReferenceDirection_m73CEA7B7891BA0CD0ABBCD1A2EF121A8F7B1AE7D(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 upDirection = UpReference;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RadialView_get_UpReference_m36C2E33E67FFD01F25BD4F8ADC9BF33883C189A3(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		// Vector3 referencePoint = ReferencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = RadialView_get_ReferencePoint_mC654C6FA14FA06887CFF068A65F8DE0666A57150(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// Vector3 elementPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		// Vector3 elementDelta = elementPoint - referencePoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_5, L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		// float elementDist = elementDelta.magnitude;
		float L_8 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_4), /*hidden argument*/NULL);
		V_5 = L_8;
		// Vector3 elementDir = elementDist > 0 ? elementDelta / elementDist : Vector3.one;
		float L_9 = V_5;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0044;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B3_0 = L_10;
		goto IL_004d;
	}

IL_0044:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_4;
		float L_12 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_11, L_12, /*hidden argument*/NULL);
		G_B3_0 = L_13;
	}

IL_004d:
	{
		V_6 = G_B3_0;
		// Vector3 perpendicularDirection = (elementDir - direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_14, L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		// perpendicularDirection -= direction * Vector3.Dot(perpendicularDirection, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_0;
		float L_21 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_19, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_18, L_21, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_17, L_22, /*hidden argument*/NULL);
		V_7 = L_23;
		// perpendicularDirection.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		// float heightToViewAngle = Vector3.Angle(perpendicularDirection, upDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_1;
		float L_26 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_24, L_25, /*hidden argument*/NULL);
		V_8 = L_26;
		// float verticalAspectScale = Mathf.Lerp(aspectV, 1f, Mathf.Abs(Mathf.Sin(heightToViewAngle * Mathf.Deg2Rad)));
		float L_27 = __this->get_aspectV_18();
		float L_28 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_29 = sinf(((float)il2cpp_codegen_multiply((float)L_28, (float)(0.0174532924f))));
		float L_30 = fabsf(L_29);
		float L_31 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_27, (1.0f), L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		// float currentAngle = Vector3.Angle(elementDir, direction);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_0;
		float L_34 = Vector3_Angle_m8911FFA1DD1C8C46D923B52645B352FA1521CD5F(L_32, L_33, /*hidden argument*/NULL);
		V_10 = L_34;
		// float currentAngleClamped = Mathf.Clamp(currentAngle, minViewDegrees * verticalAspectScale, maxViewDegrees * verticalAspectScale);
		float L_35 = V_10;
		float L_36 = __this->get_minViewDegrees_16();
		float L_37 = V_9;
		float L_38 = __this->get_maxViewDegrees_17();
		float L_39 = V_9;
		float L_40 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_35, ((float)il2cpp_codegen_multiply((float)L_36, (float)L_37)), ((float)il2cpp_codegen_multiply((float)L_38, (float)L_39)), /*hidden argument*/NULL);
		V_11 = L_40;
		// float clampedDistance = ignoreDistanceClamp ? elementDist : Mathf.Clamp(elementDist, minDistance, maxDistance);
		bool L_41 = __this->get_ignoreDistanceClamp_20();
		if (L_41)
		{
			goto IL_00e8;
		}
	}
	{
		float L_42 = V_5;
		float L_43 = __this->get_minDistance_14();
		float L_44 = __this->get_maxDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_45 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_42, L_43, L_44, /*hidden argument*/NULL);
		G_B6_0 = L_45;
		goto IL_00ea;
	}

IL_00e8:
	{
		float L_46 = V_5;
		G_B6_0 = L_46;
	}

IL_00ea:
	{
		V_12 = G_B6_0;
		// if (currentAngle != currentAngleClamped)
		float L_47 = V_10;
		float L_48 = V_11;
		V_13 = (bool)((((int32_t)((((float)L_47) == ((float)L_48))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_013c;
		}
	}
	{
		// float angRad = currentAngleClamped * Mathf.Deg2Rad;
		float L_50 = V_11;
		V_14 = ((float)il2cpp_codegen_multiply((float)L_50, (float)(0.0174532924f)));
		// desiredPos = referencePoint + clampedDistance * (direction * Mathf.Cos(angRad) + perpendicularDirection * Mathf.Sin(angRad));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_51 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_2;
		float L_53 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_0;
		float L_55 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_56 = cosf(L_55);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_57 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_54, L_56, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_7;
		float L_59 = V_14;
		float L_60 = sinf(L_59);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_58, L_60, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_57, L_61, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_53, L_62, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_52, L_63, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_51 = L_64;
		goto IL_0165;
	}

IL_013c:
	{
		// else if (!clampedDistance.Equals(elementDist))
		float L_65 = V_5;
		bool L_66 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_12), L_65, /*hidden argument*/NULL);
		V_15 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_15;
		if (!L_67)
		{
			goto IL_0165;
		}
	}
	{
		// desiredPos = referencePoint + clampedDistance * elementDir;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_68 = ___desiredPos0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_2;
		float L_70 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_72 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_70, L_71, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_69, L_72, /*hidden argument*/NULL);
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_68 = L_73;
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.RadialView::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RadialView__ctor_m7EA96183357441E5D0004EBEFE4716CE634DEDA2 (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// private RadialViewReferenceDirection referenceDirection = RadialViewReferenceDirection.FacingWorldUp;
		__this->set_referenceDirection_13(1);
		// private float minDistance = 1f;
		__this->set_minDistance_14((1.0f));
		// private float maxDistance = 2f;
		__this->set_maxDistance_15((2.0f));
		// private float minViewDegrees = 0f;
		__this->set_minViewDegrees_16((0.0f));
		// private float maxViewDegrees = 30f;
		__this->set_maxViewDegrees_17((30.0f));
		// private float aspectV = 1f;
		__this->set_aspectV_18((1.0f));
		// private bool ignoreAngleClamp = false;
		__this->set_ignoreAngleClamp_19((bool)0);
		// private bool ignoreDistanceClamp = false;
		__this->set_ignoreDistanceClamp_20((bool)0);
		// private bool useFixedVerticalPosition = false;
		__this->set_useFixedVerticalPosition_21((bool)0);
		// private float fixedVerticalPosition = -0.4f;
		__this->set_fixedVerticalPosition_22((-0.4f));
		// private bool orientToReferenceDirection = false;
		__this->set_orientToReferenceDirection_23((bool)0);
		Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_UpdateLinkedTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_UpdateLinkedTransform_m05BF9F859379B1E3880D6D328CF123F1581382B8 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// get => updateLinkedTransform;
		bool L_0 = __this->get_updateLinkedTransform_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_UpdateLinkedTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_UpdateLinkedTransform_m1A476FF7E5900013D85F47E435F88872596A39FA (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateLinkedTransform = value;
		bool L_0 = ___value0;
		__this->set_updateLinkedTransform_4(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_MoveLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_MoveLerpTime_m6EC15B8724D8DFBD0B052C548EEF8A8DA2A21C99 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// get => moveLerpTime;
		float L_0 = __this->get_moveLerpTime_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_MoveLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_MoveLerpTime_m4A20D0AD35221E57FC5D2262981D3E6F2E1FB474 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => moveLerpTime = value;
		float L_0 = ___value0;
		__this->set_moveLerpTime_5(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_RotateLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_RotateLerpTime_m6C6A7B3747211380C24F88FF5AD826124073E301 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// get => rotateLerpTime;
		float L_0 = __this->get_rotateLerpTime_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_RotateLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_RotateLerpTime_m7427BF02ED17F0D1D7643F306853E95140A91572 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateLerpTime = value;
		float L_0 = ___value0;
		__this->set_rotateLerpTime_6(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_ScaleLerpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Solver_get_ScaleLerpTime_mB15D74446AADC0D5A8A89C87EA806AB33BEFF70E (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// get => scaleLerpTime;
		float L_0 = __this->get_scaleLerpTime_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_ScaleLerpTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_ScaleLerpTime_m051EFFB7CDFBCEB091C36D5A39D835B9B44F1201 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => scaleLerpTime = value;
		float L_0 = ___value0;
		__this->set_scaleLerpTime_7(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_Smoothing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Solver_get_Smoothing_mFB230C0B88F6D248F642D9E653E2817B6604B8C6 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// get => smoothing;
		bool L_0 = __this->get_smoothing_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_Smoothing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_Smoothing_m63842EA20F95E94785318D8CBB348721197D2A23 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => smoothing = value;
		bool L_0 = ___value0;
		__this->set_smoothing_9(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalPosition; }
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalPosition; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalPosition = value; }
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalPosition_mCAA9D07CC0BFCB2AE54D3285FDA0656683D1E503_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalPosition = value; }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalRotation; }
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SolverHandler_get_GoalRotation_m7CC782A2B148CAE1827CD01062D55411C5048DF8_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalRotation; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalRotation = value; }
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalRotation_m0085195A750DBA6588E9BD695E8DAF659105A80D_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalRotation = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return SolverHandler.GoalScale; }
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SolverHandler_get_GoalScale_m7E3D68D6DD90E2E869AF83C0512A0D86494AA257_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return SolverHandler.GoalScale; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		return L_2;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_GoalScale_m967B4B5EE036C0A9DDC5E3DF2DEF5014B1F8A260 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// set { SolverHandler.GoalScale = value; }
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		NullCheck(L_0);
		SolverHandler_set_GoalScale_m4B34D8D3E280C1950F170650AF964E021990E36D_inline(L_0, L_1, /*hidden argument*/NULL);
		// set { SolverHandler.GoalScale = value; }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingPosition_mA4C856CF849A5163446B8BCA56DAE60AECA47E87 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalPosition : transform.position;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingPosition_m43EFDACF0AB9A9C9297D54C83F1CDF633129998A (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalPosition = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.position = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_get_WorkingRotation_m807EFEA3D2AEC22B7D45A10616CA8F15EFA0FA01 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalRotation : transform.rotation;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingRotation_m1EBC1ECA64CC63F3DA275634F0634745A4524CDF (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalRotation = value;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = ___value0;
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.rotation = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::get_WorkingScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_get_WorkingScale_m85D8E92EE465041A2C3DDECF159C698D6E3391C3 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return updateLinkedTransform ? GoalScale : transform.localScale;
		bool L_0 = __this->get_updateLinkedTransform_4();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D(__this, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_0 = G_B3_0;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::set_WorkingScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_set_WorkingScale_m0DE8458CBC9428CCDD0599D9394EACB341D2B609 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (updateLinkedTransform)
		bool L_0 = __this->get_updateLinkedTransform_4();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GoalScale = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___value0;
		Solver_set_GoalScale_m967B4B5EE036C0A9DDC5E3DF2DEF5014B1F8A260(__this, L_2, /*hidden argument*/NULL);
		goto IL_0026;
	}

IL_0017:
	{
		// transform.localScale = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		NullCheck(L_3);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Awake_m5EE45BA9448D89DEEFF754434210C419C2ADA5C1 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Awake_m5EE45BA9448D89DEEFF754434210C419C2ADA5C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B9_0 = NULL;
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B8_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B10_1 = NULL;
	{
		// if (SolverHandler == null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// SolverHandler = GetComponent<SolverHandler>();
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = Component_GetComponent_TisSolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501_m2965018DFE5FFC05ACC011EDA7F672A7B6A2EF7B(__this, /*hidden argument*/Component_GetComponent_TisSolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501_m2965018DFE5FFC05ACC011EDA7F672A7B6A2EF7B_RuntimeMethod_var);
		__this->set_SolverHandler_12(L_3);
	}

IL_001f:
	{
		// if (updateLinkedTransform && SolverHandler == null)
		bool L_4 = __this->get_updateLinkedTransform_4();
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_5 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0036;
	}

IL_0035:
	{
		G_B5_0 = 0;
	}

IL_0036:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		// Debug.LogError("No SolverHandler component found on " + name + " when UpdateLinkedTransform was set to true! Disabling UpdateLinkedTransform.");
		String_t* L_8 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(__this, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8F4978D97C91FB89AFEE30FCE57DD7FD2FADFA7B, L_8, _stringLiteral856AE3ECE3EEE609B18AD6DAB47EAD71A921A33E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_9, /*hidden argument*/NULL);
		// updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
	}

IL_005e:
	{
		// GoalScale = maintainScaleOnInitialization ? transform.localScale : Vector3.one;
		bool L_10 = __this->get_maintainScaleOnInitialization_8();
		G_B8_0 = __this;
		if (L_10)
		{
			G_B9_0 = __this;
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		G_B10_0 = L_11;
		G_B10_1 = G_B8_0;
		goto IL_0079;
	}

IL_006e:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_12, /*hidden argument*/NULL);
		G_B10_0 = L_13;
		G_B10_1 = G_B9_0;
	}

IL_0079:
	{
		NullCheck(G_B10_1);
		Solver_set_GoalScale_m967B4B5EE036C0A9DDC5E3DF2DEF5014B1F8A260(G_B10_1, G_B10_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnEnable_mB6DD8190940503B99BC53E3CDA3DF9E4FB769781 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnEnable_mB6DD8190940503B99BC53E3CDA3DF9E4FB769781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// SnapGoalTo(GoalPosition, GoalRotation, GoalScale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D(__this, /*hidden argument*/NULL);
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_3, L_4, L_5);
	}

IL_002c:
	{
		// currentLifetime = 0;
		__this->set_currentLifetime_11((0.0f));
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_Start_mCB1F0A3A2CD41A1A8C366B2B6EC3D0A8DAD71C74 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_Start_mCB1F0A3A2CD41A1A8C366B2B6EC3D0A8DAD71C74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SolverHandler.RegisterSolver(this);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_RegisterSolver_m3C4B116418D15240948AD3029E55C158B42C6F94(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_OnDestroy_mC8B56BB544AD68883AC0DCFBF404B9AE488957D6 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_OnDestroy_mC8B56BB544AD68883AC0DCFBF404B9AE488957D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler != null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = __this->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// SolverHandler.UnregisterSolver(this);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = __this->get_SolverHandler_12();
		NullCheck(L_3);
		SolverHandler_UnregisterSolver_m68B32538166479A949860FF44E9C48FCC93BA7E4(L_3, __this, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdateEntry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SolverUpdateEntry_m294DF13A09EA78B0578D68B67C25F1854704EE78 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// currentLifetime += SolverHandler.DeltaTime;
		float L_0 = __this->get_currentLifetime_11();
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_1 = __this->get_SolverHandler_12();
		NullCheck(L_1);
		float L_2 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_1, /*hidden argument*/NULL);
		__this->set_currentLifetime_11(((float)il2cpp_codegen_add((float)L_0, (float)L_2)));
		// if (lifetime > 0 && currentLifetime >= lifetime)
		float L_3 = __this->get_lifetime_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		float L_4 = __this->get_currentLifetime_11();
		float L_5 = __this->get_lifetime_10();
		G_B3_0 = ((((int32_t)((!(((float)L_4) >= ((float)L_5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 0;
	}

IL_003a:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		goto IL_0057;
	}

IL_0049:
	{
		// SolverUpdate();
		VirtActionInvoker0::Invoke(8 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SolverUpdate() */, __this);
		// UpdateWorkingToGoal();
		Solver_UpdateWorkingToGoal_m463CEE7BB0F52EACA053C8903FDA988D08DAC3D0(__this, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_mB1B9FE0E54314807C40AB36FE117BEFB3FDF1B3B (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation, scale);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(10 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3) */, __this, L_0, L_1, L_2);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position0;
		Solver_set_WorkingPosition_m43EFDACF0AB9A9C9297D54C83F1CDF633129998A(__this, L_3, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation1;
		Solver_set_WorkingRotation_m1EBC1ECA64CC63F3DA275634F0634745A4524CDF(__this, L_4, /*hidden argument*/NULL);
		// WorkingScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = ___scale2;
		Solver_set_WorkingScale_m0DE8458CBC9428CCDD0599D9394EACB341D2B609(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m08FD1D604CCFE1E4C88928FA0B3DAF4C9BE7BF6A (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_1, /*hidden argument*/NULL);
		// GoalScale = scale;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		Solver_set_GoalScale_m967B4B5EE036C0A9DDC5E3DF2DEF5014B1F8A260(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapTo_m605E0B5F0721A977699A2C5237098442FBCA672D (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// SnapGoalTo(position, rotation);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		VirtActionInvoker2< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  >::Invoke(12 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion) */, __this, L_0, L_1);
		// WorkingPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___position0;
		Solver_set_WorkingPosition_m43EFDACF0AB9A9C9297D54C83F1CDF633129998A(__this, L_2, /*hidden argument*/NULL);
		// WorkingRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___rotation1;
		Solver_set_WorkingRotation_m1EBC1ECA64CC63F3DA275634F0634745A4524CDF(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SnapGoalTo(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_SnapGoalTo_m00B47E021E870B6C75AD35C32399CEBD17A6906B (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, const RuntimeMethod* method)
{
	{
		// GoalPosition = position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = rotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_AddOffset_m57C6EF7C8D03C35D35AD38BE936F3AF3295B0E44 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_AddOffset_m57C6EF7C8D03C35D35AD38BE936F3AF3295B0E44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GoalPosition += offset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___offset0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_0, L_1, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Vector3.Lerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___source0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::SmoothTo(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Solver_SmoothTo_m44001F16B93ACE262FFA7D9A4546C0FB40314F90 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___source0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___goal1, float ___deltaTime2, float ___lerpTime3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Solver_SmoothTo_m44001F16B93ACE262FFA7D9A4546C0FB40314F90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// return Quaternion.Slerp(source, goal, lerpTime.Equals(0.0f) ? 1f : deltaTime / lerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___source0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___goal1;
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&___lerpTime3), (0.0f), /*hidden argument*/NULL);
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0016;
		}
	}
	{
		float L_3 = ___deltaTime2;
		float L_4 = ___lerpTime3;
		G_B3_0 = ((float)((float)L_3/(float)L_4));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = V_0;
		return L_6;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateTransformToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateTransformToGoal_mC34CC99615432EAB702B177BA35BCF1222B316F2 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (smoothing)
		bool L_0 = __this->get_smoothing_9();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00b7;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Quaternion rot = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// Vector3 scale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// pos = SmoothTo(pos, GoalPosition, SolverHandler.DeltaTime, moveLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_10 = __this->get_SolverHandler_12();
		NullCheck(L_10);
		float L_11 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_10, /*hidden argument*/NULL);
		float L_12 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52(L_8, L_9, L_11, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// rot = SmoothTo(rot, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_16 = __this->get_SolverHandler_12();
		NullCheck(L_16);
		float L_17 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Solver_SmoothTo_m44001F16B93ACE262FFA7D9A4546C0FB40314F90(L_14, L_15, L_17, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// scale = SmoothTo(scale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_22 = __this->get_SolverHandler_12();
		NullCheck(L_22);
		float L_23 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52(L_20, L_21, L_23, L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// transform.position = pos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		NullCheck(L_26);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_26, L_27, /*hidden argument*/NULL);
		// transform.rotation = rot;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = V_2;
		NullCheck(L_28);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_28, L_29, /*hidden argument*/NULL);
		// transform.localScale = scale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
		NullCheck(L_30);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_30, L_31, /*hidden argument*/NULL);
		goto IL_00ef;
	}

IL_00b7:
	{
		// transform.position = GoalPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_32, L_33, /*hidden argument*/NULL);
		// transform.rotation = GoalRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_35 = Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_34, L_35, /*hidden argument*/NULL);
		// transform.localScale = GoalScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_36 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_36, L_37, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingToGoal_m463CEE7BB0F52EACA053C8903FDA988D08DAC3D0 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// UpdateWorkingPositionToGoal();
		Solver_UpdateWorkingPositionToGoal_mBD57A2E546113CFB97CCD9928CF0E0F9416B6772(__this, /*hidden argument*/NULL);
		// UpdateWorkingRotationToGoal();
		Solver_UpdateWorkingRotationToGoal_mABDC8511B1FCF1E7A99CDBDEC632834501EF2A59(__this, /*hidden argument*/NULL);
		// UpdateWorkingScaleToGoal();
		Solver_UpdateWorkingScaleToGoal_m0F23CC04992A6D243FA2411E357EA5FDEBF311A6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingPositionToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingPositionToGoal_mBD57A2E546113CFB97CCD9928CF0E0F9416B6772 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B2_0 = NULL;
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B3_1 = NULL;
	{
		// WorkingPosition = smoothing ? SmoothTo(WorkingPosition, GoalPosition, SolverHandler.DeltaTime, moveLerpTime) : GoalPosition;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingPosition_mA4C856CF849A5163446B8BCA56DAE60AECA47E87(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalPosition_m15F23976C205106EA6F9395C4609DD509A270A6A(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_moveLerpTime_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingPosition_m43EFDACF0AB9A9C9297D54C83F1CDF633129998A(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingRotationToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingRotationToGoal_mABDC8511B1FCF1E7A99CDBDEC632834501EF2A59 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B2_0 = NULL;
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B3_1 = NULL;
	{
		// WorkingRotation = smoothing ? SmoothTo(WorkingRotation, GoalRotation, SolverHandler.DeltaTime, rotateLerpTime) : GoalRotation;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Solver_get_WorkingRotation_m807EFEA3D2AEC22B7D45A10616CA8F15EFA0FA01(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Solver_get_GoalRotation_mD8723514D743BBD1DBA77457914E2CE04ACF8FD4(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_rotateLerpTime_6();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_7 = Solver_SmoothTo_m44001F16B93ACE262FFA7D9A4546C0FB40314F90(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingRotation_m1EBC1ECA64CC63F3DA275634F0634745A4524CDF(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::UpdateWorkingScaleToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver_UpdateWorkingScaleToGoal_m0F23CC04992A6D243FA2411E357EA5FDEBF311A6 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B2_0 = NULL;
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B1_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * G_B3_1 = NULL;
	{
		// WorkingScale = smoothing ? SmoothTo(WorkingScale, GoalScale, SolverHandler.DeltaTime, scaleLerpTime) : GoalScale;
		bool L_0 = __this->get_smoothing_9();
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D(__this, /*hidden argument*/NULL);
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0012:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Solver_get_WorkingScale_m85D8E92EE465041A2C3DDECF159C698D6E3391C3(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Solver_get_GoalScale_m9E7764637C8CABFCF10591E3054B3287B0BFEA4D(__this, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = __this->get_SolverHandler_12();
		NullCheck(L_4);
		float L_5 = SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_scaleLerpTime_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Solver_SmoothTo_m6D0CB19DCA115049D6BB65DAD93CD67464E0CC52(L_2, L_3, L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		NullCheck(G_B3_1);
		Solver_set_WorkingScale_m0DE8458CBC9428CCDD0599D9394EACB341D2B609(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077 (Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * __this, const RuntimeMethod* method)
{
	{
		// private bool updateLinkedTransform = false;
		__this->set_updateLinkedTransform_4((bool)0);
		// private float moveLerpTime = 0.1f;
		__this->set_moveLerpTime_5((0.1f));
		// private float rotateLerpTime = 0.1f;
		__this->set_rotateLerpTime_6((0.1f));
		// private float scaleLerpTime = 0;
		__this->set_scaleLerpTime_7((0.0f));
		// private bool maintainScaleOnInitialization = true;
		__this->set_maintainScaleOnInitialization_8((bool)1);
		// private bool smoothing = true;
		__this->set_smoothing_9((bool)1);
		// private float lifetime = 0;
		__this->set_lifetime_10((0.0f));
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedTargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedTargetType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedTargetType_m2B0538978A5CA3EF325964763952A6CB670824B5 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackedTargetType != value && IsValidTrackedObjectType(value))
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidTrackedObjectType_m25C16FDECF2AD2868BFEFADF8A314CC04BA0CD92(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_5 = ___value0;
		__this->set_trackedTargetType_4(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m30696C1A80D3D9E0049E582206E8D3182CD6F465 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandness;
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandness_m4A2495EB8D941CBD45E432AB654C0A92691CAA22 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (trackedHandness != value && IsValidHandedness(value))
		uint8_t L_0 = __this->get_trackedHandness_5();
		uint8_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = SolverHandler_IsValidHandedness_mECBAA763A22CEFBD5CB4D4C00A9B621DD729142E(L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 0;
	}

IL_0013:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// trackedHandness = value;
		uint8_t L_5 = ___value0;
		__this->set_trackedHandness_5(L_5);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedHandJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m33F371A69CE6F16B0D7F5974B0D235070D782275 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedHandJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedHandJoint_m270B0F6A996D3CD4D5B152F27513069F7EF37858 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (trackedHandJoint != value)
		int32_t L_0 = __this->get_trackedHandJoint_6();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// trackedHandJoint = value;
		int32_t L_3 = ___value0;
		__this->set_trackedHandJoint_6(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TransformOverride(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TransformOverride_m47DA98C80E1563ADFF3661A54F225EA20074BD95 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_TransformOverride_m47DA98C80E1563ADFF3661A54F225EA20074BD95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (value != null && transformOverride != value)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_transformOverride_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002d;
		}
	}
	{
		// transformOverride = value;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___value0;
		__this->set_transformOverride_7(L_6);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m378E41C77B4CE61361DCD48F6A7995911038D895 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalOffset_m528D684769DD82E5D957A541A76ED51A12606B58 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalOffset_m528D684769DD82E5D957A541A76ED51A12606B58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (additionalOffset != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// additionalOffset = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalOffset_8(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AdditionalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mE0B39302AE8851CD573EADCE0E1CE2023046FACE (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AdditionalRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AdditionalRotation_m5278A1C1E7C734120C1BAC528ADB4048B0EB9008 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_AdditionalRotation_m5278A1C1E7C734120C1BAC528ADB4048B0EB9008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (additionalRotation != value)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// additionalRotation = value;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___value0;
		__this->set_additionalRotation_9(L_4);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_UpdateSolvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mAF78F2915FBE4DA8E23A6ED6093335AC64AD6CDA (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_UpdateSolvers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
// System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_Solvers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_Solvers_mA7501548CF08C0DC572659DC0C48CA117B1C6242 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_Solvers_mA7501548CF08C0DC572659DC0C48CA117B1C6242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => solvers.AsReadOnly();
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_0 = __this->get_solvers_11();
		NullCheck(L_0);
		ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525 * L_1 = List_1_AsReadOnly_mD0C00451CFB952F363D49587A3436D017A0658B5(L_0, /*hidden argument*/List_1_AsReadOnly_mD0C00451CFB952F363D49587A3436D017A0658B5_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_Solvers(System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_Solvers_m9514DEB62A0BD1895DDDA839B10E3A0150B6271E (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_set_Solvers_m9514DEB62A0BD1895DDDA839B10E3A0150B6271E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (value != null)
		RuntimeObject* L_0 = ___value0;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// solvers.Clear();
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_2 = __this->get_solvers_11();
		NullCheck(L_2);
		List_1_Clear_m2A165951652FCC06814639B891FC8838266A9F08(L_2, /*hidden argument*/List_1_Clear_m2A165951652FCC06814639B891FC8838266A9F08_RuntimeMethod_var);
		// solvers.AddRange(value);
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = ___value0;
		NullCheck(L_3);
		List_1_AddRange_m2FEB6842262E25D4CBBAE48F1840A8264B1FEABC(L_3, L_4, /*hidden argument*/List_1_AddRange_m2FEB6842262E25D4CBBAE48F1840A8264B1FEABC_RuntimeMethod_var);
	}

IL_0024:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mCAA9D07CC0BFCB2AE54D3285FDA0656683D1E503 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m7CC782A2B148CAE1827CD01062D55411C5048DF8 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m0085195A750DBA6588E9BD695E8DAF659105A80D (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_GoalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m7E3D68D6DD90E2E869AF83C0512A0D86494AA257 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_GoalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m4B34D8D3E280C1950F170650AF964E021990E36D (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_AltScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  SolverHandler_get_AltScale_m96F1E6C1935F3F8284AFC7483A845789F5A79592 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_AltScale(Microsoft.MixedReality.Toolkit.Utilities.Vector3Smoothed)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m5695B8D843BCB16EA49F5CFAAFC837FB86EF063E (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_DeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_DeltaTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m62DA25E1A388E7BF681CF610FE3B3A6CC922E9E4 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TransformTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_1 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m37DD4B94E581FD9FE47D8A027162EBAC2E713442(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// return trackingTarget != null ? trackingTarget.transform : null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		G_B5_0 = ((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)(NULL));
		goto IL_0030;
	}

IL_0025:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_trackingTarget_20();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		G_B5_0 = L_5;
	}

IL_0030:
	{
		V_1 = G_B5_0;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_1;
		return L_6;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_CurrentTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_CurrentTrackedHandedness_mF37F2FB49710D5BCD057898A7DAC1EC4A3861C86 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness CurrentTrackedHandedness => currentTrackedHandedness;
		uint8_t L_0 = __this->get_currentTrackedHandedness_18();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_PreferredTrackedHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_PreferredTrackedHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_PreferredTrackedHandedness_m9C2B82E943B241791AAEEAD665C2ED764A8865FA (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((value.IsLeft() || value.IsRight())
		//     && preferredTrackedHandedness != value)
		uint8_t L_0 = ___value0;
		bool L_1 = HandednessExtensions_IsLeft_mEE9668500F66DF4D6F459525612649216F39739B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = ___value0;
		bool L_3 = HandednessExtensions_IsRight_mA6D17C95F12FC041F6A8A8A943CD74A904EF3334(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_0011:
	{
		uint8_t L_4 = __this->get_preferredTrackedHandedness_19();
		uint8_t L_5 = ___value0;
		G_B4_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B4_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B4_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// preferredTrackedHandedness = value;
		uint8_t L_7 = ___value0;
		__this->set_preferredTrackedHandedness_19(L_7);
	}

IL_002d:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? (handJointService = CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>());
		RuntimeObject* L_0 = __this->get_handJointService_23();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_mCD2D3703A678EBAFD1A2514798F8CE126EDDDEAD(/*hidden argument*/CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_mCD2D3703A678EBAFD1A2514798F8CE126EDDDEAD_RuntimeMethod_var);
		RuntimeObject* L_3 = L_2;
		V_0 = L_3;
		__this->set_handJointService_23(L_3);
		RuntimeObject* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Awake_m6DDAB07F75C14E121459755FD391852CADBDF0F8 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_Awake_m6DDAB07F75C14E121459755FD391852CADBDF0F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// GoalScale = Vector3.one;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		SolverHandler_set_GoalScale_m4B34D8D3E280C1950F170650AF964E021990E36D_inline(__this, L_0, /*hidden argument*/NULL);
		// AltScale = new Vector3Smoothed(Vector3.one, 0.1f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3Smoothed__ctor_m52381A2A7FDBD27EE9C9CB8424156808302274AF((&L_2), L_1, (0.1f), /*hidden argument*/NULL);
		SolverHandler_set_AltScale_m5695B8D843BCB16EA49F5CFAAFC837FB86EF063E_inline(__this, L_2, /*hidden argument*/NULL);
		// DeltaTime = Time.deltaTime;
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		SolverHandler_set_DeltaTime_m62DA25E1A388E7BF681CF610FE3B3A6CC922E9E4_inline(__this, L_3, /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		// if (!IsValidHandedness(trackedHandness))
		uint8_t L_5 = __this->get_trackedHandness_5();
		bool L_6 = SolverHandler_IsValidHandedness_mECBAA763A22CEFBD5CB4D4C00A9B621DD729142E(L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// Debug.LogError("Using invalid SolverHandler.TrackedHandness value. Defaulting to Handedness.Both");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9586A1C5F0FF1B8004E10FC372266DBFEA002EFE, /*hidden argument*/NULL);
		// TrackedHandness = Handedness.Both;
		SolverHandler_set_TrackedHandness_m4A2495EB8D941CBD45E432AB654C0A92691CAA22(__this, 3, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// if (!IsValidTrackedObjectType(trackedTargetType))
		int32_t L_8 = __this->get_trackedTargetType_4();
		bool L_9 = SolverHandler_IsValidTrackedObjectType_m25C16FDECF2AD2868BFEFADF8A314CC04BA0CD92(L_8, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		// Debug.LogError("Using Obsolete SolverHandler.TrackedTargetType. Defaulting to type Head");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralA5380AB232AE7FA9C64011F243B4FD1A1E094DB7, /*hidden argument*/NULL);
		// TrackedTargetType = TrackedObjectType.Head;
		SolverHandler_set_TrackedTargetType_m2B0538978A5CA3EF325964763952A6CB670824B5(__this, 0, /*hidden argument*/NULL);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Start_m7506A221821342ACA1443CFD7C7951AE69AEF2D9 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_Update_mAAB20756873F01377DA42D6EA44458CB22FF3872 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (IsInvalidTracking())
		bool L_0 = SolverHandler_IsInvalidTracking_m37DD4B94E581FD9FE47D8A027162EBAC2E713442(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// DeltaTime = Time.realtimeSinceStartup - lastUpdateTime;
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_lastUpdateTime_22();
		SolverHandler_set_DeltaTime_m62DA25E1A388E7BF681CF610FE3B3A6CC922E9E4_inline(__this, ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		// lastUpdateTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_lastUpdateTime_22(L_4);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_LateUpdate_m12579A78DD81D0069793159B468AF12715707B3A (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_LateUpdate_m12579A78DD81D0069793159B468AF12715707B3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// if (updateSolversList)
		bool L_0 = __this->get_updateSolversList_12();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// IEnumerable<Solver> inspectorOrderedSolvers = GetComponents<Solver>().Intersect(solvers);
		SolverU5BU5D_t33E2B105D134EA956C96956C5CF2296025A34BEC* L_2 = Component_GetComponents_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m9DD6502110C019F389D0C86476463981E511F822(__this, /*hidden argument*/Component_GetComponents_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m9DD6502110C019F389D0C86476463981E511F822_RuntimeMethod_var);
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_3 = __this->get_solvers_11();
		RuntimeObject* L_4 = Enumerable_Intersect_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_mCF21AD9C7C2FE01C274CB1370BA7396F45A6B044((RuntimeObject*)(RuntimeObject*)L_2, L_3, /*hidden argument*/Enumerable_Intersect_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_mCF21AD9C7C2FE01C274CB1370BA7396F45A6B044_RuntimeMethod_var);
		V_1 = L_4;
		// Solvers = inspectorOrderedSolvers.Union(Solvers).ToReadOnlyCollection();
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = SolverHandler_get_Solvers_mA7501548CF08C0DC572659DC0C48CA117B1C6242(__this, /*hidden argument*/NULL);
		RuntimeObject* L_7 = Enumerable_Union_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m3E18C38802A2B0E1B9A84AD00662CB6EABCBD6B5(L_5, L_6, /*hidden argument*/Enumerable_Union_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m3E18C38802A2B0E1B9A84AD00662CB6EABCBD6B5_RuntimeMethod_var);
		ReadOnlyCollection_1_tCC251EF8EA7E1CDBFA88D6414C0186C150898525 * L_8 = CollectionsExtensions_ToReadOnlyCollection_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m309E75CDB2DA1A8D4F50612AB0BE2E001189B514(L_7, /*hidden argument*/CollectionsExtensions_ToReadOnlyCollection_TisSolver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF_m309E75CDB2DA1A8D4F50612AB0BE2E001189B514_RuntimeMethod_var);
		SolverHandler_set_Solvers_m9514DEB62A0BD1895DDDA839B10E3A0150B6271E(__this, L_8, /*hidden argument*/NULL);
		// updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
	}

IL_003e:
	{
		// if (UpdateSolvers)
		bool L_9 = SolverHandler_get_UpdateSolvers_mAF78F2915FBE4DA8E23A6ED6093335AC64AD6CDA_inline(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_00d3;
		}
	}
	{
		// GoalPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_set_GoalPosition_mCAA9D07CC0BFCB2AE54D3285FDA0656683D1E503_inline(__this, L_12, /*hidden argument*/NULL);
		// GoalRotation = transform.rotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_13, /*hidden argument*/NULL);
		SolverHandler_set_GoalRotation_m0085195A750DBA6588E9BD695E8DAF659105A80D_inline(__this, L_14, /*hidden argument*/NULL);
		// GoalScale = transform.localScale;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_15, /*hidden argument*/NULL);
		SolverHandler_set_GoalScale_m4B34D8D3E280C1950F170650AF964E021990E36D_inline(__this, L_16, /*hidden argument*/NULL);
		// for (int i = 0; i < solvers.Count; ++i)
		V_3 = 0;
		goto IL_00be;
	}

IL_0086:
	{
		// Solver solver = solvers[i];
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_17 = __this->get_solvers_11();
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_19 = List_1_get_Item_mD36DB698E3AD46A37D1ABADB693108DC5CCF6BA7_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mD36DB698E3AD46A37D1ABADB693108DC5CCF6BA7_RuntimeMethod_var);
		V_4 = L_19;
		// if (solver != null && solver.enabled)
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00a8;
		}
	}
	{
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_22 = V_4;
		NullCheck(L_22);
		bool L_23 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(L_22, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_23));
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B7_0 = 0;
	}

IL_00a9:
	{
		V_5 = (bool)G_B7_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00b9;
		}
	}
	{
		// solver.SolverUpdateEntry();
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_25 = V_4;
		NullCheck(L_25);
		Solver_SolverUpdateEntry_m294DF13A09EA78B0578D68B67C25F1854704EE78(L_25, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00be:
	{
		// for (int i = 0; i < solvers.Count; ++i)
		int32_t L_27 = V_3;
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_28 = __this->get_solvers_11();
		NullCheck(L_28);
		int32_t L_29 = List_1_get_Count_m1F0092E76A507C944CEB3B67F71943125E085CD6_inline(L_28, /*hidden argument*/List_1_get_Count_m1F0092E76A507C944CEB3B67F71943125E085CD6_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_6;
		if (L_30)
		{
			goto IL_0086;
		}
	}
	{
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_OnDestroy_mE83C7BE9B085077248ECF9C12023FCAE6898A339 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_OnDestroy_mE83C7BE9B085077248ECF9C12023FCAE6898A339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(trackingTarget);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RefreshTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// DetachFromCurrentTrackedObject();
		VirtActionInvoker0::Invoke(6 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject() */, __this);
		// AttachToNewTrackedObject();
		VirtActionInvoker0::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject() */, __this);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::RegisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_RegisterSolver_m3C4B116418D15240948AD3029E55C158B42C6F94 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_RegisterSolver_m3C4B116418D15240948AD3029E55C158B42C6F94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!solvers.Contains(solver))
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_0 = __this->get_solvers_11();
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_1 = ___solver0;
		NullCheck(L_0);
		bool L_2 = List_1_Contains_m682835B28BE5F66157663280FF94749AF30C56DD(L_0, L_1, /*hidden argument*/List_1_Contains_m682835B28BE5F66157663280FF94749AF30C56DD_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// solvers.Add(solver);
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_4 = __this->get_solvers_11();
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_5 = ___solver0;
		NullCheck(L_4);
		List_1_Add_mBFDBBE482FD4D2AF4EE3CFC074DAAE67A92056DF(L_4, L_5, /*hidden argument*/List_1_Add_mBFDBBE482FD4D2AF4EE3CFC074DAAE67A92056DF_RuntimeMethod_var);
		// updateSolversList = true;
		__this->set_updateSolversList_12((bool)1);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::UnregisterSolver(Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_UnregisterSolver_m68B32538166479A949860FF44E9C48FCC93BA7E4 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * ___solver0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_UnregisterSolver_m68B32538166479A949860FF44E9C48FCC93BA7E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// solvers.Remove(solver);
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_0 = __this->get_solvers_11();
		Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF * L_1 = ___solver0;
		NullCheck(L_0);
		List_1_Remove_m22D50C60B17E77F037E2FD9D11B78939BDA6ACCA(L_0, L_1, /*hidden argument*/List_1_Remove_m22D50C60B17E77F037E2FD9D11B78939BDA6ACCA_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::DetachFromCurrentTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_DetachFromCurrentTrackedObject_m58C69606D58AEF85E36AE327E4D1DD44342DB7DF (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_DetachFromCurrentTrackedObject_m58C69606D58AEF85E36AE327E4D1DD44342DB7DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (trackingTarget != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// trackingTarget.transform.parent = null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_trackingTarget_20();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_4, (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::AttachToNewTrackedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_AttachToNewTrackedObject_m6E2D857093F469D170B6FC45CE1ED0E71393D95D (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_AttachToNewTrackedObject_m6E2D857093F469D170B6FC45CE1ED0E71393D95D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// controllerRay = null;
		__this->set_controllerRay_21((LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E *)NULL);
		// Transform target = null;
		V_0 = (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)NULL;
		// if (TrackedTargetType == TrackedObjectType.Head)
		int32_t L_0 = SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// target = CameraCache.Main.transform;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = CameraCache_get_Main_m57DF2992833EF269022FA9477A7348EB603194C5(/*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_01cd;
	}

IL_0030:
	{
		// else if (TrackedTargetType == TrackedObjectType.ControllerRay)
		int32_t L_4 = SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline(__this, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)5))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00f5;
		}
	}
	{
		// if (TrackedHandness == Handedness.Both)
		uint8_t L_6 = SolverHandler_get_TrackedHandness_m30696C1A80D3D9E0049E582206E8D3182CD6F465_inline(__this, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)3))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00a5;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_8 = SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_8);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_9 = __this->get_currentTrackedHandedness_18();
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_10 = PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E(L_9, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_10);
		// if (controllerRay == null)
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_11 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		// currentTrackedHandedness = currentTrackedHandedness.GetOppositeHandedness();
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		uint8_t L_15 = HandednessExtensions_GetOppositeHandedness_m85C616428490107B18881BCF9FC225956EB3E931(L_14, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_15);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_16 = __this->get_currentTrackedHandedness_18();
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_17 = PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E(L_16, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_17);
	}

IL_00a2:
	{
		goto IL_00c4;
	}

IL_00a5:
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_18 = SolverHandler_get_TrackedHandness_m30696C1A80D3D9E0049E582206E8D3182CD6F465_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_18);
		// controllerRay = PointerUtils.GetPointer<LinePointer>(currentTrackedHandedness);
		uint8_t L_19 = __this->get_currentTrackedHandedness_18();
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_20 = PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E(L_19, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E_RuntimeMethod_var);
		__this->set_controllerRay_21(L_20);
	}

IL_00c4:
	{
		// if (controllerRay != null)
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_21 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00e6;
		}
	}
	{
		// target = controllerRay.transform;
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_24 = __this->get_controllerRay_21();
		NullCheck(L_24);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00ef;
	}

IL_00e6:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_00ef:
	{
		goto IL_01cd;
	}

IL_00f5:
	{
		// else if (TrackedTargetType == TrackedObjectType.HandJoint)
		int32_t L_26 = SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline(__this, /*hidden argument*/NULL);
		V_6 = (bool)((((int32_t)L_26) == ((int32_t)6))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_01b5;
		}
	}
	{
		// if (HandJointService != null)
		RuntimeObject* L_28 = SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A(__this, /*hidden argument*/NULL);
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_01b2;
		}
	}
	{
		// currentTrackedHandedness = TrackedHandness;
		uint8_t L_30 = SolverHandler_get_TrackedHandness_m30696C1A80D3D9E0049E582206E8D3182CD6F465_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_30);
		// if (currentTrackedHandedness == Handedness.Both)
		uint8_t L_31 = __this->get_currentTrackedHandedness_18();
		V_8 = (bool)((((int32_t)L_31) == ((int32_t)3))? 1 : 0);
		bool L_32 = V_8;
		if (!L_32)
		{
			goto IL_0199;
		}
	}
	{
		// if (HandJointService.IsHandTracked(PreferredTrackedHandedness))
		RuntimeObject* L_33 = SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A(__this, /*hidden argument*/NULL);
		uint8_t L_34 = SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_35 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_il2cpp_TypeInfo_var, L_33, L_34);
		V_9 = L_35;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_015e;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness;
		uint8_t L_37 = SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline(__this, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_37);
		goto IL_0198;
	}

IL_015e:
	{
		// else if (HandJointService.IsHandTracked(PreferredTrackedHandedness.GetOppositeHandedness()))
		RuntimeObject* L_38 = SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A(__this, /*hidden argument*/NULL);
		uint8_t L_39 = SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline(__this, /*hidden argument*/NULL);
		uint8_t L_40 = HandednessExtensions_GetOppositeHandedness_m85C616428490107B18881BCF9FC225956EB3E931(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		bool L_41 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_il2cpp_TypeInfo_var, L_38, L_40);
		V_10 = L_41;
		bool L_42 = V_10;
		if (!L_42)
		{
			goto IL_018f;
		}
	}
	{
		// currentTrackedHandedness = PreferredTrackedHandedness.GetOppositeHandedness();
		uint8_t L_43 = SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline(__this, /*hidden argument*/NULL);
		uint8_t L_44 = HandednessExtensions_GetOppositeHandedness_m85C616428490107B18881BCF9FC225956EB3E931(L_43, /*hidden argument*/NULL);
		__this->set_currentTrackedHandedness_18(L_44);
		goto IL_0198;
	}

IL_018f:
	{
		// currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
	}

IL_0198:
	{
	}

IL_0199:
	{
		// target = HandJointService.RequestJointTransform(this.TrackedHandJoint, currentTrackedHandedness);
		RuntimeObject* L_45 = SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A(__this, /*hidden argument*/NULL);
		int32_t L_46 = SolverHandler_get_TrackedHandJoint_m33F371A69CE6F16B0D7F5974B0D235070D782275_inline(__this, /*hidden argument*/NULL);
		uint8_t L_47 = __this->get_currentTrackedHandedness_18();
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_il2cpp_TypeInfo_var, L_45, L_46, L_47);
		V_0 = L_48;
	}

IL_01b2:
	{
		goto IL_01cd;
	}

IL_01b5:
	{
		// else if (TrackedTargetType == TrackedObjectType.CustomOverride)
		int32_t L_49 = SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline(__this, /*hidden argument*/NULL);
		V_11 = (bool)((((int32_t)L_49) == ((int32_t)7))? 1 : 0);
		bool L_50 = V_11;
		if (!L_50)
		{
			goto IL_01cd;
		}
	}
	{
		// target = this.transformOverride;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_51 = __this->get_transformOverride_7();
		V_0 = L_51;
	}

IL_01cd:
	{
		// TrackTransform(target);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = V_0;
		SolverHandler_TrackTransform_m50749290308A0EE7A3A5E93DEFEF9FF85EE49B26(__this, L_52, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::TrackTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_TrackTransform_m50749290308A0EE7A3A5E93DEFEF9FF85EE49B26 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_TrackTransform_m50749290308A0EE7A3A5E93DEFEF9FF85EE49B26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (trackingTarget == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// trackingTarget = new GameObject(TrackingTargetName);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_3, _stringLiteral6EF0514AA4017533AA16ED833590C7207CDFAE67, /*hidden argument*/NULL);
		__this->set_trackingTarget_20(L_3);
		// trackingTarget.hideFlags = HideFlags.HideInHierarchy;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_trackingTarget_20();
		NullCheck(L_4);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_4, 1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if (target != null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0097;
		}
	}
	{
		// trackingTarget.transform.parent = target;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_trackingTarget_20();
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ___target0;
		NullCheck(L_9);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_9, L_10, /*hidden argument*/NULL);
		// trackingTarget.transform.localPosition = Vector3.Scale(AdditionalOffset, trackingTarget.transform.localScale);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_trackingTarget_20();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_11, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = SolverHandler_get_AdditionalOffset_m378E41C77B4CE61361DCD48F6A7995911038D895_inline(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_trackingTarget_20();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_12, L_17, /*hidden argument*/NULL);
		// trackingTarget.transform.localRotation = Quaternion.Euler(AdditionalRotation);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_trackingTarget_20();
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = SolverHandler_get_AdditionalRotation_mE0B39302AE8851CD573EADCE0E1CE2023046FACE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_21 = Quaternion_Euler_m55C96FCD397CC69109261572710608D12A4CBD2B(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_19, L_21, /*hidden argument*/NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.LinePointer Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::GetControllerRay(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * SolverHandler_GetControllerRay_m7281DA096D3758AD3875AB744CF0EEDC51F646C0 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_GetControllerRay_m7281DA096D3758AD3875AB744CF0EEDC51F646C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * V_0 = NULL;
	{
		// return PointerUtils.GetPointer<LinePointer>(handedness);
		uint8_t L_0 = ___handedness0;
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_1 = PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E(L_0, /*hidden argument*/PointerUtils_GetPointer_TisLinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E_m5ADF7CDA25A449E6047901DA2C46E668792FE77E_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsInvalidTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsInvalidTracking_m37DD4B94E581FD9FE47D8A027162EBAC2E713442 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler_IsInvalidTracking_m37DD4B94E581FD9FE47D8A027162EBAC2E713442_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	{
		// if (trackingTarget == null || trackingTarget.transform.parent == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_trackingTarget_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_trackingTarget_20();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 1;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00d3;
	}

IL_0034:
	{
		// if (TrackedTargetType == TrackedObjectType.ControllerRay &&
		//     (controllerRay == null || !controllerRay.IsTracked))
		int32_t L_7 = SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_005e;
		}
	}
	{
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_8 = __this->get_controllerRay_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		LinePointer_t8194B0D41933168EAD43CAA8F4D27FBA2C36C60E * L_10 = __this->get_controllerRay_21();
		NullCheck(L_10);
		bool L_11 = ControllerPoseSynchronizer_get_IsTracked_mDA8B5159E3A6C3718E3E42A86031E69759ED4CD3(L_10, /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_005c;
	}

IL_005b:
	{
		G_B9_0 = 1;
	}

IL_005c:
	{
		G_B11_0 = G_B9_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
	}

IL_005f:
	{
		V_2 = (bool)G_B11_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_00d3;
	}

IL_0068:
	{
		// if (TrackedTargetType == TrackedObjectType.HandJoint && !currentTrackedHandedness.IsNone())
		int32_t L_13 = SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)6))))
		{
			goto IL_0081;
		}
	}
	{
		uint8_t L_14 = __this->get_currentTrackedHandedness_18();
		bool L_15 = HandednessExtensions_IsNone_mB2FF98CFB70616D90BC88FF9E4E27C61F00F5CB3(L_14, /*hidden argument*/NULL);
		G_B16_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0082;
	}

IL_0081:
	{
		G_B16_0 = 0;
	}

IL_0082:
	{
		V_3 = (bool)G_B16_0;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_00cf;
		}
	}
	{
		// bool trackingLeft = HandJointService.IsHandTracked(Handedness.Left);
		RuntimeObject* L_17 = SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		bool L_18 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_il2cpp_TypeInfo_var, L_17, 1);
		V_4 = L_18;
		// bool trackingRight = HandJointService.IsHandTracked(Handedness.Right);
		RuntimeObject* L_19 = SolverHandler_get_HandJointService_m59A93B1A8B6D7998E01310FBDF1B94556C25093A(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_20 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tBDCA6CAE1C58D8AF7999B28735C8CF1BBDDA4A4A_il2cpp_TypeInfo_var, L_19, 2);
		V_5 = L_20;
		// return (currentTrackedHandedness.IsLeft() && !trackingLeft) ||
		//        (currentTrackedHandedness.IsRight() && !trackingRight);
		uint8_t L_21 = __this->get_currentTrackedHandedness_18();
		bool L_22 = HandednessExtensions_IsLeft_mEE9668500F66DF4D6F459525612649216F39739B(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00cb;
		}
	}

IL_00b4:
	{
		uint8_t L_24 = __this->get_currentTrackedHandedness_18();
		bool L_25 = HandednessExtensions_IsRight_mA6D17C95F12FC041F6A8A8A943CD74A904EF3334(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00c8;
		}
	}
	{
		bool L_26 = V_5;
		G_B22_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B22_0 = 0;
	}

IL_00c9:
	{
		G_B24_0 = G_B22_0;
		goto IL_00cc;
	}

IL_00cb:
	{
		G_B24_0 = 1;
	}

IL_00cc:
	{
		V_1 = (bool)G_B24_0;
		goto IL_00d3;
	}

IL_00cf:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_00d3;
	}

IL_00d3:
	{
		// }
		bool L_27 = V_1;
		return L_27;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidHandedness(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidHandedness_mECBAA763A22CEFBD5CB4D4C00A9B621DD729142E (uint8_t ___hand0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return hand <= Handedness.Both;
		uint8_t L_0 = ___hand0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::IsValidTrackedObjectType(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SolverHandler_IsValidTrackedObjectType_m25C16FDECF2AD2868BFEFADF8A314CC04BA0CD92 (int32_t ___type0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return type == TrackedObjectType.Head || type >= TrackedObjectType.ControllerRay;
		int32_t L_0 = ___type0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___type0;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 1;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::get_TrackedObjectToReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedObjectToReference_m9ECC564EFD34E977F25D2D739CB4EB93CAC787AF (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Utilities.TrackedObjectType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m413114C3880FC332C9F73A0583688F42FE5CA02B (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (trackedTargetType != value)
		int32_t L_0 = __this->get_trackedTargetType_4();
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// trackedTargetType = value;
		int32_t L_3 = ___value0;
		__this->set_trackedTargetType_4(L_3);
		// RefreshTrackedObject();
		SolverHandler_RefreshTrackedObject_m8783F21D6B7EFE63EC93ABBB3960AC71B93E0946(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SolverHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SolverHandler__ctor_m72F745CFE501CC5E150725E515030304F8D23681 (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SolverHandler__ctor_m72F745CFE501CC5E150725E515030304F8D23681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TrackedObjectType trackedTargetType = TrackedObjectType.Head;
		__this->set_trackedTargetType_4(0);
		// private Handedness trackedHandness = Handedness.Both;
		__this->set_trackedHandness_5(3);
		// private TrackedHandJoint trackedHandJoint = TrackedHandJoint.Palm;
		__this->set_trackedHandJoint_6(2);
		// private bool updateSolvers = true;
		__this->set_updateSolvers_10((bool)1);
		// protected readonly List<Solver> solvers = new List<Solver>();
		List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E * L_0 = (List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E *)il2cpp_codegen_object_new(List_1_t4A73C60105539E69F099007C49F2DD9DDBFFA09E_il2cpp_TypeInfo_var);
		List_1__ctor_m3702853AF510D376673D23469224159196DC8EB0(L_0, /*hidden argument*/List_1__ctor_m3702853AF510D376673D23469224159196DC8EB0_RuntimeMethod_var);
		__this->set_solvers_11(L_0);
		// private bool updateSolversList = false;
		__this->set_updateSolversList_12((bool)0);
		// protected Handedness currentTrackedHandedness = Handedness.None;
		__this->set_currentTrackedHandedness_18(0);
		// protected Handedness preferredTrackedHandedness = Handedness.Left;
		__this->set_preferredTrackedHandedness_19(1);
		// private IMixedRealityHandJointService handJointService = null;
		__this->set_handJointService_23((RuntimeObject*)NULL);
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
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* SurfaceMagnetism_get_MagneticSurfaces_m5920FA192C62BF5C9764AD3C13B518B3AD8A7A76 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MagneticSurfaces_m7F857182E8CF1792BB5839C1921753564D3B8E0C (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxRaycastDistance_m7C22E4BA547E293CBE0FA2D181CE2625BE554EB8 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxRaycastDistance_mADCF0584910B27C2C5DEF39AF7BD0DAFD431827E (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ClosestDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ClosestDistance_m37E57A2FF1F3C41A062745D426787EF1562B8729 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => closestDistance;
		float L_0 = __this->get_closestDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_ClosestDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_ClosestDistance_mDF04EBA5C925458AD75E0F347CFC83980770399D (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => closestDistance = value;
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceNormalOffset_m4E301ACA6850E80B3B6735A22646781DB4F2AE98 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceNormalOffset_mE11EF70F0C06E8B128FFBCDE8DC706AC44F596DA (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceNormalOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceNormalOffset_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SurfaceRayOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SurfaceRayOffset_m3981162BA2E7562E7EC3240FB5B75E62EDDDD7B2 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceRayOffset;
		float L_0 = __this->get_surfaceRayOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SurfaceRayOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SurfaceRayOffset_m2DCA9EB726AB3E91ECC9B9165950BB3F66E6B76B (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => surfaceRayOffset = value;
		float L_0 = ___value0;
		__this->set_surfaceRayOffset_17(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Physics.SceneQueryType Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mE798CCC55BE47DDDA62261A3B8837A350E479905 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_RaycastMode(Microsoft.MixedReality.Toolkit.Physics.SceneQueryType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_RaycastMode_mF5B6BE47CEDF41461AA99919C410242DC91AF40E (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => raycastMode = value;
		int32_t L_0 = ___value0;
		__this->set_raycastMode_18(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_BoxRaysPerEdge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_BoxRaysPerEdge_mD0CBC33A8144EBB6B705BB38018CCC0C6E7B5D37 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => boxRaysPerEdge;
		int32_t L_0 = __this->get_boxRaysPerEdge_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_BoxRaysPerEdge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_BoxRaysPerEdge_m2D24801153077E4ED9A2F7189EA66DB7FEF92832 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => boxRaysPerEdge = value;
		int32_t L_0 = ___value0;
		__this->set_boxRaysPerEdge_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrthographicBoxCast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OrthographicBoxCast_m2E903C0296797BB8677F635F05D7D5E51E431D5E (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => orthographicBoxCast;
		bool L_0 = __this->get_orthographicBoxCast_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrthographicBoxCast(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrthographicBoxCast_m878F8334EF994BE94DB95FF9BDC913F8CA80E20F (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => orthographicBoxCast = value;
		bool L_0 = ___value0;
		__this->set_orthographicBoxCast_20(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaximumNormalVariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaximumNormalVariance_m5EE335E259C99BA90FF89F359ACF98F9FD6483E9 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => maximumNormalVariance;
		float L_0 = __this->get_maximumNormalVariance_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaximumNormalVariance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaximumNormalVariance_m46C2023D7EC79DE08F8EBB330238EB7E66C1911D (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maximumNormalVariance = value;
		float L_0 = ___value0;
		__this->set_maximumNormalVariance_21(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_SphereSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_SphereSize_m2DF4905175D3DB44B761FDDA5A8F613C4DDDBAF1 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => sphereSize;
		float L_0 = __this->get_sphereSize_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_SphereSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_SphereSize_mAFD16016EC26276A90EA515ED1843820919B7318 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => sphereSize = value;
		float L_0 = ___value0;
		__this->set_sphereSize_22(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_VolumeCastSizeOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_VolumeCastSizeOverride_mD65A2E7B0285316E160E0C4C05C94310DF782C8B (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => volumeCastSizeOverride;
		float L_0 = __this->get_volumeCastSizeOverride_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_VolumeCastSizeOverride(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_VolumeCastSizeOverride_m0C68C4B9B33985C580149B66A49F37D38672C40D (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => volumeCastSizeOverride = value;
		float L_0 = ___value0;
		__this->set_volumeCastSizeOverride_23(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_UseLinkedAltScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_UseLinkedAltScaleOverride_m4F85F359B3B22163EA723D8AB12B1BF6A87D1646 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => useLinkedAltScaleOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_UseLinkedAltScaleOverride(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_UseLinkedAltScaleOverride_mD0500F227D2BBFB8C798D6252529991980E17CCE (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useLinkedAltScaleOverride = value;
		bool L_0 = ___value0;
		__this->set_useLinkedAltScaleOverride_24(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentRaycastDirectionMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m64059CBA457D2219997E4CF4E6DD8CCA111E5CEE (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentRaycastDirectionMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/RaycastDirectionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentRaycastDirectionMode_m467D63638614BFB63B9E3B7EA853BE302BDA5B49 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => currentRaycastDirectionMode = value;
		int32_t L_0 = ___value0;
		__this->set_currentRaycastDirectionMode_25(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CurrentOrientationMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m4E11FEAA068491A4074871B2F2C357F9F9050BC4 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CurrentOrientationMode(Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism/OrientationMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CurrentOrientationMode_mA645B22990C2DE62906A736C718BB9FA36357D5D (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationMode = value;
		int32_t L_0 = ___value0;
		__this->set_orientationMode_26(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OrientationBlend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_OrientationBlend_mE291845540C30407BA20652DF950494BD946CB43 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationBlend;
		float L_0 = __this->get_orientationBlend_27();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OrientationBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OrientationBlend_m41C4AA82669D6103FEBF0B2C2C2C9C84523BEEAB (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => orientationBlend = value;
		float L_0 = ___value0;
		__this->set_orientationBlend_27(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mAA5DED9E580EE50E705A4058D6966B67096287C4 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_KeepOrientationVertical_m2C38D08575BC754157276FEC70FA3867FE7E67E4 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_28(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m1B1D1DDDC60A941B0C70F52ECD95F85F5A66F6CE (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_DebugEnabled_mAF38DB411FE2CBBB92E03933F32CAFCE23CCB727 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_29(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_OnSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_OnSurface_mFB9622D8D8D4E2AFAC6180D9FA97FE497F51D7D5 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = __this->get_U3COnSurfaceU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_OnSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastOrigin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// private Vector3 RaycastOrigin => SolverHandler.TransformTarget == null ? Vector3.zero : SolverHandler.TransformTarget.position;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		G_B3_0 = L_5;
		goto IL_002a;
	}

IL_0025:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_002a:
	{
		return G_B3_0;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastEndPoint_mE3A641FE9A6DCB50F540117D4F6CD9A64C15D61E (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastEndPoint_mE3A641FE9A6DCB50F540117D4F6CD9A64C15D61E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t G_B5_0 = 0;
	{
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 endPoint = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_1 = L_1;
		// switch (CurrentRaycastDirectionMode)
		int32_t L_2 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m64059CBA457D2219997E4CF4E6DD8CCA111E5CEE_inline(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0087;
			}
		}
	}
	{
		goto IL_0095;
	}

IL_0029:
	{
		// if (SolverHandler != null && SolverHandler.TransformTarget != null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_6 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 0;
	}

IL_004b:
	{
		V_3 = (bool)G_B5_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// endPoint = SolverHandler.TransformTarget.position + SolverHandler.TransformTarget.forward;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_10 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_13 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_12, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0077:
	{
		// break;
		goto IL_0095;
	}

IL_0079:
	{
		// endPoint = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// break;
		goto IL_0095;
	}

IL_0087:
	{
		// endPoint = SolverHandler.GoalPosition;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_19 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB_inline(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// break;
		goto IL_0095;
	}

IL_0095:
	{
		// return endPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_1;
		V_4 = L_21;
		goto IL_009a;
	}

IL_009a:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_4;
		return L_22;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_RaycastDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SurfaceMagnetism_get_RaycastDirection_m51EEB965B00823275BC485EDCF0B0D7EF5045E38 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_get_RaycastDirection_m51EEB965B00823275BC485EDCF0B0D7EF5045E38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 direction = Vector3.forward;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (CurrentRaycastDirectionMode == RaycastDirectionMode.TrackedTargetForward)
		int32_t L_1 = SurfaceMagnetism_get_CurrentRaycastDirectionMode_m64059CBA457D2219997E4CF4E6DD8CCA111E5CEE_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_3 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_3);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// direction = SolverHandler.TransformTarget.forward;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_7 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_003d:
	{
		goto IL_005c;
	}

IL_0040:
	{
		// direction = (RaycastEndPoint - RaycastOrigin).normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = SurfaceMagnetism_get_RaycastEndPoint_mE3A641FE9A6DCB50F540117D4F6CD9A64C15D61E(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_10, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_005c:
	{
		// return direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_0;
		V_4 = L_14;
		goto IL_0061;
	}

IL_0061:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_4;
		return L_15;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_ScaleOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_ScaleOverride_m3A784999A9118C2ADF8874A23D3560AE8B369984 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B3_0 = 0.0f;
	{
		// private float ScaleOverride => useLinkedAltScaleOverride ? SolverHandler.AltScale.Current.magnitude : volumeCastSizeOverride;
		bool L_0 = __this->get_useLinkedAltScaleOverride_24();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		float L_1 = __this->get_volumeCastSizeOverride_23();
		G_B3_0 = L_1;
		goto IL_002b;
	}

IL_0010:
	{
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_2 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_2);
		Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  L_3 = SolverHandler_get_AltScale_m96F1E6C1935F3F8284AFC7483A845789F5A79592_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3Smoothed_get_Current_m7A9D0CEB18725E8EC98588CAA979454EA6B8DA27_inline((Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002b:
	{
		return G_B3_0;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::CalculateMagnetismOrientation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___surfaceNormal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (KeepOrientationVertical)
		bool L_0 = SurfaceMagnetism_get_KeepOrientationVertical_mAA5DED9E580EE50E705A4058D6966B67096287C4_inline(__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// direction.y = 0;
		(&___direction0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&___surfaceNormal1)->set_y_3((0.0f));
	}

IL_0025:
	{
		// var trackedReferenceRotation = Quaternion.LookRotation(-direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// var surfaceReferenceRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = ___surfaceNormal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (CurrentOrientationMode)
		int32_t L_10 = SurfaceMagnetism_get_CurrentOrientationMode_m4E11FEAA068491A4074871B2F2C357F9F9050BC4_inline(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		switch (L_11)
		{
			case 0:
			{
				goto IL_006a;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0083;
			}
			case 4:
			{
				goto IL_0094;
			}
		}
	}
	{
		goto IL_00a3;
	}

IL_006a:
	{
		// return SolverHandler.GoalRotation;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_12 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_12);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = SolverHandler_get_GoalRotation_m7CC782A2B148CAE1827CD01062D55411C5048DF8_inline(L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		goto IL_00ac;
	}

IL_0079:
	{
		// return trackedReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_0;
		V_4 = L_14;
		goto IL_00ac;
	}

IL_007e:
	{
		// return surfaceReferenceRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = V_1;
		V_4 = L_15;
		goto IL_00ac;
	}

IL_0083:
	{
		// return Quaternion.Slerp(trackedReferenceRotation, surfaceReferenceRotation, orientationBlend);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = V_0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = V_1;
		float L_18 = __this->get_orientationBlend_27();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_19 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_16, L_17, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		goto IL_00ac;
	}

IL_0094:
	{
		// return Quaternion.LookRotation(direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = ___direction0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		goto IL_00ac;
	}

IL_00a3:
	{
		// return Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_23 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		V_4 = L_23;
		goto IL_00ac;
	}

IL_00ac:
	{
		// }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_24 = V_4;
		return L_24;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SolverUpdate_m3FE3D967ACF8B0C13A7A6D0413228A046474D683 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SolverUpdate_m3FE3D967ACF8B0C13A7A6D0413228A046474D683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// GoalPosition = WorkingPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Solver_get_WorkingPosition_mA4C856CF849A5163446B8BCA56DAE60AECA47E87(__this, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_0, /*hidden argument*/NULL);
		// GoalRotation = WorkingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Solver_get_WorkingRotation_m807EFEA3D2AEC22B7D45A10616CA8F15EFA0FA01(__this, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_1, /*hidden argument*/NULL);
		// Vector3 origin = RaycastOrigin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = SurfaceMagnetism_get_RaycastOrigin_mD6A6DFC98D34CD7F767CE455E57AA803E99E70CC(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 endpoint = RaycastEndPoint;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = SurfaceMagnetism_get_RaycastEndPoint_mE3A641FE9A6DCB50F540117D4F6CD9A64C15D61E(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// currentRayStep.UpdateRayStep(ref origin, ref endpoint);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_4 = __this->get_address_of_currentRayStep_32();
		RayStep_UpdateRayStep_m7698792F824A2DF6B256FEBE538C953F072DF479((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_4, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		// if (currentRayStep.Direction == Vector3.zero)
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_5 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_8 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// return;
		goto IL_00ed;
	}

IL_0058:
	{
		// if (DebugEnabled)
		bool L_10 = SurfaceMagnetism_get_DebugEnabled_m1B1D1DDDC60A941B0C70F52ECD95F85F5A66F6CE_inline(__this, /*hidden argument*/NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.DrawLine(currentRayStep.Origin, currentRayStep.Terminus, Color.magenta);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_12 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_12, /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_14 = __this->get_address_of_currentRayStep_32();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Terminus_mFF2F8EA7BF186B548F076EB85F608E3D62B1C5F9_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_14, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_16 = Color_get_magenta_m04E2DDB63AA6288C701A93E248643A06EBD2D7AD(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_13, L_15, L_16, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// switch (RaycastMode)
		int32_t L_17 = SurfaceMagnetism_get_RaycastMode_mE798CCC55BE47DDDA62261A3B8837A350E479905_inline(__this, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = V_4;
		switch (L_18)
		{
			case 0:
			{
				goto IL_00a6;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_00c4;
			}
			case 3:
			{
				goto IL_00d3;
			}
		}
	}
	{
		goto IL_00ed;
	}

IL_00a6:
	{
		// SimpleRaycastStepUpdate(ref this.currentRayStep);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_19 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SimpleRaycastStepUpdate_m590C867746E830E90179EDB02D026A9CE3F58EFD(__this, (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_19, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00b5:
	{
		// BoxRaycastStepUpdate(ref this.currentRayStep);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_20 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_BoxRaycastStepUpdate_m4FA3FD2D1AE4221D77FB79D3175823CF569E4D40(__this, (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_20, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00c4:
	{
		// SphereRaycastStepUpdate(ref this.currentRayStep);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_21 = __this->get_address_of_currentRayStep_32();
		SurfaceMagnetism_SphereRaycastStepUpdate_m7944656CD8B05E89D28F39152A2C8C538F3D9F91(__this, (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_21, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00d3:
	{
		// Debug.LogError("Raycast mode set to SphereOverlap which is not valid for SurfaceMagnetism component. Disabling update solvers...");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralCF5B58E13AC9E0BBDD8929CAC9A7A3EC3DACCCE9, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_22 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_22);
		SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0_inline(L_22, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SimpleRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SimpleRaycastStepUpdate_m590C867746E830E90179EDB02D026A9CE3F58EFD (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SimpleRaycastStepUpdate_m590C867746E830E90179EDB02D026A9CE3F58EFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	{
		// isHit = MixedRealityRaycaster.RaycastSimplePhysicsStep(rayStep, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_0 = ___rayStep0;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  L_1 = (*(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_0);
		float L_2 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_3 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t47BFF3EED078208D092DAAA9A9A6BCD47F8C5660_il2cpp_TypeInfo_var);
		bool L_4 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mE3608D5EBCBB17E4B2DFB19673125CAD16199642(L_1, L_2, L_3, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_4;
		// OnSurface = isHit;
		bool L_5 = V_0;
		SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72_inline(__this, L_5, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_7 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_6, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// float length = hitDelta.magnitude;
		float L_10 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_10;
		// if (length < closestDistance)
		float L_11 = V_3;
		float L_12 = __this->get_closestDistance_15();
		V_4 = (bool)((((float)L_11) < ((float)L_12))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0074;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_14, /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_16 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_15, L_19, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_20, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// if (isHit)
		bool L_21 = V_0;
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_00d2;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_24 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_23, L_26, /*hidden argument*/NULL);
		float L_28 = __this->get_surfaceRayOffset_17();
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_29 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_29, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_28, L_30, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_31, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_32, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_33 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_36 = SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01(__this, L_34, L_35, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_36, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::SphereRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_SphereRaycastStepUpdate_m7944656CD8B05E89D28F39152A2C8C538F3D9F91 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_SphereRaycastStepUpdate_m7944656CD8B05E89D28F39152A2C8C538F3D9F91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	float G_B3_0 = 0.0f;
	{
		// float size = ScaleOverride > 0 ? ScaleOverride : transform.lossyScale.x * sphereSize;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m3A784999A9118C2ADF8874A23D3560AE8B369984(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_0027;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_sphereSize_22();
		G_B3_0 = ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4));
		goto IL_002d;
	}

IL_0027:
	{
		float L_5 = SurfaceMagnetism_get_ScaleOverride_m3A784999A9118C2ADF8874A23D3560AE8B369984(__this, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_002d:
	{
		V_2 = G_B3_0;
		// isHit = MixedRealityRaycaster.RaycastSpherePhysicsStep(rayStep, size, maxRaycastDistance, magneticSurfaces, false, out result);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_6 = ___rayStep0;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  L_7 = (*(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_6);
		float L_8 = V_2;
		float L_9 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_10 = __this->get_magneticSurfaces_13();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t47BFF3EED078208D092DAAA9A9A6BCD47F8C5660_il2cpp_TypeInfo_var);
		bool L_11 = MixedRealityRaycaster_RaycastSpherePhysicsStep_m8B4B5B469D02E117E57DC96EA887C0F2CE60CD6A(L_7, L_8, L_9, L_10, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_11;
		// OnSurface = isHit;
		bool L_12 = V_0;
		SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72_inline(__this, L_12, /*hidden argument*/NULL);
		// Vector3 hitDelta = result.point - rayStep.Origin;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_14 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_13, L_15, /*hidden argument*/NULL);
		V_3 = L_16;
		// float length = hitDelta.magnitude;
		float L_17 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_17;
		// if (length < closestDistance)
		float L_18 = V_4;
		float L_19 = __this->get_closestDistance_15();
		V_5 = (bool)((((float)L_18) < ((float)L_19))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		// result.point = rayStep.Origin + rayStep.Direction * closestDistance;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_21 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_21, /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_23 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_closestDistance_15();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		RaycastHit_set_point_mCB652835DA3A0AED8A8574B4A47FD9BF8F9A4191((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), L_27, /*hidden argument*/NULL);
	}

IL_00a4:
	{
		// if (isHit)
		bool L_28 = V_0;
		V_6 = L_28;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_0102;
		}
	}
	{
		// GoalPosition = result.point + surfaceNormalOffset * result.normal + surfaceRayOffset * rayStep.Direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		float L_31 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_33, /*hidden argument*/NULL);
		float L_35 = __this->get_surfaceRayOffset_17();
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_36 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_35, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_34, L_38, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_39, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, result.normal);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_40 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_40, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01(__this, L_41, L_42, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_43, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::BoxRaycastStepUpdate(Microsoft.MixedReality.Toolkit.Physics.RayStep&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_BoxRaycastStepUpdate_m4FA3FD2D1AE4221D77FB79D3175823CF569E4D40 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * ___rayStep0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_BoxRaycastStepUpdate_m4FA3FD2D1AE4221D77FB79D3175823CF569E4D40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_4 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_5 = NULL;
	BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* V_6 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	float V_15 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	int32_t G_B12_0 = 0;
	{
		// Vector3 scale = ScaleOverride > 0 ? transform.lossyScale.normalized * ScaleOverride : transform.lossyScale;
		float L_0 = SurfaceMagnetism_get_ScaleOverride_m3A784999A9118C2ADF8874A23D3560AE8B369984(__this, /*hidden argument*/NULL);
		if ((((float)L_0) > ((float)(0.0f))))
		{
			goto IL_001b;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_003a;
	}

IL_001b:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_lossyScale_m9C2597B28BE066FC061B7D7508750E5D5EA9850F(L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		float L_6 = SurfaceMagnetism_get_ScaleOverride_m3A784999A9118C2ADF8874A23D3560AE8B369984(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_5, L_6, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B3_0;
		// Quaternion orientation = orientationMode == OrientationMode.None ?
		//     Quaternion.LookRotation(rayStep.Direction, Vector3.up) :
		//     CalculateMagnetismOrientation(rayStep.Direction, Vector3.up);
		int32_t L_8 = __this->get_orientationMode_26();
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_9 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01(__this, L_10, L_11, /*hidden argument*/NULL);
		G_B6_0 = L_12;
		goto IL_0066;
	}

IL_0056:
	{
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_13 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_14, L_15, /*hidden argument*/NULL);
		G_B6_0 = L_16;
	}

IL_0066:
	{
		V_1 = G_B6_0;
		// Matrix4x4 targetMatrix = Matrix4x4.TRS(Vector3.zero, orientation, scale);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_18 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_17, L_18, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		// if (this.boxCollider == null)
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_21 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_8 = L_22;
		bool L_23 = V_8;
		if (!L_23)
		{
			goto IL_0094;
		}
	}
	{
		// this.boxCollider = GetComponent<BoxCollider>();
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_24 = Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA_m81892AA8DC35D8BB06288E5A4C16CF366174953E_RuntimeMethod_var);
		__this->set_boxCollider_33(L_24);
	}

IL_0094:
	{
		// Debug.Assert(boxCollider != null, $"Missing a box collider for Surface Magnetism on {gameObject}");
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_25 = __this->get_boxCollider_33();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_25, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		String_t* L_28 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral3A8470CF56DD2F02DFDDA06EEF61875E5092940A, L_27, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_26, L_28, /*hidden argument*/NULL);
		// Vector3 extents = boxCollider.size;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_29 = __this->get_boxCollider_33();
		NullCheck(L_29);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		// if (MixedRealityRaycaster.RaycastBoxPhysicsStep(rayStep, extents, transform.position, targetMatrix, maxRaycastDistance, magneticSurfaces, boxRaysPerEdge, orthographicBoxCast, false, out positions, out normals, out hits))
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_31 = ___rayStep0;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  L_32 = (*(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_31);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_34, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_36 = V_2;
		float L_37 = __this->get_maxRaycastDistance_14();
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_38 = __this->get_magneticSurfaces_13();
		int32_t L_39 = __this->get_boxRaysPerEdge_19();
		bool L_40 = __this->get_orthographicBoxCast_20();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t47BFF3EED078208D092DAAA9A9A6BCD47F8C5660_il2cpp_TypeInfo_var);
		bool L_41 = MixedRealityRaycaster_RaycastBoxPhysicsStep_m4DA32EC54916789644FDC6A83F5ABEBAC8789253(L_32, L_33, L_35, L_36, L_37, L_38, L_39, L_40, (bool)0, (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_4), (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28**)(&V_5), (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040**)(&V_6), /*hidden argument*/NULL);
		V_9 = L_41;
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0277;
		}
	}
	{
		// FindPlacementPlane(rayStep.Origin, rayStep.Direction, positions, normals, hits, boxCollider.size.x, maximumNormalVariance, false, orientationMode == OrientationMode.None, out plane, out distance);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_43 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_43, /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_45 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_45, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_47 = V_4;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_48 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = V_6;
		BoxCollider_t2DF257BBBFCABE0B9D78B21D238298D1942BFBAA * L_50 = __this->get_boxCollider_33();
		NullCheck(L_50);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = BoxCollider_get_size_m1C7DA815D3BA9DDB3D92A58BEEFE2FCBA5206FE2(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_2();
		float L_53 = __this->get_maximumNormalVariance_21();
		int32_t L_54 = __this->get_orientationMode_26();
		SurfaceMagnetism_FindPlacementPlane_mD0D9C9C330948C4BB29B884B99C4EC3F4D3FD88C(__this, L_44, L_46, L_47, L_48, L_49, L_52, L_53, (bool)0, (bool)((((int32_t)L_54) == ((int32_t)0))? 1 : 0), (Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), (float*)(&V_11), /*hidden argument*/NULL);
		// float verticalCorrectionOffset = 0;
		V_12 = (0.0f);
		// if (IsNormalVertical(plane.normal) && !Mathf.Approximately(rayStep.Direction.y, 0))
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		bool L_56 = SurfaceMagnetism_IsNormalVertical_mF42D13EE4FB3677BBDB98B2FC92D1C0BAC87C4AE(L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_016f;
		}
	}
	{
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_57 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_60 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_59, (0.0f), /*hidden argument*/NULL);
		G_B12_0 = ((((int32_t)L_60) == ((int32_t)0))? 1 : 0);
		goto IL_0170;
	}

IL_016f:
	{
		G_B12_0 = 0;
	}

IL_0170:
	{
		V_14 = (bool)G_B12_0;
		bool L_61 = V_14;
		if (!L_61)
		{
			goto IL_01ce;
		}
	}
	{
		// float boxSurfaceVerticalOffset = targetMatrix.MultiplyVector(new Vector3(0, extents.y * 0.5f, 0)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = V_3;
		float L_63 = L_62.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_64), (0.0f), ((float)il2cpp_codegen_multiply((float)L_63, (float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_65 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_64, /*hidden argument*/NULL);
		V_7 = L_65;
		float L_66 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_15 = L_66;
		// Vector3 correctionVector = boxSurfaceVerticalOffset * (rayStep.Direction / rayStep.Direction.y);
		float L_67 = V_15;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_68 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_68, /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_70 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_69, L_72, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839(L_67, L_73, /*hidden argument*/NULL);
		V_16 = L_74;
		// verticalCorrectionOffset = -correctionVector.magnitude;
		float L_75 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_16), /*hidden argument*/NULL);
		V_12 = ((-L_75));
	}

IL_01ce:
	{
		// float boxSurfaceOffset = targetMatrix.MultiplyVector(new Vector3(0, 0, extents.z * 0.5f)).magnitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_3;
		float L_77 = L_76.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_78), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_77, (float)(0.5f))), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_79 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_78, /*hidden argument*/NULL);
		V_7 = L_79;
		float L_80 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_7), /*hidden argument*/NULL);
		V_13 = L_80;
		// GoalPosition = rayStep.Origin + rayStep.Direction * Mathf.Max(closestDistance, distance + surfaceRayOffset + boxSurfaceOffset + verticalCorrectionOffset) + plane.normal * (0 * boxSurfaceOffset + surfaceNormalOffset);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_81 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_82 = RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_81, /*hidden argument*/NULL);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_83 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_83, /*hidden argument*/NULL);
		float L_85 = __this->get_closestDistance_15();
		float L_86 = V_11;
		float L_87 = __this->get_surfaceRayOffset_17();
		float L_88 = V_13;
		float L_89 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_90 = Mathf_Max_m670AE0EC1B09ED1A56FF9606B0F954670319CB65(L_85, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_86, (float)L_87)), (float)L_88)), (float)L_89)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_84, L_90, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_92 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_82, L_91, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		float L_94 = V_13;
		float L_95 = __this->get_surfaceNormalOffset_16();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_93, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(0.0f), (float)L_94)), (float)L_95)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_92, L_96, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_97, /*hidden argument*/NULL);
		// GoalRotation = CalculateMagnetismOrientation(rayStep.Direction, plane.normal);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_98 = ___rayStep0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_98, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Plane_get_normal_m203D43F51C449990214D04F332E8261295162E84((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)(&V_10), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_101 = SurfaceMagnetism_CalculateMagnetismOrientation_m61037DC47FF53059FA6C2A803647813FD0FFCB01(__this, L_99, L_100, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_101, /*hidden argument*/NULL);
		// OnSurface = true;
		SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72_inline(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0281;
	}

IL_0277:
	{
		// OnSurface = false;
		SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0281:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::FindPlacementPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Boolean[],System.Single,System.Single,System.Boolean,System.Boolean,UnityEngine.Plane&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_FindPlacementPlane_mD0D9C9C330948C4BB29B884B99C4EC3F4D3FD88C (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___positions2, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals3, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___hits4, float ___assetWidth5, float ___maxNormalVariance6, bool ___constrainVertical7, bool ___useClosestDistance8, Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * ___plane9, float* ___closestDistance10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_FindPlacementPlane_mD0D9C9C330948C4BB29B884B99C4EC3F4D3FD88C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	int32_t V_14 = 0;
	bool V_15 = false;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	bool V_21 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	int32_t V_25 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_26;
	memset((&V_26), 0, sizeof(V_26));
	float V_27 = 0.0f;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	int32_t V_34 = 0;
	float V_35 = 0.0f;
	float V_36 = 0.0f;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_45;
	memset((&V_45), 0, sizeof(V_45));
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	float V_50 = 0.0f;
	bool V_51 = false;
	int32_t G_B19_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B45_0 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B64_0;
	memset((&G_B64_0), 0, sizeof(G_B64_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B63_0;
	memset((&G_B63_0), 0, sizeof(G_B63_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_0;
	memset((&G_B65_0), 0, sizeof(G_B65_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B65_1;
	memset((&G_B65_1), 0, sizeof(G_B65_1));
	int32_t G_B77_0 = 0;
	int32_t G_B81_0 = 0;
	{
		// int rayCount = positions.Length;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___positions2;
		NullCheck(L_0);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))));
		// Vector3 originalDirection = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___direction1;
		V_1 = L_1;
		// if (constrainVertical)
		bool L_2 = ___constrainVertical7;
		V_13 = L_2;
		bool L_3 = V_13;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// direction.y = 0.0f;
		(&___direction1)->set_y_3((0.0f));
		// direction = direction.normalized;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___direction1), /*hidden argument*/NULL);
		___direction1 = L_4;
	}

IL_0026:
	{
		// closestDistance = float.PositiveInfinity;
		float* L_5 = ___closestDistance10;
		*((float*)L_5) = (float)(std::numeric_limits<float>::infinity());
		// int numHits = 0;
		V_2 = 0;
		// int closestPointIdx = -1;
		V_3 = (-1);
		// float farthestDistance = 0f;
		V_4 = (0.0f);
		// var averageNormal = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		V_5 = L_6;
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_14 = 0;
		goto IL_00af;
	}

IL_0045:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_7 = ___hits4;
		int32_t L_8 = V_14;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (uint8_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_15 = (bool)L_10;
		bool L_11 = V_15;
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		// float distance = Vector3.Dot(direction, positions[hitIndex] - origin);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = ___positions2;
		int32_t L_14 = V_14;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = ___origin0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_12, L_18, /*hidden argument*/NULL);
		V_16 = L_19;
		// if (distance < closestDistance)
		float L_20 = V_16;
		float* L_21 = ___closestDistance10;
		float L_22 = *((float*)L_21);
		V_17 = (bool)((((float)L_20) < ((float)L_22))? 1 : 0);
		bool L_23 = V_17;
		if (!L_23)
		{
			goto IL_007f;
		}
	}
	{
		// closestPointIdx = hitIndex;
		int32_t L_24 = V_14;
		V_3 = L_24;
		// closestDistance = distance;
		float* L_25 = ___closestDistance10;
		float L_26 = V_16;
		*((float*)L_25) = (float)L_26;
	}

IL_007f:
	{
		// if (distance > farthestDistance)
		float L_27 = V_16;
		float L_28 = V_4;
		V_18 = (bool)((((float)L_27) > ((float)L_28))? 1 : 0);
		bool L_29 = V_18;
		if (!L_29)
		{
			goto IL_0091;
		}
	}
	{
		// farthestDistance = distance;
		float L_30 = V_16;
		V_4 = L_30;
	}

IL_0091:
	{
		// averageNormal += normals[hitIndex];
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_32 = ___normals3;
		int32_t L_33 = V_14;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		V_5 = L_36;
		// ++numHits;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00a8:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_38 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00af:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_39 = V_14;
		int32_t L_40 = V_0;
		V_19 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_19;
		if (L_41)
		{
			goto IL_0045;
		}
	}
	{
		// Vector3 closestPoint = positions[closestPointIdx];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_42 = ___positions2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		V_6 = L_45;
		// averageNormal /= numHits;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = V_5;
		int32_t L_47 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Division_mDF34F1CC445981B4D1137765BC6277419E561624(L_46, (((float)((float)L_47))), /*hidden argument*/NULL);
		V_5 = L_48;
		// float variance = 0;
		V_7 = (0.0f);
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		V_20 = 0;
		goto IL_010d;
	}

IL_00da:
	{
		// if (hits[hitIndex])
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_49 = ___hits4;
		int32_t L_50 = V_20;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (uint8_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_21 = (bool)L_52;
		bool L_53 = V_21;
		if (!L_53)
		{
			goto IL_0106;
		}
	}
	{
		// variance += (normals[hitIndex] - averageNormal).magnitude;
		float L_54 = V_7;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_55 = ___normals3;
		int32_t L_56 = V_20;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_58, L_59, /*hidden argument*/NULL);
		V_22 = L_60;
		float L_61 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_54, (float)L_61));
	}

IL_0106:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_62 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)1));
	}

IL_010d:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; ++hitIndex)
		int32_t L_63 = V_20;
		int32_t L_64 = V_0;
		V_23 = (bool)((((int32_t)L_63) < ((int32_t)L_64))? 1 : 0);
		bool L_65 = V_23;
		if (L_65)
		{
			goto IL_00da;
		}
	}
	{
		// variance /= numHits;
		float L_66 = V_7;
		int32_t L_67 = V_2;
		V_7 = ((float)((float)L_66/(float)(((float)((float)L_67)))));
		// if (variance > maxNormalVariance || numHits < rayCount * 0.25f)
		float L_68 = V_7;
		float L_69 = ___maxNormalVariance6;
		if ((((float)L_68) > ((float)L_69)))
		{
			goto IL_0133;
		}
	}
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_0;
		G_B19_0 = ((((float)(((float)((float)L_70)))) < ((float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)(0.25f)))))? 1 : 0);
		goto IL_0134;
	}

IL_0133:
	{
		G_B19_0 = 1;
	}

IL_0134:
	{
		V_24 = (bool)G_B19_0;
		bool L_72 = V_24;
		if (!L_72)
		{
			goto IL_0154;
		}
	}
	{
		// plane = new Plane(-direction, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_73 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_74 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_74, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_77;
		memset((&L_77), 0, sizeof(L_77));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_77), L_75, L_76, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_73 = L_77;
		// return;
		goto IL_04ce;
	}

IL_0154:
	{
		// var lowAngle = float.PositiveInfinity;
		V_8 = (std::numeric_limits<float>::infinity());
		// var highAngle = float.NegativeInfinity;
		V_9 = (-std::numeric_limits<float>::infinity());
		// int lowIndex = -1;
		V_10 = (-1);
		// int highIndex = -1;
		V_11 = (-1);
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_25 = 0;
		goto IL_01fc;
	}

IL_0170:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_78 = ___hits4;
		int32_t L_79 = V_25;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint8_t L_81 = (uint8_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if (!L_81)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_82 = V_25;
		int32_t L_83 = V_3;
		G_B25_0 = ((((int32_t)L_82) == ((int32_t)L_83))? 1 : 0);
		goto IL_0180;
	}

IL_017f:
	{
		G_B25_0 = 1;
	}

IL_0180:
	{
		V_28 = (bool)G_B25_0;
		bool L_84 = V_28;
		if (!L_84)
		{
			goto IL_0189;
		}
	}
	{
		// continue;
		goto IL_01f6;
	}

IL_0189:
	{
		// Vector3 difference = positions[hitIndex] - closestPoint;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_85 = ___positions2;
		int32_t L_86 = V_25;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_88, L_89, /*hidden argument*/NULL);
		V_26 = L_90;
		// if (constrainVertical)
		bool L_91 = ___constrainVertical7;
		V_29 = L_91;
		bool L_92 = V_29;
		if (!L_92)
		{
			goto IL_01cd;
		}
	}
	{
		// difference.y = 0.0f;
		(&V_26)->set_y_3((0.0f));
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		// if (difference == Vector3.zero)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_94 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		bool L_95 = Vector3_op_Equality_mA9E2F96E98E71AE7ACCE74766D700D41F0404806(L_93, L_94, /*hidden argument*/NULL);
		V_30 = L_95;
		bool L_96 = V_30;
		if (!L_96)
		{
			goto IL_01cc;
		}
	}
	{
		// continue;
		goto IL_01f6;
	}

IL_01cc:
	{
	}

IL_01cd:
	{
		// difference.Normalize();
		Vector3_Normalize_m174460238EC6322B9095A378AA8624B1DD9000F3((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_26), /*hidden argument*/NULL);
		// float angle = Vector3.Dot(direction, difference);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_97 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = V_26;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_99 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_97, L_98, /*hidden argument*/NULL);
		V_27 = L_99;
		// if (angle < lowAngle)
		float L_100 = V_27;
		float L_101 = V_8;
		V_31 = (bool)((((float)L_100) < ((float)L_101))? 1 : 0);
		bool L_102 = V_31;
		if (!L_102)
		{
			goto IL_01f5;
		}
	}
	{
		// lowAngle = angle;
		float L_103 = V_27;
		V_8 = L_103;
		// lowIndex = hitIndex;
		int32_t L_104 = V_25;
		V_10 = L_104;
	}

IL_01f5:
	{
	}

IL_01f6:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_105 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
	}

IL_01fc:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_106 = V_25;
		int32_t L_107 = V_0;
		V_32 = (bool)((((int32_t)L_106) < ((int32_t)L_107))? 1 : 0);
		bool L_108 = V_32;
		if (L_108)
		{
			goto IL_0170;
		}
	}
	{
		// if (!constrainVertical && lowIndex != -1)
		bool L_109 = ___constrainVertical7;
		if (L_109)
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_110 = V_10;
		G_B39_0 = ((((int32_t)((((int32_t)L_110) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0219;
	}

IL_0218:
	{
		G_B39_0 = 0;
	}

IL_0219:
	{
		V_33 = (bool)G_B39_0;
		bool L_111 = V_33;
		if (!L_111)
		{
			goto IL_0300;
		}
	}
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		V_34 = 0;
		goto IL_02f1;
	}

IL_022b:
	{
		// if (hits[hitIndex] == false || hitIndex == closestPointIdx || hitIndex == lowIndex)
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_112 = ___hits4;
		int32_t L_113 = V_34;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint8_t L_115 = (uint8_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		if (!L_115)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_116 = V_34;
		int32_t L_117 = V_3;
		if ((((int32_t)L_116) == ((int32_t)L_117)))
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_118 = V_34;
		int32_t L_119 = V_10;
		G_B45_0 = ((((int32_t)L_118) == ((int32_t)L_119))? 1 : 0);
		goto IL_0241;
	}

IL_0240:
	{
		G_B45_0 = 1;
	}

IL_0241:
	{
		V_37 = (bool)G_B45_0;
		bool L_120 = V_37;
		if (!L_120)
		{
			goto IL_024d;
		}
	}
	{
		// continue;
		goto IL_02eb;
	}

IL_024d:
	{
		// float dot = Mathf.Abs(Vector3.Dot((positions[hitIndex] - closestPoint).normalized, (positions[lowIndex] - closestPoint).normalized));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_121 = ___positions2;
		int32_t L_122 = V_34;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_125 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_126 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_124, L_125, /*hidden argument*/NULL);
		V_22 = L_126;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_128 = ___positions2;
		int32_t L_129 = V_10;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_131, L_132, /*hidden argument*/NULL);
		V_22 = L_133;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_135 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_127, L_134, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_136 = fabsf(L_135);
		V_35 = L_136;
		// if (dot > MaxDot)
		float L_137 = V_35;
		V_38 = (bool)((((float)L_137) > ((float)(0.97f)))? 1 : 0);
		bool L_138 = V_38;
		if (!L_138)
		{
			goto IL_029b;
		}
	}
	{
		// continue;
		goto IL_02eb;
	}

IL_029b:
	{
		// float nextAngle = Mathf.Abs(Vector3.Dot(direction, Vector3.Cross(positions[lowIndex] - closestPoint, positions[hitIndex] - closestPoint).normalized));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = ___direction1;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_140 = ___positions2;
		int32_t L_141 = V_10;
		NullCheck(L_140);
		int32_t L_142 = L_141;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_144 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_145 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_143, L_144, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_146 = ___positions2;
		int32_t L_147 = V_34;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_151 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_149, L_150, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_145, L_151, /*hidden argument*/NULL);
		V_22 = L_152;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_153 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		float L_154 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_139, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_155 = fabsf(L_154);
		V_36 = L_155;
		// if (nextAngle > highAngle)
		float L_156 = V_36;
		float L_157 = V_9;
		V_39 = (bool)((((float)L_156) > ((float)L_157))? 1 : 0);
		bool L_158 = V_39;
		if (!L_158)
		{
			goto IL_02ea;
		}
	}
	{
		// highAngle = nextAngle;
		float L_159 = V_36;
		V_9 = L_159;
		// highIndex = hitIndex;
		int32_t L_160 = V_34;
		V_11 = L_160;
	}

IL_02ea:
	{
	}

IL_02eb:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_161 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, (int32_t)1));
	}

IL_02f1:
	{
		// for (int hitIndex = 0; hitIndex < rayCount; hitIndex++)
		int32_t L_162 = V_34;
		int32_t L_163 = V_0;
		V_40 = (bool)((((int32_t)L_162) < ((int32_t)L_163))? 1 : 0);
		bool L_164 = V_40;
		if (L_164)
		{
			goto IL_022b;
		}
	}
	{
	}

IL_0300:
	{
		// if (lowIndex != -1)
		int32_t L_165 = V_10;
		V_41 = (bool)((((int32_t)((((int32_t)L_165) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_166 = V_41;
		if (!L_166)
		{
			goto IL_0404;
		}
	}
	{
		// if (debugEnabled)
		bool L_167 = __this->get_debugEnabled_29();
		V_42 = L_167;
		bool L_168 = V_42;
		if (!L_168)
		{
			goto IL_0335;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[lowIndex], Color.red);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_169 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_170 = ___positions2;
		int32_t L_171 = V_10;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_174 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_169, L_173, L_174, /*hidden argument*/NULL);
	}

IL_0335:
	{
		// if (highIndex != -1)
		int32_t L_175 = V_11;
		V_43 = (bool)((((int32_t)((((int32_t)L_175) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_176 = V_43;
		if (!L_176)
		{
			goto IL_0398;
		}
	}
	{
		// if (debugEnabled)
		bool L_177 = __this->get_debugEnabled_29();
		V_44 = L_177;
		bool L_178 = V_44;
		if (!L_178)
		{
			goto IL_0367;
		}
	}
	{
		// Debug.DrawLine(closestPoint, positions[highIndex], Color.green);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = V_6;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_180 = ___positions2;
		int32_t L_181 = V_11;
		NullCheck(L_180);
		int32_t L_182 = L_181;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_183 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_184 = Color_get_green_mD53D8F980E92A0755759FBB2981E3DDEFCD084C0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_179, L_183, L_184, /*hidden argument*/NULL);
	}

IL_0367:
	{
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, positions[highIndex] - closestPoint).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_185 = ___positions2;
		int32_t L_186 = V_10;
		NullCheck(L_185);
		int32_t L_187 = L_186;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_188 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_189 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_190 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_188, L_189, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_191 = ___positions2;
		int32_t L_192 = V_11;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_195 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_196 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_194, L_195, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_197 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_190, L_196, /*hidden argument*/NULL);
		V_22 = L_197;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_198 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_198;
		goto IL_03dd;
	}

IL_0398:
	{
		// Vector3 planeUp = Vector3.Cross(positions[lowIndex] - closestPoint, direction);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_199 = ___positions2;
		int32_t L_200 = V_10;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_202 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_203 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_204 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_202, L_203, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_205 = ___direction1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_206 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(L_204, L_205, /*hidden argument*/NULL);
		V_45 = L_206;
		// placementNormal = Vector3.Cross(positions[lowIndex] - closestPoint, constrainVertical ? Vector3.up : planeUp).normalized;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_207 = ___positions2;
		int32_t L_208 = V_10;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_211 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_212 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_210, L_211, /*hidden argument*/NULL);
		bool L_213 = ___constrainVertical7;
		G_B63_0 = L_212;
		if (L_213)
		{
			G_B64_0 = L_212;
			goto IL_03c7;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_214 = V_45;
		G_B65_0 = L_214;
		G_B65_1 = G_B63_0;
		goto IL_03cc;
	}

IL_03c7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_215 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		G_B65_0 = L_215;
		G_B65_1 = G_B64_0;
	}

IL_03cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_216 = Vector3_Cross_m3E9DBC445228FDB850BDBB4B01D6F61AC0111887(G_B65_1, G_B65_0, /*hidden argument*/NULL);
		V_22 = L_216;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_217 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_22), /*hidden argument*/NULL);
		V_12 = L_217;
	}

IL_03dd:
	{
		// if (debugEnabled)
		bool L_218 = __this->get_debugEnabled_29();
		V_46 = L_218;
		bool L_219 = V_46;
		if (!L_219)
		{
			goto IL_0401;
		}
	}
	{
		// Debug.DrawLine(closestPoint, closestPoint + placementNormal, Color.blue);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_220 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_221 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_222 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_223 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_221, L_222, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_224 = Color_get_blue_m5449DCBB31EEB2324489989754C00123982EBABA(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawLine_mB6E9B16AF857C20116F7054ABAFC30B448E80FA2(L_220, L_223, L_224, /*hidden argument*/NULL);
	}

IL_0401:
	{
		goto IL_0413;
	}

IL_0404:
	{
		// placementNormal = direction * -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_225 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_226 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_225, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_226;
	}

IL_0413:
	{
		// if (Vector3.Dot(placementNormal, direction) > 0.0f)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_227 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_228 = ___direction1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		float L_229 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_227, L_228, /*hidden argument*/NULL);
		V_47 = (bool)((((float)L_229) > ((float)(0.0f)))? 1 : 0);
		bool L_230 = V_47;
		if (!L_230)
		{
			goto IL_0438;
		}
	}
	{
		// placementNormal *= -1.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_231 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_232 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_231, (-1.0f), /*hidden argument*/NULL);
		V_12 = L_232;
	}

IL_0438:
	{
		// plane = new Plane(placementNormal, closestPoint);
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_233 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_234 = V_12;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_235 = V_6;
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED  L_236;
		memset((&L_236), 0, sizeof(L_236));
		Plane__ctor_m6535EAD5E675627C2533962F1F7890CBFA2BA44A((&L_236), L_234, L_235, /*hidden argument*/NULL);
		*(Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_233 = L_236;
		// if (debugEnabled)
		bool L_237 = __this->get_debugEnabled_29();
		V_48 = L_237;
		bool L_238 = V_48;
		if (!L_238)
		{
			goto IL_0465;
		}
	}
	{
		// Debug.DrawRay(closestPoint, placementNormal, Color.cyan);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_239 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_240 = V_12;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_241 = Color_get_cyan_m4E9C84C7E1003311C2D4BDB281F2D11DF5F7FDE2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_239, L_240, L_241, /*hidden argument*/NULL);
	}

IL_0465:
	{
		// if (!useClosestDistance && closestPointIdx >= 0)
		bool L_242 = ___useClosestDistance8;
		if (L_242)
		{
			goto IL_0472;
		}
	}
	{
		int32_t L_243 = V_3;
		G_B77_0 = ((((int32_t)((((int32_t)L_243) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0473;
	}

IL_0472:
	{
		G_B77_0 = 0;
	}

IL_0473:
	{
		V_49 = (bool)G_B77_0;
		bool L_244 = V_49;
		if (!L_244)
		{
			goto IL_04ce;
		}
	}
	{
		// if (plane.Raycast(new Ray(origin, originalDirection), out centerPlaneDistance) || !centerPlaneDistance.Equals(0.0f))
		Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED * L_245 = ___plane9;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_246 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_247 = V_1;
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_248;
		memset((&L_248), 0, sizeof(L_248));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_248), L_246, L_247, /*hidden argument*/NULL);
		bool L_249 = Plane_Raycast_m04E61D7C78A5DA70F4F73F9805ABB54177B799A9((Plane_t0903921088DEEDE1BCDEA5BF279EDBCFC9679AED *)L_245, L_248, (float*)(&V_50), /*hidden argument*/NULL);
		if (L_249)
		{
			goto IL_049d;
		}
	}
	{
		bool L_250 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_50), (0.0f), /*hidden argument*/NULL);
		G_B81_0 = ((((int32_t)L_250) == ((int32_t)0))? 1 : 0);
		goto IL_049e;
	}

IL_049d:
	{
		G_B81_0 = 1;
	}

IL_049e:
	{
		V_51 = (bool)G_B81_0;
		bool L_251 = V_51;
		if (!L_251)
		{
			goto IL_04c0;
		}
	}
	{
		// closestDistance = Mathf.Clamp(centerPlaneDistance, closestDistance, farthestDistance + assetWidth * 0.5f);
		float* L_252 = ___closestDistance10;
		float L_253 = V_50;
		float* L_254 = ___closestDistance10;
		float L_255 = *((float*)L_254);
		float L_256 = V_4;
		float L_257 = ___assetWidth5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_258 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_253, L_255, ((float)il2cpp_codegen_add((float)L_256, (float)((float)il2cpp_codegen_multiply((float)L_257, (float)(0.5f))))), /*hidden argument*/NULL);
		*((float*)L_252) = (float)L_258;
		goto IL_04cd;
	}

IL_04c0:
	{
		// Debug.LogError("FindPlacementPlane: Not expected to have the center point not intersect the plane.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralACF914D58CBEED02A6B4918D9E01DD865FA4931F, /*hidden argument*/NULL);
	}

IL_04cd:
	{
	}

IL_04ce:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::IsNormalVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceMagnetism_IsNormalVertical_mF42D13EE4FB3677BBDB98B2FC92D1C0BAC87C4AE (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism_IsNormalVertical_mF42D13EE4FB3677BBDB98B2FC92D1C0BAC87C4AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool IsNormalVertical(Vector3 normal) => 1f - Mathf.Abs(normal.y) < 0.01f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___normal0;
		float L_1 = L_0.get_y_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_2 = fabsf(L_1);
		return (bool)((((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_2))) < ((float)(0.01f)))? 1 : 0);
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_MaxDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_MaxDistance_m716759AFB68AD8EAF2886DE9CA887B9516BFCDBC (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_MaxDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_MaxDistance_m573DA8A6D790C3CEE0F8B841AA771E11F2A8E00A (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::get_CloseDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SurfaceMagnetism_get_CloseDistance_m90825C93C7905922DAFA5E91CBFCCC01315040B1 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// get { return closestDistance; }
		float L_0 = __this->get_closestDistance_15();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return closestDistance; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::set_CloseDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_CloseDistance_mAE3C39C6E6C6CF89A145B26E6CE3DEFFD632C51E (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { closestDistance = value; }
		float L_0 = ___value0;
		__this->set_closestDistance_15(L_0);
		// set { closestDistance = value; }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceMagnetism__ctor_m4FF17D2334C99590F580CCD2B6C69558F5D03B99 (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceMagnetism__ctor_m4FF17D2334C99590F580CCD2B6C69558F5D03B99_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_13(L_1);
		// private float maxRaycastDistance = 50.0f;
		__this->set_maxRaycastDistance_14((50.0f));
		// private float closestDistance = 0.5f;
		__this->set_closestDistance_15((0.5f));
		// private float surfaceNormalOffset = 0.5f;
		__this->set_surfaceNormalOffset_16((0.5f));
		// private float surfaceRayOffset = 0;
		__this->set_surfaceRayOffset_17((0.0f));
		// private SceneQueryType raycastMode = SceneQueryType.SimpleRaycast;
		__this->set_raycastMode_18(0);
		// private int boxRaysPerEdge = 3;
		__this->set_boxRaysPerEdge_19(3);
		// private bool orthographicBoxCast = false;
		__this->set_orthographicBoxCast_20((bool)0);
		// private float maximumNormalVariance = 0.5f;
		__this->set_maximumNormalVariance_21((0.5f));
		// private float sphereSize = 1.0f;
		__this->set_sphereSize_22((1.0f));
		// private float volumeCastSizeOverride = 0;
		__this->set_volumeCastSizeOverride_23((0.0f));
		// private bool useLinkedAltScaleOverride = false;
		__this->set_useLinkedAltScaleOverride_24((bool)0);
		// private RaycastDirectionMode currentRaycastDirectionMode = RaycastDirectionMode.TrackedTargetForward;
		__this->set_currentRaycastDirectionMode_25(0);
		// private OrientationMode orientationMode = OrientationMode.TrackedTarget;
		__this->set_orientationMode_26(1);
		// private float orientationBlend = 0.65f;
		__this->set_orientationBlend_27((0.65f));
		// private bool keepOrientationVertical = true;
		__this->set_keepOrientationVertical_28((bool)1);
		// private bool debugEnabled = false;
		__this->set_debugEnabled_29((bool)0);
		// private RayStep currentRayStep = new RayStep();
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_3 = __this->get_address_of_currentRayStep_32();
		il2cpp_codegen_initobj(L_3, sizeof(RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 ));
		Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077(__this, /*hidden argument*/NULL);
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
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_AutoStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mE675094086D1E8C981094EB0AF5230F35448D80D (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_13();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_AutoStart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_AutoStart_mFB3902384C035A3C90ACAB1037AB72E94FD29F30 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => autoStart = value;
		bool L_0 = ___value0;
		__this->set_autoStart_13(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DefaultPlacementDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m0D84CBDB4C3E937ABFA03EB992AA28A57E05837F (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_14();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_DefaultPlacementDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DefaultPlacementDistance_m7F6F54AC68923C667F92D7223814167ABDFCE3FD (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => defaultPlacementDistance = value;
		float L_0 = ___value0;
		__this->set_defaultPlacementDistance_14(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MaxRaycastDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m623F8AAAD5E4D7C6AEE924BDC44C5F77ADFB213F (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_MaxRaycastDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MaxRaycastDistance_m1C015169B313E644DF3DD5C626CDE1717A46AAA7 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set => maxRaycastDistance = value;
		float L_0 = ___value0;
		__this->set_maxRaycastDistance_15(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsBeingPlaced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m348BCCFB3EB83D6434A976DBBB815C4F76E6DE3F (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_IsBeingPlaced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_mA5C1201B5520C8E537C4D471C528E835BFBAA4FF (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_SurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m3DFD30899BF1FA577868CFDBE33B8D4351462E38 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_SurfaceNormalOffset(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_SurfaceNormalOffset_m6EED862192CB4D629DFB7D1BDD99FAB014B0EAB1 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_set_SurfaceNormalOffset_m6EED862192CB4D629DFB7D1BDD99FAB014B0EAB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(!UseDefaultSurfaceNormalOffset, $"The new value for SurfaceNormalOffset on the Tap to Place object will not be applied because UseDefaultSurfaceNormalOffset is true, set UseDefaultSurfaceNormalOffset to false.");
		bool L_0 = TapToPlace_get_UseDefaultSurfaceNormalOffset_m482FE4AF50A4CE022E578E258A7D45D5B1C700F0_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), _stringLiteral73D602FC6589B323CB25EF3AB5EC890722F0462E, /*hidden argument*/NULL);
		// surfaceNormalOffset = value;
		float L_1 = ___value0;
		__this->set_surfaceNormalOffset_17(L_1);
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_UseDefaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m482FE4AF50A4CE022E578E258A7D45D5B1C700F0 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->get_useDefaultSurfaceNormalOffset_18();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_UseDefaultSurfaceNormalOffset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_UseDefaultSurfaceNormalOffset_m3BF4C61F0BD0EFBCF5329912DEC40A7845A7EC44 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => useDefaultSurfaceNormalOffset = value;
		bool L_0 = ___value0;
		__this->set_useDefaultSurfaceNormalOffset_18(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_KeepOrientationVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m5992288009A8A423B91FAF116E730846E9101B3C (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_19();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_KeepOrientationVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_KeepOrientationVertical_mF5463609D7D792FD552A44785C4D8F67B1593246 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => keepOrientationVertical = value;
		bool L_0 = ___value0;
		__this->set_keepOrientationVertical_19(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_RotateAccordingToSurface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_RotateAccordingToSurface_m8DBDFFA2EF1E82EE9761ADD54DF56E2058F54D08 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => rotateAccordingToSurface;
		bool L_0 = __this->get_rotateAccordingToSurface_20();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_RotateAccordingToSurface(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_RotateAccordingToSurface_m51C3AF193875812F529A601B91CFD8DE3DD805A5 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => rotateAccordingToSurface = value;
		bool L_0 = ___value0;
		__this->set_rotateAccordingToSurface_20(L_0);
		return;
	}
}
// UnityEngine.LayerMask[] Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_MagneticSurfaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_m8F188D5D0C05268FCD44B3565D5FDBBFBB72F154 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_21();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_MagneticSurfaces(UnityEngine.LayerMask[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_MagneticSurfaces_m49EEE53800C0090C99E6CD61D0A314CAC56141F5 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* ___value0, const RuntimeMethod* method)
{
	{
		// set => magneticSurfaces = value;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = ___value0;
		__this->set_magneticSurfaces_21(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_DebugEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_DebugEnabled_mC71C804D58B2B86C24C342EA64F3B5CA2A9F2239 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_22();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_DebugEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_DebugEnabled_mB75783FC8969657A5FEF4706009663C6E8BC5F66 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => debugEnabled = value;
		bool L_0 = ___value0;
		__this->set_debugEnabled_22(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m0BBD72B3257646E64D808EAE61731EE5064B73D7 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStarted_23();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_OnPlacingStarted(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStarted_m658908140C98E5B2D88CA2D27DBFB0D2825561F1 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStarted = value;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onPlacingStarted_23(L_0);
		return;
	}
}
// UnityEngine.Events.UnityEvent Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_OnPlacingStopped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_m60880F67A9462B70419EAB9DC3DE980BCFE97082 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStopped_24();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_OnPlacingStopped(UnityEngine.Events.UnityEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_OnPlacingStopped_mD7BC2C6A0D0EEC294B4A7C8931B156E1FD10B931 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___value0, const RuntimeMethod* method)
{
	{
		// set => onPlacingStopped = value;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = ___value0;
		__this->set_onPlacingStopped_24(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_GameObjectLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m2DF512D58B09E285A1890CA236F8E625D590BF63 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::set_GameObjectLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m1BD3DFCC099D6C80D0AE2559576A63B8FD30E82C (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_IsColliderPresent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TapToPlace_get_IsColliderPresent_mE464DA1626A9BC121799D7B04979D042BFB3E52D (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_get_IsColliderPresent_mE464DA1626A9BC121799D7B04979D042BFB3E52D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// protected internal bool IsColliderPresent => gameObject != null && gameObject.GetComponent<Collider>() != null;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_3 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_2, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return (bool)G_B3_0;
	}
}
// System.Single Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::get_defaultSurfaceNormalOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TapToPlace_get_defaultSurfaceNormalOffset_m48B37A29846BE7BC4A94EA420F87256A34115E37 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_get_defaultSurfaceNormalOffset_m48B37A29846BE7BC4A94EA420F87256A34115E37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private float defaultSurfaceNormalOffset => gameObject.GetComponent<Collider>().bounds.extents.z;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_0, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		NullCheck(L_1);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_2 = Collider_get_bounds_mD3CB68E38FB998406193A88D18C01F510272058A(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_z_4();
		return L_4;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_Start_mA115017039E3534D3BEB5CA31BE14E73D61F2812 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_Start_mA115017039E3534D3BEB5CA31BE14E73D61F2812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// base.Start();
		Solver_Start_mCB1F0A3A2CD41A1A8C366B2B6EC3D0A8DAD71C74(__this, /*hidden argument*/NULL);
		// Debug.Assert(IsColliderPresent, $"The game object {gameObject.name} does not have a collider attached, please attach a collider to use Tap to Place");
		bool L_0 = TapToPlace_get_IsColliderPresent_mE464DA1626A9BC121799D7B04979D042BFB3E52D(__this, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralD33E0DFEC468C7B19CACF875ACED4277DD39E045, L_2, _stringLiteral787C1414705A5BB205FC61C22B67643D57F90A57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_0, L_3, /*hidden argument*/NULL);
		// UnityPhysics.SyncTransforms();
		Physics_SyncTransforms_mCC0AB451C1384416298E5FAEF4E818503929AE58(/*hidden argument*/NULL);
		// ignoreRaycastLayer = LayerMask.NameToLayer("Ignore Raycast");
		int32_t L_4 = LayerMask_NameToLayer_m6491D9EA75F68B1F8AE15A9B4F193FFB9352B901(_stringLiteralB77BEAEBB0343C40DD9CDA270E3835797BAB5BA9, /*hidden argument*/NULL);
		__this->set_ignoreRaycastLayer_26(L_4);
		// startCalled = true;
		__this->set_startCalled_32((bool)1);
		// if (AutoStart || placementRequested)
		bool L_5 = TapToPlace_get_AutoStart_mE675094086D1E8C981094EB0AF5230F35448D80D_inline(__this, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_005b;
		}
	}
	{
		bool L_6 = __this->get_placementRequested_33();
		G_B3_0 = ((int32_t)(L_6));
		goto IL_005c;
	}

IL_005b:
	{
		G_B3_0 = 1;
	}

IL_005c:
	{
		V_0 = (bool)G_B3_0;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m17CC1BA56E14964D481963A2C2B2EA612CD7FD80(__this, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_006b:
	{
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_8 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_8);
		SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0_inline(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnDisable_mF04F684BACFD389B51A52392A268D4767FB0ECCA (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_OnDisable_mF04F684BACFD389B51A52392A268D4767FB0ECCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m9EFF18C8C4ADBC30606C0AFFFE729A4233C5B4B1(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t1CC0D711077526528D28237124307E0A87413A96_mD7885C37BD9F1F9C5203320C41C5D0F8D10EA28C_RuntimeMethod_var, G_B2_0, __this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StartPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StartPlacement_m17CC1BA56E14964D481963A2C2B2EA612CD7FD80 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_StartPlacement_m17CC1BA56E14964D481963A2C2B2EA612CD7FD80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B5_0 = NULL;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B4_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	{
		// if (!startCalled)
		bool L_0 = __this->get_startCalled_32();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// placementRequested = true;
		__this->set_placementRequested_33((bool)1);
		// return;
		goto IL_0084;
	}

IL_0018:
	{
		// if (!IsBeingPlaced)
		bool L_2 = TapToPlace_get_IsBeingPlaced_m348BCCFB3EB83D6434A976DBBB815C4F76E6DE3F_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		// GameObjectLayer = gameObject.layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_4, /*hidden argument*/NULL);
		TapToPlace_set_GameObjectLayer_m1BD3DFCC099D6C80D0AE2559576A63B8FD30E82C_inline(__this, L_5, /*hidden argument*/NULL);
		// gameObject.layer = ignoreRaycastLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_ignoreRaycastLayer_26();
		NullCheck(L_6);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_6, L_7, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = true;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_8 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_8);
		SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0_inline(L_8, (bool)1, /*hidden argument*/NULL);
		// IsBeingPlaced = true;
		TapToPlace_set_IsBeingPlaced_mA5C1201B5520C8E537C4D471C528E835BFBAA4FF_inline(__this, (bool)1, /*hidden argument*/NULL);
		// OnPlacingStarted?.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_9 = TapToPlace_get_OnPlacingStarted_m0BBD72B3257646E64D808EAE61731EE5064B73D7_inline(__this, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_10 = L_9;
		G_B4_0 = L_10;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_006b;
		}
	}
	{
		goto IL_0071;
	}

IL_006b:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B5_0, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// CoreServices.InputSystem?.RegisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = CoreServices_get_InputSystem_m9EFF18C8C4ADBC30606C0AFFFE729A4233C5B4B1(/*hidden argument*/NULL);
		RuntimeObject* L_12 = L_11;
		G_B7_0 = L_12;
		if (L_12)
		{
			G_B8_0 = L_12;
			goto IL_007c;
		}
	}
	{
		goto IL_0083;
	}

IL_007c:
	{
		NullCheck(G_B8_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_RegisterHandler_TisIMixedRealityPointerHandler_t1CC0D711077526528D28237124307E0A87413A96_mE70BFAB467C51859DCFD8A78B6A5871C1D822D2E_RuntimeMethod_var, G_B8_0, __this);
	}

IL_0083:
	{
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::StopPlacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_StopPlacement_m69A27ABC3B825CBCF8F7060DE229D7425D795F89 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_StopPlacement_m69A27ABC3B825CBCF8F7060DE229D7425D795F89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B3_0 = NULL;
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * G_B2_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// if (IsBeingPlaced)
		bool L_0 = TapToPlace_get_IsBeingPlaced_m348BCCFB3EB83D6434A976DBBB815C4F76E6DE3F_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0058;
		}
	}
	{
		// gameObject.layer = GameObjectLayer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		int32_t L_3 = TapToPlace_get_GameObjectLayer_m2DF512D58B09E285A1890CA236F8E625D590BF63_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_2, L_3, /*hidden argument*/NULL);
		// SolverHandler.UpdateSolvers = false;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_4 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_4);
		SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0_inline(L_4, (bool)0, /*hidden argument*/NULL);
		// IsBeingPlaced = false;
		TapToPlace_set_IsBeingPlaced_mA5C1201B5520C8E537C4D471C528E835BFBAA4FF_inline(__this, (bool)0, /*hidden argument*/NULL);
		// OnPlacingStopped?.Invoke();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_5 = TapToPlace_get_OnPlacingStopped_m60880F67A9462B70419EAB9DC3DE980BCFE97082_inline(__this, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_6 = L_5;
		G_B2_0 = L_6;
		if (L_6)
		{
			G_B3_0 = L_6;
			goto IL_003f;
		}
	}
	{
		goto IL_0045;
	}

IL_003f:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(G_B3_0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// CoreServices.InputSystem?.UnregisterHandler<IMixedRealityPointerHandler>(this);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = CoreServices_get_InputSystem_m9EFF18C8C4ADBC30606C0AFFFE729A4233C5B4B1(/*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0050;
		}
	}
	{
		goto IL_0057;
	}

IL_0050:
	{
		NullCheck(G_B6_0);
		GenericInterfaceActionInvoker1< RuntimeObject* >::Invoke(IMixedRealityEventSystem_UnregisterHandler_TisIMixedRealityPointerHandler_t1CC0D711077526528D28237124307E0A87413A96_mD7885C37BD9F1F9C5203320C41C5D0F8D10EA28C_RuntimeMethod_var, G_B6_0, __this);
	}

IL_0057:
	{
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SolverUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SolverUpdate_mAAE0691045B1DE58337A80569F280E68CEA8075F (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SolverUpdate_mAAE0691045B1DE58337A80569F280E68CEA8075F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SolverHandler.TransformTarget != null)
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// PerformRaycast();
		VirtActionInvoker0::Invoke(18 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::PerformRaycast() */, __this);
		// SetPosition();
		VirtActionInvoker0::Invoke(19 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetPosition() */, __this);
		// SetRotation();
		VirtActionInvoker0::Invoke(20 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetRotation() */, __this);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::PerformRaycast()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_PerformRaycast_m8C3C83693E7E008A4B363AC271AEFB66B6EE2590 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_PerformRaycast_m8C3C83693E7E008A4B363AC271AEFB66B6EE2590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var transform = SolverHandler.TransformTarget;
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_0 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 origin = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = V_0;
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Vector3 endpoint = transform.position + transform.forward;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = V_0;
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = V_0;
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_5, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// CurrentRay.UpdateRayStep(ref origin, ref endpoint);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_9 = __this->get_address_of_CurrentRay_27();
		RayStep_UpdateRayStep_m7698792F824A2DF6B256FEBE538C953F072DF479((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_9, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		// DidHitSurface = MixedRealityRaycaster.RaycastSimplePhysicsStep(CurrentRay, MaxRaycastDistance, MagneticSurfaces, false, out CurrentHit);
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258  L_10 = __this->get_CurrentRay_27();
		float L_11 = TapToPlace_get_MaxRaycastDistance_m623F8AAAD5E4D7C6AEE924BDC44C5F77ADFB213F_inline(__this, /*hidden argument*/NULL);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_12 = TapToPlace_get_MagneticSurfaces_m8F188D5D0C05268FCD44B3565D5FDBBFBB72F154_inline(__this, /*hidden argument*/NULL);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_13 = __this->get_address_of_CurrentHit_29();
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityRaycaster_t47BFF3EED078208D092DAAA9A9A6BCD47F8C5660_il2cpp_TypeInfo_var);
		bool L_14 = MixedRealityRaycaster_RaycastSimplePhysicsStep_mE3608D5EBCBB17E4B2DFB19673125CAD16199642(L_10, L_11, L_12, (bool)0, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_13, /*hidden argument*/NULL);
		__this->set_DidHitSurface_28(L_14);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetPosition_m4F269E62677A0CAFCC32157639C332BFCA22EF47 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SetPosition_m4F269E62677A0CAFCC32157639C332BFCA22EF47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (DidHitSurface)
		bool L_0 = __this->get_DidHitSurface_28();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// GoalPosition = CurrentHit.point;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_2 = __this->get_address_of_CurrentHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = RaycastHit_get_point_m0E564B2A72C7A744B889AE9D596F3EFA55059001((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_2, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_3, /*hidden argument*/NULL);
		// float currentSurfaceNormalOffset = UseDefaultSurfaceNormalOffset ? defaultSurfaceNormalOffset : SurfaceNormalOffset;
		bool L_4 = TapToPlace_get_UseDefaultSurfaceNormalOffset_m482FE4AF50A4CE022E578E258A7D45D5B1C700F0_inline(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_002e;
		}
	}
	{
		float L_5 = TapToPlace_get_SurfaceNormalOffset_m3DFD30899BF1FA577868CFDBE33B8D4351462E38_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		goto IL_0034;
	}

IL_002e:
	{
		float L_6 = TapToPlace_get_defaultSurfaceNormalOffset_m48B37A29846BE7BC4A94EA420F87256A34115E37(__this, /*hidden argument*/NULL);
		G_B4_0 = L_6;
	}

IL_0034:
	{
		V_1 = G_B4_0;
		// AddOffset(CurrentHit.normal * currentSurfaceNormalOffset);
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_7 = __this->get_address_of_CurrentHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_7, /*hidden argument*/NULL);
		float L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_8, L_9, /*hidden argument*/NULL);
		VirtActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.Solver::AddOffset(UnityEngine.Vector3) */, __this, L_10);
		goto IL_0089;
	}

IL_0050:
	{
		// GoalPosition = SolverHandler.TransformTarget.position + (SolverHandler.TransformTarget.forward * DefaultPlacementDistance);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_11 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * L_14 = ((Solver_tC72D3D829F7C51CF34ED31BE67F6893AF412F2AF *)__this)->get_SolverHandler_12();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = SolverHandler_get_TransformTarget_m70CBAFF1A4304C1160AC0907C5A3F17F1BB84C81(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_15, /*hidden argument*/NULL);
		float L_17 = TapToPlace_get_DefaultPlacementDistance_m0D84CBDB4C3E937ABFA03EB992AA28A57E05837F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_18, /*hidden argument*/NULL);
		Solver_set_GoalPosition_m9403B008E84C01E3A3D6F4A2BDFAF068260E757D(__this, L_19, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::SetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_SetRotation_mB3C9579915AF909F079ED354836B113B40D17BE8 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace_SetRotation_mB3C9579915AF909F079ED354836B113B40D17BE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// Vector3 direction = CurrentRay.Direction;
		RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * L_0 = __this->get_address_of_CurrentRay_27();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline((RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 *)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 surfaceNormal = CurrentHit.normal;
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_2 = __this->get_address_of_CurrentHit_29();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = RaycastHit_get_normal_mF736A6D09D98D63AB7E5BF10F38AEBFC177A1D94((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (KeepOrientationVertical)
		bool L_4 = TapToPlace_get_KeepOrientationVertical_m5992288009A8A423B91FAF116E730846E9101B3C_inline(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// direction.y = 0;
		(&V_0)->set_y_3((0.0f));
		// surfaceNormal.y = 0;
		(&V_1)->set_y_3((0.0f));
	}

IL_003d:
	{
		// if (DidHitSurface && rotateAccordingToSurface)
		bool L_6 = __this->get_DidHitSurface_28();
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		bool L_7 = __this->get_rotateAccordingToSurface_20();
		G_B5_0 = ((int32_t)(L_7));
		goto IL_004e;
	}

IL_004d:
	{
		G_B5_0 = 0;
	}

IL_004e:
	{
		V_3 = (bool)G_B5_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		// GoalRotation = Quaternion.LookRotation(-surfaceNormal, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_9, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_10, L_11, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_12, /*hidden argument*/NULL);
		goto IL_0081;
	}

IL_006d:
	{
		// GoalRotation = Quaternion.LookRotation(direction, Vector3.up);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_LookRotation_m7BED8FBB457FF073F183AC7962264E5110794672(L_13, L_14, /*hidden argument*/NULL);
		Solver_set_GoalRotation_m7300D5D0731788265AD39522CFF3F8D8D936C422(__this, L_15, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerDown(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerDown_mB7F7117E79DBE833E8845547C780536E948BFF7C (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerDragged(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerDragged_mBBB3849629F039C65153334546B7732CB32F2CAC (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDragged(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerUp(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerUp_m702258E81D1831218DDC7EE3F57BAA396C7FF280 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerUp(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::OnPointerClicked(Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace_OnPointerClicked_m3299C910D5E83D710B37439AC34DCED90CCED295 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, MixedRealityPointerEventData_t321BA89D6A35F78BC57F05A1FD8BC29BB8005C29 * ___eventData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if ((Time.time - LastTimeClicked) < DoubleClickTimeout)
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = __this->get_LastTimeClicked_30();
		float L_2 = __this->get_DoubleClickTimeout_31();
		V_0 = (bool)((((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) < ((float)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0048;
	}

IL_001c:
	{
		// if (!IsBeingPlaced)
		bool L_4 = TapToPlace_get_IsBeingPlaced_m348BCCFB3EB83D6434A976DBBB815C4F76E6DE3F_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// StartPlacement();
		TapToPlace_StartPlacement_m17CC1BA56E14964D481963A2C2B2EA612CD7FD80(__this, /*hidden argument*/NULL);
		goto IL_003d;
	}

IL_0034:
	{
		// StopPlacement();
		TapToPlace_StopPlacement_m69A27ABC3B825CBCF8F7060DE229D7425D795F89(__this, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// LastTimeClicked = Time.time;
		float L_6 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set_LastTimeClicked_30(L_6);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.Solvers.TapToPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapToPlace__ctor_mD7C30E353C299223963A7FC592445C7180CCA511 (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TapToPlace__ctor_mD7C30E353C299223963A7FC592445C7180CCA511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool autoStart = false;
		__this->set_autoStart_13((bool)0);
		// private float defaultPlacementDistance = 1.5f;
		__this->set_defaultPlacementDistance_14((1.5f));
		// private float maxRaycastDistance = 20.0f;
		__this->set_maxRaycastDistance_15((20.0f));
		// private float surfaceNormalOffset = 0.0f;
		__this->set_surfaceNormalOffset_17((0.0f));
		// private bool useDefaultSurfaceNormalOffset = true;
		__this->set_useDefaultSurfaceNormalOffset_18((bool)1);
		// private bool keepOrientationVertical = false;
		__this->set_keepOrientationVertical_19((bool)0);
		// private bool rotateAccordingToSurface = false;
		__this->set_rotateAccordingToSurface_20((bool)0);
		// private LayerMask[] magneticSurfaces = { UnityEngine.Physics.DefaultRaycastLayers };
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = (LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D*)SZArrayNew(LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D_il2cpp_TypeInfo_var, (uint32_t)1);
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_1 = L_0;
		LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  L_2 = LayerMask_op_Implicit_m3F256A7D96C66548F5B62C4621B9725301850300(((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 )L_2);
		__this->set_magneticSurfaces_21(L_1);
		// private bool debugEnabled = true;
		__this->set_debugEnabled_22((bool)1);
		// private UnityEvent onPlacingStarted = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_3, /*hidden argument*/NULL);
		__this->set_onPlacingStarted_23(L_3);
		// private UnityEvent onPlacingStopped = new UnityEvent();
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_4 = (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F *)il2cpp_codegen_object_new(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(L_4, /*hidden argument*/NULL);
		__this->set_onPlacingStopped_24(L_4);
		// protected float LastTimeClicked = 0;
		__this->set_LastTimeClicked_30((0.0f));
		// protected float DoubleClickTimeout = 0.5f;
		__this->set_DoubleClickTimeout_31((0.5f));
		Solver__ctor_m04DFD4E063ABDE3D557EB26A414FE681D4A66077(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::ConfigureGrid(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_ConfigureGrid_m117782F94F92FCE558D329491F5A1710AF0416F3 (TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82 * __this, int32_t ___columns0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___tileSize1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___gutters2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___layouDirection3, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___startPosition4, bool ___centered5, const RuntimeMethod* method)
{
	{
		// Columns = columns;
		int32_t L_0 = ___columns0;
		__this->set_Columns_4(L_0);
		// TileSize = tileSize;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___tileSize1;
		__this->set_TileSize_5(L_1);
		// Gutters = gutters;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___gutters2;
		__this->set_Gutters_6(L_2);
		// LayoutDireciton = layouDirection;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___layouDirection3;
		__this->set_LayoutDireciton_7(L_3);
		// StartPosition = startPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___startPosition4;
		__this->set_StartPosition_8(L_4);
		// Centered = centered;
		bool L_5 = ___centered5;
		__this->set_Centered_9(L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_OnValidate_m369623DE951D0A2CADD46053C8B56FF333F17709 (TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Start_m691CEDD0C7E7D3473F9392774CAB61FBA69BB4EC (TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82 * __this, const RuntimeMethod* method)
{
	{
		// editorUpdated = true;
		__this->set_editorUpdated_13((bool)1);
		// }
		return;
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TileGridObjectCollection_GetListPosition_m1BB305DD11B4128E43C782303B923D559785CFE4 (TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_GetListPosition_m1BB305DD11B4128E43C782303B923D559785CFE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	float G_B6_0 = 0.0f;
	{
		// int column = index % Columns;
		int32_t L_0 = ___index0;
		int32_t L_1 = __this->get_Columns_4();
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)L_1));
		// int row = Columns > 0 ? Mathf.FloorToInt(index / Columns) : index;
		int32_t L_2 = __this->get_Columns_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___index0;
		G_B3_0 = L_3;
		goto IL_0024;
	}

IL_0016:
	{
		int32_t L_4 = ___index0;
		int32_t L_5 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_6 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C((((float)((float)((int32_t)((int32_t)L_4/(int32_t)L_5))))), /*hidden argument*/NULL);
		G_B3_0 = L_6;
	}

IL_0024:
	{
		V_1 = G_B3_0;
		// Vector3 size = Vector3.Scale(TileSize + Gutters, LayoutDireciton);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_Gutters_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		// float xPos = size.x * column;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = L_12.get_x_2();
		int32_t L_14 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14)))));
		// float yPos = size.y * row;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_2;
		float L_16 = L_15.get_y_3();
		int32_t L_17 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply((float)L_16, (float)(((float)((float)L_17)))));
		// float zPos = DepthCalculatedBy == GridDivisions.Rows ? size.z * row : size.z * column;
		int32_t L_18 = __this->get_DepthCalculatedBy_10();
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_z_4();
		int32_t L_21 = V_0;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_20, (float)(((float)((float)L_21)))));
		goto IL_0073;
	}

IL_006a:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_2;
		float L_23 = L_22.get_z_4();
		int32_t L_24 = V_1;
		G_B6_0 = ((float)il2cpp_codegen_multiply((float)L_23, (float)(((float)((float)L_24)))));
	}

IL_0073:
	{
		V_5 = G_B6_0;
		// return new Vector3(xPos, yPos, zPos);
		float L_25 = V_3;
		float L_26 = V_4;
		float L_27 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_28), L_25, L_26, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_6;
		return L_29;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection_Update_m90FBE8E1EAC0CA2FBC24F967F96F9401BFAC9D3B (TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection_Update_m90FBE8E1EAC0CA2FBC24F967F96F9401BFAC9D3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_4 = NULL;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// if ((Application.isPlaying || !OnlyInEditMode) || editorUpdated)
		bool L_0 = Application_get_isPlaying_mF43B519662E7433DD90D883E5AE22EC3CFB65CA5(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->get_OnlyInEditMode_11();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->get_editorUpdated_13();
		G_B4_0 = ((int32_t)(L_2));
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0104;
		}
	}
	{
		// int childCount = transform.childCount;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (Centered)
		bool L_6 = __this->get_Centered_9();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0088;
		}
	}
	{
		// offSet = GetListPosition(Mathf.CeilToInt(childCount / Columns) * Columns - 1) * -0.5f + Vector3.Scale(TileSize, LayoutDireciton) * -0.5f;
		int32_t L_8 = V_1;
		int32_t L_9 = __this->get_Columns_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_10 = Mathf_CeilToInt_m0230CCC7CC9266F18125D9425C38A25D1CA4275B((((float)((float)((int32_t)((int32_t)L_8/(int32_t)L_9))))), /*hidden argument*/NULL);
		int32_t L_11 = __this->get_Columns_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), (int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_12, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_14, L_15, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_16, (-0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_13, L_17, /*hidden argument*/NULL);
		__this->set_offSet_12(L_18);
		goto IL_0095;
	}

IL_0088:
	{
		// offSet = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offSet_12(L_19);
	}

IL_0095:
	{
		// for (int i = 0; i < childCount; i++)
		V_3 = 0;
		goto IL_00f2;
	}

IL_0099:
	{
		// Transform item = transform.GetChild(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// item.localPosition = StartPosition + offSet + (Vector3.Scale(TileSize, LayoutDireciton) * 0.5f) + GetListPosition(i);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = __this->get_StartPosition_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = __this->get_offSet_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = __this->get_TileSize_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = __this->get_LayoutDireciton_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Vector3_Scale_m77004B226483C7644B3F4A46B950589EE8F88775(L_27, L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, (0.5f), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_26, L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = VirtFuncInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , int32_t >::Invoke(7 /* UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::GetListPosition(System.Int32) */, __this, L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_33, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_23, L_34, /*hidden argument*/NULL);
		// for (int i = 0; i < childCount; i++)
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00f2:
	{
		// for (int i = 0; i < childCount; i++)
		int32_t L_36 = V_3;
		int32_t L_37 = V_1;
		V_5 = (bool)((((int32_t)L_36) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_5;
		if (L_38)
		{
			goto IL_0099;
		}
	}
	{
		// editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Utilities.TileGridObjectCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileGridObjectCollection__ctor_m7FCB55CF7374500CF57517B83F908ABD572B53CE (TileGridObjectCollection_t1CD4DCDAA5D5BDAED44FDCCA93C836881E546A82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TileGridObjectCollection__ctor_m7FCB55CF7374500CF57517B83F908ABD572B53CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected int Columns = 4;
		__this->set_Columns_4(4);
		// protected Vector3 TileSize = new Vector3(0.1f, 0.1f, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_0), (0.1f), (0.1f), (0.0f), /*hidden argument*/NULL);
		__this->set_TileSize_5(L_0);
		// protected Vector3 Gutters = new Vector3(0.005f, 0.005f, 0.005f);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_1), (0.005f), (0.005f), (0.005f), /*hidden argument*/NULL);
		__this->set_Gutters_6(L_1);
		// protected Vector3 LayoutDireciton = new Vector3(1, -1, 0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_2), (1.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_LayoutDireciton_7(L_2);
		// protected Vector3 StartPosition = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_StartPosition_8(L_3);
		// protected bool Centered = false;
		__this->set_Centered_9((bool)0);
		// protected GridDivisions DepthCalculatedBy = GridDivisions.Rows;
		__this->set_DepthCalculatedBy_10(0);
		// protected bool OnlyInEditMode = false;
		__this->set_OnlyInEditMode_11((bool)0);
		// protected bool editorUpdated = false;
		__this->set_editorUpdated_13((bool)0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalPosition_mF0014DD8E12310916D7E8CACB8474E847F255ACB_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalPositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float SolverHandler_get_DeltaTime_mB49AFE2CA488A6180E222356A26C0DB0C1AB89E4_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = __this->get_U3CDeltaTimeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool RadialView_get_UseFixedVerticalPosition_mFF4BF50C8718DF67EDF3B5B10A94E3DD85E445DC_inline (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => useFixedVerticalPosition;
		bool L_0 = __this->get_useFixedVerticalPosition_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float RadialView_get_FixedVerticalPosition_mB6C3B212C66E3892CC9E45BE806C7AA13F3D703E_inline (RadialView_tDBD4F30BEA36BDEEC34EE794CB649DD425753DD6 * __this, const RuntimeMethod* method)
{
	{
		// get => fixedVerticalPosition;
		float L_0 = __this->get_fixedVerticalPosition_22();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalPosition_mCAA9D07CC0BFCB2AE54D3285FDA0656683D1E503_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalPosition { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalPositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SolverHandler_get_GoalRotation_m7CC782A2B148CAE1827CD01062D55411C5048DF8_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_U3CGoalRotationU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalRotation_m0085195A750DBA6588E9BD695E8DAF659105A80D_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		// public Quaternion GoalRotation { get; set; }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set_U3CGoalRotationU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_GoalScale_m7E3D68D6DD90E2E869AF83C0512A0D86494AA257_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CGoalScaleU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_GoalScale_m4B34D8D3E280C1950F170650AF964E021990E36D_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 GoalScale { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set_U3CGoalScaleU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_AltScale_m5695B8D843BCB16EA49F5CFAAFC837FB86EF063E_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  L_0 = ___value0;
		__this->set_U3CAltScaleU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_DeltaTime_m62DA25E1A388E7BF681CF610FE3B3A6CC922E9E4_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float DeltaTime { get; set; }
		float L_0 = ___value0;
		__this->set_U3CDeltaTimeU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SolverHandler_get_UpdateSolvers_mAF78F2915FBE4DA8E23A6ED6093335AC64AD6CDA_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => updateSolvers;
		bool L_0 = __this->get_updateSolvers_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedTargetType_mD715CF36A1832198F65D2644E9458C2C894286D3_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedTargetType;
		int32_t L_0 = __this->get_trackedTargetType_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_TrackedHandness_m30696C1A80D3D9E0049E582206E8D3182CD6F465_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandness;
		uint8_t L_0 = __this->get_trackedHandness_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t SolverHandler_get_PreferredTrackedHandedness_m55B3E110D9D54383CA963C00A19DD381F10B134D_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => preferredTrackedHandedness;
		uint8_t L_0 = __this->get_preferredTrackedHandedness_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SolverHandler_get_TrackedHandJoint_m33F371A69CE6F16B0D7F5974B0D235070D782275_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => trackedHandJoint;
		int32_t L_0 = __this->get_trackedHandJoint_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalOffset_m378E41C77B4CE61361DCD48F6A7995911038D895_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalOffset;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalOffset_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SolverHandler_get_AdditionalRotation_mE0B39302AE8851CD573EADCE0E1CE2023046FACE_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// get => additionalRotation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_additionalRotation_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentRaycastDirectionMode_m64059CBA457D2219997E4CF4E6DD8CCA111E5CEE_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => currentRaycastDirectionMode;
		int32_t L_0 = __this->get_currentRaycastDirectionMode_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  SolverHandler_get_AltScale_m96F1E6C1935F3F8284AFC7483A845789F5A79592_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3Smoothed AltScale { get; set; }
		Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F  L_0 = __this->get_U3CAltScaleU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3Smoothed_get_Current_m7A9D0CEB18725E8EC98588CAA979454EA6B8DA27_inline (Vector3Smoothed_t21D6BC9A19EC4F2C3CE044BD5151D53B244B6A6F * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Current { get; set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CCurrentU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_KeepOrientationVertical_mAA5DED9E580EE50E705A4058D6966B67096287C4_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_28();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_CurrentOrientationMode_m4E11FEAA068491A4074871B2F2C357F9F9050BC4_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => orientationMode;
		int32_t L_0 = __this->get_orientationMode_26();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Direction_m5F75BE6D3478C84E231ABC4F1F904D4C0F66FC67_inline (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Direction { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CDirectionU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool SurfaceMagnetism_get_DebugEnabled_m1B1D1DDDC60A941B0C70F52ECD95F85F5A66F6CE_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => debugEnabled;
		bool L_0 = __this->get_debugEnabled_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Origin_m234070F5E5791A80C57559B1330688542A2B6D7F_inline (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Origin { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3COriginU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  RayStep_get_Terminus_mFF2F8EA7BF186B548F076EB85F608E3D62B1C5F9_inline (RayStep_t87BAA396376A2268AD51DDE455061B82FD8CB258 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Terminus { get; private set; }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_U3CTerminusU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SurfaceMagnetism_get_RaycastMode_mE798CCC55BE47DDDA62261A3B8837A350E479905_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, const RuntimeMethod* method)
{
	{
		// get => raycastMode;
		int32_t L_0 = __this->get_raycastMode_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SolverHandler_set_UpdateSolvers_m1629A32B097978E93CA9AC57F6B09ABA456D09D0_inline (SolverHandler_tBDCC0D60CCD133F2C697987A2C12327668BF5501 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set => updateSolvers = value;
		bool L_0 = ___value0;
		__this->set_updateSolvers_10(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SurfaceMagnetism_set_OnSurface_m87D9A8F440E7C55E7AEE057E7DEF1E2D5E9D7A72_inline (SurfaceMagnetism_tDBA8FFAC9BB6A4CB10D02A976758E59185CDCBF7 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool OnSurface { get; private set; }
		bool L_0 = ___value0;
		__this->set_U3COnSurfaceU3Ek__BackingField_30(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_UseDefaultSurfaceNormalOffset_m482FE4AF50A4CE022E578E258A7D45D5B1C700F0_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => useDefaultSurfaceNormalOffset;
		bool L_0 = __this->get_useDefaultSurfaceNormalOffset_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_AutoStart_mE675094086D1E8C981094EB0AF5230F35448D80D_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => autoStart;
		bool L_0 = __this->get_autoStart_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_IsBeingPlaced_m348BCCFB3EB83D6434A976DBBB815C4F76E6DE3F_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = __this->get_U3CIsBeingPlacedU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_GameObjectLayer_m1BD3DFCC099D6C80D0AE2559576A63B8FD30E82C_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = ___value0;
		__this->set_U3CGameObjectLayerU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TapToPlace_set_IsBeingPlaced_mA5C1201B5520C8E537C4D471C528E835BFBAA4FF_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsBeingPlaced { get; protected set; }
		bool L_0 = ___value0;
		__this->set_U3CIsBeingPlacedU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStarted_m0BBD72B3257646E64D808EAE61731EE5064B73D7_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStarted;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStarted_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TapToPlace_get_GameObjectLayer_m2DF512D58B09E285A1890CA236F8E625D590BF63_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// protected internal int GameObjectLayer { get; protected set; }
		int32_t L_0 = __this->get_U3CGameObjectLayerU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * TapToPlace_get_OnPlacingStopped_m60880F67A9462B70419EAB9DC3DE980BCFE97082_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => onPlacingStopped;
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPlacingStopped_24();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_MaxRaycastDistance_m623F8AAAD5E4D7C6AEE924BDC44C5F77ADFB213F_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => maxRaycastDistance;
		float L_0 = __this->get_maxRaycastDistance_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* TapToPlace_get_MagneticSurfaces_m8F188D5D0C05268FCD44B3565D5FDBBFBB72F154_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => magneticSurfaces;
		LayerMaskU5BU5D_tDFC13874A022E79527D2CDF572C06EC90D0F828D* L_0 = __this->get_magneticSurfaces_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_SurfaceNormalOffset_m3DFD30899BF1FA577868CFDBE33B8D4351462E38_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => surfaceNormalOffset;
		float L_0 = __this->get_surfaceNormalOffset_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float TapToPlace_get_DefaultPlacementDistance_m0D84CBDB4C3E937ABFA03EB992AA28A57E05837F_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => defaultPlacementDistance;
		float L_0 = __this->get_defaultPlacementDistance_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool TapToPlace_get_KeepOrientationVertical_m5992288009A8A423B91FAF116E730846E9101B3C_inline (TapToPlace_tB3A516E5BFFC07684856A0F589FC51A6BCB0B78C * __this, const RuntimeMethod* method)
{
	{
		// get => keepOrientationVertical;
		bool L_0 = __this->get_keepOrientationVertical_19();
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
