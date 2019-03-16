#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WeaponDisplay_Base_AmmoCount_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C
// 0x0020 (0x0228 - 0x0208)
class UWeaponDisplay_Base_AmmoCount_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UItemAggregator*                             Aggregator;                                               // 0x0210(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class AItem*                                       Item;                                                     // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UWidgetComponent*                            WidgComp;                                                 // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WeaponDisplay_Base_AmmoCount.WeaponDisplay_Base_AmmoCount_C");
		return ptr;
	}


	void SetMaxAmmo(int Value);
	void RequestRedraw();
	void SetTotalCount(int Value);
	void SetClipCount(int Value);
	void OnTotalAmountChanged(int Amount);
	void OnClipEmountChanged(int Amount);
	void OnCarriedAmountChanged(int Amount);
	void OnTotalAmountChange(int Amount);
	void Initialize(class AItem* OwningItem, class UWidgetComponent* WidgetComp);
	void OnReloadStarted();
	void OnReloadComplete();
	void Max_Ammo_Changed(int Amount);
	void Total_Ammo_left_changed(int Amount);
	void Reload_Time_Tick(float Amount);
	void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
