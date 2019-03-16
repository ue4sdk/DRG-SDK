// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_Crafting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UVanityItem*>     In_Vanity_Items                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            VisibleRank                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::GetNextAvailableRank(TArray<class UVanityItem*>* In_Vanity_Items, int* VisibleRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.GetNextAvailableRank");

	struct
	{
		TArray<class UVanityItem*>     In_Vanity_Items;
		int                            VisibleRank;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (In_Vanity_Items != nullptr)
		*In_Vanity_Items = params.In_Vanity_Items;
	if (VisibleRank != nullptr)
		*VisibleRank = params.VisibleRank;
}


// Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_MENU_Crafting_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnKeyUp");

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


// Function _MENU_Crafting._MENU_Crafting_C.PrevGroup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::PrevGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.PrevGroup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.NextGroup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::NextGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.NextGroup");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.ClearItems
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::ClearItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.ClearItems");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.ShowItems
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EVanitySlot                    Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::ShowItems(EVanitySlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.ShowItems");

	struct
	{
		EVanitySlot                    Slot;
	} params;

	params.Slot = Slot;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.OnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::OnChanged(class UClass* CharacterClass, int Level, float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnChanged");

	struct
	{
		class UClass*                  CharacterClass;
		int                            Level;
		float                          Progress;
	} params;

	params.CharacterClass = CharacterClass;
	params.Level = Level;
	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.PreviewItem
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::PreviewItem(const TScriptInterface<class UCraftable>& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.PreviewItem");

	struct
	{
		TScriptInterface<class UCraftable> Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.HidePreview
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::HidePreview(const TScriptInterface<class UCraftable>& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.HidePreview");

	struct
	{
		TScriptInterface<class UCraftable> Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ClassSelector_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_3_BTN_ArmorClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_10_BTN_BeardClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_11_BTN_EyebrowsClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_13_BTN_HeadwearClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_14_BTN_SideburnsClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_15_BTN_MoustacheClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_16_BTN_SkinColorClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.Update");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_Crafting_C::BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.BndEvt__ITM_ItemCategories_K2Node_ComponentBoundEvent_1_BTN_HairColorClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_Crafting_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_Crafting_C::ExecuteUbergraph__MENU_Crafting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_Crafting._MENU_Crafting_C.ExecuteUbergraph__MENU_Crafting");

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
