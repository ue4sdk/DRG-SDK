// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_EnemyTargeting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.GetTargetLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector UHUD_EnemyTargeting_C::GetTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.GetTargetLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateHealthBars
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Reset                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::UpdateHealthBars(bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateHealthBars");

	struct
	{
		bool                           Reset;
	} params;

	params.Reset = Reset;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth> Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageModifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthRemaining                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::HandleTargetDamaged(const TScriptInterface<class UHealth>& Health, float Damage, float DamageModifier, float HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.HandleTargetDamaged");

	struct
	{
		TScriptInterface<class UHealth> Health;
		float                          Damage;
		float                          DamageModifier;
		float                          HealthRemaining;
	} params;

	params.Health = Health;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.IsValidTarget
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  PotentialTarget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_EnemyTargeting_C::IsValidTarget(class AActor* PotentialTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.IsValidTarget");

	struct
	{
		class AActor*                  PotentialTarget;
		bool                           ReturnValue;
	} params;

	params.PotentialTarget = PotentialTarget;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateCurrentTarget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_EnemyTargeting_C::UpdateCurrentTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.UpdateCurrentTarget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::SetIsVisible(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.SetIsVisible");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UHUD_EnemyTargeting_C::ReceiveTargetLost()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveTargetLost");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InCurrentTarget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::ReceiveUpdateTarget(class AActor* InCurrentTarget, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveUpdateTarget");

	struct
	{
		class AActor*                  InCurrentTarget;
		float                          DeltaTime;
	} params;

	params.InCurrentTarget = InCurrentTarget;
	params.DeltaTime = DeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InCurrentTarget                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::ReceiveNewTarget(class AActor* InCurrentTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ReceiveNewTarget");

	struct
	{
		class AActor*                  InCurrentTarget;
	} params;

	params.InCurrentTarget = InCurrentTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_EnemyTargeting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth> EnemyHealth                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageModifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthRemaining                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::OnDamagedEnemy(const TScriptInterface<class UHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.OnDamagedEnemy");

	struct
	{
		TScriptInterface<class UHealth> EnemyHealth;
		float                          Damage;
		float                          DamageModifier;
		float                          HealthRemaining;
	} params;

	params.EnemyHealth = EnemyHealth;
	params.Damage = Damage;
	params.DamageModifier = DamageModifier;
	params.HealthRemaining = HealthRemaining;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_EnemyTargeting_C::ExecuteUbergraph_HUD_EnemyTargeting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_EnemyTargeting.HUD_EnemyTargeting_C.ExecuteUbergraph_HUD_EnemyTargeting");

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
