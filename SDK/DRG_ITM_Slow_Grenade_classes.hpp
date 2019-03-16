#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Slow_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_Slow_Grenade.ITM_Slow_Grenade_C
// 0x0018 (0x03D0 - 0x03B8)
class AITM_Slow_Grenade_C : public AITM_AOE_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x03C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_Slow_Grenade.ITM_Slow_Grenade_C");
		return ptr;
	}


	void AddGearStateEntries(class AFSDPlayerState* PlayerState, TArray<struct FGearStatEntry>* Stats);
	void UserConstructionScript();
	void EnableWeakeningEffect();
	void ExecuteUbergraph_ITM_Slow_Grenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
