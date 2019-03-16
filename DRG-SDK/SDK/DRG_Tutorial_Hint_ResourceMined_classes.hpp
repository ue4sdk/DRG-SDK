#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_ResourceMined_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C
// 0x0020 (0x01A0 - 0x0180)
class UTutorial_Hint_ResourceMined_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UResourceData*                               ResourceType;                                             // 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCappedResource*                             Resource;                                                 // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumAmount;                                            // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DelayBeforeActive;                                        // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C");
		return ptr;
	}


	void OnIncreased_Event(class UCappedResource* Resource, float Amount);
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_ResourceMined(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
