// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_TradingConsole_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TradingConsole.BP_TradingConsole_C.IsNewPlayer
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* PlayerController               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNewPlayer                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_TradingConsole_C::IsNewPlayer(class ABP_PlayerController_SpaceRig_C* PlayerController, bool* IsNewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TradingConsole.BP_TradingConsole_C.IsNewPlayer");

	struct
	{
		class ABP_PlayerController_SpaceRig_C* PlayerController;
		bool                           IsNewPlayer;
	} params;

	params.PlayerController = PlayerController;

	UObject::ProcessEvent(fn, &params);

	if (IsNewPlayer != nullptr)
		*IsNewPlayer = params.IsNewPlayer;
}


// Function BP_TradingConsole.BP_TradingConsole_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_TradingConsole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TradingConsole.BP_TradingConsole_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TradingConsole.BP_TradingConsole_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_TradingConsole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TradingConsole.BP_TradingConsole_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_TradingConsole.BP_TradingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_TradingConsole_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TradingConsole.BP_TradingConsole_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_TradingConsole.BP_TradingConsole_C.ExecuteUbergraph_BP_TradingConsole
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_TradingConsole_C::ExecuteUbergraph_BP_TradingConsole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TradingConsole.BP_TradingConsole_C.ExecuteUbergraph_BP_TradingConsole");

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
