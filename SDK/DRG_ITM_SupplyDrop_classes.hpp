#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_SupplyDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C
// 0x0008 (0x04B0 - 0x04A8)
class AITM_SupplyDrop_C : public ARessuplyPodItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_SupplyDrop.ITM_SupplyDrop_C");
		return ptr;
	}


	void UserConstructionScript();
	void RecieveCycledItem();
	void RecieveEquipped();
	void ExecuteUbergraph_ITM_SupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
