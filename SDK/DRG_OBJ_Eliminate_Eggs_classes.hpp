#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_Eliminate_Eggs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_Eliminate_Eggs.OBJ_Eliminate_Eggs_C
// 0x0000 (0x01A0 - 0x01A0)
class UOBJ_Eliminate_Eggs_C : public UOBJ_Elimination_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_Eliminate_Eggs.OBJ_Eliminate_Eggs_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
