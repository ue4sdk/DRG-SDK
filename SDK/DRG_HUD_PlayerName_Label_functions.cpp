// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_PlayerName_Label_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.UpdateCharacterName
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_PlayerName_Label_C::UpdateCharacterName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.UpdateCharacterName");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_PlayerName_Label_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.OnPlayerNameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UHUD_PlayerName_Label_C::OnPlayerNameChanged(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.OnPlayerNameChanged");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerName_Label_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.ExecuteUbergraph_HUD_PlayerName_Label
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerName_Label_C::ExecuteUbergraph_HUD_PlayerName_Label(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerName_Label.HUD_PlayerName_Label_C.ExecuteUbergraph_HUD_PlayerName_Label");

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
