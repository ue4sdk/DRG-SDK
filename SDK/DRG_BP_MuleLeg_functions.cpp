// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_MuleLeg_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_MuleLeg.BP_MuleLeg_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MuleLeg_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_MuleLeg_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MuleLeg.BP_MuleLeg_C.OnDropped Leg
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MuleLeg_C::OnDropped_Leg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnDropped Leg");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUpLeg
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MuleLeg_C::OnPickedUpLeg()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUpLeg");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_MuleLeg_C::DisableDistressSphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_MuleLeg_C::ExecuteUbergraph_BP_MuleLeg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg");

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
