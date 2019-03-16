// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_MisSel_MissionOptions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::UpdateConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateConfirmButton");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Explanation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWND_MisSel_MissionOptions_C::SetMissionLocked(bool IsLocked, const struct FText& Explanation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMissionLocked");

	struct
	{
		bool                           IsLocked;
		struct FText                   Explanation;
	} params;

	params.IsLocked = IsLocked;
	params.Explanation = Explanation;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> Selection                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::HandleModeChange(TEnumAsByte<EMissionSelection_Mode> Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.HandleModeChange");

	struct
	{
		TEnumAsByte<EMissionSelection_Mode> Selection;
	} params;

	params.Selection = Selection;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   Password                       (CPF_Parm, CPF_OutParm)
// bool                           HasPassword                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::GetPassword(struct FText* Password, bool* HasPassword)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.GetPassword");

	struct
	{
		struct FText                   Password;
		bool                           HasPassword;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Password != nullptr)
		*Password = params.Password;
	if (HasPassword != nullptr)
		*HasPassword = params.HasPassword;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWND_MisSel_MissionOptions_C::IsFriendsOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.IsFriendsOnly");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::UpdateHazardBonus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.UpdateHazardBonus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnFailure_E07C54DA4555FCCB80821BA994BEDE78()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA994BEDE78");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnSuccess_E07C54DA4555FCCB80821BA994BEDE78()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA994BEDE78");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnFailure_E07C54DA4555FCCB80821BA9DC34619D()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnFailure_E07C54DA4555FCCB80821BA9DC34619D");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnSuccess_E07C54DA4555FCCB80821BA9DC34619D()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnSuccess_E07C54DA4555FCCB80821BA9DC34619D");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionSelection_Mode> Mode                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::ShowMode(TEnumAsByte<EMissionSelection_Mode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ShowMode");

	struct
	{
		TEnumAsByte<EMissionSelection_Mode> Mode;
	} params;

	params.Mode = Mode;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Button_Big_C_119_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::BndEvt__Button_Big_C_119_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Button_Big_C_119_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::SetMission(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.SetMission");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWND_MisSel_MissionOptions_C::BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_13_OnTextChanged__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// unsigned char                  CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature(const struct FText& Text, unsigned char CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__Basic_InputField_K2Node_ComponentBoundEvent_14_OnTextCommitted__DelegateSignature");

	struct
	{
		struct FText                   Text;
		unsigned char                  CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_27_OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionOptions_C::ExecuteUbergraph_WND_MisSel_MissionOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.ExecuteUbergraph_WND_MisSel_MissionOptions");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnJoinMission__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnJoinMission__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_MisSel_MissionOptions_C::OnStartMission__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionOptions.WND_MisSel_MissionOptions_C.OnStartMission__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
