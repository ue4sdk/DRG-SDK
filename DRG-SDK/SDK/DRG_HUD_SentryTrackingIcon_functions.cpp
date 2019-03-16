// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_SentryTrackingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::SetInfo(const struct FText& InText, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.SetInfo");

	struct
	{
		struct FText                   InText;
		class UTexture2D*              Texture;
	} params;

	params.InText = InText;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           inView                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::UpdateArrow(bool inView, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.UpdateArrow");

	struct
	{
		bool                           inView;
		float                          Angle;
	} params;

	params.inView = inView;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_SentryTrackingIcon_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnShow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_SentryTrackingIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnItemEquipped(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnItemEquipped");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_SentryTrackingIcon_C::Update_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.Update State");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnSentryIndexChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryIndexChanged");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           inView                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnInViewChanged(bool inView, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnInViewChanged");

	struct
	{
		bool                           inView;
		float                          Angle;
	} params;

	params.inView = inView;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            AmmoCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Change                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnAmmoCountChanged(int AmmoCount, int Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnAmmoCountChanged");

	struct
	{
		int                            AmmoCount;
		int                            Change;
	} params;

	params.AmmoCount = AmmoCount;
	params.Change = Change;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnTargetSet(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetSet");

	struct
	{
		class AActor*                  NewTarget;
	} params;

	params.NewTarget = NewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableSentryGun*    SentryGun                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnSelectedItemChanged_Event(class ARecallableSentryGun* SentryGun)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSelectedItemChanged_Event");

	struct
	{
		class ARecallableSentryGun*    SentryGun;
	} params;

	params.SentryGun = SentryGun;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnDeployProgress_Event(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnDeployProgress_Event");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARedeployableSentryGun*  Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ERedeployableSentryGunState    NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnSentryGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnSentryGunStateChanged");

	struct
	{
		class ARedeployableSentryGun*  Sender;
		ERedeployableSentryGunState    NewState;
	} params;

	params.Sender = Sender;
	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnTargetDistanceChanged(float distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnTargetDistanceChanged");

	struct
	{
		float                          distance;
	} params;

	params.distance = distance;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ARecallableActor*        Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ERecallableActorState          State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::OnRecallableStateChanged(class ARecallableActor* Sender, ERecallableActorState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.OnRecallableStateChanged");

	struct
	{
		class ARecallableActor*        Sender;
		ERecallableActorState          State;
	} params;

	params.Sender = Sender;
	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_SentryTrackingIcon_C::ExecuteUbergraph_HUD_SentryTrackingIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_SentryTrackingIcon.HUD_SentryTrackingIcon_C.ExecuteUbergraph_HUD_SentryTrackingIcon");

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
