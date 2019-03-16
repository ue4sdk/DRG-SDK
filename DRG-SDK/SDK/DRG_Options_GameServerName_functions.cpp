// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_GameServerName_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Options_GameServerName.Options_GameServerName_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOptions_GameServerName_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_GameServerName_C::UINeedsUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.UINeedsUpdate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_GameServerName.Options_GameServerName_C.ShowOptions
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOptions_GameServerName_C::ShowOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.ShowOptions");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// unsigned char                  CommitMethod                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_GameServerName_C::BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(const struct FText& Text, unsigned char CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.BndEvt__Basic_TextInputField_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature");

	struct
	{
		struct FText                   Text;
		unsigned char                  CommitMethod;
	} params;

	params.Text = Text;
	params.CommitMethod = CommitMethod;

	UObject::ProcessEvent(fn, &params);
}


// Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOptions_GameServerName_C::ExecuteUbergraph_Options_GameServerName(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Options_GameServerName.Options_GameServerName_C.ExecuteUbergraph_Options_GameServerName");

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
