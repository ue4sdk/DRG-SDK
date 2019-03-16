// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_RetirementBadge_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            TimesRetired                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::SetTimesRetired(int TimesRetired)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetTimesRetired");

	struct
	{
		int                            TimesRetired;
	} params;

	params.TimesRetired = TimesRetired;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::SetCharacterClass(class AFSDPlayerState* PlayerState, class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetCharacterClass");

	struct
	{
		class AFSDPlayerState*         PlayerState;
		class UClass*                  CharacterClass;
	} params;

	params.PlayerState = PlayerState;
	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectColor
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            Stars                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::SelectColor(int Stars, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectColor");

	struct
	{
		int                            Stars;
		struct FLinearColor            Color;
	} params;

	params.Stars = Stars;

	UObject::ProcessEvent(fn, &params);

	if (Color != nullptr)
		*Color = params.Color;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            RetirementLevel                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::SelectIcon(int RetirementLevel, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SelectIcon");

	struct
	{
		int                            RetirementLevel;
		class UTexture2D*              Icon;
	} params;

	params.RetirementLevel = RetirementLevel;

	UObject::ProcessEvent(fn, &params);

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::SetData(class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.SetData");

	struct
	{
		class AFSDPlayerState*         Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_RetirementBadge_C::ExecuteUbergraph_ITM_RetirementBadge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_RetirementBadge.ITM_RetirementBadge_C.ExecuteUbergraph_ITM_RetirementBadge");

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
