// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_APB_Uplink_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APB_Uplink.APB_Uplink_C.SetProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAPB_Uplink_C::SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function APB_Uplink.APB_Uplink_C.SetProgress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function APB_Uplink.APB_Uplink_C.ExecuteUbergraph_APB_Uplink
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAPB_Uplink_C::ExecuteUbergraph_APB_Uplink(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APB_Uplink.APB_Uplink_C.ExecuteUbergraph_APB_Uplink");

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
