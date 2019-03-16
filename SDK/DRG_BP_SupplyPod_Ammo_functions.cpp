// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SupplyPod_Ammo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     UseCollider                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  DoorMesh                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::HandleUsableChanged(class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh, bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HandleUsableChanged");

	struct
	{
		class UPrimitiveComponent*     UseCollider;
		class USkeletalMeshComponent*  DoorMesh;
		bool                           canUse;
	} params;

	params.UseCollider = UseCollider;
	params.DoorMesh = DoorMesh;
	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::HealUser(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.HealUser");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Collider                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  DoorMesh                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::DisableUsable(class UPrimitiveComponent* Collider, class USkeletalMeshComponent* DoorMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.DisableUsable");

	struct
	{
		class UPrimitiveComponent*     Collider;
		class USkeletalMeshComponent*  DoorMesh;
	} params;

	params.Collider = Collider;
	params.DoorMesh = DoorMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::ResupplyUser(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ResupplyUser");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SupplyPod_Ammo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnDroppodImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDroppodImpact");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnDropStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnDropStarted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_4_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable1_K2Node_ComponentBoundEvent_5_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable2_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable3_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.BndEvt__SingleUsable4_K2Node_ComponentBoundEvent_8_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SupplyPod_Ammo_C::OnTunnelBLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.OnTunnelBLocked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USingleUsableComponent*  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::SupplyUsed(class APlayerCharacter* user, class USingleUsableComponent* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.SupplyUsed");

	struct
	{
		class APlayerCharacter*        user;
		class USingleUsableComponent*  Target;
	} params;

	params.user = user;
	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     UseCollider                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class USkeletalMeshComponent*  DoorMesh                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::UsableChanged(bool canUse, class UPrimitiveComponent* UseCollider, class USkeletalMeshComponent* DoorMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.UsableChanged");

	struct
	{
		bool                           canUse;
		class UPrimitiveComponent*     UseCollider;
		class USkeletalMeshComponent*  DoorMesh;
	} params;

	params.canUse = canUse;
	params.UseCollider = UseCollider;
	params.DoorMesh = DoorMesh;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SupplyPod_Ammo_C::ExecuteUbergraph_BP_SupplyPod_Ammo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SupplyPod_Ammo.BP_SupplyPod_Ammo_C.ExecuteUbergraph_BP_SupplyPod_Ammo");

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
