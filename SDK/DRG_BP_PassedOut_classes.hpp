#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PassedOut_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
// 0x0039 (0x0171 - 0x0138)
class UBP_PassedOut_C : public UPassedOutStateComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FTransform                                  Start_Transform;                                          // 0x0140(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               WakeInBed;                                                // 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C");
		return ptr;
	}


	void AllPassedOut(bool* AllPassedOut);
	void ReceiveBeginPlay();
	void BeginFadeToBlack();
	void ReceiveStateEnter();
	void ReceiveStateExit();
	void Turn_Off_Juke_Box();
	void Remove_Drinking_Mugs();
	void ReceiveTeamPassedOut();
	void ExecuteUbergraph_BP_PassedOut(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
