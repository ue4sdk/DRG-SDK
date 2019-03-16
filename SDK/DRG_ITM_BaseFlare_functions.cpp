// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BaseFlare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AITM_BaseFlare_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.GetGearStatEntry");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		TArray<struct FGearStatEntry>  Stats;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BaseFlare_C::UpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.UpdateShadowRadius");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_BaseFlare_C::StartFadeOut(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.StartFadeOut");

	struct
	{
		float                          Time;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Time != nullptr)
		*Time = params.Time;
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BaseFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void AITM_BaseFlare_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void AITM_BaseFlare_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_BaseFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_BaseFlare_C::OnFlareExtinguish()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareExtinguish");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_BaseFlare_C::OnFlareIgnite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnFlareIgnite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AITM_BaseFlare_C::BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.BndEvt__Box_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature");

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


// Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void AITM_BaseFlare_C::OnUpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.OnUpdateShadowRadius");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_BaseFlare_C::ExecuteUbergraph_ITM_BaseFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BaseFlare.ITM_BaseFlare_C.ExecuteUbergraph_ITM_BaseFlare");

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
