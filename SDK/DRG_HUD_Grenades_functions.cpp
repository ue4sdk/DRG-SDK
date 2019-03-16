// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Grenades_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Grenades.HUD_Grenades_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Grenades_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentCount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Grenades_C::OnGrenadeCountChanged(int CurrentCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.OnGrenadeCountChanged");

	struct
	{
		int                            CurrentCount;
	} params;

	params.CurrentCount = CurrentCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Grenades.HUD_Grenades_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Grenades_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Grenades_C::ExecuteUbergraph_HUD_Grenades(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Grenades.HUD_Grenades_C.ExecuteUbergraph_HUD_Grenades");

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
