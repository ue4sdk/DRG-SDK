// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BarGlass_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::OnRep_IsFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.OnRep_IsFull");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AITM_BarGlass_Item_C::CheckCanSalute()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.CheckCanSalute");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsDrinking                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_BarGlass_Item_C::IsDrinking(bool* IsDrinking)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.IsDrinking");

	struct
	{
		bool                           IsDrinking;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsDrinking != nullptr)
		*IsDrinking = params.IsDrinking;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AITM_BarGlass_Item_C::PlayThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayThrow");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AITM_BarGlass_Item_C::PlayDrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.PlayDrink");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::RecieveStartUsing()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.RecieveStartUsing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use
// (FUNC_Net, FUNC_NetReliable, FUNC_NetServer, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::Server_Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.Server_Use");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::All_Drink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Drink");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::All_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.All_Throw");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.DropItem
// (FUNC_Net, FUNC_NetReliable, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::DropItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.DropItem");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_C::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.SetEmpty");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_BarGlass_Item_C::ExecuteUbergraph_ITM_BarGlass_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item.ITM_BarGlass_Item_C.ExecuteUbergraph_ITM_BarGlass_Item");

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
