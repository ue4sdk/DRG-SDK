// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_SkinItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SkinItem.ITM_SkinItem_C.SetState
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSkin*               InSkin                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InHovered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InEquipped                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinItem_C::SetState(class UItemSkin* InSkin, bool InLocked, bool InHovered, bool InEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.SetState");

	struct
	{
		class UItemSkin*               InSkin;
		bool                           InLocked;
		bool                           InHovered;
		bool                           InEquipped;
	} params;

	params.InSkin = InSkin;
	params.InLocked = InLocked;
	params.InHovered = InHovered;
	params.InEquipped = InEquipped;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_SkinItem_C::IsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.IsUnlocked");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_SkinItem.ITM_SkinItem_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_SkinItem_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_SkinItem_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_SkinItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__AnimUnlocked_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_SkinItem_C::BndEvt__AnimUnlocked_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__AnimUnlocked_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.Play Intro
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Max_Columns                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinItem_C::Play_Intro(float Duration, int Max_Columns)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Play Intro");

	struct
	{
		float                          Duration;
		int                            Max_Columns;
	} params;

	params.Duration = Duration;
	params.Max_Columns = Max_Columns;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_SkinItem_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_SkinItem_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnSkinUnlocked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSkin*               Skin                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinItem_C::OnSkinUnlocked_Event(class UItemSkin* Skin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnSkinUnlocked_Event");

	struct
	{
		class UItemSkin*               Skin;
	} params;

	params.Skin = Skin;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.Detect Skin Unlock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_SkinItem_C::Detect_Skin_Unlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Detect Skin Unlock");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_SkinItem_C::Ping_Skin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.Ping Skin");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinItem_C::ExecuteUbergraph_ITM_SkinItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.ExecuteUbergraph_ITM_SkinItem");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnSkinUnlocked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_SkinItem_C::OnSkinUnlocked__DelegateSignature(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnSkinUnlocked__DelegateSignature");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_SkinItem_C::OnUnhovering__DelegateSignature(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnUnhovering__DelegateSignature");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         SkinItem                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_SkinItem_C::OnHovering__DelegateSignature(class UITM_SkinItem_C* SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnHovering__DelegateSignature");

	struct
	{
		class UITM_SkinItem_C*         SkinItem;
	} params;

	params.SkinItem = SkinItem;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_SkinItem_C*         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_SkinItem_C::OnSkinClicked__DelegateSignature(class UITM_SkinItem_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinItem.ITM_SkinItem_C.OnSkinClicked__DelegateSignature");

	struct
	{
		class UITM_SkinItem_C*         Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
