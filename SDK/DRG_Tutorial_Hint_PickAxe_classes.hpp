#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_PickAxe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C
// 0x0010 (0x0190 - 0x0180)
class UTutorial_Hint_PickAxe_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              FirstTimeDelay;                                           // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tutorial_Hint_PickAxe.Tutorial_Hint_PickAxe_C");
		return ptr;
	}


	void ReceiveOnHidden();
	void ReceiveOnInitialized();
	void OnManualMiningEnd();
	void ExecuteUbergraph_Tutorial_Hint_PickAxe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
