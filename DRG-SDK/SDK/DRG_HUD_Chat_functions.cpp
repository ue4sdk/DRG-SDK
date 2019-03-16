// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Chat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 String                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// bool                           IsEmpty                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Chat_C::IsStringNotEmpty(const struct FString& String, bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.IsStringNotEmpty");

	struct
	{
		struct FString                 String;
		bool                           IsEmpty;
	} params;

	params.String = String;

	UObject::ProcessEvent(fn, &params);

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function HUD_Chat.HUD_Chat_C.GetSenderType
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EChatSenderType                SenderType                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Chat_C::GetSenderType(EChatSenderType* SenderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.GetSenderType");

	struct
	{
		EChatSenderType                SenderType;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SenderType != nullptr)
		*SenderType = params.SenderType;
}


// Function HUD_Chat.HUD_Chat_C.OpenChat
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Chat_C::OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OpenChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.BeginChat
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Chat_C::BeginChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BeginChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.OnOpenChat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Chat_C::OnOpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnOpenChat");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Chat_C::BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__NewChatEdit_K2Node_ComponentBoundEvent_19_OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct
	{
		struct FText                   Text;
		TEnumAsByte<ETextCommit>       CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.Update Chat Background
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Chat_C::Update_Chat_Background()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Update Chat Background");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.Add Chat Message
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFSDChatMessage         Msg                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_Chat_C::Add_Chat_Message(const struct FFSDChatMessage& Msg)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Add Chat Message");

	struct
	{
		struct FFSDChatMessage         Msg;
	} params;

	params.Msg = Msg;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Chat_C::OnMessageHidden_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.OnMessageHidden_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.NewMesssage
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFSDChatMessage         Message                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_Chat_C::NewMesssage(const struct FFSDChatMessage& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.NewMesssage");

	struct
	{
		struct FFSDChatMessage         Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Chat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.BndEvt__BackgroundFade_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UHUD_Chat_C::BndEvt__BackgroundFade_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.BndEvt__BackgroundFade_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Chat_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Chat_C::ExecuteUbergraph_HUD_Chat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Chat.HUD_Chat_C.ExecuteUbergraph_HUD_Chat");

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
