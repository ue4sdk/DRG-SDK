// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_NormalBlasterShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_NormalBlasterShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.OnImpacted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_NormalBlasterShot_C::OnImpacted(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.OnImpacted");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.MakeBouncy
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APRJ_NormalBlasterShot_C::MakeBouncy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.MakeBouncy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ImpactVelocity                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_NormalBlasterShot_C::BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.BndEvt__MovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	struct
	{
		struct FHitResult              ImpactResult;
		struct FVector                 ImpactVelocity;
	} params;

	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.ExecuteUbergraph_PRJ_NormalBlasterShot
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_NormalBlasterShot_C::ExecuteUbergraph_PRJ_NormalBlasterShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_NormalBlasterShot.PRJ_NormalBlasterShot_C.ExecuteUbergraph_PRJ_NormalBlasterShot");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
