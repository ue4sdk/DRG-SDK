#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_MuleLeg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C
// 0x001E (0x0400 - 0x03E2)
class ABP_MuleLeg_C : public ABP_Gem_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        Distress_Sphere;                                          // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDropped_Leg();
	void OnPickedUpLeg();
	void DisableDistressSphere();
	void ExecuteUbergraph_BP_MuleLeg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
