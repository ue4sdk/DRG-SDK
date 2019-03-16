// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ItemCategories_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ItemCategories.ITM_ItemCategories_C.GetButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EVanitySlot                    Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBTN_ItemCategory_C*     Button                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_ItemCategories_C::GetButton(EVanitySlot Slot, class UBTN_ItemCategory_C** Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.GetButton");

	struct
	{
		EVanitySlot                    Slot;
		class UBTN_ItemCategory_C*     Button;
	} params;

	params.Slot = Slot;

	UObject::ProcessEvent(fn, &params);

	if (Button != nullptr)
		*Button = params.Button;
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Armor_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Beard_K2Node_ComponentBoundEvent_4_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Eyebrows_K2Node_ComponentBoundEvent_5_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_6_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Headwear_K2Node_ComponentBoundEvent_7_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Moustache_K2Node_ComponentBoundEvent_8_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_Sideburns_K2Node_ComponentBoundEvent_9_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ItemCategories_C::SetData(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.SetData");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BndEvt__BTN_HairColor_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.OnClosed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.ExecuteUbergraph_ITM_ItemCategories
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ItemCategories_C::ExecuteUbergraph_ITM_ItemCategories(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.ExecuteUbergraph_ITM_ItemCategories");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HairColorClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_HairColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HairColorClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_MoustacheClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_MoustacheClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_MoustacheClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SideburnsClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_SideburnsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SideburnsClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HeadwearClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_HeadwearClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_HeadwearClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SkinColorClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_SkinColorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_SkinColorClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_EyebrowsClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_EyebrowsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_EyebrowsClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_BeardClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_BeardClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_BeardClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_ArmorClicked__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ItemCategories_C::BTN_ArmorClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemCategories.ITM_ItemCategories_C.BTN_ArmorClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
