#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPod_Rig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DropPod_Rig.BP_DropPod_Rig_C
// 0x0079 (0x079C - 0x0723)
class ABP_DropPod_Rig_C : public ABP_DropPod_Base_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x0723(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBoxComponent*                               Box1;                                                     // 0x0730(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             AudioLower;                                               // 0x0738(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             Audio_1;                                                  // 0x0740(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             DroppodSteam;                                             // 0x0748(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             DroppodLaunch;                                            // 0x0750(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               DwarfChecker_1;                                           // 0x0758(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLeaveSpacerig;                                          // 0x0760(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	TArray<class APlayerCharacter*>                    PlayersInside;                                            // 0x0770(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UAudioComponent*                             PlayLeftAudioOnOpenDoor;                                  // 0x0780(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             PlayRightAudioOnOpenDoor;                                 // 0x0788(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             SpaceRigDrillIdle;                                        // 0x0790(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                OldCountdownValue;                                        // 0x0798(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DropPod_Rig.BP_DropPod_Rig_C");
		return ptr;
	}


	void DetectAndStoreBarrels();
	int ActivePlayerCount();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMissionSelected(class UGeneratedMission* Mission);
	void OnAllDwavesInsidePod(bool AllInside);
	void OnHostInsidePod(bool isInside);
	void OnCountdownCompleted();
	void BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__DwarfChecker_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnHostTimerChanged(float newTime);
	void ExecuteUbergraph_BP_DropPod_Rig(int EntryPoint);
	void OnLeaveSpacerig__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
