// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Itemwheel_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itemwheel_Icon_C::OnUnselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnUnselect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itemwheel_Icon_C::OnSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnSelect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_Itemwheel_Icon_C::OnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.OnInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itemwheel_Icon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Itemwheel_Icon_C::ExecuteUbergraph_HUD_Itemwheel_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Itemwheel_Icon.HUD_Itemwheel_Icon_C.ExecuteUbergraph_HUD_Itemwheel_Icon");

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
