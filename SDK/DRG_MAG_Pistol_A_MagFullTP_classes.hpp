#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MAG_Pistol_A_MagFullTP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MAG_Pistol_A_MagFullTP.MAG_Pistol_A_MagFullTP_C
// 0x0000 (0x034C - 0x034C)
class AMAG_Pistol_A_MagFullTP_C : public AMAG_BaseClass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass MAG_Pistol_A_MagFullTP.MAG_Pistol_A_MagFullTP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
