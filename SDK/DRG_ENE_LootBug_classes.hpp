#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_LootBug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_LootBug.ENE_LootBug_C
// 0x0074 (0x04B4 - 0x0440)
class AENE_LootBug_C : public ACaveWorm
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        DropShadow;                                               // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             Lootbug_idle;                                             // 0x0450(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UEnemyComponent*                             enemy;                                                    // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOutlineComponent*                           Outline;                                                  // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_3777A85D4507AA016A87A299C2D01021;   // 0x0468(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_3777A85D4507AA016A87A299C2D01021;   // 0x046C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UResourceData*>                       Loot;                                                     // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FVector2D                                   ChunkCountRange;                                          // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   ChunkValueRange;                                          // 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageLootDropChance;                                     // 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageLootDropCoolDown;                                   // 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UResourceData*>                       ResourceTypes;                                            // 0x04A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              LastLootDrop;                                             // 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_LootBug.ENE_LootBug_C");
		return ptr;
	}


	void Has_Loot(bool* Has_Loot);
	void Drop_Loot(const struct FVector& Impulse, const struct FVector& DropOffset, bool* success);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
	void OnFrozen();
	void OnUnFrozen();
	void ExecuteUbergraph_ENE_LootBug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
