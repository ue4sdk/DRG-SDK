#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MixerInteractivity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MixerInteractivity.MixerInteractivityBlueprintEventSource
// 0x00F0 (0x0118 - 0x0028)
class UMixerInteractivityBlueprintEventSource : public UObject
{
public:
	struct FScriptMulticastDelegate                    ParticipantJoinedDelegate;                                // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    ParticipantLeftDelegate;                                  // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    ParticipantInputDisabledDelegate;                         // 0x0048(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    BroadcastingStartedDelegate;                              // 0x0058(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptMulticastDelegate                    BroadcastingStoppedDelegate;                              // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference)
	TMap<struct FName, struct FMixerButtonEventDynamicDelegateWrapper> ButtonDelegates;                                          // 0x0078(0x0050) (CPF_ZeroConstructor)
	TMap<struct FName, struct FMixerStickEventDynamicDelegateWrapper> StickDelegates;                                           // 0x00C8(0x0050) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MixerInteractivity.MixerInteractivityBlueprintEventSource");
		return ptr;
	}

};


// Class MixerInteractivity.MixerDelegateBinding
// 0x0048 (0x0070 - 0x0028)
class UMixerDelegateBinding : public UDynamicBlueprintBinding
{
public:
	struct FName                                       ParticipantJoinedBinding;                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ParticipantLeftBinding;                                   // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ParticipantInputDisabledBinding;                          // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BroadcastingStartedBinding;                               // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BroadcastingStoppedBinding;                               // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMixerButtonEventBinding>            ButtonEventBindings;                                      // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FMixerStickEventBinding>             StickEventBindings;                                       // 0x0060(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MixerInteractivity.MixerDelegateBinding");
		return ptr;
	}

};


// Class MixerInteractivity.MixerInteractivityBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UMixerInteractivityBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MixerInteractivity.MixerInteractivityBlueprintLibrary");
		return ptr;
	}


	static void TriggerButtonCooldown(const struct FMixerButtonReference& Button, const struct FTimespan& Cooldown);
	static void StopInteractivityNonLatent();
	static void StopInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	static void StartInteractivityNonLatent();
	static void StartInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	static void SetCurrentScene(const struct FMixerSceneReference& Scene, const struct FMixerGroupReference& Group);
	static void MoveParticipantToGroup(const struct FMixerGroupReference& Group, int ParticipantId);
	static void LoginSilently(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FLatentActionInfo& LatentInfo);
	static void GetStickState(const struct FMixerStickReference& Stick, int ParticipantId, float* XAxis, float* YAxis, bool* Enabled);
	static void GetStickDescription(const struct FMixerStickReference& Stick, struct FText* HelpText);
	static void GetRemoteParticipantInfo(int ParticipantId, bool* IsParticipating, struct FString* Name, int* Level, struct FMixerGroupReference* Group, bool* InputEnabled, struct FDateTime* ConnectedAt, struct FDateTime* LastInputAt);
	static void GetParticipantsInGroup(const struct FMixerGroupReference& Group, TArray<int>* ParticipantIds);
	static struct FName GetName(const struct FMixerObjectReference& Obj);
	static void GetLoggedInUserInfo(int* userId, bool* IsLoggedIn, struct FString* Name, int* Level, int* Experience, int* Sparks);
	static void GetButtonState(const struct FMixerButtonReference& Button, int ParticipantId, struct FTimespan* RemainingCooldown, float* Progress, int* DownCount, int* PressCount, int* UpCount, bool* Enabled);
	static void GetButtonDescription(const struct FMixerButtonReference& Button, struct FText* ButtonText, struct FText* HelpText, int* SparkCost);
	static void CaptureSparkTransaction(const struct FMixerTransactionId& TransactionId);
};


// Class MixerInteractivity.MixerInteractivitySettings
// 0x0088 (0x00B0 - 0x0028)
class UMixerInteractivitySettings : public UObject
{
public:
	struct FString                                     ClientId;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     RedirectUri;                                              // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Sandbox;                                                  // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     GameName;                                                 // 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	int                                                GameVersionId;                                            // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	TArray<struct FName>                               CachedButtons;                                            // 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               CachedSticks;                                             // 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               CachedScenes;                                             // 0x0090(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FMixerPredefinedGroup>               DesignTimeGroups;                                         // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MixerInteractivity.MixerInteractivitySettings");
		return ptr;
	}

};


// Class MixerInteractivity.MixerInteractivityUserSettings
// 0x0020 (0x0048 - 0x0028)
class UMixerInteractivityUserSettings : public UObject
{
public:
	struct FString                                     RefreshToken;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     AccessToken;                                              // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MixerInteractivity.MixerInteractivityUserSettings");
		return ptr;
	}

};


// Class MixerInteractivity.MixerLoginPane
// 0x0038 (0x0138 - 0x0100)
class UMixerLoginPane : public UWidget
{
public:
	struct FColor                                      BackgroundColor;                                          // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AllowSilentLogin;                                         // 0x0104(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAuthCodeReady;                                          // 0x0108(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnUIFlowFinished;                                         // 0x0118(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class MixerInteractivity.MixerLoginPane");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
