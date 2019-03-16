// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Menu_RestoreSaves_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFSDSaveGame*>    Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UMenu_RestoreSaves_C::CreateCloudSaveList(TArray<class UFSDSaveGame*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateCloudSaveList");

	struct
	{
		TArray<class UFSDSaveGame*>    Array;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::ClearList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ClearList");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::CreateSaveList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CreateSaveList");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.BndEvt__BTN_Back_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Back");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::OnClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.OnClosed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMenu_RestoreSaves_C::CloudFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloudFailed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFSDSaveGame*>    savegames                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UMenu_RestoreSaves_C::CloadSaveGames(TArray<class UFSDSaveGame*> savegames)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.CloadSaveGames");

	struct
	{
		TArray<class UFSDSaveGame*>    savegames;
	} params;

	params.savegames = savegames;

	UObject::ProcessEvent(fn, &params);
}


// Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMenu_RestoreSaves_C::ExecuteUbergraph_Menu_RestoreSaves(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_RestoreSaves.Menu_RestoreSaves_C.ExecuteUbergraph_Menu_RestoreSaves");

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
