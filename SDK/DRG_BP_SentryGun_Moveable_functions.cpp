// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SentryGun_Moveable_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   Description                    (CPF_Parm, CPF_OutParm)

void ABP_SentryGun_Moveable_C::GetStateDescription(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetStateDescription");

	struct
	{
		struct FText                   Description;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Description != nullptr)
		*Description = params.Description;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class USoundBase*              Audio                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::SpawnAudioOnPlayer(class USoundBase* Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.SpawnAudioOnPlayer");

	struct
	{
		class USoundBase*              Audio;
	} params;

	params.Audio = Audio;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ABP_SentryGun_Moveable_C::GetSentryGunClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGunClass");

	struct
	{
		class UClass*                  ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class APlayerCharacter*        AsPlayer_Character             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::GetSentryOwner(class APlayerCharacter** AsPlayer_Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryOwner");

	struct
	{
		class APlayerCharacter*        AsPlayer_Character;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsPlayer_Character != nullptr)
		*AsPlayer_Character = params.AsPlayer_Character;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class ASentryGun*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class ASentryGun* ABP_SentryGun_Moveable_C::GetSentryGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.GetSentryGun");

	struct
	{
		class ASentryGun*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::OnMoveRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveRequested");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun*  Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ERedeployableSentryGunState    NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnStateChanged_Event(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnStateChanged_Event");

	struct
	{
		class ARedeployableSentryGun*  Sender;
		ERedeployableSentryGunState    NewState;
	} params;

	params.Sender = Sender;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class ASentryGun*              SentryGun                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::ReceiveOnSentryReady(class ASentryGun* SentryGun, class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnSentryReady");

	struct
	{
		class ASentryGun*              SentryGun;
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.SentryGun = SentryGun;
	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AmmoCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnAmmoCountChanged_Event_1(int AmmoCount, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnAmmoCountChanged_Event_1");

	struct
	{
		int                            AmmoCount;
		int                            Change;
	} params;

	params.AmmoCount = AmmoCount;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioReadyToBuild()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReadyToBuild");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::OnMoving()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoving");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           returnedHome                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnMoveFinished(bool returnedHome)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnMoveFinished");

	struct
	{
		bool                           returnedHome;
	} params;

	params.returnedHome = returnedHome;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioBeginMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioBeginMove");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioMoveFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioMoveFinished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::AudioReturnedHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.AudioReturnedHome");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::ReceiveOnStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ReceiveOnStateChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SentryGun_Moveable_C::Update_Outline_And_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.Update Outline And Icon");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun*  Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ERedeployableSentryGunState    NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnSentryStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSentryStateChanged");

	struct
	{
		class ARedeployableSentryGun*  Sender;
		ERedeployableSentryGunState    NewState;
	} params;

	params.Sender = Sender;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleOutline_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnToggleOutline_Event(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnToggleOutline_Event");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnItemEquipped_Event(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnItemEquipped_Event");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableSentryGun*    SentryGun                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::OnSelectedItemChanged(class ARecallableSentryGun* SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.OnSelectedItemChanged");

	struct
	{
		class ARecallableSentryGun*    SentryGun;
	} params;

	params.SentryGun = SentryGun;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SentryGun_Moveable_C::ExecuteUbergraph_BP_SentryGun_Moveable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SentryGun_Moveable.BP_SentryGun_Moveable_C.ExecuteUbergraph_BP_SentryGun_Moveable");

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
