// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_Spider_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Spider.ABP_Spider_C.AnimNotify_Hide
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UABP_Spider_C::AnimNotify_Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Spider.ABP_Spider_C.AnimNotify_Hide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ABP_Spider.ABP_Spider_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UABP_Spider_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Spider.ABP_Spider_C.BlueprintInitializeAnimation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ABP_Spider.ABP_Spider_C.ExecuteUbergraph_ABP_Spider
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_Spider_C::ExecuteUbergraph_ABP_Spider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Spider.ABP_Spider_C.ExecuteUbergraph_ABP_Spider");

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
