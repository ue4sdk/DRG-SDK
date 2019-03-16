#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WPN_LaserPointer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C
// 0x0090 (0x0688 - 0x05F8)
class AWPN_LaserPointer_C : public ALaserPointerItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UFirstPersonWidgetComponent*                 FirstPersonWidget;                                        // 0x0600(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             FPTransform;                                              // 0x0608(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        LightBeam_Cylinder;                                       // 0x0610(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             LightBeam;                                                // 0x0618(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAudioComponent*                             LaserLight_On_Cue;                                        // 0x0620(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCrosshairAggregator*                        CrosshairAggregator;                                      // 0x0628(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             TPTransform;                                              // 0x0630(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHUD_LaserPointerDisplay_C*                  HUD;                                                      // 0x0638(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Delay;                                                    // 0x0640(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    BackgroundMaterial;                                       // 0x0648(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                BackgroundDefaultColor;                                   // 0x0650(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class ABP_PointOfInterest_C*>               PointsOfInterest;                                         // 0x0660(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	class UTexture2D*                                  PreviousPOI;                                              // 0x0670(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PreviousPOITime;                                          // 0x0678(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	class UAudioComponent*                             StartStop;                                                // 0x0680(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass WPN_LaserPointer.WPN_LaserPointer_C");
		return ptr;
	}


	void CanPlacePOI(const struct FVector& Location, class UTexture* Icon, bool* Can_Place);
	void UpdateBackgroundColor();
	void SetBackgroundColor(const struct FLinearColor& Value);
	void Adjust_Beam();
	void GetPointTransform(struct FTransform* PointTransform);
	void UserConstructionScript();
	void RecieveUnequipped();
	void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget* Crosshair);
	void OnMarkerPlaced(const struct FVector& Location, const struct FText& Name, const struct FLinearColor& Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget);
	void OnPointOfInterest(class AActor* targetActor, const struct FVector& TargetLocation, class UTexture2D* TargetIcon);
	void ReceiveBeginPlay();
	void RecieveEquipped();
	void OnPOIDestroyed(class AActor* DestroyedActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_WPN_LaserPointer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
