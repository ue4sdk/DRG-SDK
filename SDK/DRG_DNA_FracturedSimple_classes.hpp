#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_DNA_FracturedSimple_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DNA_FracturedSimple.DNA_FracturedSimple_C
// 0x0000 (0x0054 - 0x0054)
class UDNA_FracturedSimple_C : public UBP_FracturedMissionDNA_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DNA_FracturedSimple.DNA_FracturedSimple_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
