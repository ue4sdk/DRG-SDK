#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DEC_CanSeeTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DEC_CanSeeTarget.DEC_CanSeeTarget_C
// 0x003C (0x00DC - 0x00A0)
class UDEC_CanSeeTarget_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              MaxDistance;                                              // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TargetKey;                                                // 0x00A8(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	struct FVector                                     EyeLocationOffset;                                        // 0x00D0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DEC_CanSeeTarget.DEC_CanSeeTarget_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
