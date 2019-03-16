#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_GM_Mining_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GM_Mining.GM_Mining_C
// 0x0008 (0x05D8 - 0x05D0)
class AGM_Mining_C : public ABP_NetworkPlayGameMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass GM_Mining.GM_Mining_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ObjectivesManager_K2Node_ComponentBoundEvent_0_DelegateEvent__DelegateSignature();
	void DonkeyButtonPressed();
	void ExecuteUbergraph_GM_Mining(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
