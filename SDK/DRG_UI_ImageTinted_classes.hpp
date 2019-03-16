#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_ImageTinted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C
// 0x00A0 (0x02A8 - 0x0208)
class UUI_ImageTinted_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      ImageWidget;                                              // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FSlateBrush                                 Brush;                                                    // 0x0218(0x0088) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<ENUM_MenuColors>                       Tint;                                                     // 0x02A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              Tint_Opacity;                                             // 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass UI_ImageTinted.UI_ImageTinted_C");
		return ptr;
	}


	void SetBrushFromTexture(class UTexture2D* Texture, bool MatchSize);
	void SetTint(TEnumAsByte<ENUM_MenuColors> InTint, float InOpacity);
	void SetBrush(const struct FSlateBrush& InBrush);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ImageTinted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
