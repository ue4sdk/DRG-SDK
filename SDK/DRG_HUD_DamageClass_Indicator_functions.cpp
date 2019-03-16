// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_DamageClass_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPawnAffliction*         affliction                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UHUD_DamageClass_Item_C* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UHUD_DamageClass_Item_C* UHUD_DamageClass_Indicator_C::CreateIcon(class UPawnAffliction* affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.CreateIcon");

	struct
	{
		class UPawnAffliction*         affliction;
		class UHUD_DamageClass_Item_C* ReturnValue;
	} params;

	params.affliction = affliction;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_DamageClass_Indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPawnAffliction*         affliction                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DamageClass_Indicator_C::OnAfflictionActivated(class UPawnAffliction* affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionActivated");

	struct
	{
		class UPawnAffliction*         affliction;
	} params;

	params.affliction = affliction;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPawnAffliction*         affliction                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DamageClass_Indicator_C::OnAfflictionDeactivated(class UPawnAffliction* affliction)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.OnAfflictionDeactivated");

	struct
	{
		class UPawnAffliction*         affliction;
	} params;

	params.affliction = affliction;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUD_DamageClass_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_DamageClass_Indicator_C::Elapsed(class UHUD_DamageClass_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.Elapsed");

	struct
	{
		class UHUD_DamageClass_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DamageClass_Indicator_C::ExecuteUbergraph_HUD_DamageClass_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Indicator.HUD_DamageClass_Indicator_C.ExecuteUbergraph_HUD_DamageClass_Indicator");

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
