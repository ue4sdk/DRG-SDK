#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Kickable_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Kickable_Base.BP_Kickable_Base_C
// 0x0040 (0x0368 - 0x0328)
class ABP_Kickable_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UGravityChangedComponent*                    GravityChanged;                                           // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInstantUsable*                              InstantUsable;                                            // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Kickable_Mesh;                                            // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               CanTriggerSound;                                          // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	struct FVector                                     KickSoundLocation;                                        // 0x0354(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APlayerCharacter*                            KickedBy;                                                 // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Kickable_Base.BP_Kickable_Base_C");
		return ptr;
	}


	void OnRep_KickSoundLocation();
	void UserConstructionScript();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* user);
	void ReceiveBeginPlay();
	void destroy();
	void DestroyOvertime();
	void Play_Kick(class APlayerCharacter* Kicker);
	void BndEvt__Kickable_Mesh_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_Kickable_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
