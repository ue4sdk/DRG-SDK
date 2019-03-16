// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Popup_GearUpgrade_Buy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UPopup_GearUpgrade_Buy_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_Buy_C::Show(class UClass* Item, class AFSDPlayerState* Player, class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Show");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UItemUpgrade*            Upgrade;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_Buy_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPopup_GearUpgrade_Buy_C::Buy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.Buy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopup_GearUpgrade_Buy_C::ExecuteUbergraph_Popup_GearUpgrade_Buy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Popup_GearUpgrade_Buy.Popup_GearUpgrade_Buy_C.ExecuteUbergraph_Popup_GearUpgrade_Buy");

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
