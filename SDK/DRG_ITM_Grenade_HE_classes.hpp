#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Grenade_HE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_Grenade_HE.ITM_Grenade_HE_C
// 0x0018 (0x03C0 - 0x03A8)
class AITM_Grenade_HE_C : public AITM_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UDamageComponent*                            Damage;                                                   // 0x03B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UExplosionComponent*                         Explosion;                                                // 0x03B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_Grenade_HE.ITM_Grenade_HE_C");
		return ptr;
	}


	void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void OnExploded();
	void ExecuteUbergraph_ITM_Grenade_HE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
