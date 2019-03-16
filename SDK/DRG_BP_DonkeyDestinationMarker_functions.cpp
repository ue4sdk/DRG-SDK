// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DonkeyDestinationMarker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DonkeyDestinationMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Loc                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DonkeyDestinationMarker_C::ActivateAtPosition(const struct FVector& Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ActivateAtPosition");

	struct
	{
		struct FVector                 Loc;
	} params;

	params.Loc = Loc;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_DonkeyDestinationMarker_C::HideMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.HideMarker");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_DonkeyDestinationMarker_C::ExecuteUbergraph_BP_DonkeyDestinationMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DonkeyDestinationMarker.BP_DonkeyDestinationMarker_C.ExecuteUbergraph_BP_DonkeyDestinationMarker");

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
