#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_EVENT_DropPodDefense_Refuel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C
// 0x0008 (0x0430 - 0x0428)
class AEVENT_DropPodDefense_Refuel_C : public AEVENT_DropPodDefense_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass EVENT_DropPodDefense_Refuel.EVENT_DropPodDefense_Refuel_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventSucceded();
	void EventFailed();
	void ExecuteUbergraph_EVENT_DropPodDefense_Refuel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
