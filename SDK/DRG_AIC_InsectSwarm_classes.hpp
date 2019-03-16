#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_InsectSwarm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_InsectSwarm.AIC_InsectSwarm_C
// 0x0010 (0x0460 - 0x0450)
class AAIC_InsectSwarm_C : public AFSDAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       IsAlertedKey;                                             // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIC_InsectSwarm.AIC_InsectSwarm_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_InsectSwarm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
