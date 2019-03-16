#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_FullBiome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C
// 0x0020 (0x0228 - 0x0208)
class UITM_MisSel_FullBiome_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UOverlay*                                    Overlay_1;                                                // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UBiome*                                      Biome;                                                    // 0x0218(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UITM_MisSel_BiomeBase_C*                     BiomeMapWidget;                                           // 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass ITM_MisSel_FullBiome.ITM_MisSel_FullBiome_C");
		return ptr;
	}


	void GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C** Output);
	void ClearMissions();
	void GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>* Items1);
	void Construct();
	void SetData(TArray<class UGeneratedMission*> missions, class UBiome* Biome);
	void BndEvt__Button_BG_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ITM_MisSel_FullBiome(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
