// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Matchmaking_Steam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetQuickJoinSettings
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBiome*                  SearchBiome                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMissionTemplate*        SearchMissionType              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Steam_C::GetQuickJoinSettings(class UBiome** SearchBiome, class UMissionTemplate** SearchMissionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetQuickJoinSettings");

	struct
	{
		class UBiome*                  SearchBiome;
		class UMissionTemplate*        SearchMissionType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SearchBiome != nullptr)
		*SearchBiome = params.SearchBiome;
	if (SearchMissionType != nullptr)
		*SearchMissionType = params.SearchMissionType;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetShortTimeString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UWND_Matchmaking_Steam_C::GetShortTimeString(float Seconds, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.GetShortTimeString");

	struct
	{
		float                          Seconds;
		struct FText                   Text;
	} params;

	params.Seconds = Seconds;

	UObject::ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWND_Matchmaking_Steam_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnKeyUp");

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


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_50EA0D244B2E8D5AD321FE9AD32604C7");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_50EA0D244B2E8D5AD321FE9AD32604C7");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_DB01A13D4436619AED64DBAF5AA33079
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_DB01A13D4436619AED64DBAF5AA33079()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_DB01A13D4436619AED64DBAF5AA33079");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_DB01A13D4436619AED64DBAF5AA33079
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_DB01A13D4436619AED64DBAF5AA33079()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_DB01A13D4436619AED64DBAF5AA33079");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_2F439A5344ADFB92D1C27FB71FFFFFF7");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_2F439A5344ADFB92D1C27FB71FFFFFF7");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_721B2BE34FF99567F4914C86B67DADFA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnFailure_721B2BE34FF99567F4914C86B67DADFA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnFailure_721B2BE34FF99567F4914C86B67DADFA");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_721B2BE34FF99567F4914C86B67DADFA
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnSuccess_721B2BE34FF99567F4914C86B67DADFA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnSuccess_721B2BE34FF99567F4914C86B67DADFA");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Steam_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Cancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Steam_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Reset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ServelistChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::ServelistChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ServelistChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Search
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Search");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Answer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Yes                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Steam_C::Answer(bool Yes)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.Answer");

	struct
	{
		bool                           Yes;
	} params;

	params.Yes = Yes;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Matchmaking_Steam_C::BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.BndEvt__Basic_ButtonScalable2_C_0_K2Node_ComponentBoundEvent_34_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ExecuteUbergraph_WND_Matchmaking_Steam
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Steam_C::ExecuteUbergraph_WND_Matchmaking_Steam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Steam.WND_Matchmaking_Steam_C.ExecuteUbergraph_WND_Matchmaking_Steam");

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
