#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_NetworkPlayGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C
// 0x000F (0x05D0 - 0x05C1)
class ABP_NetworkPlayGameMode_C : public ABP_GameMode_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x05C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C");
		return ptr;
	}


	bool PlayersAreReady();
	class UClass* GetDefaultPawnClassForController(class AController* InController);
	void UserConstructionScript();
	void RecieveAllDwarvesDown();
	void ExecuteUbergraph_BP_NetworkPlayGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
