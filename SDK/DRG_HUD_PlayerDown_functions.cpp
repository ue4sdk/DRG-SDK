// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_PlayerDown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

ESlateVisibility UHUD_PlayerDown_C::GetCycleCameraVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.GetCycleCameraVisibility");

	struct
	{
		ESlateVisibility               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_PlayerDown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerDown_C::OnDownCameraTargetChanged(class APlayerCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.OnDownCameraTargetChanged");

	struct
	{
		class APlayerCharacter*        Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerDown_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_PlayerDown_C::End_Player_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.End Player Down");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               NewVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerDown_C::ReceiveNewVisibility(ESlateVisibility NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.ReceiveNewVisibility");

	struct
	{
		ESlateVisibility               NewVisibility;
	} params;

	params.NewVisibility = NewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerDown_C::ExecuteUbergraph_HUD_PlayerDown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerDown.HUD_PlayerDown_C.ExecuteUbergraph_HUD_PlayerDown");

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
