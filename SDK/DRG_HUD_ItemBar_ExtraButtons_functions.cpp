// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ItemBar_ExtraButtons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_ItemBar_ExtraButtons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_ItemBar_ExtraButtons_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.OnInputSourceChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemBar_ExtraButtons_C::OnInputSourceChanged_Event(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.OnInputSourceChanged_Event");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemBar_ExtraButtons_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.ExecuteUbergraph_HUD_ItemBar_ExtraButtons
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ItemBar_ExtraButtons_C::ExecuteUbergraph_HUD_ItemBar_ExtraButtons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ItemBar_ExtraButtons.HUD_ItemBar_ExtraButtons_C.ExecuteUbergraph_HUD_ItemBar_ExtraButtons");

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
