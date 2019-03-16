// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_LootBug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_LootBug.ENE_LootBug_C.Has Loot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Has_Loot                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_LootBug_C::Has_Loot(bool* Has_Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.Has Loot");

	struct
	{
		bool                           Has_Loot;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Has_Loot != nullptr)
		*Has_Loot = params.Has_Loot;
}


// Function ENE_LootBug.ENE_LootBug_C.Drop Loot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 DropOffset                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_LootBug_C::Drop_Loot(const struct FVector& Impulse, const struct FVector& DropOffset, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.Drop Loot");

	struct
	{
		struct FVector                 Impulse;
		struct FVector                 DropOffset;
		bool                           success;
	} params;

	params.Impulse = Impulse;
	params.DropOffset = DropOffset;

	UObject::ProcessEvent(fn, &params);

	if (success != nullptr)
		*success = params.success;
}


// Function ENE_LootBug.ENE_LootBug_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_LootBug_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AENE_LootBug_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AENE_LootBug_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_LootBug_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AENE_LootBug_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_LootBug_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.OnFrozen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_LootBug_C::OnFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.OnFrozen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.OnUnFrozen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_LootBug_C::OnUnFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.OnUnFrozen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_LootBug.ENE_LootBug_C.ExecuteUbergraph_ENE_LootBug
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_LootBug_C::ExecuteUbergraph_ENE_LootBug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_LootBug.ENE_LootBug_C.ExecuteUbergraph_ENE_LootBug");

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
