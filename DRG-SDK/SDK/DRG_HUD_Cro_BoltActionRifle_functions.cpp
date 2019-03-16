// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Cro_BoltActionRifle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Cro_BoltActionRifle_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.OnDamagedEnemy_Event
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth> EnemyHealth                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageModifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthRemaining                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Cro_BoltActionRifle_C::OnDamagedEnemy_Event(const TScriptInterface<class UHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.OnDamagedEnemy_Event");

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


// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Cro_BoltActionRifle_C::SetData(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.SetData");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Cro_BoltActionRifle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.OnSpreadChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          HorizontalSpread               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          VerticalSpread                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           isAtRest                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Cro_BoltActionRifle_C::OnSpreadChanged(float HorizontalSpread, float VerticalSpread, bool isAtRest)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.OnSpreadChanged");

	struct
	{
		float                          HorizontalSpread;
		float                          VerticalSpread;
		bool                           isAtRest;
	} params;

	params.HorizontalSpread = HorizontalSpread;
	params.VerticalSpread = VerticalSpread;
	params.isAtRest = isAtRest;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.ExecuteUbergraph_HUD_Cro_BoltActionRifle
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Cro_BoltActionRifle_C::ExecuteUbergraph_HUD_Cro_BoltActionRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Cro_BoltActionRifle.HUD_Cro_BoltActionRifle_C.ExecuteUbergraph_HUD_Cro_BoltActionRifle");

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
