#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerState_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C
// 0x0080 (0x0579 - 0x04F9)
class ABP_PlayerState_SpaceRig_C : public ABP_PlayerState_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UItemUpgradePreviewComponent*                ItemUpgradePreview;                                       // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                HealthInsuranceStatus;                                    // 0x0510(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	TMap<struct FString, struct FString>               Stats;                                                    // 0x0518(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnStatChange;                                             // 0x0568(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               Debug;                                                    // 0x0578(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlayerState_SpaceRig.BP_PlayerState_SpaceRig_C");
		return ptr;
	}


	void GetHealthInsuranceStatus(int* HealthInsuranceStatus);
	void UserConstructionScript();
	void WatchStat(class UMissionStat* MissionStat);
	void OnStatChanged(class UMissionStat* MissionStat, float Value);
	void CommunicatStatChangeToServer(const struct FString& StatTitle, const struct FString& StatValue);
	void CommunicateStatChangeToAll(const struct FString& StatTitle, const struct FString& StatValue);
	void ExecuteUbergraph_BP_PlayerState_SpaceRig(int EntryPoint);
	void OnStatChange__DelegateSignature(const struct FString& StatTitle, const struct FString& StatValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
