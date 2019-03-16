#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_Input_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Input.LIB_Input_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Input_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LIB_Input.LIB_Input_C");
		return ptr;
	}


	static bool IsCloseMenu(class UObject* __WorldContext, struct FKeyEvent* Input);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
