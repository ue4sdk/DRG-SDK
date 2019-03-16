#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_ToolTips_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_ToolTips_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LIB_ToolTips.LIB_ToolTips_C");
		return ptr;
	}


	static void CreateToolTip(class UWidget* ToolTipTarget, class UClass* ToolTipClass, const struct FVector2D& Offset, class UObject* __WorldContext, class UUserWidget** OutToolTip);
	static void CreateBiomeToolTip(class UWidget* Target, const struct FVector2D& Position, const struct FVector2D& Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C** ToolTipWidget);
	static void CreateBasicToolTip(class UWidget* Target, const struct FText& Text, const struct FVector2D& Position, const struct FVector2D& Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C** ToolTipWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
