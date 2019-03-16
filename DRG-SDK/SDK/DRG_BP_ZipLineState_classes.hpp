#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_ZipLineState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C
// 0x0000 (0x01E0 - 0x01E0)
class UBP_ZipLineState_C : public UZipLineStateComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ZipLineState.BP_ZipLineState_C");
		return ptr;
	}


	struct FVector GetJumpVector(const struct FVector& LookVector, const struct FVector& CurrentVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
