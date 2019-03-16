// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__SCREEN_MissionSelectionMK3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UITM_MisSel_Biome_C*> AvailableBiomes1               (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void U_SCREEN_MissionSelectionMK3_C::GetAvailableBiomes(TArray<class UITM_MisSel_Biome_C*>* AvailableBiomes1)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetAvailableBiomes");

	struct
	{
		TArray<class UITM_MisSel_Biome_C*> AvailableBiomes1;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AvailableBiomes1 != nullptr)
		*AvailableBiomes1 = params.AvailableBiomes1;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> Mode                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMode(TEnumAsByte<EMissionSelection_Mode>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMode");

	struct
	{
		TEnumAsByte<EMissionSelection_Mode> Mode;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Mode != nullptr)
		*Mode = params.Mode;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::ShouldEnableQuickJoin(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShouldEnableQuickJoin");

	struct
	{
		bool                           Show;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Show != nullptr)
		*Show = params.Show;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CreateWindows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::CreateWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.CreateWindows");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::HandleButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.HandleButtonVisibility");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMission_CheckBiome(class UGeneratedMission** Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission_CheckBiome");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Mission != nullptr)
		*Mission = params.Mission;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_SCREEN_MissionSelectionMK3_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMission(class UGeneratedMission** Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMission");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Mission != nullptr)
		*Mission = params.Mission;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool U_SCREEN_MissionSelectionMK3_C::IsMissionLocked(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.IsMissionLocked");

	struct
	{
		class UGeneratedMission*       Mission;
		bool                           ReturnValue;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetActiveSelectionMode(TEnumAsByte<EMissionSelection_Mode>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetActiveSelectionMode");

	struct
	{
		TEnumAsByte<EMissionSelection_Mode> NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetController");

	struct
	{
		class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = params.AsBP_Player_Controller_Space_Rig;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetSRGameMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_SpaceRig_Gamemode_C* AsBP_Space_Rig_Gamemode        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetSRGameMode(class ABP_SpaceRig_Gamemode_C** AsBP_Space_Rig_Gamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetSRGameMode");

	struct
	{
		class ABP_SpaceRig_Gamemode_C* AsBP_Space_Rig_Gamemode;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsBP_Space_Rig_Gamemode != nullptr)
		*AsBP_Space_Rig_Gamemode = params.AsBP_Space_Rig_Gamemode;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UBiome*                  Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UITM_MisSel_Biome_C*     Array_Element                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::GetMissionBiome(class UBiome* Biome, class UITM_MisSel_Biome_C** Array_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.GetMissionBiome");

	struct
	{
		class UBiome*                  Biome;
		class UITM_MisSel_Biome_C*     Array_Element;
	} params;

	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);

	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnFailure_ED6FBDF64F71976389535788275C482E()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnFailure_ED6FBDF64F71976389535788275C482E");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnSuccess_ED6FBDF64F71976389535788275C482E()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnSuccess_ED6FBDF64F71976389535788275C482E");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__CheckBox_Solo_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature");

	struct
	{
		bool                           bIsChecked;
	} params;

	params.bIsChecked = bIsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C*     Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::BiomeHovered(class UITM_MisSel_Biome_C* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeHovered");

	struct
	{
		class UITM_MisSel_Biome_C*     Biome;
	} params;

	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_MisSel_Biome_C*     Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::BiomeSelected(class UITM_MisSel_Biome_C* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BiomeSelected");

	struct
	{
		class UITM_MisSel_Biome_C*     Biome;
	} params;

	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowPlanet()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowPlanet");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsHovering                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::MissionHover(class UGeneratedMission* Mission, bool IsHovering)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionHover");

	struct
	{
		class UGeneratedMission*       Mission;
		bool                           IsHovering;
	} params;

	params.Mission = Mission;
	params.IsHovering = IsHovering;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnStartMission_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnStartMission_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::ShowMode(TEnumAsByte<EMissionSelection_Mode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowMode");

	struct
	{
		TEnumAsByte<EMissionSelection_Mode> Mode;
	} params;

	params.Mode = Mode;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::ShowServerBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ShowServerBrowser");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::InputSourceChanged(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.InputSourceChanged");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Join
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::Join()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Join");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnJoinMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnJoinMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnJoinMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.JoinMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::JoinMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.JoinMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_MisSel_MissionMapIcon_C* Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::MissionSelected(class UITM_MisSel_MissionMapIcon_C* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.MissionSelected");

	struct
	{
		class UITM_MisSel_MissionMapIcon_C* Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DailyMissionSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_DailyMissionIcon_C* Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::DailyMissionSelected(class UITM_DailyMissionIcon_C* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.DailyMissionSelected");

	struct
	{
		class UITM_DailyMissionIcon_C* Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__BTN_Twitch_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSOLOMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::StartSOLOMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.StartSOLOMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__ITM_DailyMission_K2Node_ComponentBoundEvent_0_DailyMissionSelected__DelegateSignature
// (FUNC_BlueprintEvent)

void U_SCREEN_MissionSelectionMK3_C::BndEvt__ITM_DailyMission_K2Node_ComponentBoundEvent_0_DailyMissionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.BndEvt__ITM_DailyMission_K2Node_ComponentBoundEvent_0_DailyMissionSelected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_SCREEN_MissionSelectionMK3_C::ExecuteUbergraph__SCREEN_MissionSelectionMK3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _SCREEN_MissionSelectionMK3._SCREEN_MissionSelectionMK3_C.ExecuteUbergraph__SCREEN_MissionSelectionMK3");

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
