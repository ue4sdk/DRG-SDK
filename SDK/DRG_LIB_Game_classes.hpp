#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_Game_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Game.LIB_Game_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Game_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LIB_Game.LIB_Game_C");
		return ptr;
	}


	static void LoadMission(const struct FSoftObjectPath& NewParam, class UObject* __WorldContext);
	static void SelectVisibility(class UWidget* Widget, ESlateVisibility FALSE, ESlateVisibility TRUE, bool Index, class UObject* __WorldContext, bool* IsVisible, bool* VisibilityChanged, ESlateVisibility* New_Visibility);
	static void IsOnSpaceRig(class UObject* __WorldContext, bool* OnSpaceRig);
	static void GetPLSBase(class UObject* __WorldContext, class APLS_Base_C** AsPLS_Base);
	static void IsKickReason(EDisconnectReason DisconnectReason, class UObject* __WorldContext, bool* Kicked);
	static void GetSRGameMode(class UObject* __WorldContext, class ABP_SpaceRig_Gamemode_C** AsBP_Space_Rig_Gamemode);
	static void GetSRGameState(class UObject* __WorldContext, class ABP_GameState_SpaceRig_C** GameState);
	static void GetBPGameState(class UObject* __WorldContext, class ABP_GameState_C** AsBP_Game_State);
	static void GetBPGameInstance(class UObject* __WorldContext, class UBP_GameInstance_C** AsBP_Game_Instance);
	static void GetBPGameMode(class UObject* __WorldContext, class ABP_GameMode_C** GameMode);
	static void GetSRController(class UObject* __WorldContext, class ABP_PlayerController_SpaceRig_C** SRController);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
