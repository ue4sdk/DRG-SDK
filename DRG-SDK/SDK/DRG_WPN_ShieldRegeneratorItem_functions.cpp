// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_ShieldRegeneratorItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_ShieldRegeneratorItem_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.GetGearStatEntry");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		TArray<struct FGearStatEntry>  Stats;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveStartUsing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AThrowableActor*         thrownActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::ReceiveItemThrown(class AThrowableActor* thrownActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ReceiveItemThrown");

	struct
	{
		class AThrowableActor*         thrownActor;
	} params;

	params.thrownActor = thrownActor;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ShieldRegeneratorItem_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ShieldRegeneratorItem_C::ExecuteUbergraph_WPN_ShieldRegeneratorItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ShieldRegeneratorItem.WPN_ShieldRegeneratorItem_C.ExecuteUbergraph_WPN_ShieldRegeneratorItem");

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
