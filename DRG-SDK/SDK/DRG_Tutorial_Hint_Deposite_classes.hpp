#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_Deposite_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C
// 0x0008 (0x0188 - 0x0180)
class UTutorial_Hint_Deposite_C : public UTutorialHintComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0180(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass Tutorial_Hint_Deposite.Tutorial_Hint_Deposite_C");
		return ptr;
	}


	void OnResourceFull(class UCappedResource* Resource);
	void OnResourceChanged(class UCappedResource* Resource, float Amount);
	void OnCallDonkey();
	void ReceiveOnInitialized();
	void ExecuteUbergraph_Tutorial_Hint_Deposite(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
