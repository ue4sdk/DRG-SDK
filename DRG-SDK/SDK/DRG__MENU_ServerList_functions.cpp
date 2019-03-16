// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__MENU_ServerList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<float>                  OutWidths                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void U_MENU_ServerList_C::GetColumnWidths(TArray<float>* OutWidths)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetColumnWidths");

	struct
	{
		TArray<float>                  OutWidths;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutWidths != nullptr)
		*OutWidths = params.OutWidths;
}


// Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::SetSelectedServerType()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSelectedServerType");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.SetServerType
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESteamServerJoinStatus         ServerType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::SetServerType(ESteamServerJoinStatus ServerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetServerType");

	struct
	{
		ESteamServerJoinStatus         ServerType;
	} params;

	params.ServerType = ServerType;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESteamSearchRegion             distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::SetSearchDistance(ESteamSearchRegion distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSearchDistance");

	struct
	{
		ESteamSearchRegion             distance;
	} params;

	params.distance = distance;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::CacheUnusedEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.CacheUnusedEntries");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_ServerList_Entry_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UITM_ServerList_Entry_C* U_MENU_ServerList_C::GetCachedEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.GetCachedEntry");

	struct
	{
		class UITM_ServerList_Entry_C* ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Result                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void U_MENU_ServerList_C::AddOrUpdateEntry(const struct FBlueprintSessionResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.AddOrUpdateEntry");

	struct
	{
		struct FBlueprintSessionResult Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.ShowSpinner
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::ShowSpinner(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ShowSpinner");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::SetSelectedSearchDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.SetSelectedSearchDistance");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply U_MENU_ServerList_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnKeyUp");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FKeyEvent               InKeyEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FBlueprintSessionResult> Servers                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void U_MENU_ServerList_C::PopulateServerList(TArray<struct FBlueprintSessionResult>* Servers)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.PopulateServerList");

	struct
	{
		TArray<struct FBlueprintSessionResult> Servers;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Servers != nullptr)
		*Servers = params.Servers;
}


// Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::CreateSubMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.CreateSubMenus");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92CC1C4D5F");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92CC1C4D5F");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnFailure_0624A35A4162400123C5FFB790E37726()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_0624A35A4162400123C5FFB790E37726");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnSuccess_0624A35A4162400123C5FFB790E37726()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_0624A35A4162400123C5FFB790E37726");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnFailure_2F44709544BBB762D8D1EDB23AB84A38()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_2F44709544BBB762D8D1EDB23AB84A38");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnSuccess_2F44709544BBB762D8D1EDB23AB84A38()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_2F44709544BBB762D8D1EDB23AB84A38");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnFailure_155E2CBD4AAE55F9B2CDDA92DDA08471");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnSuccess_155E2CBD4AAE55F9B2CDDA92DDA08471");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.JoinServer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void U_MENU_ServerList_C::JoinServer(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinServer");

	struct
	{
		struct FBlueprintSessionResult Session;
	} params;

	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BindServerListEntry
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_ServerList_Entry_C* entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BindServerListEntry(class UITM_ServerList_Entry_C* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BindServerListEntry");

	struct
	{
		class UITM_ServerList_Entry_C* entry;
	} params;

	params.entry = entry;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void U_MENU_ServerList_C::JoinServerWithoutPassword(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithoutPassword");

	struct
	{
		struct FBlueprintSessionResult Session;
	} params;

	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 Password                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void U_MENU_ServerList_C::JoinServerWithPassword(const struct FBlueprintSessionResult& Session, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.JoinServerWithPassword");

	struct
	{
		struct FBlueprintSessionResult Session;
		struct FString                 Password;
	} params;

	params.Session = Session;
	params.Password = Password;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.Back Pressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::Back_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.Back Pressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__FilterComboBox_K2Node_ComponentBoundEvent_137_OnSelectionChangedEvent__DelegateSignature");

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params;

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::ServelistChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ServelistChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::RestrictToMission(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.RestrictToMission");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::ClearRestricted()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ClearRestricted");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void U_MENU_ServerList_C::BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_ServerList_C::BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_ServerList_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_ServerList_C::BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Back2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnJoiningSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnJoiningSession");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_QuickJoin_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_ServerList_C::BndEvt__BTN_QuickJoin_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_QuickJoin_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Close_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Medium_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_Far_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_SD_World_K2Node_ComponentBoundEvent_3_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Password_K2Node_ComponentBoundEvent_69_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Basic_RadioButton_Open_K2Node_ComponentBoundEvent_81_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__AutoRefresh_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	struct
	{
		bool                           IsChecked;
	} params;

	params.IsChecked = IsChecked;

	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_ServerList_C::BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__BTN_Refresh_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::RefreshServerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.RefreshServerList");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_MENU_ServerList_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void U_MENU_ServerList_C::BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.BndEvt__Filter_ServerWorkEnvironment_K2Node_ComponentBoundEvent_6_OnSelectionChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_MENU_ServerList_C::ExecuteUbergraph__MENU_ServerList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _MENU_ServerList._MENU_ServerList_C.ExecuteUbergraph__MENU_ServerList");

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
