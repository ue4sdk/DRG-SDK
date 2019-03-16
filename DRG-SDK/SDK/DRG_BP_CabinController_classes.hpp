#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_CabinController_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CabinController.BP_CabinController_C
// 0x0038 (0x0360 - 0x0328)
class ABP_CabinController_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class ABP_CabinOwnerSign_C*                        CabinSign;                                                // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class ABP_PlayerController_SpaceRig_C*             CabinOwner;                                               // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AFSDPlayerState*                             OwnerState;                                               // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ASpacerigStart*                              StartSpot;                                                // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class ABP_DeathStats_C*                            InfirmaryStats;                                           // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CabinController.BP_CabinController_C");
		return ptr;
	}


	void OnRep_OwnerState();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RemoveOwner();
	void Set_Cabin_Owner(class AFSDPlayerController* Controller);
	void Controller_leave(class AActor* DestroyedActor);
	void ExecuteUbergraph_BP_CabinController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
