#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_ShieldDisruption_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldDisruption.BP_ShieldDisruption_C
// 0x0008 (0x0030 - 0x0028)
class UBP_ShieldDisruption_C : public URunningMissionBP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ShieldDisruption.BP_ShieldDisruption_C");
		return ptr;
	}


	void StartLogic();
	void PlayerSpawned(class APlayerCharacter* PlayerCharacter);
	void ExecuteUbergraph_BP_ShieldDisruption(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
