// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ActorTrackingIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::SetInfo(const struct FText& InText, class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.SetInfo");

	struct
	{
		struct FText                   InText;
		class UTexture2D*              Texture;
	} params;

	params.InText = InText;
	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::OnTargetDistanceChanged(float distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetDistanceChanged");

	struct
	{
		float                          distance;
	} params;

	params.distance = distance;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::OnTargetSet(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnTargetSet");

	struct
	{
		class AActor*                  NewTarget;
	} params;

	params.NewTarget = NewTarget;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UHUD_ActorTrackingIcon_C::OnPlayerNameChanged(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnPlayerNameChanged");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool                           inView                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::OnInViewChanged(bool inView, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnInViewChanged");

	struct
	{
		bool                           inView;
		float                          Angle;
	} params;

	params.inView = inView;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           inView                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::UpdateArrow(bool inView, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.UpdateArrow");

	struct
	{
		bool                           inView;
		float                          Angle;
	} params;

	params.inView = inView;
	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_ActorTrackingIcon_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.OnShow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ActorTrackingIcon_C::ExecuteUbergraph_HUD_ActorTrackingIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ActorTrackingIcon.HUD_ActorTrackingIcon_C.ExecuteUbergraph_HUD_ActorTrackingIcon");

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
