#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LVL_SpaceRig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LVL_SpaceRig.LVL_SpaceRig_C
// 0x0178 (0x04A8 - 0x0330)
class ALVL_SpaceRig_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              SunSpeed;                                                 // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentNumberOfBarrels;                                   // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DesiredBarrelNumber;                                      // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MedbayBantersPlayed;                                      // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Players_spawned;                                          // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	class ABP_DropPod_Rig_C*                           BP_DropPod_Rig_5330_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0350(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            ForceShield_ExecuteUbergraph_LVL_SpaceRig_RefProperty;    // 0x0358(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AEmitter*                                    P_SpaceRig_Smoke_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0360(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            SaluteStatue_B2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0368(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Statue_Engineer_5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0370(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Statue_Driller_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0378(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Statue_Gunner_8_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0380(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASkeletalMeshActor*                          SK_DonkeyMK5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;   // 0x0388(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Statue_Scout_11_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0390(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            SaluteStatue_B_14_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0398(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;        // 0x03A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane3_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane4_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane5_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane6_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            SaluteStatue_A_2_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane7_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            Plane8_ExecuteUbergraph_LVL_SpaceRig_RefProperty;         // 0x03E0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_DRILLERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_ENGINEERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GUNNERSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_SCOUTSTATUE_lvl10_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0400(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_MULESTATUE_Rank6_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0408(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank3_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0410(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank3_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0418(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank5_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0420(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank5_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0428(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank7_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0430(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank7_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0438(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank4_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0440(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_POSTER_Rank4_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0448(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GIANTSTATUE_Rank8_R_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0450(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GIANTSTATUE_Rank8_L_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0458(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDDRILLERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0460(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDENGINEERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0468(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDGUNNERSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0470(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDSCOUTSTATUE_lvl20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0478(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDSALUTINGSTATUE_Rank20_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0480(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDMULESTATUE_Rank12_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0488(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ASign_MemorialUnlock_C*                      Memorial_Sign_GOLDGIANTSTATUES_Rank15_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0490(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AStaticMeshActor*                            SM_DonkeyStatic01_4_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x0498(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APointLight*                                 Light_Dropchute_BlueLight_ExecuteUbergraph_LVL_SpaceRig_RefProperty;// 0x04A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LVL_SpaceRig.LVL_SpaceRig_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnLeaveSpacerig_Event_1();
	void BndEvt__DockingBayTriggerBox_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__InsideDroppodTriggerBox_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_18_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__DockingBayTriggerBox_AllbarrelsIn_K2Node_ActorBoundEvent_48_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void BndEvt__Start_10_K2Node_ActorBoundEvent_0_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
	void BndEvt__Start_14_K2Node_ActorBoundEvent_2_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
	void BndEvt__Start_12_K2Node_ActorBoundEvent_3_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
	void BndEvt__Start_16_K2Node_ActorBoundEvent_5_PlayerSpawnInHub__DelegateSignature(class AFSDPlayerController* Controller);
	void Play_medbay_banter(class AFSDPlayerController* Player_controller);
	void ExecuteUbergraph_LVL_SpaceRig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
