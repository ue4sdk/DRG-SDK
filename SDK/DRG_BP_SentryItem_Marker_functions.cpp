// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SentryItem_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.SetMaterials
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMeshComponent*          Mesh                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UMaterialInterface*      ParentMaterial                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* DynamicMaterial                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryItem_Marker_C::SetMaterials(class UMeshComponent* Mesh, class UMaterialInterface* ParentMaterial, class UMaterialInstanceDynamic** DynamicMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.SetMaterials");

	struct
	{
		class UMeshComponent*          Mesh;
		class UMaterialInterface*      ParentMaterial;
		class UMaterialInstanceDynamic* DynamicMaterial;
	} params;

	params.Mesh = Mesh;
	params.ParentMaterial = ParentMaterial;

	UObject::ProcessEvent(fn, &params);

	if (DynamicMaterial != nullptr)
		*DynamicMaterial = params.DynamicMaterial;
}


// Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryItem_Marker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.OnMarkerValidChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           Valid                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryItem_Marker_C::OnMarkerValidChanged(bool Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.OnMarkerValidChanged");

	struct
	{
		bool                           Valid;
	} params;

	params.Valid = Valid;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.ExecuteUbergraph_BP_SentryItem_Marker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryItem_Marker_C::ExecuteUbergraph_BP_SentryItem_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryItem_Marker.BP_SentryItem_Marker_C.ExecuteUbergraph_BP_SentryItem_Marker");

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
