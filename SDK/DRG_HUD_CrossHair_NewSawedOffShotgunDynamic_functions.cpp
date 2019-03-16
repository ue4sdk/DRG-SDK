// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_CrossHair_NewSawedOffShotgunDynamic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AAmmoDrivenWeapon*       Weapon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::SetData(class AAmmoDrivenWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.SetData");

	struct
	{
		class AAmmoDrivenWeapon*       Weapon;
	} params;

	params.Weapon = Weapon;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnClipCountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::OnClipCountChanged(int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnClipCountChanged");

	struct
	{
		int                            Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnDamagedEnemy_Event
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UHealth> EnemyHealth                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageModifier                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HealthRemaining                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::OnDamagedEnemy_Event(const TScriptInterface<class UHealth>& EnemyHealth, float Damage, float DamageModifier, float HealthRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.OnDamagedEnemy_Event");

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


// Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_NewSawedOffShotgunDynamic_C::ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_NewSawedOffShotgunDynamic.HUD_CrossHair_NewSawedOffShotgunDynamic_C.ExecuteUbergraph_HUD_CrossHair_NewSawedOffShotgunDynamic");

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
