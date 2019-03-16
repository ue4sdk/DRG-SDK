#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_FrozenState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C
// 0x0008 (0x0158 - 0x0150)
class UBP_FrozenState_C : public UFrozenStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0150(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FrozenState.BP_FrozenState_C");
		return ptr;
	}


	void ReceiveStateEnter();
	void ReceiveStateExit();
	void ReceiveOnDefrosting();
	void ExecuteUbergraph_BP_FrozenState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
