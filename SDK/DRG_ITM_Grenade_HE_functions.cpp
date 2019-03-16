// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Grenade_HE_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Grenade_HE.ITM_Grenade_HE_C.AddGearStateEntries
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AITM_Grenade_HE_C::AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE.ITM_Grenade_HE_C.AddGearStateEntries");

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


// Function ITM_Grenade_HE.ITM_Grenade_HE_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_Grenade_HE_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE.ITM_Grenade_HE_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Grenade_HE.ITM_Grenade_HE_C.OnExploded
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_Grenade_HE_C::OnExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE.ITM_Grenade_HE_C.OnExploded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Grenade_HE.ITM_Grenade_HE_C.ExecuteUbergraph_ITM_Grenade_HE
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_Grenade_HE_C::ExecuteUbergraph_ITM_Grenade_HE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Grenade_HE.ITM_Grenade_HE_C.ExecuteUbergraph_ITM_Grenade_HE");

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
