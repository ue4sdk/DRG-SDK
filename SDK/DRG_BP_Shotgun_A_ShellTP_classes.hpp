#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Shotgun_A_ShellTP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C
// 0x0000 (0x034C - 0x034C)
class ABP_Shotgun_A_ShellTP_C : public AMAG_BaseClass_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Shotgun_A_ShellTP.BP_Shotgun_A_ShellTP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
