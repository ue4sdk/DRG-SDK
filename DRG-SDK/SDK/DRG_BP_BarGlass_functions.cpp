// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_BarGlass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BarGlass.BP_BarGlass_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BarGlass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BarGlass.BP_BarGlass_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BarGlass_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_BarGlass.BP_BarGlass_C.OnRep_DrinkableData
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BarGlass_C::OnRep_DrinkableData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.OnRep_DrinkableData");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BarGlass.BP_BarGlass_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_BarGlass_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BarGlass.BP_BarGlass_C.ExecuteUbergraph_BP_BarGlass
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BarGlass_C::ExecuteUbergraph_BP_BarGlass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass.BP_BarGlass_C.ExecuteUbergraph_BP_BarGlass");

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
