#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_CabinOwnerSign_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C
// 0x0030 (0x0358 - 0x0328)
class ABP_CabinOwnerSign_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWidgetComponent*                            NameWidget;                                               // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Lamp;                                                     // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_CabinOwnerSign.BP_CabinOwnerSign_C");
		return ptr;
	}


	void SetPlayerName(struct FText* Value);
	void UserConstructionScript();
	void SetCabinOwner(class AFSDPlayerState* PlayerState);
	void ChangeName(const struct FString& NewName);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CabinOwnerSign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
