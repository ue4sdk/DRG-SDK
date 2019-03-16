#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_Spider_Grunt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_Spider_Grunt.AIC_Spider_Grunt_C
// 0x0000 (0x046C - 0x046C)
class AAIC_Spider_Grunt_C : public AAIC_Spider_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIC_Spider_Grunt.AIC_Spider_Grunt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
