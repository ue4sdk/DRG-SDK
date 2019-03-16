// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GoogleAnalytics_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 TrackingId                     (CPF_Parm, CPF_ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::SetTrackingId(const struct FString& TrackingId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetTrackingId");

	struct
	{
		struct FString                 TrackingId;
	} params;

	params.TrackingId = TrackingId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           Anonymize                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UGoogleAnalyticsBlueprintLibrary::SetAnonymizeIP(bool Anonymize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.SetAnonymizeIP");

	struct
	{
		bool                           Anonymize;
	} params;

	params.Anonymize = Anonymize;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 TimingCategory                 (CPF_Parm, CPF_ZeroConstructor)
// int                            TimingValue                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 TimingName                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomDimension> CustomDimensions               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomMetric>   CustomMetrics                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleUserTiming(const struct FString& TimingCategory, int TimingValue, const struct FString& TimingName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleUserTiming");

	struct
	{
		struct FString                 TimingCategory;
		int                            TimingValue;
		struct FString                 TimingName;
		TArray<struct FCustomDimension> CustomDimensions;
		TArray<struct FCustomMetric>   CustomMetrics;
	} params;

	params.TimingCategory = TimingCategory;
	params.TimingValue = TimingValue;
	params.TimingName = TimingName;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 SocialNetwork                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SocialAction                   (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SocialTarget                   (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomDimension> CustomDimensions               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomMetric>   CustomMetrics                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleSocialInteraction(const struct FString& SocialNetwork, const struct FString& SocialAction, const struct FString& SocialTarget, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleSocialInteraction");

	struct
	{
		struct FString                 SocialNetwork;
		struct FString                 SocialAction;
		struct FString                 SocialTarget;
		TArray<struct FCustomDimension> CustomDimensions;
		TArray<struct FCustomMetric>   CustomMetrics;
	} params;

	params.SocialNetwork = SocialNetwork;
	params.SocialAction = SocialAction;
	params.SocialTarget = SocialTarget;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ScreenName                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomDimension> CustomDimensions               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomMetric>   CustomMetrics                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleScreen(const struct FString& ScreenName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleScreen");

	struct
	{
		struct FString                 ScreenName;
		TArray<struct FCustomDimension> CustomDimensions;
		TArray<struct FCustomMetric>   CustomMetrics;
	} params;

	params.ScreenName = ScreenName;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 EventCategory                  (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 EventAction                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 EventLabel                     (CPF_Parm, CPF_ZeroConstructor)
// int                            EventValue                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FCustomDimension> CustomDimensions               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)
// TArray<struct FCustomMetric>   CustomMetrics                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor)

void UGoogleAnalyticsBlueprintLibrary::RecordGoogleEvent(const struct FString& EventCategory, const struct FString& EventAction, const struct FString& EventLabel, int EventValue, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics)
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.RecordGoogleEvent");

	struct
	{
		struct FString                 EventCategory;
		struct FString                 EventAction;
		struct FString                 EventLabel;
		int                            EventValue;
		TArray<struct FCustomDimension> CustomDimensions;
		TArray<struct FCustomMetric>   CustomMetrics;
	} params;

	params.EventCategory = EventCategory;
	params.EventAction = EventAction;
	params.EventLabel = EventLabel;
	params.EventValue = EventValue;
	params.CustomDimensions = CustomDimensions;
	params.CustomMetrics = CustomMetrics;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UGoogleAnalyticsBlueprintLibrary::GetTrackingId()
{
	static auto fn = UObject::FindObject<UFunction>("Function GoogleAnalytics.GoogleAnalyticsBlueprintLibrary.GetTrackingId");

	struct
	{
		struct FString                 ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
