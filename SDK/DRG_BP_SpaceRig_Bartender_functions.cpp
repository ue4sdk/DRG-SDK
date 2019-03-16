// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpaceRig_Bartender_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayGreeting(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayGreeting");

	struct
	{
		float                          Duration;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayAnim(class UAnimMontage* MontageToPlay, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAnim");

	struct
	{
		class UAnimMontage*            MontageToPlay;
		float                          Duration;
	} params;

	params.MontageToPlay = MontageToPlay;

	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayNegative(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayNegative");

	struct
	{
		float                          Duration;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::PlayAffirmative(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.PlayAffirmative");

	struct
	{
		float                          Duration;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*         DrinkBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PourDuration                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Pour(class ABP_DrinksBox_C* DrinkBox, float* PourDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Pour");

	struct
	{
		class ABP_DrinksBox_C*         DrinkBox;
		float                          PourDuration;
	} params;

	params.DrinkBox = DrinkBox;

	UObject::ProcessEvent(fn, &params);

	if (PourDuration != nullptr)
		*PourDuration = params.PourDuration;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMaterialInterface*      SourceMaterial                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::SetBartenderLightMaterial(class UMaterialInterface* SourceMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetBartenderLightMaterial");

	struct
	{
		class UMaterialInterface*      SourceMaterial;
	} params;

	params.SourceMaterial = SourceMaterial;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::OnRep_CurrentCustomerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnRep_CurrentCustomerState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Customer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::SetCustomer(class APlayerCharacter* Customer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SetCustomer");

	struct
	{
		class APlayerCharacter*        Customer;
	} params;

	params.Customer = Customer;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           CanOrder                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::CanOrderNewRound(bool* CanOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.CanOrderNewRound");

	struct
	{
		bool                           CanOrder;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (CanOrder != nullptr)
		*CanOrder = params.CanOrder;
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::LerpTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::LerpTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LerpTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::FinishedTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::FinishedTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.FinishedTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           canUse                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature(bool canUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__BarUsable_K2Node_ComponentBoundEvent_0_UsableChangedSignature__DelegateSignature");

	struct
	{
		bool                           canUse;
	} params;

	params.canUse = canUse;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Customer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::LookAtCustomer(class APlayerCharacter* Customer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.LookAtCustomer");

	struct
	{
		class APlayerCharacter*        Customer;
	} params;

	params.Customer = Customer;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnPlayerLeave_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Update_Bartender_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Update Bartender Lights");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDrinkableDataAsset*     Drinable                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::SpawnDrinks(class UDrinkableDataAsset* Drinable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.SpawnDrinks");

	struct
	{
		class UDrinkableDataAsset*     Drinable;
	} params;

	params.Drinable = Drinable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              PourTransform                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Lerp_To(const struct FTransform& PourTransform, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Lerp To");

	struct
	{
		struct FTransform              PourTransform;
		float                          Duration;
	} params;

	params.PourTransform = PourTransform;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Server_Spawn_Next_Drink()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Server Spawn Next Drink");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*         DrinkBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnAvailableForNewDrink_Event(class ABP_DrinksBox_C* DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnAvailableForNewDrink_Event");

	struct
	{
		class ABP_DrinksBox_C*         DrinkBox;
	} params;

	params.DrinkBox = DrinkBox;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*         DrinkBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::OnDrinkReady_Event(class ABP_DrinksBox_C* DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.OnDrinkReady_Event");

	struct
	{
		class ABP_DrinksBox_C*         DrinkBox;
	} params;

	params.DrinkBox = DrinkBox;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Return_To_Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Return To Idle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           PlayFireworks                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::All_BeginSpawnDrinks(bool PlayFireworks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.All_BeginSpawnDrinks");

	struct
	{
		bool                           PlayFireworks;
	} params;

	params.PlayFireworks = PlayFireworks;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_DrinksBox_C*         DrinkBox                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Client_Spawn_Next_Drink(class ABP_DrinksBox_C* DrinkBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Client Spawn Next Drink");

	struct
	{
		class ABP_DrinksBox_C*         DrinkBox;
	} params;

	params.DrinkBox = DrinkBox;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.BndEvt__GreetColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

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


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Look_Towards(class AActor* Actor, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Look Towards");

	struct
	{
		class AActor*                  Actor;
		float                          Duration;
	} params;

	params.Actor = Actor;
	params.Duration = Duration;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpaceRig_Bartender_C::Init_Background_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Init Background Menu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::Toggle_Fireworks(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.Toggle Fireworks");

	struct
	{
		bool                           Enabled;
	} params;

	params.Enabled = Enabled;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpaceRig_Bartender_C::ExecuteUbergraph_BP_SpaceRig_Bartender(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpaceRig_Bartender.BP_SpaceRig_Bartender_C.ExecuteUbergraph_BP_SpaceRig_Bartender");

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
