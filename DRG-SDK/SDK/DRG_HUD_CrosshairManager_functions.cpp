// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_CrosshairManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ToggleCrosshair
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::ToggleCrosshair(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ToggleCrosshair");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ChangeCrosshair
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             NewCrosshair                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::ChangeCrosshair(class UUserWidget* NewCrosshair)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ChangeCrosshair");

	struct
	{
		class UUserWidget*             NewCrosshair;
	} params;

	params.NewCrosshair = NewCrosshair;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Play Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_CrosshairManager_C::Play_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Play Intro");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::OnCharacterStateChanged(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCharacterStateChanged");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterCameraMode           NewCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharacterCameraMode           OldCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnCameraModeChanged_Event");

	struct
	{
		ECharacterCameraMode           NewCameraMode;
		ECharacterCameraMode           OldCameraMode;
	} params;

	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Update Crosshair
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_CrosshairManager_C::Update_Crosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Update Crosshair");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemEquipped_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::OnItemEquipped_Event(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnItemEquipped_Event");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceBank*           ResourceBank                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::OnDepositingEnd_Event(class UResourceBank* ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingEnd_Event");

	struct
	{
		class UResourceBank*           ResourceBank;
	} params;

	params.ResourceBank = ResourceBank;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceBank*           ResourceBank                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::OnDepositingBegin_Event(class UResourceBank* ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnDepositingBegin_Event");

	struct
	{
		class UResourceBank*           ResourceBank;
	} params;

	params.ResourceBank = ResourceBank;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::OnToggleMapTool(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.OnToggleMapTool");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_CrosshairManager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrosshairManager_C::ExecuteUbergraph_HUD_CrosshairManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrosshairManager.HUD_CrosshairManager_C.ExecuteUbergraph_HUD_CrosshairManager");

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
