#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Shotgun_A_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Shotgun_A.ABP_Shotgun_A_C
// 0x00B0 (0x0410 - 0x0360)
class UABP_Shotgun_A_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DB901E8648738C4EEA0F2F9423709C9B;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B369BDBF4068F98E39BC738E57D268D5;      // 0x03A8(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("AnimBlueprintGeneratedClass ABP_Shotgun_A.ABP_Shotgun_A_C");
		return ptr;
	}


	void ExecuteUbergraph_ABP_Shotgun_A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
