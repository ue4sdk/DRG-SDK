#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_VampireComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_VampireComponent.BP_VampireComponent_C
// 0x0028 (0x0138 - 0x0110)
class UBP_VampireComponent_C : public UBezerkPerkComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FGameplayTagContainer                       RequiredTags;                                             // 0x0118(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_VampireComponent.BP_VampireComponent_C");
		return ptr;
	}


	void OnEnemyKilled(const struct FGameplayTagContainer& enemyTags, class AActor* enemy, class UDamageClass* DamageClass);
	void Receive_OnInitialized();
	void ExecuteUbergraph_BP_VampireComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
