#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_Spider_Tank_Boss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C
// 0x0010 (0x047C - 0x046C)
class AAIC_Spider_Tank_Boss_C : public AAIC_Spider_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              NewVar_1;                                                 // 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AIC_Spider_Tank_Boss.AIC_Spider_Tank_Boss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Speed_Changer();
	void OnArmorDestroyed(float EnrageDuration);
	void OnPossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_Spider_Tank_Boss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
