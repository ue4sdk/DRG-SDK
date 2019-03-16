// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SupplyPod_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterial*               ParentMaterial                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMeshComponent*          Mesh                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Marker_C::SetMaterials(class UMaterial* ParentMaterial, class UMeshComponent* Mesh, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.SetMaterials");

	struct
	{
		class UMaterial*               ParentMaterial;
		class UMeshComponent*          Mesh;
		class UMaterialInstanceDynamic* DynamicMaterial;
	} params;

	params.ParentMaterial = ParentMaterial;
	params.Mesh = Mesh;

	UObject::ProcessEvent(fn, &params);

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SupplyPod_Marker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SupplyPod_Marker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Valid                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Marker_C::OnMarkerValidChanged(bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerValidChanged");

	struct
	{
		bool                           Valid;
	} params;

	params.Valid = Valid;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Marker_C::OnMarkerVisibilityChanged(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.OnMarkerVisibilityChanged");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Marker_C::ExecuteUbergraph_BP_SupplyPod_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Marker.BP_SupplyPod_Marker_C.ExecuteUbergraph_BP_SupplyPod_Marker");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
