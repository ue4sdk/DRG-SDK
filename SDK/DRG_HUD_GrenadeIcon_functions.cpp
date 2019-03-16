// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_GrenadeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.SetOn
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_GrenadeIcon_C::SetOn(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.SetOn");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_GrenadeIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.ExecuteUbergraph_HUD_GrenadeIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_GrenadeIcon_C::ExecuteUbergraph_HUD_GrenadeIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_GrenadeIcon.HUD_GrenadeIcon_C.ExecuteUbergraph_HUD_GrenadeIcon");

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
