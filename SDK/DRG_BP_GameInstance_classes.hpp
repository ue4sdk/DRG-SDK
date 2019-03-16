#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GameInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// 0x0050 (0x1450 - 0x1400)
class UBP_GameInstance_C : public UFSDGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1400(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	int                                                DropPodBarrelCount;                                       // 0x1408(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               DropPodContainsCuriteBarrel;                              // 0x140C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x140D(0x0003) MISSED OFFSET
	int                                                CurrentPlayerRank;                                        // 0x1410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1414(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAvailableCraftingItems;                                 // 0x1418(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	TArray<TScriptInterface<class UCraftable>>         AvailableNewItems;                                        // 0x1428(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               EligibleForRetirementAssignment;                          // 0x1438(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x1439(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEligibleForRetirementAssignment;                        // 0x1440(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C");
		return ptr;
	}


	void IsEligibleForRetirementAassignment(bool* EligibleForRetirementAssignment);
	void SetEligibleForRetirementAssignment(bool IsEligible);
	void UpdateNewCraftableObjects(int NewPlayerRank, TArray<TScriptInterface<class UCraftable>>* NewCraftableItems);
	void OnFailure_D72617F2470A6492F0633884F8A94A97();
	void OnSuccess_D72617F2470A6492F0633884F8A94A97();
	void OnFailure_E6A52403462766A65D96D581DEE58F2A();
	void OnSuccess_E6A52403462766A65D96D581DEE58F2A();
	void ReceiveInit();
	void JoinFriendInvite(const struct FBlueprintSessionResult& Session);
	void OnLoadComplete(const struct FString& MapName);
	void OnPlayerProgressChanged(int Rank, int Stars);
	void ExecuteUbergraph_BP_GameInstance(int EntryPoint);
	void OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C* GameInstance);
	void OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<class UCraftable>>* NewItems);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
