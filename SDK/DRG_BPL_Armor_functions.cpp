// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BPL_Armor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPL_Armor.BPL_Armor_C.AddBaseArmorStats
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FGearStatEntry>  Stats                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UClass*                  armorClass                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_Armor_C::AddBaseArmorStats(class AFSDPlayerState* Player, class UClass* armorClass, class UObject* __WorldContext, TArray<struct FGearStatEntry>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_Armor.BPL_Armor_C.AddBaseArmorStats");

	struct
	{
		class AFSDPlayerState*         Player;
		TArray<struct FGearStatEntry>  Stats;
		class UClass*                  armorClass;
		class UObject*                 __WorldContext;
	} params;

	params.Player = Player;
	params.armorClass = armorClass;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Stats != nullptr)
		*Stats = params.Stats;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
