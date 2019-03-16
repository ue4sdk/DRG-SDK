#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_Generic.EWC_Generic_C
// 0x0018 (0x0060 - 0x0048)
class UEWC_Generic_C : public UEWC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	TArray<struct FVector>                             SpawnLocations;                                           // 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EWC_Generic.EWC_Generic_C");
		return ptr;
	}


	void StartWave();
	void StopConstantPreassure();
	void ExecuteUbergraph_EWC_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
