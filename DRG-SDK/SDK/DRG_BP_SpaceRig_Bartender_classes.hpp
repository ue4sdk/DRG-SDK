#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpaceRig_Bartender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C
// 0x0168 (0x04E0 - 0x0378)
class ABP_SpaceRig_Bartender_C : public ASpaceRigBar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    SupporterParticleSystem;                                  // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_XmasCapStandalone;                                     // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Cube1;                                                    // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidgetComponent*                            AbyssBarSign_widget;                                      // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCableComponent*                             Cable2;                                                   // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCableComponent*                             Cable1;                                                   // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCableComponent*                             Cable;                                                    // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               GreetColliderBox;                                         // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidgetComponent*                            BackgroundMenuWidget;                                     // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      BartenderMesh;                                            // 0x03D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             BartenderRotator;                                         // 0x03E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              LerpTimeline_NewTrack_0_6C29CBCD4E3E9F9E0BF33ABFD7C7E018; // 0x03E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LerpTimeline__Direction_6C29CBCD4E3E9F9E0BF33ABFD7C7E018; // 0x03EC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LerpTimeline;                                             // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              FinishedTimeline_Time_B53F699A4A357873471E8CB3303A6A82;   // 0x03F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FinishedTimeline__Direction_B53F699A4A357873471E8CB3303A6A82;// 0x03FC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FinishedTimeline;                                         // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AFSDPlayerState*                             CurrentCustomerState;                                     // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          MaterialWithCustomer;                                     // 0x0410(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          MaterialWillNotServe;                                     // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          MaterialCanServe;                                         // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class ABP_DrinksBox_C*>                     DrinkBoxes;                                               // 0x0428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	class UDrinkableDataAsset*                         CurrentDrinkable;                                         // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                DrinksSpawned;                                            // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0444(0x000C) MISSED OFFSET
	struct FTransform                                  StartTransform;                                           // 0x0450(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x0480(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SourceTransform;                                          // 0x04B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C");
		return ptr;
	}


	void PlayGreeting(float* Duration);
	void PlayAnim(class UAnimMontage* MontageToPlay, float* Duration);
	void PlayNegative(float* Duration);
	void PlayAffirmative(float* Duration);
	void Pour(class ABP_DrinksBox_C* DrinkBox, float* PourDuration);
	void SetBartenderLightMaterial(class UMaterialInterface* SourceMaterial);
	void OnRep_CurrentCustomerState();
	void SetCustomer(class APlayerCharacter* Customer);
	void CanOrderNewRound(bool* CanOrder);
	void UserConstructionScript();
	void LerpTimeline__FinishedFunc();
	void LerpTimeline__UpdateFunc();
	void FinishedTimeline__FinishedFunc();
	void FinishedTimeline__UpdateFunc();
	void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user);
	void ReceiveBeginPlay();
	void BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse);
	void LookAtCustomer(class APlayerCharacter* Customer);
	void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
	void Update_Bartender_Lights();
	void SpawnDrinks(class UDrinkableDataAsset* Drinable);
	void Lerp_To(const struct FTransform& PourTransform, float Duration);
	void Server_Spawn_Next_Drink();
	void OnAvailableForNewDrink_Event(class ABP_DrinksBox_C* DrinkBox);
	void OnDrinkReady_Event(class ABP_DrinksBox_C* DrinkBox);
	void Return_To_Idle();
	void All_BeginSpawnDrinks(bool PlayFireworks);
	void Client_Spawn_Next_Drink(class ABP_DrinksBox_C* DrinkBox);
	void BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Look_Towards(class AActor* Actor, float Duration);
	void Init_Background_Menu();
	void Toggle_Fireworks(bool Enabled);
	void ExecuteUbergraph_BP_SpaceRig_Bartender(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
