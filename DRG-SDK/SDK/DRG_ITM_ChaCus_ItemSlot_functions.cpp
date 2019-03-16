// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ChaCus_ItemSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UITM_ChaCus_ItemSlot_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.OnKeyUp");

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


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCounterText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::UpdateCounterText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateCounterText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.GetCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class APlayerCharacter*        AsPlayer_Character             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::GetCharacter(class APlayerCharacter** AsPlayer_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.GetCharacter");

	struct
	{
		class APlayerCharacter*        AsPlayer_Character;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsPlayer_Character != nullptr)
		*AsPlayer_Character = params.AsPlayer_Character;
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UVanityItem*             Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::UpdateItem(class UVanityItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.UpdateItem");

	struct
	{
		class UVanityItem*             Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetData
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UVanityItem*>     vanityItems                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UVanityItem*             currentItem                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::SetData(TArray<class UVanityItem*> vanityItems, class UVanityItem* currentItem, class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.SetData");

	struct
	{
		TArray<class UVanityItem*>     vanityItems;
		class UVanityItem*             currentItem;
		class UClass*                  Character;
	} params;

	params.vanityItems = vanityItems;
	params.currentItem = currentItem;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__BasicScrollArrow_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.BndEvt__ArrowRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Prev
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::Prev()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Prev");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Next
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ChaCus_ItemSlot_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.Next");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ItemSlot_C::ExecuteUbergraph_ITM_ChaCus_ItemSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ItemSlot.ITM_ChaCus_ItemSlot_C.ExecuteUbergraph_ITM_ChaCus_ItemSlot");

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
