// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Crafting_Unlock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::CreateResources()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.CreateResources");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UWND_Crafting_Unlock_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.OnKeyUp");

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


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Crafting_Unlock_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Close");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Cancel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Select
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Select");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.DoEquipMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Crafting_Unlock_C::DoEquipMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.DoEquipMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Crafting_Unlock_C::Show(const TScriptInterface<class UCraftable>& Item, class AFSDPlayerState* Player, class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.Show");

	struct
	{
		TScriptInterface<class UCraftable> Item;
		class AFSDPlayerState*         Player;
		class UClass*                  Character;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Crafting_Unlock_C::ExecuteUbergraph_WND_Crafting_Unlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Crafting_Unlock.WND_Crafting_Unlock_C.ExecuteUbergraph_WND_Crafting_Unlock");

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
