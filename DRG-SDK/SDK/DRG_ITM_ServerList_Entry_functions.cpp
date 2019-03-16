// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ServerList_Entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UWidget* UITM_ServerList_Entry_C::GetMissionToolTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.GetMissionToolTip");

	struct
	{
		class UWidget*                 ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  InWidths                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UITM_ServerList_Entry_C::SetColumnWidths(TArray<float>* InWidths)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetColumnWidths");

	struct
	{
		TArray<float>                  InWidths;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InWidths != nullptr)
		*InWidths = params.InWidths;
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_C::ToggleMissionDetails(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ToggleMissionDetails");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::SetNoMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetNoMission");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBiome*                  Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_C::SetBiomeIcon(class UBiome* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetBiomeIcon");

	struct
	{
		class UBiome*                  Biome;
	} params;

	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionMutator
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionMutator*         Mutator                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_C::SetMissionMutator(class UMissionMutator* Mutator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionMutator");

	struct
	{
		class UMissionMutator*         Mutator;
	} params;

	params.Mutator = Mutator;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionWarning
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionWarning*         Warning                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_C::SetMissionWarning(class UMissionWarning* Warning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetMissionWarning");

	struct
	{
		class UMissionWarning*         Warning;
	} params;

	params.Warning = Warning;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::UpdateMissionTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.UpdateMissionTime");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITM_ServerList_Entry_C::SetSession(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.SetSession");

	struct
	{
		struct FBlueprintSessionResult Session;
	} params;

	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.CustomEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_ServerList_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerList_Entry_C::ExecuteUbergraph_ITM_ServerList_Entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.ExecuteUbergraph_ITM_ServerList_Entry");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITM_ServerList_Entry_C::JoinServer__DelegateSignature(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerList_Entry.ITM_ServerList_Entry_C.JoinServer__DelegateSignature");

	struct
	{
		struct FBlueprintSessionResult Session;
	} params;

	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
