#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_2nd_Find_ApocaBloom_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_2nd_Find_ApocaBloom.OBJ_2nd_Find_ApocaBloom_C
// 0x0000 (0x0180 - 0x0180)
class UOBJ_2nd_Find_ApocaBloom_C : public UOBJ_FindItems_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_2nd_Find_ApocaBloom.OBJ_2nd_Find_ApocaBloom_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
