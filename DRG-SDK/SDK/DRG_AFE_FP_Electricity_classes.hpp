#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AFE_FP_Electricity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AFE_FP_Electricity.AFE_FP_Electricity_C
// 0x0008 (0x0030 - 0x0028)
class UAFE_FP_Electricity_C : public UAfflictionEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass AFE_FP_Electricity.AFE_FP_Electricity_C");
		return ptr;
	}


	void ReceiveBeginEffect(class UPawnAfflictionComponent* Target);
	void ReceiveEndEffect(class UPawnAfflictionComponent* Target);
	void ExecuteUbergraph_AFE_FP_Electricity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
