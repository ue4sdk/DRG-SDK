#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CSC_IceCaveLogic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CSC_IceCaveLogic.CSC_IceCaveLogic_C
// 0x0008 (0x00F8 - 0x00F0)
class UCSC_IceCaveLogic_C : public UCaveScriptComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CSC_IceCaveLogic.CSC_IceCaveLogic_C");
		return ptr;
	}


	void spawnParticles(class APlayerCharacter* Character);
	void ReceiveBeginPlay();
	void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
	void ExecuteUbergraph_CSC_IceCaveLogic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
