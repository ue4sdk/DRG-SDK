#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Jobs_Entry_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C
// 0x0028 (0x0230 - 0x0208)
class UWND_Jobs_Entry_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FScriptMulticastDelegate                    Unfolded;                                                 // 0x0210(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Updated;                                                  // 0x0220(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C");
		return ptr;
	}


	void Fold();
	void SetData(class UCampaign* Campaign);
	void Refresh();
	void ExecuteUbergraph_WND_Jobs_Entry_Base(int EntryPoint);
	void Updated__DelegateSignature();
	void Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C* entry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
