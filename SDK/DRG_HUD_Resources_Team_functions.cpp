// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Resources_Team_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Resources_Team.HUD_Resources_Team_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Resources_Team_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::Add_Resource(class UCappedResource* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Add Resource");

	struct
	{
		class UCappedResource*         Resource;
	} params;

	params.Resource = Resource;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Resources_Team_C::Show_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Show Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Resources_Team_C::Hide_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Hide Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.BndEvt__Transition_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_Resources_Team_C::BndEvt__Transition_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.BndEvt__Transition_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Resources_Team_C::Ping_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.Ping Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceBank*           ResourceBank                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::OnDepositingEnd_Event(class UResourceBank* ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingEnd_Event");

	struct
	{
		class UResourceBank*           ResourceBank;
	} params;

	params.ResourceBank = ResourceBank;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceBank*           ResourceBank                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::OnDepositingBegin_Event(class UResourceBank* ResourceBank)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnDepositingBegin_Event");

	struct
	{
		class UResourceBank*           ResourceBank;
	} params;

	params.ResourceBank = ResourceBank;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::OnResourceChanged_Event(class UCappedResource* Resource, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceChanged_Event");

	struct
	{
		class UCappedResource*         Resource;
		float                          Amount;
	} params;

	params.Resource = Resource;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::OnResourceAdded(class UCappedResource* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnResourceAdded");

	struct
	{
		class UCappedResource*         Resource;
	} params;

	params.Resource = Resource;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleOutline_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::OnToggleOutline_Event(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.OnToggleOutline_Event");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Resources_Team_C::ExecuteUbergraph_HUD_Resources_Team(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Resources_Team.HUD_Resources_Team_C.ExecuteUbergraph_HUD_Resources_Team");

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
