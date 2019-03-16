// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_FSDCameraManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharacterCameraMode           NewCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FSDCameraManager_C::ReturnCameraMode(class APlayerCharacter* Target, ECharacterCameraMode NewCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReturnCameraMode");

	struct
	{
		class APlayerCharacter*        Target;
		ECharacterCameraMode           NewCameraMode;
	} params;

	params.Target = Target;
	params.NewCameraMode = NewCameraMode;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 NewCameraLocation              (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ResultCameraLocation           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FSDCameraManager_C::PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.PhotographyCameraModify");

	struct
	{
		struct FVector                 NewCameraLocation;
		struct FVector                 PreviousCameraLocation;
		struct FVector                 OriginalCameraLocation;
		struct FVector                 ResultCameraLocation;
	} params;

	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	UObject::ProcessEvent(fn, &params);

	if (ResultCameraLocation != nullptr)
		*ResultCameraLocation = params.ResultCameraLocation;
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::OnPhotographySessionEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::OnPhotographySessionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.OnPhotographySessionStart");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FSDCameraManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Active                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FSDCameraManager_C::TogglePhotographyMode(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.TogglePhotographyMode");

	struct
	{
		bool                           Active;
	} params;

	params.Active = Active;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::Return_Camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.Return Camera");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_FSDCameraManager_C::ExecuteUbergraph_BP_FSDCameraManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ExecuteUbergraph_BP_FSDCameraManager");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::ShowHUDForPhotography__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.ShowHUDForPhotography__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_FSDCameraManager_C::HideHUDForPhotography__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FSDCameraManager.BP_FSDCameraManager_C.HideHUDForPhotography__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
