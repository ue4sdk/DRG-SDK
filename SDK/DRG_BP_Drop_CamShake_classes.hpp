#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Drop_CamShake_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Drop_CamShake.BP_Drop_CamShake_C
// 0x0010 (0x0338 - 0x0328)
class ABP_Drop_CamShake_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Drop_CamShake.BP_Drop_CamShake_C");
		return ptr;
	}


	void SetStandingDown(bool IsStandingDown);
	void UserConstructionScript();
	void TriggerShakeSequence();
	void ExecuteUbergraph_BP_Drop_CamShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
