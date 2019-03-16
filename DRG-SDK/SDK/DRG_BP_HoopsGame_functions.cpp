// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_HoopsGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_Scores
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoopsGame_C::OnRep_Scores()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.OnRep_Scores");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.GetBarrelScoreData
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_Phys_Barrel01_C*     Barrel                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USoundCue*               Audio                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_Phys_Barrel01_C*     OutBarrel                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Points                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HoopsGame_C::GetBarrelScoreData(class ABP_Phys_Barrel01_C* Barrel, class USoundCue** Audio, class ABP_Phys_Barrel01_C** OutBarrel, int* Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.GetBarrelScoreData");

	struct
	{
		class ABP_Phys_Barrel01_C*     Barrel;
		class USoundCue*               Audio;
		class ABP_Phys_Barrel01_C*     OutBarrel;
		int                            Points;
	} params;

	params.Barrel = Barrel;

	UObject::ProcessEvent(fn, &params);

	if (Audio != nullptr)
		*Audio = params.Audio;
	if (OutBarrel != nullptr)
		*OutBarrel = params.OutBarrel;
	if (Points != nullptr)
		*Points = params.Points;
}


// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_ComboMultiplier
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoopsGame_C::OnRep_ComboMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.OnRep_ComboMultiplier");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.OnRep_CurrentScore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoopsGame_C::OnRep_CurrentScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.OnRep_CurrentScore");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoopsGame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.Restart
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HoopsGame_C::Restart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.Restart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HoopsGame_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_3_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_HoopsGame_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_HoopsGame.BP_HoopsGame_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_HoopsGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.StoreScore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewScore                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HoopsGame_C::StoreScore(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.StoreScore");

	struct
	{
		int                            NewScore;
	} params;

	params.NewScore = NewScore;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_HoopsGame_C::BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.BndEvt__FailCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_HoopsGame.BP_HoopsGame_C.ChangeDirection
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           RightMovement                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HoopsGame_C::ChangeDirection(bool RightMovement, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.ChangeDirection");

	struct
	{
		bool                           RightMovement;
		float                          Speed;
	} params;

	params.RightMovement = RightMovement;
	params.Speed = Speed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HoopsGame.BP_HoopsGame_C.ExecuteUbergraph_BP_HoopsGame
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HoopsGame_C::ExecuteUbergraph_BP_HoopsGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoopsGame.BP_HoopsGame_C.ExecuteUbergraph_BP_HoopsGame");

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
