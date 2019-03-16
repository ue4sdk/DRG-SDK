// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Donkey_BreadCrumb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADonkey_BreadCrumb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ADonkey_BreadCrumb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ADonkey_BreadCrumb_C::Blink()
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.Blink");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADonkey_BreadCrumb_C::ExecuteUbergraph_Donkey_BreadCrumb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Donkey_BreadCrumb.Donkey_BreadCrumb_C.ExecuteUbergraph_Donkey_BreadCrumb");

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
