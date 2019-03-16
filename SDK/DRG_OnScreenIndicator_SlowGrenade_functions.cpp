// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_SlowGrenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_SlowGrenade.OnScreenIndicator_SlowGrenade_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_SlowGrenade_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SlowGrenade.OnScreenIndicator_SlowGrenade_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_SlowGrenade.OnScreenIndicator_SlowGrenade_C.ExecuteUbergraph_OnScreenIndicator_SlowGrenade
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_SlowGrenade_C::ExecuteUbergraph_OnScreenIndicator_SlowGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_SlowGrenade.OnScreenIndicator_SlowGrenade_C.ExecuteUbergraph_OnScreenIndicator_SlowGrenade");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
