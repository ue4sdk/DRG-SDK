// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_RestoreSaveList_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PlayerRank                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Credits                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PromotionRank                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 SlotName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           CurrentSave                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFSDSaveGame*            SaveGameInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RestoreSaveList_Entry_C::SetValues(int PlayerRank, int Credits, int PromotionRank, const struct FString& SlotName, bool CurrentSave, class UFSDSaveGame* SaveGameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.SetValues");

	struct
	{
		int                            PlayerRank;
		int                            Credits;
		int                            PromotionRank;
		struct FString                 SlotName;
		bool                           CurrentSave;
		class UFSDSaveGame*            SaveGameInstance;
	} params;

	params.PlayerRank = PlayerRank;
	params.Credits = Credits;
	params.PromotionRank = PromotionRank;
	params.SlotName = SlotName;
	params.CurrentSave = CurrentSave;
	params.SaveGameInstance = SaveGameInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_RestoreSaveList_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_RestoreSaveList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RestoreSaveList_Entry_C::Answer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.Answer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RestoreSaveList_Entry_C::ExecuteUbergraph_ITM_RestoreSaveList_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RestoreSaveList_Entry.ITM_RestoreSaveList_Entry_C.ExecuteUbergraph_ITM_RestoreSaveList_Entry");

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
