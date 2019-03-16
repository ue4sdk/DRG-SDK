// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Loadout_CharSelect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SetSwitchButtonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::SetSwitchButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SetSwitchButtonState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.GetPrevCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::GetPrevCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.GetPrevCharacter");

	struct
	{
		class UClass*                  Character;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Character != nullptr)
		*Character = params.Character;
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.GetNextCharacter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  Character                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::GetNextCharacter(class UClass** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.GetNextCharacter");

	struct
	{
		class UClass*                  Character;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Character != nullptr)
		*Character = params.Character;
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.GetBPGameState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_GameState_C*         GameState                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::GetBPGameState(class ABP_GameState_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.GetBPGameState");

	struct
	{
		class ABP_GameState_C*         GameState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SetCharacterInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  playerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::SetCharacterInfo(class UClass* playerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SetCharacterInfo");

	struct
	{
		class UClass*                  playerClass;
	} params;

	params.playerClass = playerClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::SetData(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SetData");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SelectPrev
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::SelectPrev()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SelectPrev");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SelectNext
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::SelectNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SelectNext");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SwitchToCharacter
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::SwitchToCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.SwitchToCharacter");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.CharacterChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::CharacterChanged(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.CharacterChanged");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_Loadout_CharSelect_C::BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.ExecuteUbergraph_ITM_Loadout_CharSelect
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::ExecuteUbergraph_ITM_Loadout_CharSelect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.ExecuteUbergraph_ITM_Loadout_CharSelect");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.OnCharacterChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Loadout_CharSelect_C::OnCharacterChanged__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Loadout_CharSelect.ITM_Loadout_CharSelect_C.OnCharacterChanged__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
