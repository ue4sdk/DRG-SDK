// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_Spider_Tank_Boss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_Spider_Tank_Boss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.OnImpacted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_Spider_Tank_Boss_C::OnImpacted(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.OnImpacted");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.ExecuteUbergraph_PRJ_Spider_Tank_Boss
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_Spider_Tank_Boss_C::ExecuteUbergraph_PRJ_Spider_Tank_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_Spider_Tank_Boss.PRJ_Spider_Tank_Boss_C.ExecuteUbergraph_PRJ_Spider_Tank_Boss");

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
