// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Crosshair_ZiplineGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::SetMinMaxAngle(float Min, float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetMinMaxAngle");

	struct
	{
		float                          Min;
		float                          Max;
	} params;

	params.Min = Min;
	params.Max = Max;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Crosshair_ZiplineGun_C::ClearMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ClearMessage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Dist                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InRange                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::DistanceMessage(float Dist, bool InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.DistanceMessage");

	struct
	{
		float                          Dist;
		bool                           InRange;
	} params;

	params.Dist = Dist;
	params.InRange = InRange;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Msg                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_Crosshair_ZiplineGun_C::FailMessage(const struct FText& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.FailMessage");

	struct
	{
		struct FText                   Msg;
	} params;

	params.Msg = Msg;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_Crosshair_ZiplineGun_C::SetText(const struct FText& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.SetText");

	struct
	{
		struct FText                   Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Crosshair_ZiplineGun_C::ExecuteUbergraph_HUD_Crosshair_ZiplineGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Crosshair_ZiplineGun.HUD_Crosshair_ZiplineGun_C.ExecuteUbergraph_HUD_Crosshair_ZiplineGun");

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
