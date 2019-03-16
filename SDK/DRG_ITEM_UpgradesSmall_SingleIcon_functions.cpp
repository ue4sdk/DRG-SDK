// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_UpgradesSmall_SingleIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UITEM_UpgradesSmall_SingleIcon_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnMouseButtonUp");

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


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_C::Show(class UItemUpgrade* Upgrade, class UClass* Item, class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.Show");

	struct
	{
		class UItemUpgrade*            Upgrade;
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
	} params;

	params.Upgrade = Upgrade;
	params.Item = Item;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UITEM_UpgradesSmall_SingleIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UITEM_UpgradesSmall_SingleIcon_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_C::ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnHoverEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_C::OnHoverEnd__DelegateSignature(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnHoverEnd__DelegateSignature");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnHoverStart__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_C::OnHoverStart__DelegateSignature(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnHoverStart__DelegateSignature");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemUpgrade*            Upgrade                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_C::OnClicked__DelegateSignature(class UItemUpgrade* Upgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon.ITEM_UpgradesSmall_SingleIcon_C.OnClicked__DelegateSignature");

	struct
	{
		class UItemUpgrade*            Upgrade;
	} params;

	params.Upgrade = Upgrade;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
