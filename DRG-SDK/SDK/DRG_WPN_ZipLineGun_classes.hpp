#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_ZipLineGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C
// 0x005F (0x06F7 - 0x0698)
class AWPN_ZipLineGun_C : public AZipLineItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0698(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x06A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x06A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x06B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFirstPersonStaticMeshComponent*             FirstPersonStaticMesh;                                    // 0x06B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        Muzzle_Light;                                             // 0x06C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UZiplineLauncherComponent*                   ZiplineLauncher;                                          // 0x06C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             Beam;                                                     // 0x06D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x06D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              debug_t;                                                  // 0x06E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	class UHUD_Crosshair_ZiplineGun_C*                 Crosshair;                                                // 0x06E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              BeamDelay;                                                // 0x06F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               InRange;                                                  // 0x06F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TooFar;                                                   // 0x06F5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               TooClose;                                                 // 0x06F6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_ZipLineGun.WPN_ZipLineGun_C");
		return ptr;
	}


	struct FVector CalcFirstPersonMuzzleLocation();
	bool CanFireWeapon(struct FText* FailMsg, class UDialogDataAsset** FailShout);
	void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void GetCrosshair(class UHUD_Crosshair_ZiplineGun_C** Result);
	void Update_Line_Of_Sight(const struct FVector& Direction, const struct FVector& End, bool DidHit);
	void Negate(float Value, float* Result);
	void Between(float Value, float Min, float Max, bool* IsBetween);
	void Can_Fire(struct FText* FailMsg, class UDialogDataAsset** FailShout, bool* CanShoot);
	struct FVector GetStartLocation();
	void LineTrace(struct FHitResult* OutHit, struct FVector* Direction, float* distance, bool* HitAny);
	void UserConstructionScript();
	void RecieveEquipped();
	void ClientShoot();
	void AddedToInventory(class APlayerCharacter* ItemOwner);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget* Crosshair);
	void RecieveStopUsing();
	void RecieveStartUsing();
	void ExecuteUbergraph_WPN_ZipLineGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
