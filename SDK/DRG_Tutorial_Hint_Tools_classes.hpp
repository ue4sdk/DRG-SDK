#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_Tools_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_Tools.Tutorial_Hint_Tools_C
// 0x000C (0x018C - 0x0180)
class UTutorial_Hint_Tools_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              First_Time_Delay;                                         // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tutorial_Hint_Tools.Tutorial_Hint_Tools_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Tools(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
