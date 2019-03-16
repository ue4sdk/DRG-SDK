// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_DailyMissionIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.SetButtonState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBasic_ButtonScalable2_C* Button                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           Enabled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EMissionSelection_Mode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::SetButtonState(class UBasic_ButtonScalable2_C* Button, bool Enabled, TEnumAsByte<EMissionSelection_Mode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.SetButtonState");

	struct
	{
		class UBasic_ButtonScalable2_C* Button;
		bool                           Enabled;
		TEnumAsByte<EMissionSelection_Mode> Mode;
	} params;

	params.Button = Button;
	params.Enabled = Enabled;
	params.Mode = Mode;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ShouldEnableSoloButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::ShouldEnableSoloButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ShouldEnableSoloButton");

	struct
	{
		bool                           Show;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Show != nullptr)
		*Show = params.Show;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ShouldEnableHostButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::ShouldEnableHostButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ShouldEnableHostButton");

	struct
	{
		bool                           Show;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Show != nullptr)
		*Show = params.Show;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ShouldEnableJoinButton
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           Show                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::ShouldEnableJoinButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ShouldEnableJoinButton");

	struct
	{
		bool                           Show;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Show != nullptr)
		*Show = params.Show;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.GetPlayerController
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::GetPlayerController(class ABP_PlayerController_SpaceRig_C** AsBP_Player_Controller_Space_Rig)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.GetPlayerController");

	struct
	{
		class ABP_PlayerController_SpaceRig_C* AsBP_Player_Controller_Space_Rig;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsBP_Player_Controller_Space_Rig != nullptr)
		*AsBP_Player_Controller_Space_Rig = params.AsBP_Player_Controller_Space_Rig;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Select
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Select");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.GetActiveSelectionMode
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::GetActiveSelectionMode(TEnumAsByte<EMissionSelection_Mode>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.GetActiveSelectionMode");

	struct
	{
		TEnumAsByte<EMissionSelection_Mode> NewParam;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.GetNumberOfActiveMissions
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// int                            sessions                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::GetNumberOfActiveMissions(TArray<struct FBlueprintSessionResult>* Array, int* sessions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.GetNumberOfActiveMissions");

	struct
	{
		TArray<struct FBlueprintSessionResult> Array;
		int                            sessions;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
	if (sessions != nullptr)
		*sessions = params.sessions;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.HasMission
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UITM_DailyMissionIcon_C::HasMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.HasMission");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UITM_MisSel_FullBiome_C* BiomeController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::SetData(class UGeneratedMission* Mission, class UITM_MisSel_FullBiome_C* BiomeController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.SetData");

	struct
	{
		class UGeneratedMission*       Mission;
		class UITM_MisSel_FullBiome_C* BiomeController;
	} params;

	params.Mission = Mission;
	params.BiomeController = BiomeController;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Reset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Unselect
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Unselect");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ServerUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::ServerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ServerUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_DailyMissionIcon_C::BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ExecuteUbergraph_ITM_DailyMissionIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_DailyMissionIcon_C::ExecuteUbergraph_ITM_DailyMissionIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_DailyMissionIcon.ITM_DailyMissionIcon_C.ExecuteUbergraph_ITM_DailyMissionIcon");

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
