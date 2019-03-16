// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SlowGrenade_Upgrade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SlowGrenade_Upgrade.BP_SlowGrenade_Upgrade_C.AddToItem
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class AActor*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_SlowGrenade_Upgrade_C::AddToItem(class AActor* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlowGrenade_Upgrade.BP_SlowGrenade_Upgrade_C.AddToItem");

	struct
	{
		class AActor*                  Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
