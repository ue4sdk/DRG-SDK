// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* ABP_PlayerCharacter_C::GetDownCameraAttachPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraAttachPoint");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* ABP_PlayerCharacter_C::GetDownCameraRotationPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDownCameraRotationPoint");

	struct
	{
		class USceneComponent*         ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFSDChromaEffect               effect                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::ChromaEffect(EFSDChromaEffect effect)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ChromaEffect");

	struct
	{
		EFSDChromaEffect               effect;
	} params;

	params.effect = effect;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDialogDataAsset*        Shout                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::CharacterAudioThrottled(class USoundBase* Sound, class UDialogDataAsset* Shout)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterAudioThrottled");

	struct
	{
		class USoundBase*              Sound;
		class UDialogDataAsset*        Shout;
	} params;

	params.Sound = Sound;
	params.Shout = Shout;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::UpdateHeadLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHeadLight");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::ShieldRegenTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::ShieldRegenTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShieldRegenTimeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::Emergency_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::Emergency_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Emergency Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_MapTool_K2Node_InputActionEvent_2
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerCharacter_C::InpActEvt_MapTool_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_MapTool_K2Node_InputActionEvent_2");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_MapTool_K2Node_InputActionEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerCharacter_C::InpActEvt_MapTool_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_MapTool_K2Node_InputActionEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_1
// (FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_PlayerCharacter_C::InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_P_K2Node_InputKeyEvent_1");

	struct
	{
		struct FKey                    Key;
	} params;

	params.Key = Key;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::BP_OnControllerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnControllerReady");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_24_DamageSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_24_DamageSig__DelegateSignature(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_24_DamageSig__DelegateSignature");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_ArmorHealedSig__DelegateSignature");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::StopRegenAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopRegenAudio");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::BP_OnUpdateMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_OnUpdateMeshes");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::CharacterState_Changed(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.CharacterState Changed");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_2_DamageSig__DelegateSignature");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::Init_Selfie_Cam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Init Selfie Cam");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::SetDustVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetDustVisible");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::ReceiveOnHeadlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveOnHeadlightOn");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PlayerCharacter_C::ResetSaveGameIDInEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetSaveGameIDInEditor");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTemporaryBuff*          buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::On_Temporary_Buff_Changed(class UTemporaryBuff* buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.On Temporary Buff Changed");

	struct
	{
		class UTemporaryBuff*          buff;
	} params;

	params.buff = buff;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Request change in gravity scale
// (FUNC_Net, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          New_Gravity_Scale              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::Request_change_in_gravity_scale(float New_Gravity_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.Request change in gravity scale");

	struct
	{
		float                          New_Gravity_Scale;
	} params;

	params.New_Gravity_Scale = New_Gravity_Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PlayerCharacter_C::ExecuteUbergraph_BP_PlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter");

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
