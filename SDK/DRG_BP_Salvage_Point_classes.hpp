#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_Point_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C
// 0x0011 (0x0339 - 0x0328)
class ABP_Salvage_Point_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      SalvageState;                                             // 0x0338(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Salvage_Point.BP_Salvage_Point_C");
		return ptr;
	}


	void SetSalvagePointState(unsigned char State);
	void OnRep_State();
	void UserConstructionScript();
	void OnDefenseComplete();
	void OnDefenseStart();
	void EnableRepair();
	void OnDefenseFail();
	void ExecuteUbergraph_BP_Salvage_Point(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
