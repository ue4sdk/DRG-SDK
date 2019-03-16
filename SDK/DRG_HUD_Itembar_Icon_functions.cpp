// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Itembar_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.SetSelected
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itembar_Icon_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.SetSelected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnUnselect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itembar_Icon_C::OnUnselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnUnselect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnSelect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itembar_Icon_C::OnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itembar_Icon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnInit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itembar_Icon_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.OnInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.ExecuteUbergraph_HUD_Itembar_Icon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itembar_Icon_C::ExecuteUbergraph_HUD_Itembar_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itembar_Icon.HUD_Itembar_Icon_C.ExecuteUbergraph_HUD_Itembar_Icon");

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
