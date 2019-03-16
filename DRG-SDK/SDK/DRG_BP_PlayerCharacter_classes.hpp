#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C
// 0x01F8 (0x1008 - 0x0E10)
class ABP_PlayerCharacter_C : public APlayerCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E10(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBP_DeadState_C*                             BP_DeadState;                                             // 0x0E18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_PhotographyState_C*                      BP_PhotographyState;                                      // 0x0E20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_PassedOut_C*                             BP_PassedOut;                                             // 0x0E28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_IntoxicationComponent_C*                 BP_IntoxicationComponent;                                 // 0x0E30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_FrozenState_C*                           BP_FrozenState;                                           // 0x0E38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        ScannerArrow;                                             // 0x0E40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_GrabbedState_C*                          BP_GrabbedState;                                          // 0x0E48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0E50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0E58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        FP_PointLight_CloseShine_Ground;                          // 0x0E60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             ShoulderCamLocation;                                      // 0x0E68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpringArmComponent*                         ShoulderCamArm;                                           // 0x0E70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        DebugPointLight;                                          // 0x0E78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint6;                                          // 0x0E80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint5;                                          // 0x0E88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint4;                                          // 0x0E90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint3;                                          // 0x0E98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint2;                                          // 0x0EA0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint1;                                          // 0x0EA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint;                                           // 0x0EB0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_SelfiePoint_C*                           BP_SelfiePoint8;                                          // 0x0EB8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             Selfie_Points_new;                                        // 0x0EC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UActorTrackingComponent*                     ActorTracking;                                            // 0x0EC8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        DropShadow;                                               // 0x0ED0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFragileDebrisCleaner*                       FragileDebrisCleanerCore;                                 // 0x0ED8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFragileDebrisCleaner*                       FragileDebrisCleanerFeet;                                 // 0x0EE0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Ambient_Dust;                                           // 0x0EE8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_FlyingState_C*                           BP_FlyingState;                                           // 0x0EF0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         TP_SpotLight_shadow;                                      // 0x0EF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             TP_SpotLight;                                             // 0x0F00(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpotLightComponent*                         FP_SpotLight_Light;                                       // 0x0F08(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             FP_SpotLight;                                             // 0x0F10(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        EmergencyLight;                                           // 0x0F18(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        FP_PointLight_CloseShine;                                 // 0x0F20(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_NoMovementState_C*                       BP_NoMovementState;                                       // 0x0F28(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_ZipLineState_C*                          BP_ZipLineState;                                          // 0x0F30(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_UsingState_C*                            BP_UsingState;                                            // 0x0F38(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             ShieldRegenAudio;                                         // 0x0F40(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class URadarPointComponent*                        radarPoint;                                               // 0x0F48(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCharacterGearComponent*                     CharacterGear;                                            // 0x0F50(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_ParalyzedState_C*                        BP_ParalyzedState;                                        // 0x0F58(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight_SpotCloseShine;                                // 0x0F60(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_DownedState_C*                           BP_DownedState;                                           // 0x0F68(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_FallingState_C*                          BP_FallingState;                                          // 0x0F70(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBP_WalkingState_C*                          BP_WalkingState;                                          // 0x0F78(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_LightCone;                                             // 0x0F80(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Lamp_rim;                                            // 0x0F88(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Mesh_Lamp;                                                // 0x0F90(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            UsableCollision;                                          // 0x0F98(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Emergency_Timeline_Light_Intensity_49385F0B40EDFCE34D2340AC7114B889;// 0x0FA0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Emergency_Timeline__Direction_49385F0B40EDFCE34D2340AC7114B889;// 0x0FA4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FA5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Emergency_Timeline;                                       // 0x0FA8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ShieldRegenTimeline_Volume_007E924B43B618D88D08859A06A1CF61;// 0x0FB0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShieldRegenTimeline_Pitch_007E924B43B618D88D08859A06A1CF61;// 0x0FB4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShieldRegenTimeline__Direction_007E924B43B618D88D08859A06A1CF61;// 0x0FB8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0FB9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          ShieldRegenTimeline;                                      // 0x0FC0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ShieldRegenTime;                                          // 0x0FC8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0FCC(0x0004) MISSED OFFSET
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0FD0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastDamageTime;                                           // 0x0FD8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0FDC(0x0004) MISSED OFFSET
	TArray<class UBP_SelfiePoint_C*>                   SelfiePointList;                                          // 0x0FE0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UBP_SelfiePoint_C*                           ActiveSelfiePoint;                                        // 0x0FF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               WasHUDVisible;                                            // 0x0FF8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0FF9(0x0007) MISSED OFFSET
	class UReverbEffect*                               PreDownReverb;                                            // 0x1000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PlayerCharacter.BP_PlayerCharacter_C");
		return ptr;
	}


	class USceneComponent* GetDownCameraAttachPoint();
	class USceneComponent* GetDownCameraRotationPoint();
	void ChromaEffect(EFSDChromaEffect effect);
	void CharacterAudioThrottled(class USoundBase* Sound, class UDialogDataAsset* Shout);
	void UpdateHeadLight();
	void UserConstructionScript();
	void ShieldRegenTimeline__FinishedFunc();
	void ShieldRegenTimeline__UpdateFunc();
	void Emergency_Timeline__FinishedFunc();
	void Emergency_Timeline__UpdateFunc();
	void InpActEvt_MapTool_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_MapTool_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void BP_OnControllerReady();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_24_DamageSig__DelegateSignature(float Amount);
	void ReceiveBeginPlay();
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float Amount);
	void StopRegenAudio();
	void BP_OnUpdateMeshes();
	void CharacterState_Changed(ECharacterState NewState);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount);
	void Init_Selfie_Cam();
	void SetDustVisible(bool Visible);
	void ReceiveOnHeadlightOn();
	void ResetSaveGameIDInEditor();
	void On_Temporary_Buff_Changed(class UTemporaryBuff* buff);
	void Request_change_in_gravity_scale(float New_Gravity_Scale);
	void ExecuteUbergraph_BP_PlayerCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
