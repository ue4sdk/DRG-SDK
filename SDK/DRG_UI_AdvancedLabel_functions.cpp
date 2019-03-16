// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_AdvancedLabel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   PreviewAs                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::SetPreviewAs(EInputSource PreviewAs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetPreviewAs");

	struct
	{
		EInputSource                   PreviewAs;
	} params;

	params.PreviewAs = PreviewAs;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Text_Tint                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Key_Name_Tint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            PC__Icon_Tint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Controller_Icon_Tint           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::SetTints(const struct FLinearColor& Text_Tint, const struct FLinearColor& Key_Name_Tint, const struct FLinearColor& PC__Icon_Tint, const struct FLinearColor& Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTints");

	struct
	{
		struct FLinearColor            Text_Tint;
		struct FLinearColor            Key_Name_Tint;
		struct FLinearColor            PC__Icon_Tint;
		struct FLinearColor            Controller_Icon_Tint;
	} params;

	params.Text_Tint = Text_Tint;
	params.Key_Name_Tint = Key_Name_Tint;
	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Key_Name_Tint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::SetKeyNameTint(const struct FLinearColor& Key_Name_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetKeyNameTint");

	struct
	{
		struct FLinearColor            Key_Name_Tint;
	} params;

	params.Key_Name_Tint = Key_Name_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            PC__Icon_Tint                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Controller_Icon_Tint           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::SetIconTint(const struct FLinearColor& PC__Icon_Tint, const struct FLinearColor& Controller_Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetIconTint");

	struct
	{
		struct FLinearColor            PC__Icon_Tint;
		struct FLinearColor            Controller_Icon_Tint;
	} params;

	params.PC__Icon_Tint = PC__Icon_Tint;
	params.Controller_Icon_Tint = Controller_Icon_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Text_Tint                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::SetTextTint(const struct FLinearColor& Text_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.SetTextTint");

	struct
	{
		struct FLinearColor            Text_Tint;
	} params;

	params.Text_Tint = Text_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::OnNewLine(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnNewLine");

	struct
	{
		int                            Index;
	} params;

	params.Index = Index;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)
// struct FActionIconMapping      Icon                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UUI_AdvancedLabel_C::OnAddIcon(const struct FString& Name, const struct FActionIconMapping& Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddIcon");

	struct
	{
		struct FString                 Name;
		struct FActionIconMapping      Icon;
	} params;

	params.Name = Name;
	params.Icon = Icon;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_AdvancedLabel_C::OnAddKeyName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddKeyName");

	struct
	{
		struct FString                 Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UUI_AdvancedLabel_C::OnAddString(const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnAddString");

	struct
	{
		struct FString                 Value;
	} params;

	params.Value = Value;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_AdvancedLabel_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.OnReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_AdvancedLabel_C::ExecuteUbergraph_UI_AdvancedLabel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_AdvancedLabel.UI_AdvancedLabel_C.ExecuteUbergraph_UI_AdvancedLabel");

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
