// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_VampireComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VampireComponent.BP_VampireComponent_C.OnEnemyKilled
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   enemyTags                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class AActor*                  enemy                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_VampireComponent_C::OnEnemyKilled(const struct FGameplayTagContainer& enemyTags, class AActor* enemy, class UDamageClass* DamageClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.OnEnemyKilled");

	struct
	{
		struct FGameplayTagContainer   enemyTags;
		class AActor*                  enemy;
		class UDamageClass*            DamageClass;
	} params;

	params.enemyTags = enemyTags;
	params.enemy = enemy;
	params.DamageClass = DamageClass;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_VampireComponent.BP_VampireComponent_C.Receive_OnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UBP_VampireComponent_C::Receive_OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.Receive_OnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_VampireComponent.BP_VampireComponent_C.ExecuteUbergraph_BP_VampireComponent
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_VampireComponent_C::ExecuteUbergraph_BP_VampireComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VampireComponent.BP_VampireComponent_C.ExecuteUbergraph_BP_VampireComponent");

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
