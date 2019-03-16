// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_FlareGun_Projectile01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::UpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UpdateShadowRadius");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::StartFadeOut(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.StartFadeOut");

	struct
	{
		float                          Time;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Time != nullptr)
		*Time = params.Time;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UHealthComponentBase*    Health                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::GetHealthBaseComponentFromActor(class AActor* Actor, class UHealthComponentBase** Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.GetHealthBaseComponentFromActor");

	struct
	{
		class AActor*                  Actor;
		class UHealthComponentBase*    Health;
	} params;

	params.Actor = Actor;

	UObject::ProcessEvent(fn, &params);

	if (Health != nullptr)
		*Health = params.Health;
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::FallToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.FallToGround");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc
// (FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::Light_Anim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc
// (FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::Light_Anim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.Light_Anim__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::OnImpacted(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnImpacted");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.On Destroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::On_Destroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.On Destroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AMiningPod*              DropPod                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::OnDroppodImpact(class AMiningPod* DropPod)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnDroppodImpact");

	struct
	{
		class AMiningPod*              DropPod;
	} params;

	params.DropPod = DropPod;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.HideAll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::OnFlareExtinguish()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnFlareExtinguish");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::OnUpdateShadowRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.OnUpdateShadowRadius");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReleaseFlare
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_FlareGun_Projectile01_C::ReleaseFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ReleaseFlare");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_FlareGun_Projectile01_C::ExecuteUbergraph_PRJ_FlareGun_Projectile01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_FlareGun_Projectile01.PRJ_FlareGun_Projectile01_C.ExecuteUbergraph_PRJ_FlareGun_Projectile01");

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
