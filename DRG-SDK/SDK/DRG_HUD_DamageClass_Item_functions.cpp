// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_DamageClass_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_DamageClass_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_DamageClass_Item_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Deactivate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_DamageClass_Item_C::ExecuteUbergraph_HUD_DamageClass_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.ExecuteUbergraph_HUD_DamageClass_Item");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHUD_DamageClass_Item_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_DamageClass_Item_C::Elapsed__DelegateSignature(class UHUD_DamageClass_Item_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_DamageClass_Item.HUD_DamageClass_Item_C.Elapsed__DelegateSignature");

	struct
	{
		class UHUD_DamageClass_Item_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
