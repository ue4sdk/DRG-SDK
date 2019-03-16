#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_EndMission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_EndMission.EWC_EndMission_C
// 0x0020 (0x0068 - 0x0048)
class UEWC_EndMission_C : public UEWC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     SpawnLocation;                                            // 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UEnemyGroupDescriptor*                       EnemyGroup;                                               // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EWC_EndMission.EWC_EndMission_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_EndMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
