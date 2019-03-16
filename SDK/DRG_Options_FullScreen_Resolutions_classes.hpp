#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Options_FullScreen_Resolutions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C
// 0x0010 (0x0218 - 0x0208)
class UOptions_FullScreen_Resolutions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBasic_OptionSwitcher_C*                     Basic_OptionSwitcher;                                     // 0x0210(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass Options_FullScreen_Resolutions.Options_FullScreen_Resolutions_C");
		return ptr;
	}


	bool ShouldResolutionBeEnabled(class UFSDGameUserSettings* usersettings);
	void StringToRes(const struct FString& String, struct FIntPoint* IntPoint);
	void ResToString(struct FIntPoint* IntPoint, struct FString* String);
	void Construct();
	void UINeedsUpdate();
	void ShowUI();
	void BndEvt__Basic_OptionSwitcher_K2Node_ComponentBoundEvent_20_OnSelectionChanged__DelegateSignature(const struct FText& Value, int Index);
	void ExecuteUbergraph_Options_FullScreen_Resolutions(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
