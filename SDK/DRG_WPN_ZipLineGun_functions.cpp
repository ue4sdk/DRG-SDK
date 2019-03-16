// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_ZipLineGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AWPN_ZipLineGun_C::CalcFirstPersonMuzzleLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.CalcFirstPersonMuzzleLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   FailMsg                        (CPF_Parm, CPF_OutParm)
// class UDialogDataAsset*        FailShout                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AWPN_ZipLineGun_C::CanFireWeapon(struct FText* FailMsg, class UDialogDataAsset** FailShout)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.CanFireWeapon");

	struct
	{
		struct FText                   FailMsg;
		class UDialogDataAsset*        FailShout;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FailMsg != nullptr)
		*FailMsg = params.FailMsg;
	if (FailShout != nullptr)
		*FailShout = params.FailShout;

	return params.ReturnValue;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void AWPN_ZipLineGun_C::GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetGearStatEntry");

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


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UHUD_Crosshair_ZiplineGun_C* Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::GetCrosshair(class UHUD_Crosshair_ZiplineGun_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetCrosshair");

	struct
	{
		class UHUD_Crosshair_ZiplineGun_C* Result;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DidHit                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::Update_Line_Of_Sight(const struct FVector& Direction, const struct FVector& End, bool DidHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Update Line Of Sight");

	struct
	{
		struct FVector                 Direction;
		struct FVector                 End;
		bool                           DidHit;
	} params;

	params.Direction = Direction;
	params.End = End;
	params.DidHit = DidHit;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::Negate(float Value, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Negate");

	struct
	{
		float                          Value;
		float                          Result;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Min                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Max                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsBetween                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::Between(float Value, float Min, float Max, bool* IsBetween)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Between");

	struct
	{
		float                          Value;
		float                          Min;
		float                          Max;
		bool                           IsBetween;
	} params;

	params.Value = Value;
	params.Min = Min;
	params.Max = Max;

	UObject::ProcessEvent(fn, &params);

	if (IsBetween != nullptr)
		*IsBetween = params.IsBetween;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   FailMsg                        (CPF_Parm, CPF_OutParm)
// class UDialogDataAsset*        FailShout                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           CanShoot                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::Can_Fire(struct FText* FailMsg, class UDialogDataAsset** FailShout, bool* CanShoot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.Can Fire");

	struct
	{
		struct FText                   FailMsg;
		class UDialogDataAsset*        FailShout;
		bool                           CanShoot;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (FailMsg != nullptr)
		*FailMsg = params.FailMsg;
	if (FailShout != nullptr)
		*FailShout = params.FailShout;
	if (CanShoot != nullptr)
		*CanShoot = params.CanShoot;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AWPN_ZipLineGun_C::GetStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.GetStartLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          distance                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HitAny                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::LineTrace(struct FHitResult* OutHit, struct FVector* Direction, float* distance, bool* HitAny)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.LineTrace");

	struct
	{
		struct FHitResult              OutHit;
		struct FVector                 Direction;
		float                          distance;
		bool                           HitAny;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutHit != nullptr)
		*OutHit = params.OutHit;
	if (Direction != nullptr)
		*Direction = params.Direction;
	if (distance != nullptr)
		*distance = params.distance;
	if (HitAny != nullptr)
		*HitAny = params.HitAny;
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_ZipLineGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ZipLineGun_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ClientShoot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_ZipLineGun_C::ClientShoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ClientShoot");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        ItemOwner                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::AddedToInventory(class APlayerCharacter* ItemOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.AddedToInventory");

	struct
	{
		class APlayerCharacter*        ItemOwner;
	} params;

	params.ItemOwner = ItemOwner;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ZipLineGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Crosshair                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget* Crosshair)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature");

	struct
	{
		class UUserWidget*             Crosshair;
	} params;

	params.Crosshair = Crosshair;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ZipLineGun_C::RecieveStopUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStopUsing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStartUsing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_ZipLineGun_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.RecieveStartUsing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_ZipLineGun_C::ExecuteUbergraph_WPN_ZipLineGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_ZipLineGun.WPN_ZipLineGun_C.ExecuteUbergraph_WPN_ZipLineGun");

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
