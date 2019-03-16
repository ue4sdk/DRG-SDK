#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_IntoxicationComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C
// 0x003C (0x017C - 0x0140)
class UBP_IntoxicationComponent_C : public UCharacterIntoxicationComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              Seed;                                                     // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DrunkEffectCoolDown;                                      // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DrunkenMovementNoiseStrength;                             // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DrunkenYawNoiseStrength;                                  // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DrunkenPitchNoiseStrength;                                // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IgnoreMovement;                                           // 0x015C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IgnoreYaw;                                                // 0x015D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IgnorePitch;                                              // 0x015E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x015F(0x0001) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DrunkenEffect;                                            // 0x0160(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       EffectId;                                                 // 0x0168(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IntoxicationVisualStrength;                               // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IntoxicationMovementStrength;                             // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DrunkenShoutCoolDown;                                     // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_IntoxicationComponent.BP_IntoxicationComponent_C");
		return ptr;
	}


	void ToPercentStr(float Progress, struct FString* PercentString);
	void MyLerp(float Current_Value, float Target_Value, float Delta_Time, float* Result);
	void SetPostProcessStrength(float NewStrength);
	int GetAlcoholPct(EDrinkableAlcoholStrength Strength);
	void Lerp_Movement_Stength(float DeltaTime);
	void Push_Effects();
	void Pop_Effects(const struct FString& DebugReason);
	void ReceiveDrunkTick(float DeltaTime, float DrunkTime);
	void ReceivePassOutDrunk();
	void Lerp_Post_Process_Strength(float DeltaTime);
	void ReceiveDrunkEnd();
	void ReceiveDrunkBegin();
	void ExecuteUbergraph_BP_IntoxicationComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
