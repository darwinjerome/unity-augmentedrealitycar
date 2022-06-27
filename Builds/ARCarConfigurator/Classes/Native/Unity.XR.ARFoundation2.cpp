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

// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.XR.MeshId>[]
struct SlotU5BU5D_t56CBDFF6A6A8F18AD9D12E035D7EA70B75BC6968;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>
struct HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16;
// System.Collections.Generic.IComparer`1<UnityEngine.XR.MeshInfo>
struct IComparer_1_t2E4579B4CAF418EF2407C7108C91F8ECA2C5D059;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.MeshId>
struct IEqualityComparer_1_t4C07E0D27F93A9CEEBDAF430D4BC8C3B86A8286F;
// System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct IReadOnlyDictionary_2_t3D671980177C147184FD91BF9D8208D2E6726DAF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.ARFoundation.ARTrackedImage[]
struct ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7;
// UnityEngine.XR.ARFoundation.MeshInfoComparer
struct MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71;
// UnityEngine.XR.ARFoundation.MeshQueue
struct MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F;
// UnityEngine.XR.ARFoundation.PlaneDetectionModeMaskAttribute
struct PlaneDetectionModeMaskAttribute_t3A9237B44B85C4538BDF0769B45A07A92F3F5057;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_XRModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_ARFoundation[];
IL2CPP_EXTERN_C RuntimeClass* ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyDictionary_2_t3D671980177C147184FD91BF9D8208D2E6726DAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4C0BBA0458DE42FF88B7DA3F8C0090D7328DA7D3;
IL2CPP_EXTERN_C String_t* _stringLiteral819F41F058379EB51168FF0AD732BE993FA49610;
IL2CPP_EXTERN_C String_t* _stringLiteralC0317FDF28A39899A980B1FC2366358F96B59792;
IL2CPP_EXTERN_C String_t* _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_op_Equality_mB1E224EBDE492321DA6EB235CD37E3D03B79CEF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_op_Inequality_mF5EABDCC92F2A3A52461CDA83499282636EF3751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mABC53A6E85E472E452C1F99172696B2643AE7A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m095A5BB5458DD792B73CA5FA02188971180CCFDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mBF468AAD1B35A8E1296E3412A98AB4B5C6539472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mCA9C696867FF55700ADBFD1D3C484DF96E009EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_BinarySearch_m10684FA96F8AE496298BFD84A48EFF30BF51FCCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m687F8457EA2BD8B4A998A0FB2F6E41642BADA929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mE22ED3EACEFF50E588E5AE050587B6C776EA1258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mC2DCB0E19083C1C79A1F31D6354D55D5721E90BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4BD51A5D303C6ACB72F492164A1B7A0D10A26AF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m0F043AFDB21877F2EE34CC0CDFE479A272CBB589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshInfoComparer_Compare_m43D51E49C03350763B435F77A39CE002A6A41EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_Clear_mEE7DDDCFEA169FE0D5CFAB8B8A150C1853F75366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_EnqueueUnique_mD4F92AA58F22D6280E5DA9270CA86DE7D828353C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_Remove_m05D8979F0C8CDF7FDB12E3EBD7EFEF99BA467693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_TryDequeue_m8163A19B2616CDB0D62C9A46293219BA58F61A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue__ctor_mFF91253EF7060B1E5E9E2BEAC65E585771E7CBE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshQueue_get_count_m6D039FACC8D04A2C767CB06457A406C5E6C06221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlaneDetectionModeMaskAttribute__ctor_m8B1E5CDFD265D58C8E0568779269A60C6C17B3E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseExtensions_InverseTransformDirection_m30D10D1F00928AC1DC560E31DC9536E3CA77B87C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PoseExtensions_InverseTransformPositions_mD3C1280E37E1E2C0BBC15345398422A4278CD7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_InverseTransformPose_m7508C8166573E2D0042170C4F09BFAE44A064545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_InverseTransformRay_mD6C666D44E1BF8407A2AA50118A7C90890935503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransformExtensions_TransformRay_m146923AB98EFC9BED518F02A742A628A45D3A20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360FUnity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDBUnity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_op_Equality_mB1E224EBDE492321DA6EB235CD37E3D03B79CEF3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_op_Inequality_mF5EABDCC92F2A3A52461CDA83499282636EF3751_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2AUnity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBCUnity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AEUnity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshInfoComparer_Compare_m43D51E49C03350763B435F77A39CE002A6A41EDA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429FUnity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36Unity_XR_ARFoundation2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_Clear_mEE7DDDCFEA169FE0D5CFAB8B8A150C1853F75366_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_EnqueueUnique_mD4F92AA58F22D6280E5DA9270CA86DE7D828353C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_Remove_m05D8979F0C8CDF7FDB12E3EBD7EFEF99BA467693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_TryDequeue_m8163A19B2616CDB0D62C9A46293219BA58F61A22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue__ctor_mFF91253EF7060B1E5E9E2BEAC65E585771E7CBE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshQueue_get_count_m6D039FACC8D04A2C767CB06457A406C5E6C06221_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlaneDetectionModeMaskAttribute__ctor_m8B1E5CDFD265D58C8E0568779269A60C6C17B3E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseExtensions_InverseTransformDirection_m30D10D1F00928AC1DC560E31DC9536E3CA77B87C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseExtensions_InverseTransformPositions_mD3C1280E37E1E2C0BBC15345398422A4278CD7D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_InverseTransformPose_m7508C8166573E2D0042170C4F09BFAE44A064545_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_InverseTransformRay_mD6C666D44E1BF8407A2AA50118A7C90890935503_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformExtensions_TransformRay_m146923AB98EFC9BED518F02A742A628A45D3A20A_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2;

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


// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>
struct  HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t56CBDFF6A6A8F18AD9D12E035D7EA70B75BC6968* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____slots_8)); }
	inline SlotU5BU5D_t56CBDFF6A6A8F18AD9D12E035D7EA70B75BC6968* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t56CBDFF6A6A8F18AD9D12E035D7EA70B75BC6968** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t56CBDFF6A6A8F18AD9D12E035D7EA70B75BC6968* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


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


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>
struct  List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D, ____items_1)); }
	inline ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7* get__items_1() const { return ____items_1; }
	inline ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D_StaticFields, ____emptyArray_5)); }
	inline ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARTrackedImageU5BU5D_tA6A5BBBE1F5B60CE74B711598C5941C9FA9C8AD7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct  List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____items_1)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__items_1() const { return ____items_1; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields, ____emptyArray_5)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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

// UnityEngine.XR.ARFoundation.ARUpdateOrder
struct  ARUpdateOrder_tB3C139C05CE2ABB9C0D32183CC7B9E1FBE15CBEB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARFoundation.MeshInfoComparer
struct  MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARFoundation.MeshQueue
struct  MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> UnityEngine.XR.ARFoundation.MeshQueue::m_Queue
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___m_Queue_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId> UnityEngine.XR.ARFoundation.MeshQueue::m_MeshSet
	HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * ___m_MeshSet_1;
	// UnityEngine.XR.ARFoundation.MeshInfoComparer UnityEngine.XR.ARFoundation.MeshQueue::s_MeshInfoComparer
	MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * ___s_MeshInfoComparer_2;

