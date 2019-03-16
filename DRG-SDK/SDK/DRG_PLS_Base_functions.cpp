// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PLS_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PLS_Base.PLS_Base_C.CallGenerationComplete
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            pass                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::CallGenerationComplete(int pass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CallGenerationComplete");

	struct
	{
		int                            pass;
	} params;

	params.pass = pass;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.OnRep_ActiveWaveMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::OnRep_ActiveWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnRep_ActiveWaveMusic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.PlayMusicLocally
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundCue*               Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::PlayMusicLocally(class USoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayMusicLocally");

	struct
	{
		class USoundCue*               Sound;
	} params;

	params.Sound = Sound;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.PlayWaveMusic
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundCue*               Music                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::PlayWaveMusic(class USoundCue* Music)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayWaveMusic");

	struct
	{
		class USoundCue*               Music;
	} params;

	params.Music = Music;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.OnRep_MusicIndex
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::OnRep_MusicIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnRep_MusicIndex");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.GetRandomRoomCall
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class URoomGenerator*>  Rooms                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           RemoveRoom                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URoomGenerator*          Room                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::GetRandomRoomCall(bool RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRandomRoomCall");

	struct
	{
		TArray<class URoomGenerator*>  Rooms;
		bool                           RemoveRoom;
		class URoomGenerator*          Room;
	} params;

	params.RemoveRoom = RemoveRoom;

	UObject::ProcessEvent(fn, &params);

	if (Rooms != nullptr)
		*Rooms = params.Rooms;
	if (Room != nullptr)
		*Room = params.Room;
}


// Function PLS_Base.PLS_Base_C.StopMusicAndAmbient
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::StopMusicAndAmbient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.StopMusicAndAmbient");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::PlayMusicAndAmbient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.PlayMusicAndAmbient");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.SaveInitialState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::SaveInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SaveInitialState");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.GetRoomFromRandomGroup
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class URoomGenerator*          Room                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::GetRoomFromRandomGroup(class URoomGenerator** Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRoomFromRandomGroup");

	struct
	{
		class URoomGenerator*          Room;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Room != nullptr)
		*Room = params.Room;
}


// Function PLS_Base.PLS_Base_C.SetupWeightedRooms
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class URoomGenerator*>  Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void APLS_Base_C::SetupWeightedRooms(TArray<class URoomGenerator*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SetupWeightedRooms");

	struct
	{
		TArray<class URoomGenerator*>  Array;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
}


// Function PLS_Base.PLS_Base_C.CreateCaveGraph
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::CreateCaveGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.CreateCaveGraph");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.SelectWeightedRoom
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class URoomGenerator*          SelectedRoom                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::SelectWeightedRoom(class URoomGenerator** SelectedRoom)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SelectWeightedRoom");

	struct
	{
		class URoomGenerator*          SelectedRoom;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SelectedRoom != nullptr)
		*SelectedRoom = params.SelectedRoom;
}


// Function PLS_Base.PLS_Base_C.GetRandomRoom
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TArray<class URoomGenerator*>  Rooms                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// bool                           RemoveRoom                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class URoomGenerator*          Room                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::GetRandomRoom(bool RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GetRandomRoom");

	struct
	{
		TArray<class URoomGenerator*>  Rooms;
		bool                           RemoveRoom;
		class URoomGenerator*          Room;
	} params;

	params.RemoveRoom = RemoveRoom;

	UObject::ProcessEvent(fn, &params);

	if (Rooms != nullptr)
		*Rooms = params.Rooms;
	if (Room != nullptr)
		*Room = params.Room;
}


// Function PLS_Base.PLS_Base_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8");

	struct
	{
		class UClass*                  Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APLS_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate Landscape From Data
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Seed                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FRoomNode>       Rooms                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FPathObstacle>   Obstacles                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FTunnelNode>     Tunnels                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void APLS_Base_C::Generate_Landscape_From_Data(int Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles, TArray<struct FTunnelNode> Tunnels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate Landscape From Data");

	struct
	{
		int                            Seed;
		TArray<struct FRoomNode>       Rooms;
		TArray<struct FPathObstacle>   Obstacles;
		TArray<struct FTunnelNode>     Tunnels;
	} params;

	params.Seed = Seed;
	params.Rooms = Rooms;
	params.Obstacles = Obstacles;
	params.Tunnels = Tunnels;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate Landscape On Client
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C*  Client                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::Generate_Landscape_On_Client(class ABP_PlayerController_C* Client)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate Landscape On Client");

	struct
	{
		class ABP_PlayerController_C*  Client;
	} params;

	params.Client = Client;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.BaseLayerCommitDone
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::BaseLayerCommitDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.BaseLayerCommitDone");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.FinalCommitDon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::FinalCommitDon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.FinalCommitDon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.ListenForWaveMusicEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UAudioComponent*         WaveComponent                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void APLS_Base_C::ListenForWaveMusicEnd(class UAudioComponent* WaveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ListenForWaveMusicEnd");

	struct
	{
		class UAudioComponent*         WaveComponent;
	} params;

	params.WaveComponent = WaveComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.OnWaveMusicEnded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::OnWaveMusicEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnWaveMusicEnded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.SpawnDropPod
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::SpawnDropPod()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.SpawnDropPod");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.StopWaveMusic
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::StopWaveMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.StopWaveMusic");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Graph
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Graph()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Graph");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Pass_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_2");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_3
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Pass_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_3");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Final Pass
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Final_Pass()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Final Pass");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_4_Server
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Pass_4_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_4_Server");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_4_Clients
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Pass_4_Clients()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_4_Clients");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.GenerateLandscape
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::GenerateLandscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.GenerateLandscape");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_03
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Pass_03()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_03");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.Generate_Pass_6
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APLS_Base_C::Generate_Pass_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.Generate_Pass_6");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.BeginLiveGeneration
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APLS_Base_C::BeginLiveGeneration()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.BeginLiveGeneration");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.OnPLSDataRecieved
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APLS_Base_C::OnPLSDataRecieved()
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.OnPLSDataRecieved");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APLS_Base_C::ExecuteUbergraph_PLS_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PLS_Base.PLS_Base_C.ExecuteUbergraph_PLS_Base");

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
