// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_NetworkPlayerController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CalcMixerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 Name                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ABP_NetworkPlayerController_C::CalcMixerName(int ParticipantId, struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.CalcMixerName");

	struct
	{
		int                            ParticipantId;
		struct FString                 Name;
	} params;

	params.ParticipantId = ParticipantId;

	UObject::ProcessEvent(fn, &params);

	if (Name != nullptr)
		*Name = params.Name;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  SelectedClass                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::GetNonTakenHero(class UClass** SelectedClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.GetNonTakenHero");

	struct
	{
		class UClass*                  SelectedClass;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SelectedClass != nullptr)
		*SelectedClass = params.SelectedClass;
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnDreadnought_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerTransactionId     TransactionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SparkCost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnDreadnought_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnDreadnought_Pressed");

	struct
	{
		struct FMixerButtonReference   Button;
		int                            ParticipantId;
		struct FMixerTransactionId     TransactionId;
		int                            SparkCost;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;
	params.TransactionId = TransactionId;
	params.SparkCost = SparkCost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawn3Praetorians_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerTransactionId     TransactionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SparkCost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawn3Praetorians_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawn3Praetorians_Pressed");

	struct
	{
		struct FMixerButtonReference   Button;
		int                            ParticipantId;
		struct FMixerTransactionId     TransactionId;
		int                            SparkCost;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;
	params.TransactionId = TransactionId;
	params.SparkCost = SparkCost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnLootBug_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerTransactionId     TransactionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SparkCost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnLootBug_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnLootBug_Pressed");

	struct
	{
		struct FMixerButtonReference   Button;
		int                            ParticipantId;
		struct FMixerTransactionId     TransactionId;
		int                            SparkCost;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;
	params.TransactionId = TransactionId;
	params.SparkCost = SparkCost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAGrunt_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerTransactionId     TransactionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SparkCost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::MixerButtonEvt_spawnAGrunt_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_spawnAGrunt_Pressed");

	struct
	{
		struct FMixerButtonReference   Button;
		int                            ParticipantId;
		struct FMixerTransactionId     TransactionId;
		int                            SparkCost;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;
	params.TransactionId = TransactionId;
	params.SparkCost = SparkCost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveNitra_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerTransactionId     TransactionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SparkCost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::MixerButtonEvt_giveNitra_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveNitra_Pressed");

	struct
	{
		struct FMixerButtonReference   Button;
		int                            ParticipantId;
		struct FMixerTransactionId     TransactionId;
		int                            SparkCost;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;
	params.TransactionId = TransactionId;
	params.SparkCost = SparkCost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveHealth_Pressed
// (FUNC_BlueprintEvent)
// Parameters:
// struct FMixerButtonReference   Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ParticipantId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMixerTransactionId     TransactionId                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            SparkCost                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::MixerButtonEvt_giveHealth_Pressed(const struct FMixerButtonReference& Button, int ParticipantId, const struct FMixerTransactionId& TransactionId, int SparkCost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.MixerButtonEvt_giveHealth_Pressed");

	struct
	{
		struct FMixerButtonReference   Button;
		int                            ParticipantId;
		struct FMixerTransactionId     TransactionId;
		int                            SparkCost;
	} params;

	params.Button = Button;
	params.ParticipantId = ParticipantId;
	params.TransactionId = TransactionId;
	params.SparkCost = SparkCost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::OnPlayerCharacterPossesed_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.OnPlayerCharacterPossesed_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::Server_RequestNonTakenHero()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_RequestNonTakenHero");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  New_Character                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::Client_RecieveNonTakenHero(class UClass* New_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Client_RecieveNonTakenHero");

	struct
	{
		class UClass*                  New_Character;
	} params;

	params.New_Character = New_Character;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_Mixer_GiveHealth
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::Server_Mixer_GiveHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_Mixer_GiveHealth");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayerController_C::Server_SetCharacterSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.Server_SetCharacterSelected");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Show                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::ShowReconnect(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ShowReconnect");

	struct
	{
		bool                           Show;
	} params;

	params.Show = Show;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayerController_C::ExecuteUbergraph_BP_NetworkPlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayerController.BP_NetworkPlayerController_C.ExecuteUbergraph_BP_NetworkPlayerController");

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
