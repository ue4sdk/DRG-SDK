// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Invitation_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Invitation.BP_Invitation_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_Invitation_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnKeyUp");

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


// Function BP_Invitation.BP_Invitation_C.ReplyInvite
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Reply                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Invitation_C::ReplyInvite(int Reply)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ReplyInvite");

	struct
	{
		int                            Reply;
	} params;

	params.Reply = Reply;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.Initialize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDiscordUser            User_Data                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// float                          TimeElapsed                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Invitation_C::Initialize(const struct FDiscordUser& User_Data, float TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Initialize");

	struct
	{
		struct FDiscordUser            User_Data;
		float                          TimeElapsed;
	} params;

	params.User_Data = User_Data;
	params.TimeElapsed = TimeElapsed;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Invitation_C::OnFail_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnFail_1E7B4EA94EB1E25E604B80A4114A24A4");

	struct
	{
		class UTexture2DDynamic*       Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*       Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Invitation_C::OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4(class UTexture2DDynamic* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnSuccess_1E7B4EA94EB1E25E604B80A4114A24A4");

	struct
	{
		class UTexture2DDynamic*       Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_Invitation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Invitation_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.OnReadyImage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 URL                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UBP_Invitation_C::OnReadyImage(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnReadyImage");

	struct
	{
		struct FString                 URL;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_Invitation_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_Invitation_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UBP_Invitation_C::BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.BndEvt__Basic_ButtonScalable2_C_3_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.HideUIDelayed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Invitation_C::HideUIDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.HideUIDelayed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.OnAcceptInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Invitation_C::OnAcceptInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnAcceptInvite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.OnRejectInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Invitation_C::OnRejectInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnRejectInvite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.OnIgnoreInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_Invitation_C::OnIgnoreInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.OnIgnoreInvite");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Invitation_C::ExecuteUbergraph_BP_Invitation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ExecuteUbergraph_BP_Invitation");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 URL                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UBP_Invitation_C::ImageReady__DelegateSignature(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Invitation.BP_Invitation_C.ImageReady__DelegateSignature");

	struct
	{
		struct FString                 URL;
	} params;

	params.URL = URL;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
