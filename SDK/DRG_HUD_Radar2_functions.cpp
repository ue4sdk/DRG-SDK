// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Radar2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Radar2.HUD_Radar2_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Radar2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Radar2.HUD_Radar2_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Radar2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Radar2.HUD_Radar2_C.OnHUDVisibilityChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Radar2_C::OnHUDVisibilityChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.OnHUDVisibilityChanged_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Radar2.HUD_Radar2_C.ExecuteUbergraph_HUD_Radar2
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Radar2_C::ExecuteUbergraph_HUD_Radar2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Radar2.HUD_Radar2_C.ExecuteUbergraph_HUD_Radar2");

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
