// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_Game_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Game.LIB_Game_C.LoadMission
// (FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSoftObjectPath         NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::LoadMission(const struct FSoftObjectPath& NewParam, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.LoadMission");

	struct
	{
		struct FSoftObjectPath         NewParam;
		class UObject*                 __WorldContext;
	} params;

	params.NewParam = NewParam;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LIB_Game.LIB_Game_C.SelectVisibility
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// ESlateVisibility               FALSE                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ESlateVisibility               TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsVisible                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           VisibilityChanged              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ESlateVisibility               New_Visibility                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::SelectVisibility(class UWidget* Widget, ESlateVisibility FALSE, ESlateVisibility TRUE, bool Index, class UObject* __WorldContext, bool* IsVisible, bool* VisibilityChanged, ESlateVisibility* New_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.SelectVisibility");

	struct
	{
		class UWidget*                 Widget;
		ESlateVisibility               FALSE;
		ESlateVisibility               TRUE;
		bool                           Index;
		class UObject*                 __WorldContext;
		bool                           IsVisible;
		bool                           VisibilityChanged;
		ESlateVisibility               New_Visibility;
	} params;

	params.Widget = Widget;
	params.FALSE = FALSE;
	params.TRUE = TRUE;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (IsVisible != nullptr)
		*IsVisible = params.IsVisible;
	if (VisibilityChanged != nullptr)
		*VisibilityChanged = params.VisibilityChanged;
	if (New_Visibility != nullptr)
		*New_Visibility = params.New_Visibility;
}


// Function LIB_Game.LIB_Game_C.IsOnSpaceRig
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           OnSpaceRig                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::IsOnSpaceRig(class UObject* __WorldContext, bool* OnSpaceRig)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.IsOnSpaceRig");

	struct
	{
		class UObject*                 __WorldContext;
		bool                           OnSpaceRig;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OnSpaceRig != nullptr)
		*OnSpaceRig = params.OnSpaceRig;
}


// Function LIB_Game.LIB_Game_C.GetPLSBase
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APLS_Base_C*             AsPLS_Base                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetPLSBase(class UObject* __WorldContext, class APLS_Base_C** AsPLS_Base)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetPLSBase");

	struct
	{
		class UObject*                 __WorldContext;
		class APLS_Base_C*             AsPLS_Base;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AsPLS_Base != nullptr)
		*AsPLS_Base = params.AsPLS_Base;
}


// Function LIB_Game.LIB_Game_C.IsKickReason
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EDisconnectReason              DisconnectReason               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Kicked                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::IsKickReason(EDisconnectReason DisconnectReason, class UObject* __WorldContext, bool* Kicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.IsKickReason");

	struct
	{
		EDisconnectReason              DisconnectReason;
		class UObject*                 __WorldContext;
		bool                           Kicked;
	} params;

	params.DisconnectReason = DisconnectReason;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Kicked != nullptr)
		*Kicked = params.Kicked;
}


// Function LIB_Game.LIB_Game_C.GetSRGameMode
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_SpaceRig_Gamemode_C* AsBP_Space_Rig_Gamemode        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetSRGameMode(class UObject* __WorldContext, class ABP_SpaceRig_Gamemode_C** AsBP_Space_Rig_Gamemode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetSRGameMode");

	struct
	{
		class UObject*                 __WorldContext;
		class ABP_SpaceRig_Gamemode_C* AsBP_Space_Rig_Gamemode;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AsBP_Space_Rig_Gamemode != nullptr)
		*AsBP_Space_Rig_Gamemode = params.AsBP_Space_Rig_Gamemode;
}


// Function LIB_Game.LIB_Game_C.GetSRGameState
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_GameState_SpaceRig_C* GameState                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetSRGameState(class UObject* __WorldContext, class ABP_GameState_SpaceRig_C** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetSRGameState");

	struct
	{
		class UObject*                 __WorldContext;
		class ABP_GameState_SpaceRig_C* GameState;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GameState != nullptr)
		*GameState = params.GameState;
}


// Function LIB_Game.LIB_Game_C.GetBPGameState
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_GameState_C*         AsBP_Game_State                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetBPGameState(class UObject* __WorldContext, class ABP_GameState_C** AsBP_Game_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetBPGameState");

	struct
	{
		class UObject*                 __WorldContext;
		class ABP_GameState_C*         AsBP_Game_State;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AsBP_Game_State != nullptr)
		*AsBP_Game_State = params.AsBP_Game_State;
}


// Function LIB_Game.LIB_Game_C.GetBPGameInstance
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBP_GameInstance_C*      AsBP_Game_Instance             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetBPGameInstance(class UObject* __WorldContext, class UBP_GameInstance_C** AsBP_Game_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetBPGameInstance");

	struct
	{
		class UObject*                 __WorldContext;
		class UBP_GameInstance_C*      AsBP_Game_Instance;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (AsBP_Game_Instance != nullptr)
		*AsBP_Game_Instance = params.AsBP_Game_Instance;
}


// Function LIB_Game.LIB_Game_C.GetBPGameMode
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_GameMode_C*          GameMode                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetBPGameMode(class UObject* __WorldContext, class ABP_GameMode_C** GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetBPGameMode");

	struct
	{
		class UObject*                 __WorldContext;
		class ABP_GameMode_C*          GameMode;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (GameMode != nullptr)
		*GameMode = params.GameMode;
}


// Function LIB_Game.LIB_Game_C.GetSRController
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ABP_PlayerController_SpaceRig_C* SRController                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Game_C::GetSRController(class UObject* __WorldContext, class ABP_PlayerController_SpaceRig_C** SRController)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Game.LIB_Game_C.GetSRController");

	struct
	{
		class UObject*                 __WorldContext;
		class ABP_PlayerController_SpaceRig_C* SRController;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (SRController != nullptr)
		*SRController = params.SRController;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
