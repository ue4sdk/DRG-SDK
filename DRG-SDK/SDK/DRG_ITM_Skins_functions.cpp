// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Skins_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Skins.ITM_Skins_C.OnUnlockedSkin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::OnUnlockedSkin(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnUnlockedSkin");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.RefreshSelectorButton
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Skins_C::RefreshSelectorButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.RefreshSelectorButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.RefreshWindowItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Skins_C::RefreshWindowItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.RefreshWindowItems");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.GetItemsWindow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::GetItemsWindow(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.GetItemsWindow");

	struct
	{
		class UWidget*                 Widget;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function ITM_Skins.ITM_Skins_C.UpdateBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Skins_C::UpdateBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.UpdateBorder");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.IsWindowVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Visible                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::IsWindowVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.IsWindowVisible");

	struct
	{
		bool                           Visible;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function ITM_Skins.ITM_Skins_C.PopulateSkinWindow
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::PopulateSkinWindow(bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.PopulateSkinWindow");

	struct
	{
		bool                           IsEmpty;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function ITM_Skins.ITM_Skins_C.SetWindowVisible
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           VisibilityChanged              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewVisibility                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::SetWindowVisible(bool IsVisible, bool* VisibilityChanged, bool* NewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.SetWindowVisible");

	struct
	{
		bool                           IsVisible;
		bool                           VisibilityChanged;
		bool                           NewVisibility;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);

	if (VisibilityChanged != nullptr)
		*VisibilityChanged = params.VisibilityChanged;
	if (NewVisibility != nullptr)
		*NewVisibility = params.NewVisibility;
}


// Function ITM_Skins.ITM_Skins_C.AddSkin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSkin*               InSkin                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  InItem                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InIndex                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UITM_SkinItem_C*         OutSkinWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::AddSkin(class UItemSkin* InSkin, class UClass* InItem, int InIndex, class UITM_SkinItem_C** OutSkinWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.AddSkin");

	struct
	{
		class UItemSkin*               InSkin;
		class UClass*                  InItem;
		int                            InIndex;
		class UITM_SkinItem_C*         OutSkinWidget;
	} params;

	params.InSkin = InSkin;
	params.InItem = InItem;
	params.InIndex = InIndex;

	UObject::ProcessEvent(fn, &params);

	if (OutSkinWidget != nullptr)
		*OutSkinWidget = params.OutSkinWidget;
}


// Function ITM_Skins.ITM_Skins_C.SetSkinData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::SetSkinData(class UClass* itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.SetSkinData");

	struct
	{
		class UClass*                  itemClass;
	} params;

	params.itemClass = itemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Skins_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.OnSkinWidgetAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinWidget                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::OnSkinWidgetAdded(class UITM_SkinItem_C* SkinWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnSkinWidgetAdded");

	struct
	{
		class UITM_SkinItem_C*         SkinWidget;
	} params;

	params.SkinWidget = SkinWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.OnSkinClicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::OnSkinClicked(class UITM_SkinItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnSkinClicked");

	struct
	{
		class UITM_SkinItem_C*         Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Skins_C::BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Skins_C::BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.OnHoveringSkin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::OnHoveringSkin(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnHoveringSkin");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.PreviewSkin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSkin*               Skin                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::PreviewSkin(class UItemSkin* Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.PreviewSkin");

	struct
	{
		class UItemSkin*               Skin;
	} params;

	params.Skin = Skin;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.OnUnhoveringSkin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::OnUnhoveringSkin(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnUnhoveringSkin");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.OnSkinUnlocked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_Skins_C::OnSkinUnlocked(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnSkinUnlocked");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_Skins_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.OnFocusLost
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITM_Skins_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.OnFocusLost");

	struct
	{
		struct FFocusEvent             InFocusEvent;
	} params;

	params.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           IsHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(class UWidget* Widget, bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature");

	struct
	{
		class UWidget*                 Widget;
		bool                           IsHovered;
	} params;

	params.Widget = Widget;
	params.IsHovered = IsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.ExecuteUbergraph_ITM_Skins
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::ExecuteUbergraph_ITM_Skins(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.ExecuteUbergraph_ITM_Skins");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Skins.ITM_Skins_C.PingSkin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSkin*               Skin                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Skins_C::PingSkin__DelegateSignature(class UItemSkin* Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Skins.ITM_Skins_C.PingSkin__DelegateSignature");

	struct
	{
		class UItemSkin*               Skin;
	} params;

	params.Skin = Skin;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
