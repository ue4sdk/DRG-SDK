#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_FSDAnsel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FSDAnsel.FSDAnselFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UFSDAnselFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class FSDAnsel.FSDAnselFunctionLibrary");
		return ptr;
	}


	static void StopSession(class UObject* WorldContextObject);
	static void StartSession(class UObject* WorldContextObject);
	static void SetUIControlVisibility(class UObject* WorldContextObject, TEnumAsByte<EUIControlEffectTarget> UIControlTarget, bool bIsVisible);
	static void SetSettleFrames(int NumSettleFrames);
	static void SetIsPhotographyAllowed(bool bIsPhotographyAllowed);
	static void SetCameraMovementSpeed(float TranslationSpeed);
	static void SetCameraConstraintDistance(float MaxCameraDistance);
	static void SetCameraConstraintCameraSize(float CameraSize);
	static void SetAutoPostprocess(bool bShouldAutoPostprocess);
	static void SetAutoPause(bool bShouldAutoPause);
	static bool IsPhotographyAvailable();
	static bool IsPhotographyAllowed();
	static void ConstrainCameraByGeometry(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* OutCameraLocation);
	static void ConstrainCameraByDistance(class UObject* WorldContextObject, const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, float MaxDistance, struct FVector* OutCameraLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