public:
	inline static int32_t get_offset_of_m_Queue_0() { return static_cast<int32_t>(offsetof(MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F, ___m_Queue_0)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_m_Queue_0() const { return ___m_Queue_0; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_m_Queue_0() { return &___m_Queue_0; }
	inline void set_m_Queue_0(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___m_Queue_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Queue_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshSet_1() { return static_cast<int32_t>(offsetof(MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F, ___m_MeshSet_1)); }
	inline HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * get_m_MeshSet_1() const { return ___m_MeshSet_1; }
	inline HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 ** get_address_of_m_MeshSet_1() { return &___m_MeshSet_1; }
	inline void set_m_MeshSet_1(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * value)
	{
		___m_MeshSet_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshSet_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_MeshInfoComparer_2() { return static_cast<int32_t>(offsetof(MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F, ___s_MeshInfoComparer_2)); }
	inline MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * get_s_MeshInfoComparer_2() const { return ___s_MeshInfoComparer_2; }
	inline MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 ** get_address_of_s_MeshInfoComparer_2() { return &___s_MeshInfoComparer_2; }
	inline void set_s_MeshInfoComparer_2(MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * value)
	{
		___s_MeshInfoComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MeshInfoComparer_2), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.PoseExtensions
struct  PoseExtensions_t646B016684AEFCD8351D5138D0736F693874A49D  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.ARFoundation.TransformExtensions
struct  TransformExtensions_tC5EC4F491885D38685B0E88E82990262CE96B548  : public RuntimeObject
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


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
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


// UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct  ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<added>k__BackingField
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<updated>k__BackingField
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::<removed>k__BackingField
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_pinvoke
{
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CaddedU3Ek__BackingField_0;
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
struct ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_com
{
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CaddedU3Ek__BackingField_0;
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___U3CremovedU3Ek__BackingField_2;
};

// UnityEngine.XR.MeshId
struct  MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___s_InvalidId_0 = value;
	}
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


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
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


// UnityEngine.XR.ARFoundation.PlaneDetectionModeMaskAttribute
struct  PlaneDetectionModeMaskAttribute_t3A9237B44B85C4538BDF0769B45A07A92F3F5057  : public PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54
{
public:

public:
};


// UnityEngine.XR.MeshChangeState
struct  MeshChangeState_t42D58EE953790EC6E1609C4BEB5FC75C680D84E0 
{
public:
	// System.Int32 UnityEngine.XR.MeshChangeState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshChangeState_t42D58EE953790EC6E1609C4BEB5FC75C680D84E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.MeshInfo
struct  MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::<ChangeState>k__BackingField
	int32_t ___U3CChangeStateU3Ek__BackingField_1;
	// System.Int32 UnityEngine.XR.MeshInfo::<PriorityHint>k__BackingField
	int32_t ___U3CPriorityHintU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CChangeStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CChangeStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CChangeStateU3Ek__BackingField_1() const { return ___U3CChangeStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CChangeStateU3Ek__BackingField_1() { return &___U3CChangeStateU3Ek__BackingField_1; }
	inline void set_U3CChangeStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CChangeStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPriorityHintU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3, ___U3CPriorityHintU3Ek__BackingField_2)); }
	inline int32_t get_U3CPriorityHintU3Ek__BackingField_2() const { return ___U3CPriorityHintU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CPriorityHintU3Ek__BackingField_2() { return &___U3CPriorityHintU3Ek__BackingField_2; }
	inline void set_U3CPriorityHintU3Ek__BackingField_2(int32_t value)
	{
		___U3CPriorityHintU3Ek__BackingField_2 = value;
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


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  m_Items[1];

public:
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  value)
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


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mBF468AAD1B35A8E1296E3412A98AB4B5C6539472_gshared (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_gshared_inline (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_gshared_inline (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529_gshared (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::BinarySearch(!0,System.Collections.Generic.IComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_BinarySearch_m10684FA96F8AE496298BFD84A48EFF30BF51FCCD_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___item0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mE22ED3EACEFF50E588E5AE050587B6C776EA1258_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___item1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mABC53A6E85E472E452C1F99172696B2643AE7A2D_gshared (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0F043AFDB21877F2EE34CC0CDFE479A272CBB589_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Sort(System.Collections.Generic.IComparer`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mC2DCB0E19083C1C79A1F31D6354D55D5721E90BD_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m687F8457EA2BD8B4A998A0FB2F6E41642BADA929_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m095A5BB5458DD792B73CA5FA02188971180CCFDE_gshared (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4BD51A5D303C6ACB72F492164A1B7A0D10A26AF5_gshared (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mCA9C696867FF55700ADBFD1D3C484DF96E009EE3_gshared (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_added(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_updated(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_removed(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::.ctor(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___added0, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___updated1, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___removed2, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>::get_Count()
inline int32_t List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_inline (List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshChangeState UnityEngine.XR.MeshInfo::get_ChangeState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.MeshInfo::get_PriorityHint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.XR.MeshId UnityEngine.XR.MeshInfo::get_MeshId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Contains(!0)
inline bool HashSet_1_Contains_mBF468AAD1B35A8E1296E3412A98AB4B5C6539472 (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 *, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A , const RuntimeMethod*))HashSet_1_Contains_mBF468AAD1B35A8E1296E3412A98AB4B5C6539472_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::UpdateExisting(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___meshInfo0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::InsertNew(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___meshInfo0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Count()
inline int32_t List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_inline (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::get_Item(System.Int32)
inline MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_inline (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Remove(!0)
inline bool HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529 (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 *, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A , const RuntimeMethod*))HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.XR.MeshId::Equals(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshId_Equals_mA59C2EE90132C307BBFC93663039D1807FCB156F (MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___other0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::BinarySearch(!0,System.Collections.Generic.IComparer`1<!0>)
inline int32_t List_1_BinarySearch_m10684FA96F8AE496298BFD84A48EFF30BF51FCCD (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___item0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 , RuntimeObject*, const RuntimeMethod*))List_1_BinarySearch_m10684FA96F8AE496298BFD84A48EFF30BF51FCCD_gshared)(__this, ___item0, ___comparer1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Insert(System.Int32,!0)
inline void List_1_Insert_mE22ED3EACEFF50E588E5AE050587B6C776EA1258 (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, int32_t, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 , const RuntimeMethod*))List_1_Insert_mE22ED3EACEFF50E588E5AE050587B6C776EA1258_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Add(!0)
inline bool HashSet_1_Add_mABC53A6E85E472E452C1F99172696B2643AE7A2D (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 *, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A , const RuntimeMethod*))HashSet_1_Add_mABC53A6E85E472E452C1F99172696B2643AE7A2D_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.XR.MeshInfo::set_PriorityHint(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m0F043AFDB21877F2EE34CC0CDFE479A272CBB589 (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, int32_t, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 , const RuntimeMethod*))List_1_set_Item_m0F043AFDB21877F2EE34CC0CDFE479A272CBB589_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Sort(System.Collections.Generic.IComparer`1<!0>)
inline void List_1_Sort_mC2DCB0E19083C1C79A1F31D6354D55D5721E90BD (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, RuntimeObject*, const RuntimeMethod*))List_1_Sort_mC2DCB0E19083C1C79A1F31D6354D55D5721E90BD_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::Clear()
inline void List_1_Clear_m687F8457EA2BD8B4A998A0FB2F6E41642BADA929 (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1_Clear_m687F8457EA2BD8B4A998A0FB2F6E41642BADA929_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::Clear()
inline void HashSet_1_Clear_m095A5BB5458DD792B73CA5FA02188971180CCFDE (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 *, const RuntimeMethod*))HashSet_1_Clear_m095A5BB5458DD792B73CA5FA02188971180CCFDE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>::.ctor()
inline void List_1__ctor_m4BD51A5D303C6ACB72F492164A1B7A0D10A26AF5 (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *, const RuntimeMethod*))List_1__ctor_m4BD51A5D303C6ACB72F492164A1B7A0D10A26AF5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.XR.MeshId>::.ctor()
inline void HashSet_1__ctor_mCA9C696867FF55700ADBFD1D3C484DF96E009EE3 (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 *, const RuntimeMethod*))HashSet_1__ctor_mCA9C696867FF55700ADBFD1D3C484DF96E009EE3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.MeshInfoComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A (MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35 (PropertyAttribute_t25BFFC093C9C96E3CCF4EAB36F5DC6F937B1FA54 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.PoseExtensions::InverseTransformPosition(UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , const RuntimeMethod*))List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformDirection_m6F0513F2EC19C204F2077E3C68DD1D45317CB5F2 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_GetTransformedBy_m8E532D399330BF1B436646DFCF99200419857715 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___lhs0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.TransformExtensions::SetLayerRecursively(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, int32_t ___layer1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshal_pinvoke(const ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4& unmarshaled, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshal_pinvoke_back(const ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_pinvoke& marshaled, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4& unmarshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshal_pinvoke_cleanup(ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshal_com(const ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4& unmarshaled, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_com& marshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshal_com_back(const ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_com& marshaled, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4& unmarshaled)
{
	Exception_t* ___U3CaddedU3Ek__BackingField_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<added>k__BackingField' of type 'ARTrackedImagesChangedEventArgs'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CaddedU3Ek__BackingField_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs
IL2CPP_EXTERN_C void ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshal_com_cleanup(ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_marshaled_com& marshaled)
{
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_added()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6184));
	{
		// public List<ARTrackedImage> added { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6185));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_added(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6186));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6187));
	{
		// public List<ARTrackedImage> added { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6188));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___value0;
		__this->set_U3CaddedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_AdjustorThunk (RuntimeObject * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6189));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6190));
	{
		// public List<ARTrackedImage> updated { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6191));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_updated(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6192));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6193));
	{
		// public List<ARTrackedImage> updated { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6194));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___value0;
		__this->set_U3CupdatedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_AdjustorThunk (RuntimeObject * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_inline(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage> UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::get_removed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6195));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6196));
	{
		// public List<ARTrackedImage> removed { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6197));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = __this->get_U3CremovedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::set_removed(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6199));
	{
		// public List<ARTrackedImage> removed { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6200));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___value0;
		__this->set_U3CremovedU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_AdjustorThunk (RuntimeObject * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::.ctor(System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTrackedImage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___added0, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___updated1, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___removed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___added0), (&___updated1), (&___removed2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6201));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6202));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6203));
		// this.added = added;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6204));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___added0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6208));
		ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6208));
		// this.updated = updated;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6205));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_1 = ___updated1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6209));
		ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6209));
		// this.removed = removed;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6206));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_2 = ___removed2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6210));
		ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6210));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6207));
		return;
	}
}
IL2CPP_EXTERN_C  void ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7_AdjustorThunk (RuntimeObject * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___added0, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___updated1, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___removed2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	ARTrackedImagesChangedEventArgs__ctor_m2141532F2B65643030496A26135961AAAC09B7B7(_thisAdjusted, ___added0, ___updated1, ___removed2, method);
}
// System.Int32 UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6211));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6212));
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6213));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6214));
		// int hash = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6215));
		V_0 = 0;
		// hash = hash * 486187739 + (added == null ? 0 : added.GetHashCode());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6216));
		int32_t L_0 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6221));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_1 = ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6221));
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)486187739)));
		if (!L_1)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)486187739)));
			goto IL_0020;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6222));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_2 = ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6222));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6223));
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6223));
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B3_1, (int32_t)G_B3_0));
		// hash = hash * 486187739 + (updated == null ? 0 : updated.GetHashCode());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6217));
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6224));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_5 = ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6224));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)486187739)));
		if (!L_5)
		{
			G_B5_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)((int32_t)486187739)));
			goto IL_003f;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6225));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_6 = ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6225));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6226));
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_6);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6226));
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0040:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B6_1, (int32_t)G_B6_0));
		// hash = hash * 486187739 + (removed == null ? 0 : removed.GetHashCode());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6218));
		int32_t L_8 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6227));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_9 = ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6227));
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)486187739)));
		if (!L_9)
		{
			G_B8_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)486187739)));
			goto IL_005e;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6228));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_10 = ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6228));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6229));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6229));
		G_B9_0 = L_11;
		G_B9_1 = G_B7_0;
		goto IL_005f;
	}

IL_005e:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_005f:
	{
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)G_B9_1, (int32_t)G_B9_0));
		// return hash;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6219));
		int32_t L_12 = V_0;
		V_1 = L_12;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6220));
		int32_t L_13 = V_1;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_GetHashCode_m3E5AFDAF5F90600F988BC022DA5AE7FE3FE3E7D8(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___obj0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6230));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6231));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6232));
		// if (!(obj is ARTrackedImagesChangedEventArgs))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6233));
		RuntimeObject * L_0 = ___obj0;
		V_0 = (bool)((((int32_t)((!(((RuntimeObject*)(RuntimeObject *)((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6234));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6235));
		V_1 = (bool)0;
		goto IL_0024;
	}

IL_0015:
	{
		// return Equals((ARTrackedImagesChangedEventArgs)obj);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6236));
		RuntimeObject * L_2 = ___obj0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6238));
		bool L_3 = ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, ((*(ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)UnBox(L_2, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6238));
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6237));
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_Equals_mB479CC3E74F73684D6793A2DEC87D8E7D6E7D811(_thisAdjusted, ___obj0, method);
}
// System.String UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6239));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6240));
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	RuntimeObject * G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	RuntimeObject * G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	RuntimeObject * G_B8_0 = NULL;
	RuntimeObject * G_B8_1 = NULL;
	String_t* G_B8_2 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	RuntimeObject * G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject * G_B9_1 = NULL;
	RuntimeObject * G_B9_2 = NULL;
	String_t* G_B9_3 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6241));
		// return string.Format("Added: {0}, Updated: {1}, Removed: {2}",
		//     added == null ? 0 : added.Count,
		//     updated == null ? 0 : updated.Count,
		//     removed == null ? 0 : removed.Count);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6242));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6244));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6244));
		G_B1_0 = _stringLiteralC0317FDF28A39899A980B1FC2366358F96B59792;
		if (!L_0)
		{
			G_B2_0 = _stringLiteralC0317FDF28A39899A980B1FC2366358F96B59792;
			goto IL_001b;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6245));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_1 = ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6245));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6246));
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_inline(L_1, /*hidden argument*/List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6246));
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		int32_t L_3 = G_B3_0;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6247));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_5 = ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6247));
		G_B4_0 = L_4;
		G_B4_1 = G_B3_1;
		if (!L_5)
		{
			G_B5_0 = L_4;
			G_B5_1 = G_B3_1;
			goto IL_0036;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6248));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_6 = ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6248));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6249));
		NullCheck(L_6);
		int32_t L_7 = List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_inline(L_6, /*hidden argument*/List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6249));
		G_B6_0 = L_7;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0037;
	}

IL_0036:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0037:
	{
		int32_t L_8 = G_B6_0;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6250));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_10 = ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6250));
		G_B7_0 = L_9;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		if (!L_10)
		{
			G_B8_0 = L_9;
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			goto IL_0051;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6251));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_11 = ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6251));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6252));
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_inline(L_11, /*hidden argument*/List_1_get_Count_m42FC0445DFE94CC54CF9A352DEA766DFFA0BFA28_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6252));
		G_B9_0 = L_12;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0052;
	}

IL_0051:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0052:
	{
		int32_t L_13 = G_B9_0;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6253));
		String_t* L_15 = String_Format_m26BBF75F9609FAD0B39C2242FEBAAD7D68F14D99(G_B9_3, G_B9_2, G_B9_1, L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6253));
		V_0 = L_15;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6243));
		String_t* L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C  String_t* ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_ToString_m2F2FE85AD5338CA603D8E53425E2FEE8429F61C7(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::Equals(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___other0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6254));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6255));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6256));
		// return
		//     (added == other.added) &&
		//     (updated == other.updated) &&
		//     (removed == other.removed);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6257));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6259));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6259));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6260));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_1 = ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)(&___other0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6260));
		if ((!(((RuntimeObject*)(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *)L_0) == ((RuntimeObject*)(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *)L_1))))
		{
			goto IL_0030;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6261));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_2 = ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6261));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6262));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_3 = ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)(&___other0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6262));
		if ((!(((RuntimeObject*)(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *)L_2) == ((RuntimeObject*)(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *)L_3))))
		{
			goto IL_0030;
		}
	}
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6263));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_4 = ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6263));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6264));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_5 = ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)(&___other0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6264));
		G_B4_0 = ((((RuntimeObject*)(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *)L_4) == ((RuntimeObject*)(List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D *)L_5))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0034;
	}

IL_0034:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6258));
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A_AdjustorThunk (RuntimeObject * __this, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * _thisAdjusted = reinterpret_cast<ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *>(__this + _offset);
	return ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::op_Equality(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs,UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_op_Equality_mB1E224EBDE492321DA6EB235CD37E3D03B79CEF3 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___lhs0, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_op_Equality_mB1E224EBDE492321DA6EB235CD37E3D03B79CEF3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_op_Equality_mB1E224EBDE492321DA6EB235CD37E3D03B79CEF3_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6265));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6266));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6267));
		// return lhs.Equals(rhs);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6268));
		ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  L_0 = ___rhs1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6270));
		bool L_1 = ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6270));
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6269));
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs::op_Inequality(UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs,UnityEngine.XR.ARFoundation.ARTrackedImagesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARTrackedImagesChangedEventArgs_op_Inequality_mF5EABDCC92F2A3A52461CDA83499282636EF3751 (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___lhs0, ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_op_Inequality_mF5EABDCC92F2A3A52461CDA83499282636EF3751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___lhs0), (&___rhs1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_op_Inequality_mF5EABDCC92F2A3A52461CDA83499282636EF3751_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6271));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6272));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6273));
		// return !lhs.Equals(rhs);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6274));
		ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4  L_0 = ___rhs1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6276));
		bool L_1 = ARTrackedImagesChangedEventArgs_Equals_mC2606794E3256DB1D6B0AA506F37ABE50A68120A((ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 *)(&___lhs0), L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6276));
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6275));
		bool L_2 = V_0;
		return L_2;
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
// System.Int32 UnityEngine.XR.ARFoundation.MeshInfoComparer::Compare(UnityEngine.XR.MeshInfo,UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshInfoComparer_Compare_m43D51E49C03350763B435F77A39CE002A6A41EDA (MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___infoA0, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___infoB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshInfoComparer_Compare_m43D51E49C03350763B435F77A39CE002A6A41EDA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___infoA0), (&___infoB1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshInfoComparer_Compare_m43D51E49C03350763B435F77A39CE002A6A41EDA_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6277));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6278));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6279));
		// if (infoA.ChangeState < infoB.ChangeState)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6280));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6291));
		int32_t L_0 = MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___infoA0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6291));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6292));
		int32_t L_1 = MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___infoB1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6292));
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6281));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6282));
		// return 1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6283));
		V_1 = 1;
		goto IL_0046;
	}

IL_001a:
	{
		// else if (infoB.ChangeState < infoA.ChangeState)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6284));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6293));
		int32_t L_3 = MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___infoB1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6293));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6294));
		int32_t L_4 = MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___infoA0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6294));
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6285));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6286));
		// return -1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6287));
		V_1 = (-1);
		goto IL_0046;
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6288));
		// return (infoA.PriorityHint - infoB.PriorityHint);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6289));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6295));
		int32_t L_6 = MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___infoA0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6295));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6296));
		int32_t L_7 = MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___infoB1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6296));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_7));
		goto IL_0046;
	}

IL_0046:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6290));
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshInfoComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A (MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::EnqueueUnique(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_EnqueueUnique_mD4F92AA58F22D6280E5DA9270CA86DE7D828353C (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___meshInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_EnqueueUnique_mD4F92AA58F22D6280E5DA9270CA86DE7D828353C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___meshInfo0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_EnqueueUnique_mD4F92AA58F22D6280E5DA9270CA86DE7D828353C_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6297));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6298));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6299));
		// if (m_MeshSet.Contains(meshInfo.MeshId))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6300));
		HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * L_0 = __this->get_m_MeshSet_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6309));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_1 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___meshInfo0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6309));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6310));
		NullCheck(L_0);
		bool L_2 = HashSet_1_Contains_mBF468AAD1B35A8E1296E3412A98AB4B5C6539472(L_0, L_1, /*hidden argument*/HashSet_1_Contains_mBF468AAD1B35A8E1296E3412A98AB4B5C6539472_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6310));
		V_0 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6301));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6302));
		// UpdateExisting(meshInfo);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6303));
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_4 = ___meshInfo0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6311));
		MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1(__this, L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6311));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6304));
		goto IL_002d;
	}

IL_0023:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6305));
		// InsertNew(meshInfo);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6306));
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_5 = ___meshInfo0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6312));
		MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190(__this, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6312));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6307));
	}

IL_002d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6308));
		return;
	}
}
// System.Int32 UnityEngine.XR.ARFoundation.MeshQueue::get_count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshQueue_get_count_m6D039FACC8D04A2C767CB06457A406C5E6C06221 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_get_count_m6D039FACC8D04A2C767CB06457A406C5E6C06221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_get_count_m6D039FACC8D04A2C767CB06457A406C5E6C06221_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6313));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6314));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6315));
		// get { return m_Queue.Count; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6316));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_0 = __this->get_m_Queue_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6318));
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_inline(L_0, /*hidden argument*/List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6318));
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return m_Queue.Count; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6317));
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.MeshQueue::TryDequeue(System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>,UnityEngine.XR.MeshInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshQueue_TryDequeue_m8163A19B2616CDB0D62C9A46293219BA58F61A22 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, RuntimeObject* ___generating0, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * ___meshInfo1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_TryDequeue_m8163A19B2616CDB0D62C9A46293219BA58F61A22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___generating0), (&___meshInfo1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_TryDequeue_m8163A19B2616CDB0D62C9A46293219BA58F61A22_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6319));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6320));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6321));
		// for (int i = m_Queue.Count - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6322));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_0 = __this->get_m_Queue_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6339));
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_inline(L_0, /*hidden argument*/List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6339));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6323));
		goto IL_0060;
	}

IL_0011:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6324));
		// meshInfo = m_Queue[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6325));
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * L_2 = ___meshInfo1;
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_3 = __this->get_m_Queue_0();
		int32_t L_4 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6340));
		NullCheck(L_3);
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_5 = List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6340));
		*(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)L_2 = L_5;
		// if (!generating.ContainsKey(meshInfo.MeshId))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6326));
		RuntimeObject* L_6 = ___generating0;
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * L_7 = ___meshInfo1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6341));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_8 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)L_7, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6341));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6342));
		NullCheck(L_6);
		bool L_9 = InterfaceFuncInvoker1< bool, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>::ContainsKey(!0) */, IReadOnlyDictionary_2_t3D671980177C147184FD91BF9D8208D2E6726DAF_il2cpp_TypeInfo_var, L_6, L_8);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6342));
		V_1 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6327));
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6328));
		// m_Queue.RemoveAt(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6329));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_11 = __this->get_m_Queue_0();
		int32_t L_12 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6343));
		NullCheck(L_11);
		List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A(L_11, L_12, /*hidden argument*/List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6343));
		// m_MeshSet.Remove(meshInfo.MeshId);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6330));
		HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * L_13 = __this->get_m_MeshSet_1();
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * L_14 = ___meshInfo1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6344));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_15 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6344));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6345));
		NullCheck(L_13);
		HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529(L_13, L_15, /*hidden argument*/HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6345));
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6331));
		V_2 = (bool)1;
		goto IL_0076;
	}

IL_005b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6332));
		// for (int i = m_Queue.Count - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6333));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = m_Queue.Count - 1; i >= 0; --i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6334));
		int32_t L_17 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6335));
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0011;
		}
	}
	{
		// meshInfo = default;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6336));
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * L_19 = ___meshInfo1;
		il2cpp_codegen_initobj(L_19, sizeof(MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 ));
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6337));
		V_2 = (bool)0;
		goto IL_0076;
	}

IL_0076:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6338));
		bool L_20 = V_2;
		return L_20;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.MeshQueue::Remove(UnityEngine.XR.MeshId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MeshQueue_Remove_m05D8979F0C8CDF7FDB12E3EBD7EFEF99BA467693 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_Remove_m05D8979F0C8CDF7FDB12E3EBD7EFEF99BA467693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___meshId0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_Remove_m05D8979F0C8CDF7FDB12E3EBD7EFEF99BA467693_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6346));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6347));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6348));
		// if (!m_MeshSet.Remove(meshId))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6349));
		HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * L_0 = __this->get_m_MeshSet_1();
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_1 = ___meshId0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6366));
		NullCheck(L_0);
		bool L_2 = HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529(L_0, L_1, /*hidden argument*/HashSet_1_Remove_mA80D590A835E859E87A77A6E89C8F97EF12FC529_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6366));
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6350));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6351));
		V_1 = (bool)0;
		goto IL_006d;
	}

IL_0018:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6352));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6353));
		goto IL_0055;
	}

IL_001c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6354));
		// if (m_Queue[i].MeshId.Equals(meshId))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6355));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_4 = __this->get_m_Queue_0();
		int32_t L_5 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6367));
		NullCheck(L_4);
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_6 = List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6367));
		V_4 = L_6;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6368));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_7 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_4), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6368));
		V_5 = L_7;
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_8 = ___meshId0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6369));
		bool L_9 = MeshId_Equals_mA59C2EE90132C307BBFC93663039D1807FCB156F((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&V_5), L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6369));
		V_3 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6356));
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6357));
		// m_Queue.RemoveAt(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6358));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_11 = __this->get_m_Queue_0();
		int32_t L_12 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6370));
		NullCheck(L_11);
		List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A(L_11, L_12, /*hidden argument*/List_1_RemoveAt_mA7D0685576C972B40757DBC4441ED3B74506E15A_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6370));
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6359));
		goto IL_0069;
	}

IL_0050:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6360));
		// for (int i = 0; i < m_Queue.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6361));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0055:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6362));
		int32_t L_14 = V_2;
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_15 = __this->get_m_Queue_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6371));
		NullCheck(L_15);
		int32_t L_16 = List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_inline(L_15, /*hidden argument*/List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6371));
		V_6 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6363));
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_001c;
		}
	}

IL_0069:
	{
		// return true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6364));
		V_1 = (bool)1;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6365));
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::InsertNew(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___meshInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___meshInfo0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_InsertNew_m9244738DF6F3D8950399E93FE8C6D717CE86A190_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6372));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6373));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6374));
		// int index = m_Queue.BinarySearch(meshInfo, s_MeshInfoComparer);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6375));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_0 = __this->get_m_Queue_0();
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_1 = ___meshInfo0;
		MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * L_2 = __this->get_s_MeshInfoComparer_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6382));
		NullCheck(L_0);
		int32_t L_3 = List_1_BinarySearch_m10684FA96F8AE496298BFD84A48EFF30BF51FCCD(L_0, L_1, L_2, /*hidden argument*/List_1_BinarySearch_m10684FA96F8AE496298BFD84A48EFF30BF51FCCD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6382));
		V_0 = L_3;
		// if (index < 0)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6376));
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6377));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// index = ~index;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6378));
		int32_t L_6 = V_0;
		V_0 = ((~L_6));
	}

IL_001f:
	{
		// m_Queue.Insert(index, meshInfo);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6379));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_7 = __this->get_m_Queue_0();
		int32_t L_8 = V_0;
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_9 = ___meshInfo0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6383));
		NullCheck(L_7);
		List_1_Insert_mE22ED3EACEFF50E588E5AE050587B6C776EA1258(L_7, L_8, L_9, /*hidden argument*/List_1_Insert_mE22ED3EACEFF50E588E5AE050587B6C776EA1258_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6383));
		// m_MeshSet.Add(meshInfo.MeshId);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6380));
		HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * L_10 = __this->get_m_MeshSet_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6384));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_11 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___meshInfo0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6384));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6385));
		NullCheck(L_10);
		HashSet_1_Add_mABC53A6E85E472E452C1F99172696B2643AE7A2D(L_10, L_11, /*hidden argument*/HashSet_1_Add_mABC53A6E85E472E452C1F99172696B2643AE7A2D_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6385));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6381));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::UpdateExisting(UnityEngine.XR.MeshInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  ___meshInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___meshInfo0));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_UpdateExisting_m5BF3B4F7BE162A097A00383F69ADEE048D7B3EF1_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6386));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6387));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6388));
		// for (int i = 0; i < m_Queue.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6389));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6390));
		goto IL_007f;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6391));
		// var existing = m_Queue[i];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6392));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_0 = __this->get_m_Queue_0();
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6409));
		NullCheck(L_0);
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_2 = List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6409));
		V_1 = L_2;
		// if (existing.MeshId.Equals(meshInfo.MeshId))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6393));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6410));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_3 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6410));
		V_3 = L_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6411));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_4 = MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___meshInfo0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6411));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6412));
		bool L_5 = MeshId_Equals_mA59C2EE90132C307BBFC93663039D1807FCB156F((MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A *)(&V_3), L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6412));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6394));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_007a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6395));
		// if (existing.PriorityHint != meshInfo.PriorityHint)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6396));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6413));
		int32_t L_7 = MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6413));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6414));
		int32_t L_8 = MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___meshInfo0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6414));
		V_4 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6397));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6398));
		// existing.PriorityHint = meshInfo.PriorityHint;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6399));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6415));
		int32_t L_10 = MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&___meshInfo0), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6415));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6416));
		MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36_inline((MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 *)(&V_1), L_10, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6416));
		// m_Queue[i] = existing;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6400));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_11 = __this->get_m_Queue_0();
		int32_t L_12 = V_0;
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_13 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6417));
		NullCheck(L_11);
		List_1_set_Item_m0F043AFDB21877F2EE34CC0CDFE479A272CBB589(L_11, L_12, L_13, /*hidden argument*/List_1_set_Item_m0F043AFDB21877F2EE34CC0CDFE479A272CBB589_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6417));
		// m_Queue.Sort(s_MeshInfoComparer);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6401));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_14 = __this->get_m_Queue_0();
		MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * L_15 = __this->get_s_MeshInfoComparer_2();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6418));
		NullCheck(L_14);
		List_1_Sort_mC2DCB0E19083C1C79A1F31D6354D55D5721E90BD(L_14, L_15, /*hidden argument*/List_1_Sort_mC2DCB0E19083C1C79A1F31D6354D55D5721E90BD_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6418));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6402));
	}

IL_0078:
	{
		// break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6403));
		goto IL_0096;
	}

IL_007a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6404));
		// for (int i = 0; i < m_Queue.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6405));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_007f:
	{
		// for (int i = 0; i < m_Queue.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6406));
		int32_t L_17 = V_0;
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_18 = __this->get_m_Queue_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6419));
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_inline(L_18, /*hidden argument*/List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6419));
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6407));
		bool L_20 = V_5;
		if (L_20)
		{
			goto IL_0005;
		}
	}

IL_0096:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6408));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue_Clear_mEE7DDDCFEA169FE0D5CFAB8B8A150C1853F75366 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue_Clear_mEE7DDDCFEA169FE0D5CFAB8B8A150C1853F75366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue_Clear_mEE7DDDCFEA169FE0D5CFAB8B8A150C1853F75366_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6420));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6421));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6422));
		// m_Queue.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6423));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_0 = __this->get_m_Queue_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6426));
		NullCheck(L_0);
		List_1_Clear_m687F8457EA2BD8B4A998A0FB2F6E41642BADA929(L_0, /*hidden argument*/List_1_Clear_m687F8457EA2BD8B4A998A0FB2F6E41642BADA929_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6426));
		// m_MeshSet.Clear();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6424));
		HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * L_1 = __this->get_m_MeshSet_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6427));
		NullCheck(L_1);
		HashSet_1_Clear_m095A5BB5458DD792B73CA5FA02188971180CCFDE(L_1, /*hidden argument*/HashSet_1_Clear_m095A5BB5458DD792B73CA5FA02188971180CCFDE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6427));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6425));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.MeshQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshQueue__ctor_mFF91253EF7060B1E5E9E2BEAC65E585771E7CBE5 (MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshQueue__ctor_mFF91253EF7060B1E5E9E2BEAC65E585771E7CBE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshQueue__ctor_mFF91253EF7060B1E5E9E2BEAC65E585771E7CBE5_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6428));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6429));
	{
		// List<MeshInfo> m_Queue = new List<MeshInfo>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6430));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6433));
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_0 = (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 *)il2cpp_codegen_object_new(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_il2cpp_TypeInfo_var);
		List_1__ctor_m4BD51A5D303C6ACB72F492164A1B7A0D10A26AF5(L_0, /*hidden argument*/List_1__ctor_m4BD51A5D303C6ACB72F492164A1B7A0D10A26AF5_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6433));
		__this->set_m_Queue_0(L_0);
		// HashSet<LegacyMeshId> m_MeshSet = new HashSet<LegacyMeshId>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6431));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6434));
		HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 * L_1 = (HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16 *)il2cpp_codegen_object_new(HashSet_1_tC884B9B50E4545B6F9417C96CE9A6F7416283B16_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mCA9C696867FF55700ADBFD1D3C484DF96E009EE3(L_1, /*hidden argument*/HashSet_1__ctor_mCA9C696867FF55700ADBFD1D3C484DF96E009EE3_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6434));
		__this->set_m_MeshSet_1(L_1);
		// MeshInfoComparer s_MeshInfoComparer = new MeshInfoComparer();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6432));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6435));
		MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 * L_2 = (MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71 *)il2cpp_codegen_object_new(MeshInfoComparer_t17CC957D6462ACDF82B5C4E659B9CB074BB66D71_il2cpp_TypeInfo_var);
		MeshInfoComparer__ctor_m867A13B3A95EA5F21E8B01C91CB519C13A51E59A(L_2, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6435));
		__this->set_s_MeshInfoComparer_2(L_2);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6436));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6436));
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
// System.Void UnityEngine.XR.ARFoundation.PlaneDetectionModeMaskAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaneDetectionModeMaskAttribute__ctor_m8B1E5CDFD265D58C8E0568779269A60C6C17B3E0 (PlaneDetectionModeMaskAttribute_t3A9237B44B85C4538BDF0769B45A07A92F3F5057 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlaneDetectionModeMaskAttribute__ctor_m8B1E5CDFD265D58C8E0568779269A60C6C17B3E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlaneDetectionModeMaskAttribute__ctor_m8B1E5CDFD265D58C8E0568779269A60C6C17B3E0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		PropertyAttribute__ctor_m7F5C473F39D5601486C1127DA0D52F2DC293FC35(__this, /*hidden argument*/NULL);
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
// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.PoseExtensions::InverseTransformPosition(UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pose0), (&___position1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6437));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6438));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6439));
		// return Quaternion.Inverse(pose.rotation) * (position - pose.position);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6440));
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___pose0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = L_0.get_rotation_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6442));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6442));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___position1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_4 = ___pose0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = L_4.get_position_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6443));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_3, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6443));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6444));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_2, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6444));
		V_0 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6441));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.Vector3 UnityEngine.XR.ARFoundation.PoseExtensions::InverseTransformDirection(UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PoseExtensions_InverseTransformDirection_m30D10D1F00928AC1DC560E31DC9536E3CA77B87C (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseExtensions_InverseTransformDirection_m30D10D1F00928AC1DC560E31DC9536E3CA77B87C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pose0), (&___direction1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseExtensions_InverseTransformDirection_m30D10D1F00928AC1DC560E31DC9536E3CA77B87C_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6446));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6447));
		// return Quaternion.Inverse(pose.rotation) * direction;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6448));
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___pose0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = L_0.get_rotation_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6450));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_1, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6450));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___direction1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6451));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_2, L_3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6451));
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6449));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.XR.ARFoundation.PoseExtensions::InverseTransformPositions(UnityEngine.Pose,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseExtensions_InverseTransformPositions_mD3C1280E37E1E2C0BBC15345398422A4278CD7D3 (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___positions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseExtensions_InverseTransformPositions_mD3C1280E37E1E2C0BBC15345398422A4278CD7D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___pose0), (&___positions1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PoseExtensions_InverseTransformPositions_mD3C1280E37E1E2C0BBC15345398422A4278CD7D3_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6452));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6453));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6454));
		// if (positions == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6455));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___positions1;
		V_0 = (bool)((((RuntimeObject*)(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6456));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("positions");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6457));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6467));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteral4C0BBA0458DE42FF88B7DA3F8C0090D7328DA7D3, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6467));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, PoseExtensions_InverseTransformPositions_mD3C1280E37E1E2C0BBC15345398422A4278CD7D3_RuntimeMethod_var);
	}

IL_0014:
	{
		// for (int i = 0; i < positions.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6458));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6459));
		goto IL_0033;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6460));
		// positions[i] = pose.InverseTransformPosition(positions[i]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6461));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = ___positions1;
		int32_t L_4 = V_1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = ___pose0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_6 = ___positions1;
		int32_t L_7 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6468));
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6468));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6469));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = PoseExtensions_InverseTransformPosition_mCDC0B4E47294498D315D25A11F55A3DCB1D56B30(L_5, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6470));
		NullCheck(L_3);
		List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8(L_3, L_4, L_9, /*hidden argument*/List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6470));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6462));
		// for (int i = 0; i < positions.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6463));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0033:
	{
		// for (int i = 0; i < positions.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6464));
		int32_t L_11 = V_1;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_12 = ___positions1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6471));
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_12, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6471));
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)L_13))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6465));
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0018;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6466));
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
// UnityEngine.Ray UnityEngine.XR.ARFoundation.TransformExtensions::TransformRay(UnityEngine.Transform,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  TransformExtensions_TransformRay_m146923AB98EFC9BED518F02A742A628A45D3A20A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_TransformRay_m146923AB98EFC9BED518F02A742A628A45D3A20A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___ray1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_TransformRay_m146923AB98EFC9BED518F02A742A628A45D3A20A_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6655));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6656));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6657));
		// if (transform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6658));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6663));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6663));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6659));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException("transform");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6660));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6664));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6664));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TransformExtensions_TransformRay_m146923AB98EFC9BED518F02A742A628A45D3A20A_RuntimeMethod_var);
	}

IL_0017:
	{
		// return new Ray(
		//     transform.TransformPoint(ray.origin),
		//     transform.TransformDirection(ray.direction));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6661));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6665));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&___ray1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6665));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6666));
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_4, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6666));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6667));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&___ray1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6667));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6668));
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_TransformDirection_m85FC1D7E1322E94F65DA59AEF3B1166850B183EF(L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6668));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6669));
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_10), L_6, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6669));
		V_1 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6662));
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.Ray UnityEngine.XR.ARFoundation.TransformExtensions::InverseTransformRay(UnityEngine.Transform,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  TransformExtensions_InverseTransformRay_mD6C666D44E1BF8407A2AA50118A7C90890935503 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_InverseTransformRay_mD6C666D44E1BF8407A2AA50118A7C90890935503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___ray1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_InverseTransformRay_mD6C666D44E1BF8407A2AA50118A7C90890935503_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6670));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6671));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6672));
		// if (transform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6673));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6678));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6678));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6674));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException("transform");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6675));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6679));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6679));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TransformExtensions_InverseTransformRay_mD6C666D44E1BF8407A2AA50118A7C90890935503_RuntimeMethod_var);
	}

IL_0017:
	{
		// return new Ray(
		//     transform.InverseTransformPoint(ray.origin),
		//     transform.InverseTransformDirection(ray.direction));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6676));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6680));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Ray_get_origin_m3773CA7B1E2F26F6F1447652B485D86C0BEC5187((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&___ray1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6680));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6681));
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_4, L_5, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6681));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6682));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Ray_get_direction_m9E6468CD87844B437FC4B93491E63D388322F76E((Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 *)(&___ray1), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6682));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6683));
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_InverseTransformDirection_m6F0513F2EC19C204F2077E3C68DD1D45317CB5F2(L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6683));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6684));
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_10), L_6, L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6684));
		V_1 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6677));
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_11 = V_1;
		return L_11;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.TransformExtensions::TransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___pose1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_TransformPose_m677CE84C622BD23C3DDB2953DDB820E1934B0144_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6685));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6686));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6687));
		// return pose.GetTransformedBy(transform);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6688));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6690));
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_GetTransformedBy_m8E532D399330BF1B436646DFCF99200419857715((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&___pose1), L_0, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6690));
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6689));
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.TransformExtensions::InverseTransformPose(UnityEngine.Transform,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TransformExtensions_InverseTransformPose_m7508C8166573E2D0042170C4F09BFAE44A064545 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_InverseTransformPose_m7508C8166573E2D0042170C4F09BFAE44A064545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___pose1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_InverseTransformPose_m7508C8166573E2D0042170C4F09BFAE44A064545_RuntimeMethod_var, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6691));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6692));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6693));
		// if (transform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6694));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6699));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6699));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6695));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException("transform");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6696));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6700));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6700));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TransformExtensions_InverseTransformPose_m7508C8166573E2D0042170C4F09BFAE44A064545_RuntimeMethod_var);
	}

IL_0017:
	{
		// return new Pose
		// {
		//     position = transform.InverseTransformPoint(pose.position),
		//     rotation = Quaternion.Inverse(transform.rotation) * pose.rotation
		// };
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6697));
		il2cpp_codegen_initobj((&V_1), sizeof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 ));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___transform0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_5 = ___pose1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = L_5.get_position_0();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6701));
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_4, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6701));
		(&V_1)->set_position_0(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6702));
		NullCheck(L_8);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6702));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6703));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_9, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6703));
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_11 = ___pose1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = L_11.get_rotation_1();
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6704));
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_10, L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6704));
		(&V_1)->set_rotation_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = V_1;
		V_2 = L_14;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6698));
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_15 = V_2;
		return L_15;
	}
}
// System.Void UnityEngine.XR.ARFoundation.TransformExtensions::TransformPointList(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___points1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___points1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6705));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6706));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6707));
		// if (transform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6708));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6723));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6723));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6709));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException("transform");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6710));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6724));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6724));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55_RuntimeMethod_var);
	}

IL_0017:
	{
		// if (points == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6711));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = ___points1;
		V_1 = (bool)((((RuntimeObject*)(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6712));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentNullException("points");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6713));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6725));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_6 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_6, _stringLiteral819F41F058379EB51168FF0AD732BE993FA49610, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6725));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TransformExtensions_TransformPointList_m8CF86B093B04499DDA56E9C05EBE5DEA80865F55_RuntimeMethod_var);
	}

IL_002a:
	{
		// for (int i = 0; i < points.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6714));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6715));
		goto IL_0049;
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6716));
		// points[i] = transform.TransformPoint(points[i]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6717));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = ___points1;
		int32_t L_8 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___transform0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_10 = ___points1;
		int32_t L_11 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6726));
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6726));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6727));
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_TransformPoint_mA96DC2A20EE7F4F915F7509863A18D99F5DD76CB(L_9, L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6727));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6728));
		NullCheck(L_7);
		List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8(L_7, L_8, L_13, /*hidden argument*/List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6728));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6718));
		// for (int i = 0; i < points.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6719));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < points.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6720));
		int32_t L_15 = V_2;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_16 = ___points1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6729));
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_16, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6729));
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6721));
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_002e;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6722));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.TransformExtensions::InverseTransformPointList(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Vector3>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___points1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___points1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6730));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6731));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6732));
		// if (transform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6733));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6748));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6748));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6734));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException("transform");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6735));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6749));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6749));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D_RuntimeMethod_var);
	}

IL_0017:
	{
		// if (points == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6736));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_4 = ___points1;
		V_1 = (bool)((((RuntimeObject*)(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6737));
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentNullException("points");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6738));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6750));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_6 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_6, _stringLiteral819F41F058379EB51168FF0AD732BE993FA49610, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6750));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TransformExtensions_InverseTransformPointList_m145AB2A2F941CFB63CB14FE0CC63682541459F8D_RuntimeMethod_var);
	}

IL_002a:
	{
		// for (int i = 0; i < points.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6739));
		V_2 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6740));
		goto IL_0049;
	}

IL_002e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6741));
		// points[i] = transform.InverseTransformPoint(points[i]);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6742));
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_7 = ___points1;
		int32_t L_8 = V_2;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___transform0;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_10 = ___points1;
		int32_t L_11 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6751));
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6751));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6752));
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_InverseTransformPoint_mB6E3145F20B531B4A781C194BAC43A8255C96C47(L_9, L_12, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6752));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6753));
		NullCheck(L_7);
		List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8(L_7, L_8, L_13, /*hidden argument*/List_1_set_Item_m98BE39488D077EF9FF249D708F9F27DA9AA33EC8_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6753));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6743));
		// for (int i = 0; i < points.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6744));
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0049:
	{
		// for (int i = 0; i < points.Count; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6745));
		int32_t L_15 = V_2;
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_16 = ___points1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6754));
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_inline(L_16, /*hidden argument*/List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6754));
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6746));
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_002e;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6747));
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.TransformExtensions::SetLayerRecursively(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___transform0, int32_t ___layer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_2 = NULL;
	bool V_3 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___transform0), (&___layer1));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E_RuntimeMethod_var, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6755));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6756));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6757));
		// if (transform == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6758));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6772));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6772));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6759));
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException("transform");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6760));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6773));
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_3 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_3, _stringLiteralDD8CE13AD1BA5D660B1C242D9F2CB063A8429155, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6773));
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E_RuntimeMethod_var);
	}

IL_0017:
	{
		// transform.gameObject.layer = layer;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6761));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6774));
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6774));
		int32_t L_6 = ___layer1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6775));
		NullCheck(L_5);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_5, L_6, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6775));
		// for (var i = 0; i < transform.childCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6762));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6763));
		goto IL_003e;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6764));
		// var child = transform.GetChild(i);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6765));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___transform0;
		int32_t L_8 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6776));
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_7, L_8, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6776));
		V_2 = L_9;
		// child.SetLayerRecursively(layer);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6766));
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = V_2;
		int32_t L_11 = ___layer1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6777));
		TransformExtensions_SetLayerRecursively_m6CD0313ECF4AA6578A48B674AD782AE0B682039E(L_10, L_11, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6777));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6767));
		// for (var i = 0; i < transform.childCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6768));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003e:
	{
		// for (var i = 0; i < transform.childCount; ++i)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6769));
		int32_t L_13 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = ___transform0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6778));
		NullCheck(L_14);
		int32_t L_15 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_14, /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6778));
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6770));
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0028;
		}
	}
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6771));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360FUnity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_get_added_m69A88C010A1958701EEE504D5A33FB520D1E360F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6184));
	{
		// public List<ARTrackedImage> added { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6185));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2AUnity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_set_added_mCD97D545804A94C58C1828F546B842422A3EBF2A_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6186));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6187));
	{
		// public List<ARTrackedImage> added { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6188));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___value0;
		__this->set_U3CaddedU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDBUnity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_get_updated_m6A3BB3D6B5EE300996814DA2DE6DE45C46B48DDB_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6189));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6190));
	{
		// public List<ARTrackedImage> updated { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6191));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_set_updated_m3CE92FEFAA02D8EA56E94E6E9FC544AA71730D56_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6192));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6193));
	{
		// public List<ARTrackedImage> updated { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6194));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___value0;
		__this->set_U3CupdatedU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_get_removed_mC4922D72993078710694F8D76A02BE9A23EFB7E8_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6195));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6196));
	{
		// public List<ARTrackedImage> removed { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6197));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = __this->get_U3CremovedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_inline (ARTrackedImagesChangedEventArgs_t64F82ABE51189C62E3811D96F2C2143DB91669E4 * __this, List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARTrackedImagesChangedEventArgs_set_removed_m806CDFF6718C6E3BFA126E00D3925DC485464CE2_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6198));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6199));
	{
		// public List<ARTrackedImage> removed { get; private set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 6200));
		List_1_t85456E82777B8C7F9CFFED2C540D0613542A8C8D * L_0 = ___value0;
		__this->set_U3CremovedU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshInfo_get_ChangeState_m841D373DCDEDA4C40AEF7D40A56062C2048FD730_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 447));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 448));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 449));
		int32_t L_0 = __this->get_U3CChangeStateU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429FUnity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshInfo_get_PriorityHint_m5BD302D8B09FFCBE1C1738A7DB1F1A92ED74429F_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 450));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 451));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 452));
		int32_t L_0 = __this->get_U3CPriorityHintU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshInfo_get_MeshId_mCADC4A52D7A1229FC4FCC930D320201BE4DFA7C7_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 444));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 445));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 446));
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_0 = __this->get_U3CMeshIdU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36_inline (MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___value0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, MeshInfo_set_PriorityHint_m1FFF79BA0BCB6070474EB829A357F6259D97CE36_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 453));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 454));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_XRModule + 455));
		int32_t L_0 = ___value0;
		__this->set_U3CPriorityHintU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_gshared_inline (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mD8792CAC8D686AFD46B2411A82A26BA8302734B3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_gshared_inline (List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608Unity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Item_mFC89B4218543D8E803E962D2D076A0CB46EC1608_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
		MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* L_2 = (MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2*)__this->get__items_1();
		int32_t L_3 = ___index0;
		MeshInfo_t4B920031BA3C7DD11936A8CCA4F0763BE6CAF7E3  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AEUnity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Item_mF572D0E3A6D67C2920F67503C0A856AA882625AE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)__this->get__items_1();
		int32_t L_3 = ___index0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_gshared_inline (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBCUnity_XR_ARFoundation2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mAC777EF7FB3D851A4E0A35DCE1054F5FC7AB0EBC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
