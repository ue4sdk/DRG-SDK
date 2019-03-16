#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_ChangeDestIfFarAway_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C
// 0x0038 (0x00D8 - 0x00A0)
class UTSK_ChangeDestIfFarAway_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      DestKey;                                                  // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              MaxDistToPlayers;                                         // 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ApproximateDestDistance;                                  // 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TSK_ChangeDestIfFarAway.TSK_ChangeDestIfFarAway_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_ChangeDestIfFarAway(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
