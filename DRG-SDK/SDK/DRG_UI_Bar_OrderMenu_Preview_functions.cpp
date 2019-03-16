// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Bar_OrderMenu_Preview_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    currentItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::Set_Preview_Item(class USpaceRigBarMenuItem* currentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Set Preview Item");

	struct
	{
		class USpaceRigBarMenuItem*    currentItem;
	} params;

	params.currentItem = currentItem;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Fade_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade In");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::Fade_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.Fade Out");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_Bar_OrderMenu_Preview_C::BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.BndEvt__FadeOut_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::ExecuteUbergraph_UI_Bar_OrderMenu_Preview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.ExecuteUbergraph_UI_Bar_OrderMenu_Preview");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USpaceRigBarMenuItem*    Previous_Item                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USpaceRigBarMenuItem*    New_Item                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Bar_OrderMenu_Preview_C::OnPreviewItemChanged__DelegateSignature(class USpaceRigBarMenuItem* Previous_Item, class USpaceRigBarMenuItem* New_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Bar_OrderMenu_Preview.UI_Bar_OrderMenu_Preview_C.OnPreviewItemChanged__DelegateSignature");

	struct
	{
		class USpaceRigBarMenuItem*    Previous_Item;
		class USpaceRigBarMenuItem*    New_Item;
	} params;

	params.Previous_Item = Previous_Item;
	params.New_Item = New_Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
