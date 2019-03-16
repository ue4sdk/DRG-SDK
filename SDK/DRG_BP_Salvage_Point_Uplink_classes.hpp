#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Salvage_Point_Uplink_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C
// 0x0058 (0x03C0 - 0x0368)
class ABP_Salvage_Point_Uplink_C : public ABP_Salvage_Point_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight1;                                              // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight2;                                              // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0388(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0390(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               UplinkCollision;                                          // 0x0398(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPathfinderCollisionComponent*               PathfinderCollision;                                      // 0x03A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             UplinkTriangulation_Cue;                                  // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USimpleObjectInfoComponent*                  SimpleObjectInfo;                                         // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Salvage_Point_Uplink.BP_Salvage_Point_Uplink_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	void OnDefenseComplete();
	void OnDefenseStart();
	void ReceiveBeginPlay();
	void OnDefenseFail();
	void ExecuteUbergraph_BP_Salvage_Point_Uplink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
