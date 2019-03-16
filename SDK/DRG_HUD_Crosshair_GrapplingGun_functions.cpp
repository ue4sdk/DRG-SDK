// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Crosshair_GrapplingGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.ClearMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Crosshair_GrapplingGun_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.ClearMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.DistanceMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Dist                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Crosshair_GrapplingGun_C::DistanceMessage(float Dist)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.DistanceMessage");

	struct
	{
		float                          Dist;
	} params;

	params.Dist = Dist;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.FailMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Msg                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_Crosshair_GrapplingGun_C::FailMessage(const struct FText& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.FailMessage");

	struct
	{
		struct FText                   Msg;
	} params;

	params.Msg = Msg;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.SetText
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Crosshair_GrapplingGun_C::SetText(const struct FText& Value, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_GrapplingGun.HUD_Crosshair_GrapplingGun_C.SetText");

	struct
	{
		struct FText                   Value;
		struct FLinearColor            Color;
	} params;

	params.Value = Value;
	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
