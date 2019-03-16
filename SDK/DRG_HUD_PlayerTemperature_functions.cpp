// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_PlayerTemperature_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_PlayerTemperature_C::ShowWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowWarning");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_PlayerTemperature_C::UpdateArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.UpdateArrows");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerTemperature_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ChangeRate                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerTemperature_C::OnTemperatureChangeRate_Event(int ChangeRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChangeRate_Event");

	struct
	{
		int                            ChangeRate;
	} params;

	params.ChangeRate = ChangeRate;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Temperature                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerTemperature_C::OnTemperatureChanged(float Temperature, float Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnTemperatureChanged");

	struct
	{
		float                          Temperature;
		float                          Change;
	} params;

	params.Temperature = Temperature;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_PlayerTemperature_C::ShowTemperature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ShowTemperature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_PlayerTemperature_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           barVisible                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerTemperature_C::OnBarVisibilityChanged_Event_1(bool barVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.OnBarVisibilityChanged_Event_1");

	struct
	{
		bool                           barVisible;
	} params;

	params.barVisible = barVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerTemperature_C::ExecuteUbergraph_HUD_PlayerTemperature(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerTemperature.HUD_PlayerTemperature_C.ExecuteUbergraph_HUD_PlayerTemperature");

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
