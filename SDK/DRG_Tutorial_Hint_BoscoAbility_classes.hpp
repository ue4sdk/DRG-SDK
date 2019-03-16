#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_BoscoAbility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C
// 0x0058 (0x01D8 - 0x0180)
class UTutorial_Hint_BoscoAbility_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTutorialHint                               LaserpointOutHint;                                        // 0x0190(0x0048) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C");
		return ptr;
	}


	void ReceiveOnHidden();
	void OnLaserPointerPressed();
	void OnLaserPointerReleased();
	void ReceiveOnInitialized();
	void Mark_Ready_If(bool Condition);
	void OnBoscoChanged(class ABosco* Bosco);
	void ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
