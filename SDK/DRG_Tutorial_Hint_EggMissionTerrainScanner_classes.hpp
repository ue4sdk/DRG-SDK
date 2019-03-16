#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_EggMissionTerrainScanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C
// 0x001C (0x019C - 0x0180)
class UTutorial_Hint_EggMissionTerrainScanner_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              First_Time_Delay;                                         // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	class UClass*                                      Target_Objective;                                         // 0x0190(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AfterUseDelay;                                            // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C");
		return ptr;
	}


	void ReceiveOnInitialized();
	void OnToggleMapTool_Event(bool Visible);
	void Mark_Ready();
	void ReceiveOnHidden();
	void ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
