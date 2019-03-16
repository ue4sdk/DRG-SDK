// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Matchmaking_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Matchmaking.WND_Matchmaking_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWND_Matchmaking_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnKeyUp");

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


// Function WND_Matchmaking.WND_Matchmaking_C.SetInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            ETA                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_C::SetInfo(const struct FString& status, int ETA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.SetInfo");

	struct
	{
		struct FString                 status;
		int                            ETA;
	} params;

	params.status = status;
	params.ETA = ETA;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnCancelled_5BBD71A6477F1AA5B558078C2A214949
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_C::OnCancelled_5BBD71A6477F1AA5B558078C2A214949()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnCancelled_5BBD71A6477F1AA5B558078C2A214949");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5BBD71A6477F1AA5B558078C2A214949
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_C::OnFailure_5BBD71A6477F1AA5B558078C2A214949()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5BBD71A6477F1AA5B558078C2A214949");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5BBD71A6477F1AA5B558078C2A214949
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_C::OnSuccess_5BBD71A6477F1AA5B558078C2A214949()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5BBD71A6477F1AA5B558078C2A214949");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_C::OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnFailure_5C0F74314285F8B9B80A20BE4FAC1DCD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_C::OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.OnSuccess_5C0F74314285F8B9B80A20BE4FAC1DCD");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Matchmaking_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_C::Show(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.Show");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Matchmaking_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.Cancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.MatchStatusUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// int                            status                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_C::MatchStatusUpdate(const struct FString& Description, int status)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.MatchStatusUpdate");

	struct
	{
		struct FString                 Description;
		int                            status;
	} params;

	params.Description = Description;
	params.status = status;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Matchmaking.WND_Matchmaking_C.ExecuteUbergraph_WND_Matchmaking
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Matchmaking_C::ExecuteUbergraph_WND_Matchmaking(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Matchmaking.WND_Matchmaking_C.ExecuteUbergraph_WND_Matchmaking");

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
