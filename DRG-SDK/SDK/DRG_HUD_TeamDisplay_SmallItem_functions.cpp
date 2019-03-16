// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_TeamDisplay_SmallItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnHealthChanged(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnHealthChanged");

	struct
	{
		float                          Health;
	} params;

	params.Health = Health;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerLeave_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerLeave_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerCharacterSpawned");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerNameChanged(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerNameChanged");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnCharacterStateChanged(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnCharacterStateChanged");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Anim                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::PlayAnim(class UWidgetAnimation* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PlayAnim");

	struct
	{
		class UWidgetAnimation*        Anim;
	} params;

	params.Anim = Anim;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        Anim                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::StopAnim(class UWidgetAnimation* Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.StopAnim");

	struct
	{
		class UWidgetAnimation*        Anim;
	} params;

	params.Anim = Anim;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerShouted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDialogDataAsset*        Shout                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnPlayerShouted(class APlayerCharacter* Character, class UDialogDataAsset* Shout, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnPlayerShouted");

	struct
	{
		class APlayerCharacter*        Character;
		class UDialogDataAsset*        Shout;
		int                            Index;
	} params;

	params.Character = Character;
	params.Shout = Shout;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnDamageTaken_Event(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDamageTaken_Event");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnDownCameraTargetChanged(class APlayerCharacter* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnDownCameraTargetChanged");

	struct
	{
		class APlayerCharacter*        Target;
	} params;

	params.Target = Target;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnArmorDamaged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnArmorDamaged_Event_1(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnArmorDamaged_Event_1");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnTalkingChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsTalking                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::OnTalkingChanged(bool IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.OnTalkingChanged");

	struct
	{
		bool                           IsTalking;
	} params;

	params.IsTalking = IsTalking;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_TeamDisplay_SmallItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_SmallItem_C::ExecuteUbergraph_HUD_TeamDisplay_SmallItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_SmallItem.HUD_TeamDisplay_SmallItem_C.ExecuteUbergraph_HUD_TeamDisplay_SmallItem");

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
