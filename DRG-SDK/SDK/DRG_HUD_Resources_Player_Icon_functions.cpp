// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Resources_Player_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Changed                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::UpdateIfChanged(bool Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.UpdateIfChanged");

	struct
	{
		bool                           Changed;
	} params;

	params.Changed = Changed;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ValueChanged                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::SetAmount(float Amount, bool* ValueChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetAmount");

	struct
	{
		float                          Amount;
		bool                           ValueChanged;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);

	if (ValueChanged != nullptr)
		*ValueChanged = params.ValueChanged;
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Resources_Player_Icon_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HideIfEmpty                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::SetResource(class UCappedResource* InResource, bool HideIfEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.SetResource");

	struct
	{
		class UCappedResource*         InResource;
		bool                           HideIfEmpty;
	} params;

	params.InResource = InResource;
	params.HideIfEmpty = HideIfEmpty;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Resources_Player_Icon_C::Init_Resource()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Init Resource");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::OnIncreased(class UCappedResource* Resource, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnIncreased");

	struct
	{
		class UCappedResource*         Resource;
		float                          Amount;
	} params;

	params.Resource = Resource;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::OnChanged(class UCappedResource* Resource, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.OnChanged");

	struct
	{
		class UCappedResource*         Resource;
		float                          Amount;
	} params;

	params.Resource = Resource;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.BndEvt__Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_Resources_Player_Icon_C::BndEvt__Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.BndEvt__Outro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Player_Icon_C::ExecuteUbergraph_HUD_Resources_Player_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Player_Icon.HUD_Resources_Player_Icon_C.ExecuteUbergraph_HUD_Resources_Player_Icon");

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
