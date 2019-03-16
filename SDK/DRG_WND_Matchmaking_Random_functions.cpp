// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Matchmaking_Random_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.GetShortTimeString
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Seconds                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void UWND_Matchmaking_Random_C::GetShortTimeString(float Seconds, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.GetShortTimeString");

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


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWND_Matchmaking_Random_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnKeyUp");

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


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.SetInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            ETA                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Random_C::SetInfo(const struct FString& status, int ETA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.SetInfo");

	struct
	{
		struct FString                 status;
		int                            ETA;
	} params;

	params.status = status;
	params.ETA = ETA;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnCancelled_60C36B444D1043ED6EFCA8BEE5B2A546");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_60C36B444D1043ED6EFCA8BEE5B2A546");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_60C36B444D1043ED6EFCA8BEE5B2A546");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B5F48FED4760268A1AB776BBA80FEA51
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnFailure_B5F48FED4760268A1AB776BBA80FEA51()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B5F48FED4760268A1AB776BBA80FEA51");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B5F48FED4760268A1AB776BBA80FEA51
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnSuccess_B5F48FED4760268A1AB776BBA80FEA51()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B5F48FED4760268A1AB776BBA80FEA51");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnFailure_B619D28D4A771A7C1DE3BB9DA24BF467");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnSuccess_B619D28D4A771A7C1DE3BB9DA24BF467");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Random_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Cancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Random_C::BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__WorkEnvironmentSelector_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature");

	struct
	{
		struct FText                   Value;
		int                            Index;
	} params;

	params.Value = Value;
	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.BndEvt__Basic_Search_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.MatchStatusUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Random_C::MatchStatusUpdate(const struct FString& Description, int status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.MatchStatusUpdate");

	struct
	{
		struct FString                 Description;
		int                            status;
	} params;

	params.Description = Description;
	params.status = status;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Search
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::Search()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Search");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Random_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Reset
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_Random_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.Reset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.ExecuteUbergraph_WND_Matchmaking_Random
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_Random_C::ExecuteUbergraph_WND_Matchmaking_Random(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking_Random.WND_Matchmaking_Random_C.ExecuteUbergraph_WND_Matchmaking_Random");

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
