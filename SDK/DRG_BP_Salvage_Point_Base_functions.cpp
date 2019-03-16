// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_Point_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_Base_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_Base_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.EnableRepair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Salvage_Point_Base_C::EnableRepair()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.EnableRepair");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.ExecuteUbergraph_BP_Salvage_Point_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Salvage_Point_Base_C::ExecuteUbergraph_BP_Salvage_Point_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Salvage_Point_Base.BP_Salvage_Point_Base_C.ExecuteUbergraph_BP_Salvage_Point_Base");

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
