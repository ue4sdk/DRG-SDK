#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_GrapplingGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C
// 0x0084 (0x051C - 0x0498)
class AWPN_GrapplingGun_C : public AGrapplingHookGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x04A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 CoolDownWidgetFirstPerson;                                // 0x04A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x04B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      Projectile;                                               // 0x04B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             TP_Muzzle;                                                // 0x04C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             FP_Muzzle;                                                // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCableComponent*                             Cable;                                                    // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A;// 0x04D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A;// 0x04DC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ProjectileMovement;                                       // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               Pulling;                                                  // 0x04E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	struct FVector                                     PullTowards;                                              // 0x04EC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RopeTime;                                                 // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    PullRotation;                                             // 0x04FC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UHUD_Crosshair_GrapplingGun_C*               Crosshair;                                                // 0x0508(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               Recharge;                                                 // 0x0510(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              MaxReleaseSpeed;                                          // 0x0514(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OnReleaseSpeedMod;                                        // 0x0518(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_GrapplingGun.WPN_GrapplingGun_C");
		return ptr;
	}


	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void OnRep_Pulling();
	struct FTransform GetCableTransform();
	void SetCableEndPoint(const struct FVector& Location);
	void GetCableParent(class USceneComponent** Muzzle);
	void ToggleCable(bool bNewVisibility);
	void GetAimView(struct FVector* Location, struct FVector* Forward);
	void UserConstructionScript();
	void ProjectileMovement__FinishedFunc();
	void ProjectileMovement__UpdateFunc();
	void RecieveEquipped();
	void ReceiveTick(float DeltaSeconds);
	void Multicast_Shoot(const struct FVector& Point);
	void RecieveStartUsing();
	void RecieveUnequipped();
	void RecieveStopUsing();
	void Stop_Pulling();
	void ServerShoot(const struct FVector& Point);
	void AddedToInventory(class APlayerCharacter* ItemOwner);
	void ReceiveBeginPlay();
	void Init_Character();
	void OnDeath(class UHealthComponentBase* HealthComponent);
	void RecieveCycledItem();
	void Gunsling();
	void ExecuteUbergraph_WPN_GrapplingGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
