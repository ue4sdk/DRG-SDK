// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_NameTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NameTags.UI_NameTags_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NameTags_C::SetData(class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.SetData");

	struct
	{
		class AFSDPlayerState*         Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NameTags.UI_NameTags_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NameTags_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_NameTags_C::OnPlayerNameChanged_Event_1(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.OnPlayerNameChanged_Event_1");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NameTags_C::ExecuteUbergraph_UI_NameTags(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NameTags.UI_NameTags_C.ExecuteUbergraph_UI_NameTags");

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
