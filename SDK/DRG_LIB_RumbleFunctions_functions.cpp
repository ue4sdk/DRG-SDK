// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_RumbleFunctions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Actor
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UForceFeedbackEffect*    ForceFeedbackEffect            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLooping                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          IntensityMultiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoDestroy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_RumbleFunctions_C::FSD_Rumble_At_Actor(class AActor* Actor, class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Actor");

	struct
	{
		class AActor*                  Actor;
		class UForceFeedbackEffect*    ForceFeedbackEffect;
		bool                           bLooping;
		float                          IntensityMultiplier;
		float                          StartTime;
		bool                           bAutoDestroy;
		class UObject*                 __WorldContext;
	} params;

	params.Actor = Actor;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.bLooping = bLooping;
	params.IntensityMultiplier = IntensityMultiplier;
	params.StartTime = StartTime;
	params.bAutoDestroy = bAutoDestroy;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Location
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UForceFeedbackEffect*    ForceFeedbackEffect            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FRotator                Rotation                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLooping                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          IntensityMultiplier            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAutoDestroy                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_RumbleFunctions_C::FSD_Rumble_At_Location(class UObject* WorldContextObject, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FVector& Location, const struct FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, bool bAutoDestroy, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_RumbleFunctions.LIB_RumbleFunctions_C.FSD Rumble At Location");

	struct
	{
		class UObject*                 WorldContextObject;
		class UForceFeedbackEffect*    ForceFeedbackEffect;
		struct FVector                 Location;
		struct FRotator                Rotation;
		bool                           bLooping;
		float                          IntensityMultiplier;
		float                          StartTime;
		bool                           bAutoDestroy;
		class UObject*                 __WorldContext;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.ForceFeedbackEffect = ForceFeedbackEffect;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bLooping = bLooping;
	params.IntensityMultiplier = IntensityMultiplier;
	params.StartTime = StartTime;
	params.bAutoDestroy = bAutoDestroy;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
