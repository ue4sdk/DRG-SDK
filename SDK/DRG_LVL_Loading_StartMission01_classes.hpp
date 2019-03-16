#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LVL_Loading_StartMission01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LVL_Loading_StartMission01.LVL_Loading_StartMission01_C
// 0x0010 (0x0340 - 0x0330)
class ALVL_Loading_StartMission01_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class ULevelSequencePlayer*                        Player;                                                   // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LVL_Loading_StartMission01.LVL_Loading_StartMission01_C");
		return ptr;
	}


	void CreatePlayer();
	void StopPlayer();
	void StartPlayer();
	void ReceiveBeginPlay();
	void PlayerStart();
	void PlayerStop();
	void ExecuteUbergraph_LVL_Loading_StartMission01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
