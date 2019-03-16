// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Flares_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Flares.HUD_Flares_C.CreateIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            IconCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flares_C::CreateIcons(int IconCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.CreateIcons");

	struct
	{
		int                            IconCount;
	} params;

	params.IconCount = IconCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flares.HUD_Flares_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flares_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flares.HUD_Flares_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Flares_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flares.HUD_Flares_C.OnItemsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Flares_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnItemsLoaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flares.HUD_Flares_C.OnFlareProduction
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NextIndex                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flares_C::OnFlareProduction(int NextIndex, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.OnFlareProduction");

	struct
	{
		int                            NextIndex;
		float                          Progress;
	} params;

	params.NextIndex = NextIndex;
	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Flares_C::ExecuteUbergraph_HUD_Flares(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Flares.HUD_Flares_C.ExecuteUbergraph_HUD_Flares");

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
