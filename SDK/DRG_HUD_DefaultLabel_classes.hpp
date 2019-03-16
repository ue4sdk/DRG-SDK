#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_DefaultLabel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C
// 0x005D (0x0265 - 0x0208)
class UHUD_DefaultLabel_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UTextBlock*                                  Label;                                                    // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FText                                       Text;                                                     // 0x0218(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Font_Size;                                                // 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENUM_AcuminCondensedTypeface>          Typeface;                                                 // 0x0234(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0235(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0236(0x0002) MISSED OFFSET
	struct FFontOutlineSettings                        Outline_Settings;                                         // 0x0238(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Min_Desired_Width;                                        // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ENUM_MenuColors>                       TextColor;                                                // 0x0264(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass HUD_DefaultLabel.HUD_DefaultLabel_C");
		return ptr;
	}


	void SetTextColor(TEnumAsByte<ENUM_MenuColors> ColorSelector);
	void SetOutlineSettings(const struct FFontOutlineSettings& InFontInfo_OutlineSettings);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetTypeFace(TEnumAsByte<ENUM_AcuminCondensedTypeface> Typeface);
	void SetFontSize(int inFontSize);
	void SetText(const struct FText& NewText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_HUD_DefaultLabel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
