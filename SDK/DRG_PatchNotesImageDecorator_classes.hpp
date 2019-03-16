#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PatchNotesImageDecorator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PatchNotesImageDecorator.PatchNotesImageDecorator_C
// 0x0000 (0x0030 - 0x0030)
class UPatchNotesImageDecorator_C : public URichTextBlockImageDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PatchNotesImageDecorator.PatchNotesImageDecorator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
