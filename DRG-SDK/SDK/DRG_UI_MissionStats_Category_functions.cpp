// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_MissionStats_Category_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_MissionStats_Category_C::Click()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Click");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UUI_MissionStats_Category_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTexture2D*              CategoryIcon                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::GetCategoryIcon(class UTexture2D** CategoryIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.GetCategoryIcon");

	struct
	{
		class UTexture2D*              CategoryIcon;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CategoryIcon != nullptr)
		*CategoryIcon = params.CategoryIcon;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UUI_MissionStats_Category_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseButtonUp");

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


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CategorySelected               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::IsSelected(bool* CategorySelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.IsSelected");

	struct
	{
		bool                           CategorySelected;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CategorySelected != nullptr)
		*CategorySelected = params.CategorySelected;
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           CategorySelected               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::Set_Selected(bool CategorySelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Selected");

	struct
	{
		bool                           CategorySelected;
	} params;

	params.CategorySelected = CategorySelected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_MissionStats_Category_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_MissionStats_Category_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseEnter");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_MissionStats_Category_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.OnMouseLeave");

	struct
	{
		struct FPointerEvent           MouseEvent;
	} params;

	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::Set_Hovered(bool IsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.Set Hovered");

	struct
	{
		bool                           IsHovered;
	} params;

	params.IsHovered = IsHovered;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::ExecuteUbergraph_UI_MissionStats_Category(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.ExecuteUbergraph_UI_MissionStats_Category");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C* CategoryWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           Is_Selected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Category_C::On_Clicked__DelegateSignature(class UUI_MissionStats_Category_C* CategoryWidget, bool Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Category.UI_MissionStats_Category_C.On Clicked__DelegateSignature");

	struct
	{
		class UUI_MissionStats_Category_C* CategoryWidget;
		bool                           Is_Selected;
	} params;

	params.CategoryWidget = CategoryWidget;
	params.Is_Selected = Is_Selected;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
