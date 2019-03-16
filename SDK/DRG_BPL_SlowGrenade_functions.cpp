// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BPL_SlowGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPL_SlowGrenade.BPL_SlowGrenade_C.GetUpgradedValue
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           HasWeakening                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBPL_SlowGrenade_C::GetUpgradedValue(class UClass* Item, class AFSDPlayerState* Player, class UObject* __WorldContext, bool* HasWeakening)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPL_SlowGrenade.BPL_SlowGrenade_C.GetUpgradedValue");

	struct
	{
		class UClass*                  Item;
		class AFSDPlayerState*         Player;
		class UObject*                 __WorldContext;
		bool                           HasWeakening;
	} params;

	params.Item = Item;
	params.Player = Player;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (HasWeakening != nullptr)
		*HasWeakening = params.HasWeakening;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
