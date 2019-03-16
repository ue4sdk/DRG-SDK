#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DEC_IsFacing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DEC_IsFacing.DEC_IsFacing_C
// 0x002C (0x00CC - 0x00A0)
class UDEC_IsFacing_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      toActor;                                                  // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Angle;                                                    // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DEC_IsFacing.DEC_IsFacing_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
