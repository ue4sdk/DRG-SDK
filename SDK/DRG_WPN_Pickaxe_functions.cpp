// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_Pickaxe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_Pickaxe_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.GetGearStatEntry");

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


// Function WPN_Pickaxe.WPN_Pickaxe_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_Pickaxe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_Pickaxe.WPN_Pickaxe_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
