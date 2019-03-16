// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_Spider_Tank_Boss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_Spider_Tank_Boss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIC_Spider_Tank_Boss_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.Speed Changer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_Spider_Tank_Boss_C::Speed_Changer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.Speed Changer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.OnArmorDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          EnrageDuration                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_Tank_Boss_C::OnArmorDestroyed(float EnrageDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.OnArmorDestroyed");

	struct
	{
		float                          EnrageDuration;
	} params;

	params.EnrageDuration = EnrageDuration;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.OnPossess
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   PossessedPawn                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_Tank_Boss_C::OnPossess(class APawn* PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.OnPossess");

	struct
	{
		class APawn*                   PossessedPawn;
	} params;

	params.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ExecuteUbergraph_AIC_Spider_Tank_Boss
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Spider_Tank_Boss_C::ExecuteUbergraph_AIC_Spider_Tank_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C.ExecuteUbergraph_AIC_Spider_Tank_Boss");

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
