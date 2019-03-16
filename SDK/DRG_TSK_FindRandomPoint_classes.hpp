#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_FindRandomPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_FindRandomPoint.TSK_FindRandomPoint_C
// 0x0044 (0x00E4 - 0x00A0)
class UTSK_FindRandomPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      LocationKey;                                              // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              distance;                                                 // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SnapToCeiling;                                            // 0x00D4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FindAtDistance;                                           // 0x00D5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00D6(0x0002) MISSED OFFSET
	struct FVector                                     Destination;                                              // 0x00D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TSK_FindRandomPoint.TSK_FindRandomPoint_C");
		return ptr;
	}


	void snap(bool SnapToCeiling, class UDeepPathfinderMovement* Pathfinder, struct FVector* Location);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_FindRandomPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
