#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CharacterSelectionSwitcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C
// 0x00F0 (0x0418 - 0x0328)
class ACharacterSelectionSwitcher_C : public ACharacterSelectionSwitcher
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      Dwarf_Rig;                                                // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      PlayerCharacterClass;                                     // 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class APlayerCharacter*                            Character;                                                // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ACameraActor*                                Camera;                                                   // 0x0350(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class AActor*                                      selectionLocation;                                        // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class AActor*                                      CustomizationLocation;                                    // 0x0360(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FTimerHandle                                IdleTimer;                                                // 0x0368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                EquippedIndex;                                            // 0x0370(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	ECharselectionCameraLocation                       CurrentSelection;                                         // 0x0374(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UClass*                                      Viewer3DCharacterClass;                                   // 0x0378(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      ViewerObject;                                             // 0x0380(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      ViewWeaponCamLocation;                                    // 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class AActor*                                      ViewWeaponObjectLocation;                                 // 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class AItem*                                       EquipedItem;                                              // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LastManualRotate;                                         // 0x03A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	class UClass*                                      View3DItemClass;                                          // 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class AActor*                                      EndScreenCamLocation;                                     // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class AActor*>                              EndscreenActors;                                          // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	struct FCharacterViewScene                         Scene;                                                    // 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<class AActor*>                              EndScreenActorPositions_Four;                             // 0x03D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<class AActor*>                              EndScreenActorPositions_Three;                            // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<class AActor*>                              EndScreenActorPositions_Two;                              // 0x03F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TArray<class AActor*>                              EndScreenActorPositions_One;                              // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass CharacterSelectionSwitcher.CharacterSelectionSwitcher_C");
		return ptr;
	}


	void FindEndscreenActorPos(int num_players, int Index, class AActor** NewParam);
	void DestroyPreviousSceneActors();
	void RotateFun(float Yaw);
	void SetPreviewItem(class UClass* Class);
	void SelectCameraLocation(ECharselectionCameraLocation Selection);
	class APlayerCharacter* GetActiveCharacter();
	void RefreshCharacter(ECharselectionCameraLocation SelectionType);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnShowCharacterSelector(class UClass* NewCharacter, ECharselectionCameraLocation selectionLocation);
	void SwitchToWeapon(int WeaponIndex);
	void EquipSlot(int EquipSlot);
	void StartIdles();
	void SetIdleBreak();
	void Hide();
	void Rotate(float Pitch, float Yaw);
	void VanityLoop();
	void DoStuff();
	void StartVanityIdles();
	void OnVanityItemEquipped(EVanitySlot Slot);
	void ShowViewer3D(class UClass* Actor, ECharselectionCameraLocation selectionLocation);
	void Equip(class UClass* itemClass);
	void ReceiveTick(float DeltaSeconds);
	void ShowEndScreen(const struct FCharacterViewScene& viewScene);
	void ExecuteUbergraph_CharacterSelectionSwitcher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
