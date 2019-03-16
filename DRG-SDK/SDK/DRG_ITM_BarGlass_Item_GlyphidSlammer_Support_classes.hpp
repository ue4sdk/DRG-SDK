#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BarGlass_Item_GlyphidSlammer_Support_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C
// 0x0018 (0x0490 - 0x0478)
class AITM_BarGlass_Item_GlyphidSlammer_Support_C : public AITM_BarGlass_Item_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0478(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             SparkleDrink;                                             // 0x0480(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C");
		return ptr;
	}


	float PlayDrink();
	void UserConstructionScript();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_ITM_BarGlass_Item_GlyphidSlammer_Support(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
