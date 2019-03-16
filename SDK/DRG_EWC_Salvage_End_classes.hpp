#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_Salvage_End_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_Salvage_End.EWC_Salvage_End_C
// 0x0028 (0x0058 - 0x0030)
class UEWC_Salvage_End_C : public UEnemyWaveController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     SpawnLocation;                                            // 0x0038(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UEnemyGroupDescriptor*                       EnemyGroup;                                               // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                WaveCountConstantPressure;                                // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                WaveCountWaves;                                           // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EWC_Salvage_End.EWC_Salvage_End_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_Salvage_End(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
