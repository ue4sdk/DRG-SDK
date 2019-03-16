#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TSK_ChangeTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TSK_ChangeTarget.TSK_ChangeTarget_C
// 0x0040 (0x00E0 - 0x00A0)
class UTSK_ChangeTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	bool                                               MustBeAlive;                                              // 0x00D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00D1(0x0007) MISSED OFFSET
	class APlayerCharacter*                            NewTarget;                                                // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass TSK_ChangeTarget.TSK_ChangeTarget_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_ChangeTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
