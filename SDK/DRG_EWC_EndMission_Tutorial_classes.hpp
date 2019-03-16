#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_EndMission_Tutorial_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_EndMission_Tutorial.EWC_EndMission_Tutorial_C
// 0x0008 (0x0050 - 0x0048)
class UEWC_EndMission_Tutorial_C : public UEWC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EWC_EndMission_Tutorial.EWC_EndMission_Tutorial_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_EndMission_Tutorial(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
