// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Flashlight_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Flashlight.HUD_Flashlight_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Flashlight_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flashlight.HUD_Flashlight_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flashlight_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flashlight.HUD_Flashlight_C.OnHeadlightOnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsOn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flashlight_C::OnHeadlightOnChanged(bool IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.OnHeadlightOnChanged");

	struct
	{
		bool                           IsOn;
	} params;

	params.IsOn = IsOn;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flashlight.HUD_Flashlight_C.ExecuteUbergraph_HUD_Flashlight
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flashlight_C::ExecuteUbergraph_HUD_Flashlight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flashlight.HUD_Flashlight_C.ExecuteUbergraph_HUD_Flashlight");

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
