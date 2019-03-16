// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_Donkey_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_Donkey.AIC_Donkey_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_Donkey_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Donkey.AIC_Donkey_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIC_Donkey_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Donkey.AIC_Donkey_C.OnOverlapsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            OverlapCount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Donkey_C::OnOverlapsChanged(int OverlapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.OnOverlapsChanged");

	struct
	{
		int                            OverlapCount;
	} params;

	params.OverlapCount = OverlapCount;

	UObject::ProcessEvent(fn, &params);
}


// Function AIC_Donkey.AIC_Donkey_C.ExecuteUbergraph_AIC_Donkey
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_Donkey_C::ExecuteUbergraph_AIC_Donkey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_Donkey.AIC_Donkey_C.ExecuteUbergraph_AIC_Donkey");

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
