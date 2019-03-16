// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MENU_Loadout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MENU_Loadout.MENU_Loadout_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMENU_Loadout_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnKeyUp");

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


// Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UMENU_Loadout_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnMouseWheel");

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params;

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UClass*                  SelectedCharacter              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_Loadout_C::GetClassFromPlayerState(class UClass** SelectedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.GetClassFromPlayerState");

	struct
	{
		class UClass*                  SelectedCharacter;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (SelectedCharacter != nullptr)
		*SelectedCharacter = params.SelectedCharacter;
}


// Function MENU_Loadout.MENU_Loadout_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_Loadout_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_Loadout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_Loadout_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_Loadout_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_Loadout_C::BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature(class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.BndEvt__ITM_Loadout_CharSelect_K2Node_ComponentBoundEvent_0_OnCharacterChanged__DelegateSignature");

	struct
	{
		class UClass*                  Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Stop Ansel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_Loadout_C::Stop_Ansel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Stop Ansel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Start Ansel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_Loadout_C::Start_Ansel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Start Ansel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_Loadout_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_Loadout_C::Refresh_Loadout_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Refresh Loadout Items");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_Loadout_C::Setup_Loadout_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Setup Loadout Items");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMENU_Loadout_C::OnNewTopWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.OnNewTopWindow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_Loadout_C::ReceiveSelectCharacterCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectCharacterCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_Loadout_C::ReceiveSelectNextCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectNextCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UMENU_Loadout_C::ReceiveSelectPreviousCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ReceiveSelectPreviousCommand");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMENU_Loadout_C::On_Unhovered_Event(class UITM_Loadout_ItemWindow_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.On Unhovered_Event");

	struct
	{
		class UITM_Loadout_ItemWindow_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.On Hovered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMENU_Loadout_C::On_Hovered(class UITM_Loadout_ItemWindow_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.On Hovered");

	struct
	{
		class UITM_Loadout_ItemWindow_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.Open Item Window
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_Loadout_ItemWindow_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMENU_Loadout_C::Open_Item_Window(class UITM_Loadout_ItemWindow_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.Open Item Window");

	struct
	{
		class UITM_Loadout_ItemWindow_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMENU_Loadout_C::ExecuteUbergraph_MENU_Loadout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.ExecuteUbergraph_MENU_Loadout");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMENU_Loadout_C::CharacterSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MENU_Loadout.MENU_Loadout_C.CharacterSelected__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
