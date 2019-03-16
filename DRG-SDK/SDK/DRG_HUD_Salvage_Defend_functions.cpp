// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Salvage_Defend_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DefenderCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Salvage_Defend_C::UpdateDefenderBlocks(int DefenderCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.UpdateDefenderBlocks");

	struct
	{
		int                            DefenderCount;
	} params;

	params.DefenderCount = DefenderCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.AddDefendersToArray
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Salvage_Defend_C::AddDefendersToArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.AddDefendersToArray");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Salvage_Defend_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          NewProgress                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Salvage_Defend_C::ProgressUpdated(float NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ProgressUpdated");

	struct
	{
		float                          NewProgress;
	} params;

	params.NewProgress = NewProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Salvage_Defend_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            DefenderCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Salvage_Defend_C::DefendersUpdated(int DefenderCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.DefendersUpdated");

	struct
	{
		int                            DefenderCount;
	} params;

	params.DefenderCount = DefenderCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Salvage_Defend_C::success()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.success");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Salvage_Defend_C::ExecuteUbergraph_HUD_Salvage_Defend(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Salvage_Defend.HUD_Salvage_Defend_C.ExecuteUbergraph_HUD_Salvage_Defend");

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
