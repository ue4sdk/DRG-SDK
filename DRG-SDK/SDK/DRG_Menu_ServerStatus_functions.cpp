// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Menu_ServerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_ServerStatus.Menu_ServerStatus_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMenu_ServerStatus_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenu_ServerStatus_C::OnPlayerJoined(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.OnPlayerJoined");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenu_ServerStatus_C::OnMissionSelected(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.OnMissionSelected");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenu_ServerStatus_C::ExecuteUbergraph_Menu_ServerStatus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_ServerStatus.Menu_ServerStatus_C.ExecuteUbergraph_Menu_ServerStatus");

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
