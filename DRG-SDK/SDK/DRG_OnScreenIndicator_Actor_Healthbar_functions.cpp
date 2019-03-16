// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_Actor_Healthbar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.ShowHealthBar
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TScriptInterface<class UHealth> Object                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOnScreenIndicator_Actor_Healthbar_C::ShowHealthBar(const TScriptInterface<class UHealth>& Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.ShowHealthBar");

	struct
	{
		TScriptInterface<class UHealth> Object;
		bool                           ReturnValue;
	} params;

	params.Object = Object;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.OnDamagedEnemy_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth> EnemyHealth                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageModifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthRemaining                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Healthbar_C::OnDamagedEnemy_Event_1(const TScriptInterface<class UHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.OnDamagedEnemy_Event_1");

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


// Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.BndEvt__EnemyHealthBar_K2Node_ComponentBoundEvent_0_HUDHealthBarSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UHUDHealthBar*           HealthBar                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Healthbar_C::BndEvt__EnemyHealthBar_K2Node_ComponentBoundEvent_0_HUDHealthBarSignature__DelegateSignature(class UHUDHealthBar* HealthBar)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.BndEvt__EnemyHealthBar_K2Node_ComponentBoundEvent_0_HUDHealthBarSignature__DelegateSignature");

	struct
	{
		class UHUDHealthBar*           HealthBar;
	} params;

	params.HealthBar = HealthBar;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnScreenIndicator_Actor_Healthbar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.ExecuteUbergraph_OnScreenIndicator_Actor_Healthbar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Healthbar_C::ExecuteUbergraph_OnScreenIndicator_Actor_Healthbar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Healthbar.OnScreenIndicator_Actor_Healthbar_C.ExecuteUbergraph_OnScreenIndicator_Actor_Healthbar");

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
