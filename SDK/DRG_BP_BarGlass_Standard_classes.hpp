#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_BarGlass_Standard_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BarGlass_Standard.BP_BarGlass_Standard_C
// 0x0014 (0x0370 - 0x035C)
class ABP_BarGlass_Standard_C : public ABP_BarGlass_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0368(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_BarGlass_Standard.BP_BarGlass_Standard_C");
		return ptr;
	}


	void UserConstructionScript();
	void Fill();
	void ExecuteUbergraph_BP_BarGlass_Standard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
