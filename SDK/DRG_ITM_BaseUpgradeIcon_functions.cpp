// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BaseUpgradeIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_BaseUpgradeIcon_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.IsInteractable");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InIcon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EItemUpgradeStatus             InStatus                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InLockRequirement              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              LockTexture                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ENUM_MenuColors>   LockTint                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InShowEquippedAsBorder         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InShowLockIcon                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InShowLockRequirement          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_BaseUpgradeIcon_C::Update(class UTexture2D* InIcon, EItemUpgradeStatus InStatus, int InLockRequirement, class UTexture2D* LockTexture, TEnumAsByte<ENUM_MenuColors> LockTint, bool InShowEquippedAsBorder, bool InShowLockIcon, bool InShowLockRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.Update");

	struct
	{
		class UTexture2D*              InIcon;
		EItemUpgradeStatus             InStatus;
		int                            InLockRequirement;
		class UTexture2D*              LockTexture;
		TEnumAsByte<ENUM_MenuColors>   LockTint;
		bool                           InShowEquippedAsBorder;
		bool                           InShowLockIcon;
		bool                           InShowLockRequirement;
	} params;

	params.InIcon = InIcon;
	params.InStatus = InStatus;
	params.InLockRequirement = InLockRequirement;
	params.LockTexture = LockTexture;
	params.LockTint = LockTint;
	params.InShowEquippedAsBorder = InShowEquippedAsBorder;
	params.InShowLockIcon = InShowLockIcon;
	params.InShowLockRequirement = InShowLockRequirement;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_BaseUpgradeIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_79_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_BaseUpgradeIcon_C::BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.BndEvt__WidgetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_BaseUpgradeIcon_C::ExecuteUbergraph_ITM_BaseUpgradeIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.ExecuteUbergraph_ITM_BaseUpgradeIcon");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_BaseUpgradeIcon_C::OnClicked__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnClicked__DelegateSignature");

	struct
	{
		class UITM_BaseUpgradeIcon_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_BaseUpgradeIcon_C::OnHoverEnd__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverEnd__DelegateSignature");

	struct
	{
		class UITM_BaseUpgradeIcon_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_BaseUpgradeIcon_C*  Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_BaseUpgradeIcon_C::OnHoverBegin__DelegateSignature(class UITM_BaseUpgradeIcon_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseUpgradeIcon.ITM_BaseUpgradeIcon_C.OnHoverBegin__DelegateSignature");

	struct
	{
		class UITM_BaseUpgradeIcon_C*  Widget;
	} params;

	params.Widget = Widget;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
