// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ScreenOverlay_ShieldDamage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::OnArmorDamaged(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnArmorDamaged");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::Begin_Splat(float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Begin Splat");

	struct
	{
		float                          Duration;
		struct FLinearColor            Color;
	} params;

	params.Duration = Duration;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScreenOverlay_ShieldDamage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::OnCharacterStateChanged(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCharacterStateChanged");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UScreenOverlay_ShieldDamage_C::End_Splat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.End Splat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterCameraMode           NewCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharacterCameraMode           OldCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.OnCameraModeChanged");

	struct
	{
		ECharacterCameraMode           NewCameraMode;
		ECharacterCameraMode           OldCameraMode;
	} params;

	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_ShieldDamage_C::ExecuteUbergraph_ScreenOverlay_ShieldDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_ShieldDamage.ScreenOverlay_ShieldDamage_C.ExecuteUbergraph_ScreenOverlay_ShieldDamage");

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
