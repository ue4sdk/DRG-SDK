// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ScreenOverlay_HealthDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          StartAnimTime                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::CheckForLowHealth(float StartAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.CheckForLowHealth");

	struct
	{
		float                          StartAnimTime;
	} params;

	params.StartAnimTime = StartAnimTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::Begin_Splat(float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Begin Splat");

	struct
	{
		float                          Duration;
		struct FLinearColor            Color;
	} params;

	params.Duration = Duration;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnDamageTaken_Event(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnDamageTaken_Event");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnCharacterStateChanged(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCharacterStateChanged");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScreenOverlay_HealthDamage_C::End_Splat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.End Splat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterCameraMode           NewCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharacterCameraMode           OldCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnCameraModeChanged");

	struct
	{
		ECharacterCameraMode           NewCameraMode;
		ECharacterCameraMode           OldCameraMode;
	} params;

	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::UpdateBloodColor(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.UpdateBloodColor");

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScreenOverlay_HealthDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::OnUpdateHealthImage(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.OnUpdateHealthImage");

	struct
	{
		float                          Health;
	} params;

	params.Health = Health;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_HealthDamage_C::ExecuteUbergraph_ScreenOverlay_HealthDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_HealthDamage.ScreenOverlay_HealthDamage_C.ExecuteUbergraph_ScreenOverlay_HealthDamage");

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
