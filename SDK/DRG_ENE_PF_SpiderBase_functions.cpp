// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_PF_SpiderBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ChangeVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bNewVisibility                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::ChangeVisibility(bool bNewVisibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ChangeVisibility");

	struct
	{
		bool                           bNewVisibility;
	} params;

	params.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.AlertNearbySpiders
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::AlertNearbySpiders()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.AlertNearbySpiders");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ActivateSpider
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::ActivateSpider(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ActivateSpider");

	struct
	{
		class AActor*                  Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.InitBlackboard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::InitBlackboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.InitBlackboard");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.PlayDeathEffects
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::PlayDeathEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.PlayDeathEffects");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnNotifyEnd_994DB7944B827DB8A3582CB9C470D4B6");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnNotifyBegin_994DB7944B827DB8A3582CB9C470D4B6");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnInterrupted_994DB7944B827DB8A3582CB9C470D4B6");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnBlendOut_994DB7944B827DB8A3582CB9C470D4B6");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnCompleted_994DB7944B827DB8A3582CB9C470D4B6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::OnCompleted_994DB7944B827DB8A3582CB9C470D4B6(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnCompleted_994DB7944B827DB8A3582CB9C470D4B6");

	struct
	{
		struct FName                   NotifyName;
	} params;

	params.NotifyName = NotifyName;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature");

	struct
	{
		class APawn*                   Pawn;
	} params;

	params.Pawn = Pawn;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponentBase*    HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature");

	struct
	{
		class UHealthComponentBase*    HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnDeathBase
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::OnDeathBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnDeathBase");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.AlertNearbyEnemies
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::AlertNearbyEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.AlertNearbyEnemies");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.Spawn
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::Spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.Spawn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnFrozen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::OnFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnFrozen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnUnFrozen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::OnUnFrozen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnUnFrozen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnStartedFleeing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::OnStartedFleeing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.OnStartedFleeing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.PlayFleeSound
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_PF_SpiderBase_C::PlayFleeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.PlayFleeSound");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ExecuteUbergraph_ENE_PF_SpiderBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_PF_SpiderBase_C::ExecuteUbergraph_ENE_PF_SpiderBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_PF_SpiderBase.ENE_PF_SpiderBase_C.ExecuteUbergraph_ENE_PF_SpiderBase");

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
