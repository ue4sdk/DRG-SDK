#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_BarGlass_GlyphidSlammer_Support_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BarGlass_GlyphidSlammer_Support.BP_BarGlass_GlyphidSlammer_Support_C
// 0x0018 (0x0388 - 0x0370)
class ABP_BarGlass_GlyphidSlammer_Support_C : public ABP_BarGlass_Standard_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UAudioComponent*                             SparkleDrink;                                             // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BarGlass_GlyphidSlammer_Support.BP_BarGlass_GlyphidSlammer_Support_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
	void ExecuteUbergraph_BP_BarGlass_GlyphidSlammer_Support(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
