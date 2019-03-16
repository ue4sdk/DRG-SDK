#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_2nd_Mine_Hollomite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OBJ_2nd_Mine_Hollomite.OBJ_2nd_Mine_Hollomite_C
// 0x0000 (0x01B0 - 0x01B0)
class UOBJ_2nd_Mine_Hollomite_C : public UOBJ_Resource_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass OBJ_2nd_Mine_Hollomite.OBJ_2nd_Mine_Hollomite_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
