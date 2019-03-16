// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_ZipLineState_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 LookVector                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 CurrentVelocity                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UBP_ZipLineState_C::GetJumpVector(const struct FVector& LookVector, const struct FVector& CurrentVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZipLineState.BP_ZipLineState_C.GetJumpVector");

	struct
	{
		struct FVector                 LookVector;
		struct FVector                 CurrentVelocity;
		struct FVector                 ReturnValue;
	} params;

	params.LookVector = LookVector;
	params.CurrentVelocity = CurrentVelocity;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
