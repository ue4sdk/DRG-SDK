#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PLS_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PLS_Base.PLS_Base_C
// 0x0091 (0x0601 - 0x0570)
class APLS_Base_C : public AProceduralSetup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterial*                                   OutlineMaterial;                                          // 0x0580(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class URoomGenerator*>                      Starting_Rooms;                                           // 0x0588(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FWeightedRoom>                       WeightedRooms;                                            // 0x0598(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class URoomGeneratorGroup*>                 RoomGroups;                                               // 0x05A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class USoundCue*>                           Level_Music;                                              // 0x05B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FRoomNode>                           RoomsInitialState;                                        // 0x05C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UAudioComponent*                             LevelMusicComponent;                                      // 0x05D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             AmbientComponent;                                         // 0x05E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             WaveMusicComponent;                                       // 0x05E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                MusicIndex;                                               // 0x05F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05F4(0x0004) MISSED OFFSET
	class USoundCue*                                   ActiveWaveMusic;                                          // 0x05F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsInitialized;                                            // 0x0600(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PLS_Base.PLS_Base_C");
		return ptr;
	}


	void CallGenerationComplete(int pass);
	void OnRep_ActiveWaveMusic();
	void PlayMusicLocally(class USoundCue* Sound);
	void PlayWaveMusic(class USoundCue* Music);
	void OnRep_MusicIndex();
	void GetRandomRoomCall(bool RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room);
	void StopMusicAndAmbient();
	void PlayMusicAndAmbient();
	void SaveInitialState();
	void GetRoomFromRandomGroup(class URoomGenerator** Room);
	void SetupWeightedRooms(TArray<class URoomGenerator*>* Array);
	void CreateCaveGraph();
	void SelectWeightedRoom(class URoomGenerator** SelectedRoom);
	void GetRandomRoom(bool RemoveRoom, TArray<class URoomGenerator*>* Rooms, class URoomGenerator** Room);
	void UserConstructionScript();
	void OnLoaded_C0B2FCB247E1A2F8766E5E93EBF80DF8(class UClass* Loaded);
	void ReceiveBeginPlay();
	void Generate_Landscape_From_Data(int Seed, TArray<struct FRoomNode> Rooms, TArray<struct FPathObstacle> Obstacles, TArray<struct FTunnelNode> Tunnels);
	void Generate_Landscape_On_Client(class ABP_PlayerController_C* Client);
	void BaseLayerCommitDone();
	void FinalCommitDon();
	void ListenForWaveMusicEnd(class UAudioComponent* WaveComponent);
	void OnWaveMusicEnded();
	void SpawnDropPod();
	void StopWaveMusic();
	void Generate_Graph();
	void Generate_Pass_2();
	void Generate_Pass_3();
	void Final_Pass();
	void Generate_Pass_4_Server();
	void Generate_Pass_4_Clients();
	void GenerateLandscape();
	void Generate_Pass_03();
	void Generate_Pass_6();
	void BeginLiveGeneration();
	void OnPLSDataRecieved();
	void ExecuteUbergraph_PLS_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
