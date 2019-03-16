// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_AvailablePerkPoints_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AvailablePerkPoints_C::CountPerkPoints(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.CountPerkPoints");

	struct
	{
		float                          DeltaTime;
	} params;

	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Points                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AvailablePerkPoints_C::SetPerkPointsText(int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.SetPerkPointsText");

	struct
	{
		int                            Points;
	} params;

	params.Points = Points;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AvailablePerkPoints_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_AvailablePerkPoints_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PerkPoints                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AvailablePerkPoints_C::OnPerkPointsChanged(int PerkPoints, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.OnPerkPointsChanged");

	struct
	{
		int                            PerkPoints;
		int                            Change;
	} params;

	params.PerkPoints = PerkPoints;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AvailablePerkPoints_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.BndEvt__PingAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_AvailablePerkPoints_C::BndEvt__PingAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.BndEvt__PingAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AvailablePerkPoints_C::ExecuteUbergraph_UI_AvailablePerkPoints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AvailablePerkPoints.UI_AvailablePerkPoints_C.ExecuteUbergraph_UI_AvailablePerkPoints");

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
