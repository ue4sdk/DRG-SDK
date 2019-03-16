#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpacerigSpectator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpacerigSpectator.BP_SpacerigSpectator_C
// 0x0008 (0x03B8 - 0x03B0)
class ABP_SpacerigSpectator_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_SpacerigSpectator.BP_SpacerigSpectator_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpacerigSpectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
