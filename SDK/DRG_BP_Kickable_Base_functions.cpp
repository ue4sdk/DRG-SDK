// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Kickable_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Kickable_Base_C::OnRep_KickSoundLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.OnRep_KickSoundLocation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Kickable_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Kickable_Base_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_Kickable_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.destroy
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Kickable_Base_C::destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.destroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.DestroyOvertime
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Kickable_Base_C::DestroyOvertime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.DestroyOvertime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Kicker                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Kickable_Base_C::Play_Kick(class APlayerCharacter* Kicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.Play_Kick");

	struct
	{
		class APlayerCharacter*        Kicker;
	} params;

	params.Kicker = Kicker;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_Kickable_Base_C::BndEvt__Kickable_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.BndEvt__Kickable Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params;

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Kickable_Base_C::ExecuteUbergraph_BP_Kickable_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Kickable_Base.BP_Kickable_Base_C.ExecuteUbergraph_BP_Kickable_Base");

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
