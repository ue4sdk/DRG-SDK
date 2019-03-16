#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_VolumeSlider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_VolumeSlider.Options_VolumeSlider_C
// 0x0011 (0x0219 - 0x0208)
class UOptions_VolumeSlider_C : public USoundClassWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBasic_Slider_C*                             Basic_Slider;                                             // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	EVolumeType                                        volumeType;                                               // 0x0218(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass Options_VolumeSlider.Options_VolumeSlider_C");
		return ptr;
	}


	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Basic_Slider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float Value);
	void UINeedsUpdate();
	void Update_Percentage_Text();
	void ExecuteUbergraph_Options_VolumeSlider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
