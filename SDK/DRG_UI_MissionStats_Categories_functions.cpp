// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_MissionStats_Categories_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ForwardDirection               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Categories_C::SelectNext(bool ForwardDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.SelectNext");

	struct
	{
		bool                           ForwardDirection;
	} params;

	params.ForwardDirection = ForwardDirection;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_MissionStats_Categories_C::Add_Vertical_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Vertical Bar");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              CategoryIcon                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsAllCategory                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUI_MissionStats_Category_C* CategoryWidget                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_MissionStats_Categories_C::Add_Category(class UTexture2D* CategoryIcon, bool IsAllCategory, class UUI_MissionStats_Category_C** CategoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Add Category");

	struct
	{
		class UTexture2D*              CategoryIcon;
		bool                           IsAllCategory;
		class UUI_MissionStats_Category_C* CategoryWidget;
	} params;

	params.CategoryIcon = CategoryIcon;
	params.IsAllCategory = IsAllCategory;

	UObject::ProcessEvent(fn, &params);

	if (CategoryWidget != nullptr)
		*CategoryWidget = params.CategoryWidget;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class UTexture2D*>      Selection                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UUI_MissionStats_Categories_C::GetCategorySelection(TArray<class UTexture2D*>* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.GetCategorySelection");

	struct
	{
		TArray<class UTexture2D*>      Selection;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Selection != nullptr)
		*Selection = params.Selection;
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Categories_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>      CategoryIcons                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UUI_MissionStats_Categories_C::Set_Categories(TArray<class UTexture2D*> CategoryIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Set Categories");

	struct
	{
		TArray<class UTexture2D*>      CategoryIcons;
	} params;

	params.CategoryIcons = CategoryIcons;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C* Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_MissionStats_Categories_C::Setup_Widget_Events(class UUI_MissionStats_Category_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.Setup Widget Events");

	struct
	{
		class UUI_MissionStats_Category_C* Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_MissionStats_Category_C* CategoryWidget                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           Is_Selected                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Categories_C::On_Category_Clicked(class UUI_MissionStats_Category_C* CategoryWidget, bool Is_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.On Category Clicked");

	struct
	{
		class UUI_MissionStats_Category_C* CategoryWidget;
		bool                           Is_Selected;
	} params;

	params.CategoryWidget = CategoryWidget;
	params.Is_Selected = Is_Selected;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_MissionStats_Categories_C::BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_MissionStats_Categories_C::BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStats_Categories_C::ExecuteUbergraph_UI_MissionStats_Categories(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.ExecuteUbergraph_UI_MissionStats_Categories");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_MissionStats_Categories_C::OnSelectedChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStats_Categories.UI_MissionStats_Categories_C.OnSelectedChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
