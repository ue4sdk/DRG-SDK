#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_MenuColors_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_MenuColors_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LIB_MenuColors.LIB_MenuColors_C");
		return ptr;
	}


	static void SelectTextColor(class UTextBlock* Text, TEnumAsByte<ENUM_MenuColors> FALSE, TEnumAsByte<ENUM_MenuColors> TRUE, bool Condition, class UObject* __WorldContext);
	static void SetTextColor(class UTextBlock* Text, TEnumAsByte<ENUM_MenuColors> Color, class UObject* __WorldContext);
	static void SelectMenuColor(TEnumAsByte<ENUM_MenuColors> FALSE, TEnumAsByte<ENUM_MenuColors> TRUE, bool Condition, class UObject* __WorldContext, struct FLinearColor* OutputColor);
	static void MenuColorsAndOpacity(TEnumAsByte<ENUM_MenuColors> ColorSelector, float Opacity, class UObject* __WorldContext, struct FLinearColor* OutputColor);
	static void MenuColors(TEnumAsByte<ENUM_MenuColors> ColorSelector, class UObject* __WorldContext, struct FLinearColor* OutputColor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
