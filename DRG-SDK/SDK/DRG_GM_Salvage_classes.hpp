#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GM_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GM_Salvage.GM_Salvage_C
// 0x0070 (0x0640 - 0x05D0)
class AGM_Salvage_C : public ABP_NetworkPlayGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             UplinkComplete_Cue;                                       // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             DroppodMuleReady_Cue;                                     // 0x05E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AMiningPod*                                  DropPod;                                                  // 0x05E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AEVENT_DropPodDefense_Base_C*                DefenseEvent;                                             // 0x05F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class AActor*>                              MulesSalvaged;                                            // 0x05F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class ABP_Salvage_Point_C*>                 RepairPoints;                                             // 0x0608(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UOBJ_1st_Salvage_C*                          Objective;                                                // 0x0618(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              SalvagePoints;                                            // 0x0620(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UClass*>                              RepairEvents;                                             // 0x0630(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GM_Salvage.GM_Salvage_C");
		return ptr;
	}


	void SpawnRepairPoints();
	void EnableNextRepairPoint();
	void UserConstructionScript();
	void AllMulesSalvaged(TArray<class AActor*> Mules);
	void OnLevelGenerationComplete(int pass);
	void Call_DropPod();
	void DonkeyButtonPressed();
	void ReachedDropShip();
	void RepairPoint_Repaired(class AActor* RepairPoint);
	void DefendFail();
	void DefendDone();
	void SetObjective(class UOBJ_1st_Salvage_C* Objective);
	void OnCountdownFinished();
	void Countdowncomplete();
	void ExecuteUbergraph_GM_Salvage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
