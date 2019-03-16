// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_MemorialScreenSpeedButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::OnRep_IsFast()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnRep_IsFast");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MemorialScreenSpeedButton_C::OnMatchStarted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.OnMatchStarted_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MemorialScreenSpeedButton_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MemorialScreenSpeedButton_C::ExecuteUbergraph_BP_MemorialScreenSpeedButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MemorialScreenSpeedButton.BP_MemorialScreenSpeedButton_C.ExecuteUbergraph_BP_MemorialScreenSpeedButton");

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
