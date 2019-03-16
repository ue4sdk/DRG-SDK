#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LVL_CharacterSelection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C
// 0x0038 (0x0368 - 0x0330)
class ALVL_CharacterSelection_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ULevelSequencePlayer*                        Player;                                                   // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ACharacterSelectionSwitcher_C*               switcher;                                                 // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FCharacterViewInfo>                  CharViewerList;                                           // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class ACameraActor*                                CameraActor_1_ExecuteUbergraph_LVL_CharacterSelection_RefProperty;// 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ACharacterSelectionSwitcher_C*               CharacterSelectionSwitcher_186_ExecuteUbergraph_LVL_CharacterSelection_RefProperty;// 0x0360(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LVL_CharacterSelection.LVL_CharacterSelection_C");
		return ptr;
	}


	void StopPlayer();
	void StartPlayer();
	void StarPlay();
	void StopPlay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LVL_CharacterSelection(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
