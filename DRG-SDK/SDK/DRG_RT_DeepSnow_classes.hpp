#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_RT_DeepSnow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RT_DeepSnow.RT_DeepSnow_C
// 0x0008 (0x0030 - 0x0028)
class URT_DeepSnow_C : public UReactiveTerrain
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass RT_DeepSnow.RT_DeepSnow_C");
		return ptr;
	}


	void Receive_OnActorEntered(class UStatusEffectsComponent* StatusEffects);
	void Receive_OnActorLeft(class UStatusEffectsComponent* StatusEffects);
	void ExecuteUbergraph_RT_DeepSnow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
