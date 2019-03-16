#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Objective_BASE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Objective_BASE.Objective_BASE_C
// 0x0010 (0x0218 - 0x0208)
class UObjective_BASE_C : public UUserWidget
{
public:
	struct FLinearColor                                CompletedColor;                                           // 0x0208(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass Objective_BASE.Objective_BASE_C");
		return ptr;
	}


	void InitObjective(class UObjective* Objective);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
