#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_FSDCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C
// 0x0045 (0x24B5 - 0x2470)
class ABP_FSDCameraManager_C : public APlayerCameraManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        PhysicalSphere;                                           // 0x2478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               SessionStarted;                                           // 0x2480(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2481(0x0003) MISSED OFFSET
	float                                              MaxDistance;                                              // 0x2484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    HideHUDForPhotography;                                    // 0x2488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShowHUDForPhotography;                                    // 0x2498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	bool                                               UserVisibility;                                           // 0x24A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	ECharacterCameraMode                               PreviousCameraMode;                                       // 0x24A9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               PauseGame;                                                // 0x24AA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x24AB(0x0001) MISSED OFFSET
	float                                              SphereReturnVelocity;                                     // 0x24AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxDistanceTolerance;                                     // 0x24B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               KeyDebug;                                                 // 0x24B4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FSDCameraManager.BP_FSDCameraManager_C");
		return ptr;
	}


	void ReturnCameraMode(class APlayerCharacter* Target, ECharacterCameraMode NewCameraMode);
	void PhotographyCameraModify(const struct FVector& NewCameraLocation, const struct FVector& PreviousCameraLocation, const struct FVector& OriginalCameraLocation, struct FVector* ResultCameraLocation);
	void UserConstructionScript();
	void ReceiveDestroyed();
	void OnPhotographySessionEnd();
	void OnPhotographySessionStart();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void TogglePhotographyMode(bool Active);
	void Return_Camera();
	void ExecuteUbergraph_BP_FSDCameraManager(int EntryPoint);
	void ShowHUDForPhotography__DelegateSignature();
	void HideHUDForPhotography__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
