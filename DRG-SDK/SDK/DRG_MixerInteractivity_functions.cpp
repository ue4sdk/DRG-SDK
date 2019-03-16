// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MixerInteractivity_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.TriggerButtonCooldown
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_Parm)
// struct FTimespan               Cooldown                       (CPF_Parm, CPF_ZeroConstructor)

void UMixerInteractivityBlueprintLibrary::TriggerButtonCooldown(const struct FMixerButtonReference& Button, const struct FTimespan& Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.TriggerButtonCooldown");

	struct
	{
		struct FMixerButtonReference   Button;
		struct FTimespan               Cooldown;
	} params;

	params.Button = Button;
	params.Cooldown = Cooldown;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityNonLatent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMixerInteractivityBlueprintLibrary::StopInteractivityNonLatent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityNonLatent");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityLatent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void UMixerInteractivityBlueprintLibrary::StopInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StopInteractivityLatent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityNonLatent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)

void UMixerInteractivityBlueprintLibrary::StartInteractivityNonLatent()
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityNonLatent");

	struct
	{
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityLatent
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void UMixerInteractivityBlueprintLibrary::StartInteractivityLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.StartInteractivityLatent");

	struct
	{
		class UObject*                 WorldContextObject;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.SetCurrentScene
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMixerSceneReference    Scene                          (CPF_Parm)
// struct FMixerGroupReference    Group                          (CPF_Parm)

void UMixerInteractivityBlueprintLibrary::SetCurrentScene(const struct FMixerSceneReference& Scene, const struct FMixerGroupReference& Group)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.SetCurrentScene");

	struct
	{
		struct FMixerSceneReference    Scene;
		struct FMixerGroupReference    Group;
	} params;

	params.Scene = Scene;
	params.Group = Group;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.MoveParticipantToGroup
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMixerGroupReference    Group                          (CPF_Parm)
// int                            ParticipantId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::MoveParticipantToGroup(const struct FMixerGroupReference& Group, int ParticipantId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.MoveParticipantToGroup");

	struct
	{
		struct FMixerGroupReference    Group;
		int                            ParticipantId;
	} params;

	params.Group = Group;
	params.ParticipantId = ParticipantId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.LoginSilently
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (CPF_Parm)

void UMixerInteractivityBlueprintLibrary::LoginSilently(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.LoginSilently");

	struct
	{
		class UObject*                 WorldContextObject;
		class APlayerController*       PlayerController;
		struct FLatentActionInfo       LatentInfo;
	} params;

	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.LatentInfo = LatentInfo;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMixerStickReference    Stick                          (CPF_Parm)
// float                          XAxis                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          YAxis                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Enabled                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticipantId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::GetStickState(const struct FMixerStickReference& Stick, int ParticipantId, float* XAxis, float* YAxis, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickState");

	struct
	{
		struct FMixerStickReference    Stick;
		float                          XAxis;
		float                          YAxis;
		bool                           Enabled;
		int                            ParticipantId;
	} params;

	params.Stick = Stick;
	params.ParticipantId = ParticipantId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (XAxis != nullptr)
		*XAxis = params.XAxis;
	if (YAxis != nullptr)
		*YAxis = params.YAxis;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickDescription
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMixerStickReference    Stick                          (CPF_Parm)
// struct FText                   HelpText                       (CPF_Parm, CPF_OutParm)

void UMixerInteractivityBlueprintLibrary::GetStickDescription(const struct FMixerStickReference& Stick, struct FText* HelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetStickDescription");

	struct
	{
		struct FMixerStickReference    Stick;
		struct FText                   HelpText;
	} params;

	params.Stick = Stick;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HelpText != nullptr)
		*HelpText = params.HelpText;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetRemoteParticipantInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            ParticipantId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsParticipating                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Name                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            Level                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerGroupReference    Group                          (CPF_Parm, CPF_OutParm)
// bool                           InputEnabled                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDateTime               ConnectedAt                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// struct FDateTime               LastInputAt                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMixerInteractivityBlueprintLibrary::GetRemoteParticipantInfo(int ParticipantId, bool* IsParticipating, struct FString* Name, int* Level, struct FMixerGroupReference* Group, bool* InputEnabled, struct FDateTime* ConnectedAt, struct FDateTime* LastInputAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetRemoteParticipantInfo");

	struct
	{
		int                            ParticipantId;
		bool                           IsParticipating;
		struct FString                 Name;
		int                            Level;
		struct FMixerGroupReference    Group;
		bool                           InputEnabled;
		struct FDateTime               ConnectedAt;
		struct FDateTime               LastInputAt;
	} params;

	params.ParticipantId = ParticipantId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsParticipating != nullptr)
		*IsParticipating = params.IsParticipating;
	if (Name != nullptr)
		*Name = params.Name;
	if (Level != nullptr)
		*Level = params.Level;
	if (Group != nullptr)
		*Group = params.Group;
	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;
	if (ConnectedAt != nullptr)
		*ConnectedAt = params.ConnectedAt;
	if (LastInputAt != nullptr)
		*LastInputAt = params.LastInputAt;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetParticipantsInGroup
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMixerGroupReference    Group                          (CPF_Parm)
// TArray<int>                    ParticipantIds                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UMixerInteractivityBlueprintLibrary::GetParticipantsInGroup(const struct FMixerGroupReference& Group, TArray<int>* ParticipantIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetParticipantsInGroup");

	struct
	{
		struct FMixerGroupReference    Group;
		TArray<int>                    ParticipantIds;
	} params;

	params.Group = Group;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ParticipantIds != nullptr)
		*ParticipantIds = params.ParticipantIds;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetName
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMixerObjectReference   Obj                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UMixerInteractivityBlueprintLibrary::GetName(const struct FMixerObjectReference& Obj)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetName");

	struct
	{
		struct FMixerObjectReference   Obj;
		struct FName                   ReturnValue;
	} params;

	params.Obj = Obj;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetLoggedInUserInfo
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// int                            userId                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsLoggedIn                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Name                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// int                            Level                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Experience                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Sparks                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::GetLoggedInUserInfo(int* userId, bool* IsLoggedIn, struct FString* Name, int* Level, int* Experience, int* Sparks)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetLoggedInUserInfo");

	struct
	{
		int                            userId;
		bool                           IsLoggedIn;
		struct FString                 Name;
		int                            Level;
		int                            Experience;
		int                            Sparks;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (userId != nullptr)
		*userId = params.userId;
	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;
	if (Name != nullptr)
		*Name = params.Name;
	if (Level != nullptr)
		*Level = params.Level;
	if (Experience != nullptr)
		*Experience = params.Experience;
	if (Sparks != nullptr)
		*Sparks = params.Sparks;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_Parm)
// struct FTimespan               RemainingCooldown              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// float                          Progress                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            DownCount                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            PressCount                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            UpCount                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Enabled                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticipantId                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::GetButtonState(const struct FMixerButtonReference& Button, int ParticipantId, struct FTimespan* RemainingCooldown, float* Progress, int* DownCount, int* PressCount, int* UpCount, bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonState");

	struct
	{
		struct FMixerButtonReference   Button;
		struct FTimespan               RemainingCooldown;
		float                          Progress;
		int                            DownCount;
		int                            PressCount;
		int                            UpCount;
		bool                           Enabled;
		int                            ParticipantId;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (RemainingCooldown != nullptr)
		*RemainingCooldown = params.RemainingCooldown;
	if (Progress != nullptr)
		*Progress = params.Progress;
	if (DownCount != nullptr)
		*DownCount = params.DownCount;
	if (PressCount != nullptr)
		*PressCount = params.PressCount;
	if (UpCount != nullptr)
		*UpCount = params.UpCount;
	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonDescription
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_Parm)
// struct FText                   ButtonText                     (CPF_Parm, CPF_OutParm)
// struct FText                   HelpText                       (CPF_Parm, CPF_OutParm)
// int                            SparkCost                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMixerInteractivityBlueprintLibrary::GetButtonDescription(const struct FMixerButtonReference& Button, struct FText* ButtonText, struct FText* HelpText, int* SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.GetButtonDescription");

	struct
	{
		struct FMixerButtonReference   Button;
		struct FText                   ButtonText;
		struct FText                   HelpText;
		int                            SparkCost;
	} params;

	params.Button = Button;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ButtonText != nullptr)
		*ButtonText = params.ButtonText;
	if (HelpText != nullptr)
		*HelpText = params.HelpText;
	if (SparkCost != nullptr)
		*SparkCost = params.SparkCost;
}


// Function MixerInteractivity.MixerInteractivityBlueprintLibrary.CaptureSparkTransaction
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FMixerTransactionId     TransactionId                  (CPF_Parm)

void UMixerInteractivityBlueprintLibrary::CaptureSparkTransaction(const struct FMixerTransactionId& TransactionId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MixerInteractivity.MixerInteractivityBlueprintLibrary.CaptureSparkTransaction");

	struct
	{
		struct FMixerTransactionId     TransactionId;
	} params;

	params.TransactionId = TransactionId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
