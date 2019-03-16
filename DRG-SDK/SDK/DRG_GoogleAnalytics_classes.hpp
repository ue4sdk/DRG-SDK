#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GoogleAnalytics_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UGoogleAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class GoogleAnalytics.GoogleAnalyticsBlueprintLibrary");
		return ptr;
	}


	static void SetTrackingId(const struct FString& TrackingId);
	static void SetAnonymizeIP(bool Anonymize);
	static void RecordGoogleUserTiming(const struct FString& TimingCategory, int TimingValue, const struct FString& TimingName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
	static void RecordGoogleSocialInteraction(const struct FString& SocialNetwork, const struct FString& SocialAction, const struct FString& SocialTarget, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
	static void RecordGoogleScreen(const struct FString& ScreenName, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
	static void RecordGoogleEvent(const struct FString& EventCategory, const struct FString& EventAction, const struct FString& EventLabel, int EventValue, TArray<struct FCustomDimension> CustomDimensions, TArray<struct FCustomMetric> CustomMetrics);
	static struct FString GetTrackingId();
};


// Class GoogleAnalytics.GoogleAnalyticsSettings
// 0x0008 (0x0030 - 0x0028)
class UGoogleAnalyticsSettings : public UObject
{
public:
	bool                                               bEnableIDFACollection;                                    // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class GoogleAnalytics.GoogleAnalyticsSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
