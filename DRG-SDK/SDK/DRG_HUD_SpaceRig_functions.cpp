// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_SpaceRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SpaceRig.HUD_SpaceRig_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_SpaceRig_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_SpaceRig_C::OnCountdownCompleted_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnCountdownCompleted_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterCameraMode           NewCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ECharacterCameraMode           OldCameraMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SpaceRig_C::OnCameraModeChanged_Event(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.OnCameraModeChanged_Event");

	struct
	{
		ECharacterCameraMode           NewCameraMode;
		ECharacterCameraMode           OldCameraMode;
	} params;

	params.NewCameraMode = NewCameraMode;
	params.OldCameraMode = OldCameraMode;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SpaceRig_C::ExecuteUbergraph_HUD_SpaceRig(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SpaceRig.HUD_SpaceRig_C.ExecuteUbergraph_HUD_SpaceRig");

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
