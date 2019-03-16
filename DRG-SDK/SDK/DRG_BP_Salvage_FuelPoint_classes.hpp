#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_FuelPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C
// 0x001F (0x0358 - 0x0339)
class ABP_Salvage_FuelPoint_C : public ABP_Salvage_Point_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTerrainPlacementComponent*                  terrainPlacement;                                         // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ABP_Salvage_FuelPod_C*                       Pod;                                                      // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Salvage_FuelPoint.BP_Salvage_FuelPoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void EnableRepair();
	void OnDefenseStart();
	void OnDefenseComplete();
	void OnDefenseFail();
	void ExecuteUbergraph_BP_Salvage_FuelPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
