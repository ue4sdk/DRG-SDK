#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_AdvancedLabel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C
// 0x00D0 (0x0310 - 0x0240)
class UUI_AdvancedLabel_C : public UFSDAdvancedLabel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                Lines;                                                    // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FSlateFontInfo                              Font;                                                     // 0x0250(0x0058) (CPF_Edit, CPF_BlueprintVisible)
	class UHorizontalBox*                              CurrentLine;                                              // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Icon_Size;                                                // 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Text_Tint;                                                // 0x02B4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Key_Name_Tint;                                            // 0x02C4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                PC__Icon_Tint;                                            // 0x02D4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Controller_Icon_Tint;                                     // 0x02E4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Icon_Size_ControllerOverride;                             // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Shadow_Color;                                             // 0x02F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Shadow_Offset;                                            // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_AdvancedLabel.UI_AdvancedLabel_C");
		return ptr;
	}


	void SetPreviewAs(EInputSource PreviewAs);
	void SetTints(const struct FLinearColor& Text_Tint, const struct FLinearColor& Key_Name_Tint, const struct FLinearColor& PC__Icon_Tint, const struct FLinearColor& Controller_Icon_Tint);
	void SetKeyNameTint(const struct FLinearColor& Key_Name_Tint);
	void SetIconTint(const struct FLinearColor& PC__Icon_Tint, const struct FLinearColor& Controller_Icon_Tint);
	void SetTextTint(const struct FLinearColor& Text_Tint);
	void OnNewLine(int Index);
	void OnAddIcon(const struct FString& Name, const struct FActionIconMapping& Icon);
	void OnAddKeyName(const struct FString& Name);
	void OnAddString(const struct FString& Value);
	void OnReset();
	void ExecuteUbergraph_UI_AdvancedLabel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
