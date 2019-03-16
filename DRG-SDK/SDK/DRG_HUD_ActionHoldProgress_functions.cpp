// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ActionHoldProgress_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActionHoldProgress_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_ActionHoldProgress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActionHoldProgress_C::OnActionHoldProgress(const struct FText& Description, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.OnActionHoldProgress");

	struct
	{
		struct FText                   Description;
		float                          Progress;
	} params;

	params.Description = Description;
	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActionHoldProgress_C::ExecuteUbergraph_HUD_ActionHoldProgress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActionHoldProgress.HUD_ActionHoldProgress_C.ExecuteUbergraph_HUD_ActionHoldProgress");

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
