#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_AOE_Grenade_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C
// 0x0010 (0x03B8 - 0x03A8)
class AITM_AOE_Grenade_Base_C : public AITM_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      AOEClass;                                                 // 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_AOE_Grenade_Base.ITM_AOE_Grenade_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExploded();
	void ExecuteUbergraph_ITM_AOE_Grenade_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
