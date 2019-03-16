// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ChatLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ChatLine.HUD_ChatLine_C.EncloseText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 Pre                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 Post                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UHUD_ChatLine_C::EncloseText(const struct FString& Pre, const struct FText& Text, const struct FString& Post, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.EncloseText");

	struct
	{
		struct FString                 Pre;
		struct FText                   Text;
		struct FString                 Post;
		struct FText                   Result;
	} params;

	params.Pre = Pre;
	params.Text = Text;
	params.Post = Post;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_ChatLine.HUD_ChatLine_C.StyledText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   style_Name                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Result                         (CPF_Parm, CPF_OutParm)

void UHUD_ChatLine_C::StyledText(const struct FText& style_Name, const struct FText& Text, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.StyledText");

	struct
	{
		struct FText                   style_Name;
		struct FText                   Text;
		struct FText                   Result;
	} params;

	params.style_Name = style_Name;
	params.Text = Text;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EChatMessageType               MessageType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EChatSenderType                SenderType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ChatLine_C::UpdateUserIcon(EChatMessageType MessageType, EChatSenderType SenderType)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.UpdateUserIcon");

	struct
	{
		EChatMessageType               MessageType;
		EChatSenderType                SenderType;
	} params;

	params.MessageType = MessageType;
	params.SenderType = SenderType;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_ChatLine_C::UpdateOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.UpdateOpacity");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.SetMessage
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EChatMessageType               MsgType                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 SenderStr                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// EChatSenderType                SenderType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 MsgStr                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UHUD_ChatLine_C::SetMessage(EChatMessageType MsgType, const struct FString& SenderStr, EChatSenderType SenderType, const struct FString& MsgStr)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.SetMessage");

	struct
	{
		EChatMessageType               MsgType;
		struct FString                 SenderStr;
		EChatSenderType                SenderType;
		struct FString                 MsgStr;
	} params;

	params.MsgType = MsgType;
	params.SenderStr = SenderStr;
	params.SenderType = SenderType;
	params.MsgStr = MsgStr;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_ChatLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ChatLine_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ChatLine_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ChatLine_C::ExecuteUbergraph_HUD_ChatLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.ExecuteUbergraph_HUD_ChatLine");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_ChatLine_C::OnMessageHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ChatLine.HUD_ChatLine_C.OnMessageHidden__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
