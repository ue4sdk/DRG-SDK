// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_HitIndicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_HitIndicator.HUD_HitIndicator_C.StartAnimation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Priority                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ShowKillImage                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_HitIndicator_C::StartAnimation(int Priority, float Scale, const struct FLinearColor& Color, bool ShowKillImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.StartAnimation");

	struct
	{
		int                            Priority;
		float                          Scale;
		struct FLinearColor            Color;
		bool                           ShowKillImage;
	} params;

	params.Priority = Priority;
	params.Scale = Scale;
	params.Color = Color;
	params.ShowKillImage = ShowKillImage;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.BndEvt__HitAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_HitIndicator_C::BndEvt__HitAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.BndEvt__HitAnim_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.OnDamagedEnemy_Event
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth> EnemyHealth                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageModifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthRemaining                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_HitIndicator_C::OnDamagedEnemy_Event(const TScriptInterface<class UHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.OnDamagedEnemy_Event");

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


// Function HUD_HitIndicator.HUD_HitIndicator_C.BndEvt__HitAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_HitIndicator_C::BndEvt__HitAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.BndEvt__HitAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_HitIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_HitIndicator.HUD_HitIndicator_C.ExecuteUbergraph_HUD_HitIndicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_HitIndicator_C::ExecuteUbergraph_HUD_HitIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_HitIndicator.HUD_HitIndicator_C.ExecuteUbergraph_HUD_HitIndicator");

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
