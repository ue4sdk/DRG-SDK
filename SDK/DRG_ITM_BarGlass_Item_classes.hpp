#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BarGlass_Item_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C
// 0x0028 (0x0478 - 0x0450)
class AITM_BarGlass_Item_C : public ADrinkableItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	bool                                               IsFull;                                                   // 0x0458(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0459(0x0007) MISSED OFFSET
	class UClass*                                      PhysicsActor;                                             // 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                TPMontage;                                                // 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                FPMontage;                                                // 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ITM_BarGlass_Item.ITM_BarGlass_Item_C");
		return ptr;
	}


	void OnRep_IsFull();
	bool CheckCanSalute();
	void IsDrinking(bool* IsDrinking);
	float PlayThrow();
	float PlayDrink();
	void UserConstructionScript();
	void RecieveStartUsing();
	void Server_Use();
	void All_Drink();
	void All_Throw();
	void DropItem();
	void SetEmpty();
	void ExecuteUbergraph_ITM_BarGlass_Item(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
