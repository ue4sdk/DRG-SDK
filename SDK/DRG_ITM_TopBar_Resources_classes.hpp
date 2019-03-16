#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TopBar_Resources_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C
// 0x0071 (0x0279 - 0x0208)
class UITM_TopBar_Resources_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              ParentBox;                                                // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UResourceData*>                       resources;                                                // 0x0218(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TMap<class UResourceData*, class UITM_TopBar_ResourceCounter_C*> ResourceWidgets;                                          // 0x0228(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               IsDesignTime;                                             // 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ITM_TopBar_Resources.ITM_TopBar_Resources_C");
		return ptr;
	}


	void AddResource(class UResourceData* InResource, bool InHideWhenZero);
	void SetResources(TArray<class UResourceData*>* InResources);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
	void ExecuteUbergraph_ITM_TopBar_Resources(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
