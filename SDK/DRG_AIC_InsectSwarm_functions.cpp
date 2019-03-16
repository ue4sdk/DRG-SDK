// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_InsectSwarm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_InsectSwarm.AIC_InsectSwarm_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_InsectSwarm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_InsectSwarm.AIC_InsectSwarm_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_InsectSwarm.AIC_InsectSwarm_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIC_InsectSwarm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_InsectSwarm.AIC_InsectSwarm_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_InsectSwarm.AIC_InsectSwarm_C.OnPossess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_InsectSwarm_C::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_InsectSwarm.AIC_InsectSwarm_C.OnPossess");

	struct
	{
		class APawn*                   PossessedPawn;
	} params;

	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_InsectSwarm.AIC_InsectSwarm_C.ExecuteUbergraph_AIC_InsectSwarm
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_InsectSwarm_C::ExecuteUbergraph_AIC_InsectSwarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_InsectSwarm.AIC_InsectSwarm_C.ExecuteUbergraph_AIC_InsectSwarm");

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
