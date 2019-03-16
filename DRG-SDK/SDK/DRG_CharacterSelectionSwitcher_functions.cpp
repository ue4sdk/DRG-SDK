// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CharacterSelectionSwitcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            num_players                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::FindEndscreenActorPos(int num_players, int Index, class AActor** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.FindEndscreenActorPos");

	struct
	{
		int                            num_players;
		int                            Index;
		class AActor*                  NewParam;
	} params;

	params.num_players = num_players;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::DestroyPreviousSceneActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DestroyPreviousSceneActors");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RotateFun
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Yaw                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::RotateFun(float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RotateFun");

	struct
	{
		float                          Yaw;
	} params;

	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::SetPreviewItem(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetPreviewItem");

	struct
	{
		class UClass*                  Class;
	} params;

	params.Class = Class;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation   Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::SelectCameraLocation(ECharselectionCameraLocation Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SelectCameraLocation");

	struct
	{
		ECharselectionCameraLocation   Selection;
	} params;

	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class APlayerCharacter*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APlayerCharacter* ACharacterSelectionSwitcher_C::GetActiveCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.GetActiveCharacter");

	struct
	{
		class APlayerCharacter*        ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharselectionCameraLocation   SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::RefreshCharacter(ECharselectionCameraLocation SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.RefreshCharacter");

	struct
	{
		ECharselectionCameraLocation   SelectionType;
	} params;

	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharselectionCameraLocation   selectionLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnShowCharacterSelector(class UClass* NewCharacter, ECharselectionCameraLocation selectionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnShowCharacterSelector");

	struct
	{
		class UClass*                  NewCharacter;
		ECharselectionCameraLocation   selectionLocation;
	} params;

	params.NewCharacter = NewCharacter;
	params.selectionLocation = selectionLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            WeaponIndex                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::SwitchToWeapon(int WeaponIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SwitchToWeapon");

	struct
	{
		int                            WeaponIndex;
	} params;

	params.WeaponIndex = WeaponIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            EquipSlot                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::EquipSlot(int EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.EquipSlot");

	struct
	{
		int                            EquipSlot;
	} params;

	params.EquipSlot = EquipSlot;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::StartIdles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartIdles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::SetIdleBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.SetIdleBreak");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Hide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Pitch                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Yaw                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::Rotate(float Pitch, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Rotate");

	struct
	{
		float                          Pitch;
		float                          Yaw;
	} params;

	params.Pitch = Pitch;
	params.Yaw = Yaw;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::VanityLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.VanityLoop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::DoStuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.DoStuff");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ACharacterSelectionSwitcher_C::StartVanityIdles()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.StartVanityIdles");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EVanitySlot                    Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::OnVanityItemEquipped(EVanitySlot Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.OnVanityItemEquipped");

	struct
	{
		EVanitySlot                    Slot;
	} params;

	params.Slot = Slot;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Actor                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharselectionCameraLocation   selectionLocation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::ShowViewer3D(class UClass* Actor, ECharselectionCameraLocation selectionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowViewer3D");

	struct
	{
		class UClass*                  Actor;
		ECharselectionCameraLocation   selectionLocation;
	} params;

	params.Actor = Actor;
	params.selectionLocation = selectionLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  itemClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::Equip(class UClass* itemClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.Equip");

	struct
	{
		class UClass*                  itemClass;
	} params;

	params.itemClass = itemClass;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FCharacterViewScene     viewScene                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ACharacterSelectionSwitcher_C::ShowEndScreen(const struct FCharacterViewScene& viewScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ShowEndScreen");

	struct
	{
		struct FCharacterViewScene     viewScene;
	} params;

	params.viewScene = viewScene;

	UObject::ProcessEvent(fn, &params);
}


// Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterSelectionSwitcher_C::ExecuteUbergraph_CharacterSelectionSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterSelectionSwitcher.CharacterSelectionSwitcher_C.ExecuteUbergraph_CharacterSelectionSwitcher");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
