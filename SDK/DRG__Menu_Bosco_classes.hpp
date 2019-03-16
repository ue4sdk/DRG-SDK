#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__Menu_Bosco_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass _Menu_Bosco._Menu_Bosco_C
// 0x0016 (0x0328 - 0x0312)
class U_Menu_Bosco_C : public UMENU_UpgradeScreen_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0312(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWND_JobsEntry_C*                            LastUnfolded;                                             // 0x0320(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass _Menu_Bosco._Menu_Bosco_C");
		return ptr;
	}


	void OnShown();
	void ExecuteUbergraph__Menu_Bosco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
