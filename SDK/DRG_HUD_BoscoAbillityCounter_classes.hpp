#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_BoscoAbillityCounter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C
// 0x0021 (0x0249 - 0x0228)
class UHUD_BoscoAbillityCounter_C : public UFSDUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UHorizontalBox*                              FlareBox;                                                 // 0x0230(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<class UHUD_BoscoAbillityIcon_C*>            Icons;                                                    // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	bool                                               Loaded;                                                   // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C");
		return ptr;
	}


	void CreateIcons(int IconCount);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnItemsLoaded();
	void OnAbillityChargeProgress(float aProgress, int aNextIndex);
	void OnBoscoChanged(class ABosco* Bosco);
	void ExecuteUbergraph_HUD_BoscoAbillityCounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
