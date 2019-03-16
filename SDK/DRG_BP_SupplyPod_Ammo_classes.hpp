#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SupplyPod_Ammo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C
// 0x00C0 (0x0450 - 0x0390)
class ABP_SupplyPod_Ammo_C : public ARessuplyPod
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPathfinderCollisionComponent*               PathfinderCollision;                                      // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           UseCapsule4;                                              // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           UseCapsule3;                                              // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           UseCapsule2;                                              // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           UseCapsule1;                                              // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USingleUsableComponent*                      SingleUsable3;                                            // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USingleUsableComponent*                      SingleUsable4;                                            // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SupplyPod_Door_5;                                         // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SupplyPod_Door_4;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SupplyPod_Door_3;                                         // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SupplyPod_Door_2;                                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SK_DropPod_Drill;                                         // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USingleUsableComponent*                      SingleUsable1;                                            // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USingleUsableComponent*                      SingleUsable2;                                            // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOutlineComponent*                           Outline;                                                  // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAutoCarverComponent*                        AutoCarver;                                               // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class URadarPointComponent*                        radarPoint;                                               // 0x0438(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0440(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_DropPod_Hull;                                          // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C");
		return ptr;
	}


	void HandleUsableChanged(class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh, bool canUse);
	void HealUser(class APlayerCharacter* user);
	void DisableUsable(class UPrimitiveComponent* Collider, class USkeletalMeshComponent* DoorMesh);
	void ResupplyUser(class APlayerCharacter* user);
	void UserConstructionScript();
	void OnDroppodImpact();
	void OnDropStarted();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse);
	void BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* user);
	void BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* user);
	void BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* user);
	void BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* user);
	void OnTunnelBLocked();
	void SupplyUsed(class APlayerCharacter* user, class USingleUsableComponent* Target);
	void UsableChanged(bool canUse, class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh);
	void ExecuteUbergraph_BP_SupplyPod_Ammo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
