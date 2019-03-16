// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_FSDAnsel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FSDAnsel.FSDAnselFunctionLibrary.StopSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::StopSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.StopSession");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.StartSession
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::StartSession(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.StartSession");

	struct
	{
		class UObject*                 WorldContextObject;
	} params;

	params.WorldContextObject = WorldContextObject;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EUIControlEffectTarget> UIControlTarget                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsVisible                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetUIControlVisibility");

	struct
	{
		class UObject*                 WorldContextObject;
		TEnumAsByte<EUIControlEffectTarget> UIControlTarget;
		bool                           bIsVisible;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.UIControlTarget = UIControlTarget;
	params.bIsVisible = bIsVisible;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            NumSettleFrames                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetSettleFrames(int NumSettleFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetSettleFrames");

	struct
	{
		int                            NumSettleFrames;
	} params;

	params.NumSettleFrames = NumSettleFrames;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsPhotographyAllowed          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetIsPhotographyAllowed(bool bIsPhotographyAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetIsPhotographyAllowed");

	struct
	{
		bool                           bIsPhotographyAllowed;
	} params;

	params.bIsPhotographyAllowed = bIsPhotographyAllowed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TranslationSpeed               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetCameraMovementSpeed(float TranslationSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraMovementSpeed");

	struct
	{
		float                          TranslationSpeed;
	} params;

	params.TranslationSpeed = TranslationSpeed;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          MaxCameraDistance              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetCameraConstraintDistance(float MaxCameraDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintDistance");

	struct
	{
		float                          MaxCameraDistance;
	} params;

	params.MaxCameraDistance = MaxCameraDistance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          CameraSize                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetCameraConstraintCameraSize(float CameraSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetCameraConstraintCameraSize");

	struct
	{
		float                          CameraSize;
	} params;

	params.CameraSize = CameraSize;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldAutoPostprocess         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetAutoPostprocess(bool bShouldAutoPostprocess)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPostprocess");

	struct
	{
		bool                           bShouldAutoPostprocess;
	} params;

	params.bShouldAutoPostprocess = bShouldAutoPostprocess;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bShouldAutoPause               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::SetAutoPause(bool bShouldAutoPause)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.SetAutoPause");

	struct
	{
		bool                           bShouldAutoPause;
	} params;

	params.bShouldAutoPause = bShouldAutoPause;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFSDAnselFunctionLibrary::IsPhotographyAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAvailable");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UFSDAnselFunctionLibrary::IsPhotographyAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.IsPhotographyAllowed");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NewCameraLocation              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OutCameraLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByGeometry");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 NewCameraLocation;
		struct FVector                 PreviousCameraLocation;
		struct FVector                 OriginalCameraLocation;
		struct FVector                 OutCameraLocation;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


// Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NewCameraLocation              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 PreviousCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OriginalCameraLocation         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OutCameraLocation              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxDistance                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UFSDAnselFunctionLibrary::ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FSDAnsel.FSDAnselFunctionLibrary.ConstrainCameraByDistance");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FVector                 NewCameraLocation;
		struct FVector                 PreviousCameraLocation;
		struct FVector                 OriginalCameraLocation;
		struct FVector                 OutCameraLocation;
		float                          MaxDistance;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.NewCameraLocation = NewCameraLocation;
	params.PreviousCameraLocation = PreviousCameraLocation;
	params.OriginalCameraLocation = OriginalCameraLocation;
	params.MaxDistance = MaxDistance;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutCameraLocation != nullptr)
		*OutCameraLocation = params.OutCameraLocation;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
