#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SnowStorm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SnowStorm.BP_SnowStorm_C
// 0x009C (0x03C4 - 0x0328)
class ABP_SnowStorm_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             SnowStormNext;                                            // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             SnowStorm_Cue;                                            // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StormEnd_OneToZero_68D6F34B455AD7B05A8F688B7334ED64;      // 0x0348(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StormEnd__Direction_68D6F34B455AD7B05A8F688B7334ED64;     // 0x034C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StormEnd;                                                 // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StormStart_OneToZero_344430D84B8197F7A7C58EA10A2A300A;    // 0x0358(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StormStart__Direction_344430D84B8197F7A7C58EA10A2A300A;   // 0x035C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StormStart;                                               // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UExponentialHeightFogComponent*              Fog;                                                      // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              OriginalFogDensity;                                       // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                OriginalFogInscatteringColor;                             // 0x0374(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OriginalFogMaxOpacity;                                    // 0x0384(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OriginalFogStartDistance;                                 // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   StormLifetimeMinMax;                                      // 0x038C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                StormFogInscatteringColor;                                // 0x0394(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StormFogDensity;                                          // 0x03A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StormFogMaxOpacity;                                       // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StormFogStartDistance;                                    // 0x03AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      StormSTE;                                                 // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PostProcessingClass;                                      // 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StormDelay;                                               // 0x03C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SnowStorm.BP_SnowStorm_C");
		return ptr;
	}


	void UserConstructionScript();
	void StormStart__FinishedFunc();
	void StormStart__UpdateFunc();
	void StormEnd__FinishedFunc();
	void StormEnd__UpdateFunc();
	void ReceiveBeginPlay();
	void OnPlayerCharacterRegistered(class APlayerCharacter* PlayerCharacter);
	void StopListeningForPlayers();
	void ExecuteUbergraph_BP_SnowStorm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
