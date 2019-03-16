// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_Spider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_Spider.AIC_Spider_C.HasLineOfSightTo
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AActor*                  Other                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_C::HasLineOfSightTo(class AActor* Other, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.HasLineOfSightTo");

	struct
	{
		class AActor*                  Other;
		bool                           Result;
	} params;

	params.Other = Other;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function AIC_Spider.AIC_Spider_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_Spider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIC_Spider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.OnDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AAIC_Spider_C::OnDeath(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.OnDeath");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.OnPossess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_C::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.OnPossess");

	struct
	{
		class APawn*                   PossessedPawn;
	} params;

	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.Speed Changer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_Spider_C::Speed_Changer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.Speed Changer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.OnAttackingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsAttacking                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_C::OnAttackingChanged(bool IsAttacking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.OnAttackingChanged");

	struct
	{
		bool                           IsAttacking;
	} params;

	params.IsAttacking = IsAttacking;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider.AIC_Spider_C.ExecuteUbergraph_AIC_Spider
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_C::ExecuteUbergraph_AIC_Spider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider.AIC_Spider_C.ExecuteUbergraph_AIC_Spider");

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
