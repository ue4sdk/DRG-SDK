// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_JoiningPassword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UWND_JoiningPassword_C::SetSession(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.SetSession");

	struct
	{
		struct FBlueprintSessionResult Session;
	} params;

	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JoiningPassword_C::BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_JoiningPassword_C::BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JoiningPassword_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_JoiningPassword_C::ExecuteUbergraph_WND_JoiningPassword(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.ExecuteUbergraph_WND_JoiningPassword");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FString                 Password                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UWND_JoiningPassword_C::JoinWithPassword__DelegateSignature(const struct FBlueprintSessionResult& Session, const struct FString& Password)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_JoiningPassword.WND_JoiningPassword_C.JoinWithPassword__DelegateSignature");

	struct
	{
		struct FBlueprintSessionResult Session;
		struct FString                 Password;
	} params;

	params.Session = Session;
	params.Password = Password;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
