// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MENU_TwitchOAuth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_TwitchOAuth_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Init");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_TwitchOAuth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UMENU_TwitchOAuth_C::BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__WebBrowser_31_K2Node_ComponentBoundEvent_52_OnUrlChanged__DelegateSignature");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMENU_TwitchOAuth_C::BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.BndEvt__Close_K2Node_ComponentBoundEvent_87_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.ExecuteUbergraph_MENU_TwitchOAuth
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_TwitchOAuth_C::ExecuteUbergraph_MENU_TwitchOAuth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_TwitchOAuth.MENU_TwitchOAuth_C.ExecuteUbergraph_MENU_TwitchOAuth");

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
