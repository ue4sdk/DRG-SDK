#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DrinksBox_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C
// 0x0050 (0x0378 - 0x0328)
class ABP_DrinksBox_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             BartenderLocation;                                        // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      State;                                                    // 0x0348(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAvailableForNewDrink;                                   // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDrinkReady;                                             // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class ADrinkableActor*                             DrinkableActor;                                           // 0x0370(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_DrinksBox.BP_DrinksBox_C");
		return ptr;
	}


	void OnRep_DrinkableActor();
	void IsAvailable(bool* IsAvailable);
	void OnRep_State();
	void UserConstructionScript();
	void Spawn_Drink(class UDrinkableDataAsset* Drinkable);
	void OnDrinkableDestroyed(class AActor* DestroyedActor);
	void Fill_DrinkableActor();
	void ExecuteUbergraph_BP_DrinksBox(int EntryPoint);
	void OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C* DrinkBox);
	void OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C* DrinkBox);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
