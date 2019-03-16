// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SentryGun_Redeployable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ConditionallyEnableShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ConditionallyEnableShadows");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ABP_SentryGun_Redeployable_C::GetDeployProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.GetDeployProgress");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Building                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Redeployable_C::ToggleBuildMode(bool Building)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ToggleBuildMode");

	struct
	{
		bool                           Building;
	} params;

	params.Building = Building;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDeploy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeploy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDismantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantle");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDismantled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDismantled");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnDeployed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Redeployable_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Redeployable_C::BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.BndEvt__SingleUsable_K2Node_ComponentBoundEvent_1_ProgressSignature__DelegateSignature");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ReceiveOnSentryGunOwnerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ReceiveOnSentryGunOwnerChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack
// (FUNC_BlueprintAuthorityOnly, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::ActivateSpecialAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ActivateSpecialAttack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Multicast_Special_Attack_GFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Multicast Special Attack GFX");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::Reset_Special_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.Reset Special Attack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Redeployable_C::UpdateShadows()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.UpdateShadows");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Redeployable_C::ExecuteUbergraph_BP_SentryGun_Redeployable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.ExecuteUbergraph_BP_SentryGun_Redeployable");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.OnDeployProgress__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Redeployable_C::OnDeployProgress__DelegateSignature(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Redeployable.BP_SentryGun_Redeployable_C.OnDeployProgress__DelegateSignature");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
