#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PLS_CaveGenerator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C
// 0x000F (0x0610 - 0x0601)
class APLS_CaveGenerator_C : public APLS_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0601(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PLS_CaveGenerator.PLS_CaveGenerator_C");
		return ptr;
	}


	void UserConstructionScript();
	void CreateCaveGraph();
	void SpawnDropPod();
	void ExecuteUbergraph_PLS_CaveGenerator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
