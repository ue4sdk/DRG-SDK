// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SandStorm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SandStorm.BP_SandStorm_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SandStorm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SandStorm.BP_SandStorm_C.StormStart__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SandStorm_C::StormStart__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.StormStart__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SandStorm.BP_SandStorm_C.StormStart__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SandStorm_C::StormStart__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.StormStart__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SandStorm.BP_SandStorm_C.StormEnd__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SandStorm_C::StormEnd__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.StormEnd__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SandStorm.BP_SandStorm_C.StormEnd__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SandStorm_C::StormEnd__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.StormEnd__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SandStorm.BP_SandStorm_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SandStorm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SandStorm.BP_SandStorm_C.ExecuteUbergraph_BP_SandStorm
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SandStorm_C::ExecuteUbergraph_BP_SandStorm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStorm.BP_SandStorm_C.ExecuteUbergraph_BP_SandStorm");

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
