// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PassedOut_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           AllPassedOut                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PassedOut_C::AllPassedOut(bool* AllPassedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.AllPassedOut");

	struct
	{
		bool                           AllPassedOut;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AllPassedOut != nullptr)
		*AllPassedOut = params.AllPassedOut;
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_PassedOut_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PassedOut_C::BeginFadeToBlack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_PassedOut_C::ReceiveStateEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_PassedOut_C::ReceiveStateExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PassedOut_C::Turn_Off_Juke_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_PassedOut_C::Remove_Drinking_Mugs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_PassedOut_C::ReceiveTeamPassedOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PassedOut_C::ExecuteUbergraph_BP_PassedOut(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut");

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
