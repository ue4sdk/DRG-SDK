#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_LootBug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_LootBug.AIC_LootBug_C
// 0x0008 (0x0458 - 0x0450)
class AAIC_LootBug_C : public AFSDAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIC_LootBug.AIC_LootBug_C");
		return ptr;
	}


	void HasLineOfSightTo(class AActor* Other, bool* Result);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPossess(class APawn* PossessedPawn);
	void OnDeath(class UHealthComponentBase* HealthComponent);
	void ExecuteUbergraph_AIC_LootBug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
