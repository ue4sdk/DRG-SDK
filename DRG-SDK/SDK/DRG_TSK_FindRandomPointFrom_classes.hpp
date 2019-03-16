#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_FindRandomPointFrom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C
// 0x0060 (0x0100 - 0x00A0)
class UTSK_FindRandomPointFrom_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              distance;                                                 // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SnapToCeiling;                                            // 0x00AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FindAtDistance;                                           // 0x00AD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
	struct FBlackboardKeySelector                      FromLocationKey;                                          // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FBlackboardKeySelector                      NewLocationKey;                                           // 0x00D8(0x0028) (CPF_Edit, CPF_BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TSK_FindRandomPointFrom.TSK_FindRandomPointFrom_C");
		return ptr;
	}


	struct FVector GetLocation();
	void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, struct FVector* Location);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPointFrom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
