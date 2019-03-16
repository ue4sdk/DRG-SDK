// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Donkey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Donkey_C::OnRep_IsTrayOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnRep_IsTrayOpen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.SetGotoDropShip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Pos                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::SetGotoDropShip(const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetGotoDropShip");

	struct
	{
		struct FVector                 Pos;
	} params;

	params.Pos = Pos;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Control                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::SetControlledByDropShip(bool Control)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetControlledByDropShip");

	struct
	{
		bool                           Control;
	} params;

	params.Control = Control;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.SetDestination
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::SetDestination(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetDestination");

	struct
	{
		struct FVector                 Destination;
	} params;

	params.Destination = Destination;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Donkey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Donkey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::OnDonkeyCalled(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnDonkeyCalled");

	struct
	{
		struct FVector                 Position;
	} params;

	params.Position = Position;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.SetDonkeyPos
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Pos                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::SetDonkeyPos(const struct FVector& Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SetDonkeyPos");

	struct
	{
		struct FVector                 Pos;
	} params;

	params.Pos = Pos;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.On Goto Dropship
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Donkey_C::On_Goto_Dropship()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.On Goto Dropship");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Donkey_C::BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.EnableButton
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Donkey_C::EnableButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.EnableButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ReturnToMissionUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Donkey_C::SpawnBreadCrumb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.SpawnBreadCrumb");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_Donkey_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void ABP_Donkey_C::BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::ExecuteUbergraph_BP_Donkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.ExecuteUbergraph_BP_Donkey");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OverlapCount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Donkey_C::PlayerOverlapsChanged__DelegateSignature(int OverlapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.PlayerOverlapsChanged__DelegateSignature");

	struct
	{
		int                            OverlapCount;
	} params;

	params.OverlapCount = OverlapCount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Donkey.BP_Donkey_C.OnReachedDropship__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Donkey_C::OnReachedDropship__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Donkey.BP_Donkey_C.OnReachedDropship__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
