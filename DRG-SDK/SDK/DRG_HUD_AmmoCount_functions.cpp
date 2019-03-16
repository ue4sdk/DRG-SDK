// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_AmmoCount_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Total                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_AmmoCount_C::OnTotalChanged(int Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalChanged");

	struct
	{
		int                            Total;
	} params;

	params.Total = Total;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Count                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_AmmoCount_C::OnAmountChanged(int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnAmountChanged");

	struct
	{
		int                            Count;
	} params;

	params.Count = Count;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           showClipCount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_AmmoCount_C::OnVisibleChanged(bool Visible, bool showClipCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnVisibleChanged");

	struct
	{
		bool                           Visible;
		bool                           showClipCount;
	} params;

	params.Visible = Visible;
	params.showClipCount = showClipCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_AmmoCount_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_AmmoCount_C::OnTotalVisibleChanged(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.OnTotalVisibleChanged");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_AmmoCount_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_AmmoCount_C::ExecuteUbergraph_HUD_AmmoCount(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_AmmoCount.HUD_AmmoCount_C.ExecuteUbergraph_HUD_AmmoCount");

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
