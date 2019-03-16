#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DetPack_Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DetPack_Charge.BP_DetPack_Charge_C
// 0x0051 (0x0391 - 0x0340)
class ABP_DetPack_Charge_C : public ADetPack
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             Audio;                                                    // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              SphereTimeline_Alpha_B734CAA34EA448BC3B483384E4E415D3;    // 0x0370(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SphereTimeline_Scale_B734CAA34EA448BC3B483384E4E415D3;    // 0x0374(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SphereTimeline__Direction_B734CAA34EA448BC3B483384E4E415D3;// 0x0378(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UTimelineComponent*                          SphereTimeline;                                           // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    SphereMaterial;                                           // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               IsPlaced;                                                 // 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DetPack_Charge.BP_DetPack_Charge_C");
		return ptr;
	}


	void OnRep_IsPlaced();
	void UserConstructionScript();
	void SphereTimeline__FinishedFunc();
	void SphereTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void RecieveHitObject();
	void OnExploded();
	void Show_Warning_Sphere();
	void ExecuteUbergraph_BP_DetPack_Charge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
