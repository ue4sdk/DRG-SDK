#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_HeavyWeapon_PlatformGun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C
// 0x0150 (0x04D0 - 0x0380)
class UABP_HeavyWeapon_PlatformGun_C : public UPlatformGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_33EBDBF04C905644F4BEB2A45E186CE2;      // 0x0388(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0167E87D4FC5D2C35C6432A25017F6CE;// 0x03C8(0x00A0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D8AA4E1C4D10BFF0B7C6D0BCDFCFB4F4;      // 0x0468(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_HeavyWeapon_PlatformGun.ABP_HeavyWeapon_PlatformGun_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_HeavyWeapon_PlatformGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
