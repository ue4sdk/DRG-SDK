#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GM_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GM_Tutorial.GM_Tutorial_C
// 0x0008 (0x05E0 - 0x05D8)
class AGM_Tutorial_C : public AGM_Mining_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GM_Tutorial.GM_Tutorial_C");
		return ptr;
	}


	void UserConstructionScript();
	void SpawnBosco(const struct FTransform& Location);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GM_Tutorial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
