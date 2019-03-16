#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EWC_Salvage_Ambush_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C
// 0x0014 (0x005C - 0x0048)
class UEWC_Salvage_Ambush_C : public UEWC_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FVector                                     MuleLocation;                                             // 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EWC_Salvage_Ambush.EWC_Salvage_Ambush_C");
		return ptr;
	}


	void StartWave();
	void ExecuteUbergraph_EWC_Salvage_Ambush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
