#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MAG_Assault_Rifle_FP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_Assault_Rifle_FP.MAG_Assault_Rifle_FP_C
// 0x0000 (0x034C - 0x034C)
class AMAG_Assault_Rifle_FP_C : public AMAG_BaseClass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MAG_Assault_Rifle_FP.MAG_Assault_Rifle_FP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
