// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_Spiders_Boss_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.StartWave
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UEWC_Spiders_Boss_C::StartWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.StartWave");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.Spawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   enemy                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEWC_Spiders_Boss_C::Spawned(class APawn* enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.Spawned");

	struct
	{
		class APawn*                   enemy;
	} params;

	params.enemy = enemy;

	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.OnDeath
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UEWC_Spiders_Boss_C::OnDeath(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.OnDeath");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.ExecuteUbergraph_EWC_Spiders_Boss
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UEWC_Spiders_Boss_C::ExecuteUbergraph_EWC_Spiders_Boss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EWC_Spiders_Boss.EWC_Spiders_Boss_C.ExecuteUbergraph_EWC_Spiders_Boss");

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
