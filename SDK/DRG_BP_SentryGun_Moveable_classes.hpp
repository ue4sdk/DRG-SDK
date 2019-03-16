#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SentryGun_Moveable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C
// 0x0031 (0x04F9 - 0x04C8)
class ABP_SentryGun_Moveable_C : public ARecallableSentryGun
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    P_SentryGunMovementTrail;                                 // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             AudioMoving;                                              // 0x04D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChildActorComponent*                        SentryGunActor;                                           // 0x04E0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnOnNoAmmo;                                           // 0x04E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class ARecallableSentryGunItem*                    Item;                                                     // 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               ShowAllOutlines;                                          // 0x04F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SentryGun_Moveable.BP_SentryGun_Moveable_C");
		return ptr;
	}


	void GetStateDescription(struct FText* Description);
	void SpawnAudioOnPlayer(class USoundBase* Audio);
	class UClass* GetSentryGunClass();
	void GetSentryOwner(class APlayerCharacter** AsPlayer_Character);
	class ASentryGun* GetSentryGun();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnMoveRequested();
	void OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
	void ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter);
	void OnAmmoCountChanged_Event_1(int AmmoCount, int Change);
	void AudioReadyToBuild();
	void OnMoving();
	void OnMoveFinished(bool returnedHome);
	void AudioBeginMove();
	void AudioMoveFinished();
	void AudioReturnedHome();
	void ReceiveOnStateChanged();
	void Update_Outline_And_Icon();
	void OnSentryStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
	void OnToggleOutline_Event(bool Visible);
	void OnItemEquipped_Event(class AItem* Item);
	void OnSelectedItemChanged(class ARecallableSentryGun* SentryGun);
	void ExecuteUbergraph_BP_SentryGun_Moveable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
