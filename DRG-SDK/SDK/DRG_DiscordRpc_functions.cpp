// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DiscordRpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DiscordRpc.DiscordRpc.UpdatePresence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordRpc::UpdatePresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.UpdatePresence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DiscordRpc.DiscordRpc.Shutdown
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordRpc::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Shutdown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DiscordRpc.DiscordRpc.RunCallbacks
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordRpc::RunCallbacks()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.RunCallbacks");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function DiscordRpc.DiscordRpc.Respond
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 userId                         (CPF_Parm, CPF_ZeroConstructor)
// int                            Reply                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UDiscordRpc::Respond(const struct FString& userId, int Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Respond");

	struct
	{
		struct FString                 userId;
		int                            Reply;
	} params;

	params.userId = userId;
	params.Reply = Reply;

	UObject::ProcessEvent(fn, &params);
}


// Function DiscordRpc.DiscordRpc.Initialize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 applicationId                  (CPF_Parm, CPF_ZeroConstructor)
// bool                           autoRegister                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 optionalSteamId                (CPF_Parm, CPF_ZeroConstructor)

void UDiscordRpc::Initialize(const struct FString& applicationId, bool autoRegister, const struct FString& optionalSteamId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.Initialize");

	struct
	{
		struct FString                 applicationId;
		bool                           autoRegister;
		struct FString                 optionalSteamId;
	} params;

	params.applicationId = applicationId;
	params.autoRegister = autoRegister;
	params.optionalSteamId = optionalSteamId;

	UObject::ProcessEvent(fn, &params);
}


// Function DiscordRpc.DiscordRpc.ClearPresence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UDiscordRpc::ClearPresence()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiscordRpc.DiscordRpc.ClearPresence");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
