#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Tank_Mixer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_Spider_Tank_Mixer.ENE_Spider_Tank_Mixer_C
// 0x005E (0x05C0 - 0x0562)
class AENE_Spider_Tank_Mixer_C : public AENE_SpiderBase_Large_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class URotateToFace*                               RotateToFace;                                             // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidgetComponent*                            MixerNameDisplay;                                         // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        Light_BackBody;                                           // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Timeline_1_0_NewTrack_3_7C91072E497F50F4CAAC82A2C82BA4B2; // 0x0590(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1_0__Direction_7C91072E497F50F4CAAC82A2C82BA4B2; // 0x0594(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1_1;                                             // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      AcidCloudClass;                                           // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightIntensityCache;                                      // 0x05A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	struct FString                                     mixerName;                                                // 0x05B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_Spider_Tank_Mixer.ENE_Spider_Tank_Mixer_C");
		return ptr;
	}


	void OnRep_MixerName();
	void UserConstructionScript();
	void Timeline_1_0__FinishedFunc();
	void Timeline_1_0__UpdateFunc();
	void ReceiveBeginPlay();
	void OnRagdoll();
	void OnDeathBase();
	void StartFadeBody();
	void OnMixerNameChange(const struct FString& mixerName);
	void ExecuteUbergraph_ENE_Spider_Tank_Mixer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
