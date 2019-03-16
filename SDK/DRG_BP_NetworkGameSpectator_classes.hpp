#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_NetworkGameSpectator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NetworkGameSpectator.BP_NetworkGameSpectator_C
// 0x0020 (0x03F0 - 0x03D0)
class ABP_NetworkGameSpectator_C : public ABP_SpectatorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USCREEN_CharacterSelection_C*                CharSelectScreen;                                         // 0x03D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMenu_ServerStatus_C*                        ServerStatus;                                             // 0x03E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UScreen_LoadLevel_C*                         LoaderScreen;                                             // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NetworkGameSpectator.BP_NetworkGameSpectator_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnBack();
	void ReceiveDestroyed();
	void ShowLoadingScreen();
	void ShowCharacterSelection();
	void ExecuteUbergraph_BP_NetworkGameSpectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
