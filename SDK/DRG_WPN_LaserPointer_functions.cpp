// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_LaserPointer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture*                Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Can_Place                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::CanPlacePOI(const struct FVector& Location, class UTexture* Icon, bool* Can_Place)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.CanPlacePOI");

	struct
	{
		struct FVector                 Location;
		class UTexture*                Icon;
		bool                           Can_Place;
	} params;

	params.Location = Location;
	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);

	if (Can_Place != nullptr)
		*Can_Place = params.Can_Place;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_LaserPointer_C::UpdateBackgroundColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.UpdateBackgroundColor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::SetBackgroundColor(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.SetBackgroundColor");

	struct
	{
		struct FLinearColor            Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_LaserPointer_C::Adjust_Beam()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.Adjust Beam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FTransform              PointTransform                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::GetPointTransform(struct FTransform* PointTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.GetPointTransform");

	struct
	{
		struct FTransform              PointTransform;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PointTransform != nullptr)
		*PointTransform = params.PointTransform;
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AWPN_LaserPointer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_LaserPointer_C::RecieveUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveUnequipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UUserWidget*             Crosshair                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget* Crosshair)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature");

	struct
	{
		class UUserWidget*             Crosshair;
	} params;

	params.Crosshair = Crosshair;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ELaserPointerTargetType        TypeOfTarget                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::OnMarkerPlaced(const struct FVector& Location, const struct FText& Name, const struct FLinearColor& Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnMarkerPlaced");

	struct
	{
		struct FVector                 Location;
		struct FText                   Name;
		struct FLinearColor            Color;
		class AActor*                  Target;
		ELaserPointerTargetType        TypeOfTarget;
	} params;

	params.Location = Location;
	params.Name = Name;
	params.Color = Color;
	params.Target = Target;
	params.TypeOfTarget = TypeOfTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  targetActor                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 TargetLocation                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              TargetIcon                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::OnPointOfInterest(class AActor* targetActor, const struct FVector& TargetLocation, class UTexture2D* TargetIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnPointOfInterest");

	struct
	{
		class AActor*                  targetActor;
		struct FVector                 TargetLocation;
		class UTexture2D*              TargetIcon;
	} params;

	params.targetActor = targetActor;
	params.TargetLocation = TargetLocation;
	params.TargetIcon = TargetIcon;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_LaserPointer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AWPN_LaserPointer_C::RecieveEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.RecieveEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::OnPOIDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.OnPOIDestroyed");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWPN_LaserPointer_C::ExecuteUbergraph_WPN_LaserPointer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WPN_LaserPointer.WPN_LaserPointer_C.ExecuteUbergraph_WPN_LaserPointer");

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
