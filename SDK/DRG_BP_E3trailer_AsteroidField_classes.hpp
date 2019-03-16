#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_E3trailer_AsteroidField_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C
// 0x0040 (0x0368 - 0x0328)
class ABP_E3trailer_AsteroidField_C : public AActor
{
public:
	class USceneComponent*                             Scene;                                                    // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         Meshes_to_spawn;                                          // 0x0338(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<class UInstancedStaticMeshComponent*>       Instanced_meshes;                                         // 0x0348(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                Number_of_meshes;                                         // 0x0358(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandomStream                               Random_seed;                                              // 0x035C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              Scale;                                                    // 0x0364(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_E3trailer_AsteroidField.BP_E3trailer_AsteroidField_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
