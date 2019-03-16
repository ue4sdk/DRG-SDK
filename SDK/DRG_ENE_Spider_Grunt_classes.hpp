#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Grunt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ENE_Spider_Grunt.ENE_Spider_Grunt_C
// 0x001E (0x0580 - 0x0562)
class AENE_Spider_Grunt_C : public AENE_SpiderBase_Large_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USimpleArmorDamageComponent*                 SimpleArmorDamage;                                        // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass ENE_Spider_Grunt.ENE_Spider_Grunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnRagdoll();
	void ExecuteUbergraph_ENE_Spider_Grunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
