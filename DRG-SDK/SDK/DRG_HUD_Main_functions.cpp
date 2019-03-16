// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Main_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Main.HUD_Main_C.HandleHUDElementsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Main_C::HandleHUDElementsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.HandleHUDElementsVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.ToggleHUD
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Instant                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Main_C::ToggleHUD(bool IsVisible, bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.ToggleHUD");

	struct
	{
		bool                           IsVisible;
		bool                           Instant;
	} params;

	params.IsVisible = IsVisible;
	params.Instant = Instant;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Main_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Destruct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.AllDwarvesDown
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Main_C::AllDwarvesDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.AllDwarvesDown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.OnCameraModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterCameraMode           NewCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharacterCameraMode           OldCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Main_C::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnCameraModeChanged");

	struct
	{
		ECharacterCameraMode           NewCameraMode;
		ECharacterCameraMode           OldCameraMode;
	} params;

	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Main_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Main_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Main_C::UpdateCurrentCanvas()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.UpdateCurrentCanvas");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.OnCharacterStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Main_C::OnCharacterStateChanged(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnCharacterStateChanged");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.PushEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 EventWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Main_C::PushEvent(class UWidget* EventWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.PushEvent");

	struct
	{
		class UWidget*                 EventWidget;
	} params;

	params.EventWidget = EventWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Main_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.OnHUDVisibilityChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Main_C::OnHUDVisibilityChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.OnHUDVisibilityChanged_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Main_C::ExecuteUbergraph_HUD_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Main.HUD_Main_C.ExecuteUbergraph_HUD_Main");

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
