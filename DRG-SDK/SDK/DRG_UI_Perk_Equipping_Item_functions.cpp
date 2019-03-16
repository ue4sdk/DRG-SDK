// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Perk_Equipping_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.CreateToolTip
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UUI_Perk_Equipping_Item_C::CreateToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.CreateToolTip");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.IsItemLocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ItemLocked                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::IsItemLocked(bool* ItemLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.IsItemLocked");

	struct
	{
		bool                           ItemLocked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ItemLocked != nullptr)
		*ItemLocked = params.ItemLocked;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.GetPerkAsset
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::GetPerkAsset(class UPerkAsset** PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.GetPerkAsset");

	struct
	{
		class UPerkAsset*              PerkAsset;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PerkAsset != nullptr)
		*PerkAsset = params.PerkAsset;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_Perk_Equipping_Item_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseButtonUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_Perk_Equipping_Item_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Perk
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPerkAsset*              PerkAsset                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::Set_Perk(class UPerkAsset* PerkAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Perk");

	struct
	{
		class UPerkAsset*              PerkAsset;
	} params;

	params.PerkAsset = PerkAsset;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Perk_Equipping_Item_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_Perk_Equipping_Item_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::Set_Selected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.Set Selected");

	struct
	{
		bool                           IsSelected;
	} params;

	params.IsSelected = IsSelected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.ExecuteUbergraph_UI_Perk_Equipping_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::ExecuteUbergraph_UI_Perk_Equipping_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.ExecuteUbergraph_UI_Perk_Equipping_Item");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_Perk_Equipping_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Perk_Equipping_Item_C::OnClicked__DelegateSignature(class UUI_Perk_Equipping_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Perk_Equipping_Item.UI_Perk_Equipping_Item_C.OnClicked__DelegateSignature");

	struct
	{
		class UUI_Perk_Equipping_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
