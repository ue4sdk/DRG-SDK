// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OVERLAY_RetirementGranted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOVERLAY_RetirementGranted_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            RetirementCount                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOVERLAY_RetirementGranted_C::Play(class UClass* CharacterClass, int RetirementCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Play");

	struct
	{
		class UClass*                  CharacterClass;
		int                            RetirementCount;
	} params;

	params.CharacterClass = CharacterClass;
	params.RetirementCount = RetirementCount;

	UObject::ProcessEvent(fn, &params);
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOVERLAY_RetirementGranted_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.BndEvt__Enter_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UOVERLAY_RetirementGranted_C::BndEvt__Enter_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.BndEvt__Enter_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.BndEvt__IconIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UOVERLAY_RetirementGranted_C::BndEvt__IconIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.BndEvt__IconIntro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOVERLAY_RetirementGranted_C::ExecuteUbergraph_OVERLAY_RetirementGranted(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.ExecuteUbergraph_OVERLAY_RetirementGranted");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOVERLAY_RetirementGranted_C::OnFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OVERLAY_RetirementGranted.OVERLAY_RetirementGranted_C.OnFinished__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
