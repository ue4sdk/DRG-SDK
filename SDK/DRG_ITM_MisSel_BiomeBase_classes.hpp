#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_BiomeBase_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C
// 0x0000 (0x0208 - 0x0208)
class UITM_MisSel_BiomeBase_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ITM_MisSel_BiomeBase.ITM_MisSel_BiomeBase_C");
		return ptr;
	}


	void GetBasePanel(class UCanvasPanel** Panel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
