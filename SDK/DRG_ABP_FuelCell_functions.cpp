// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ABP_FuelCell_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_FuelCell_C::SetBuildProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FuelCell.ABP_FuelCell_C.SetBuildProgress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_FuelCell_C::SetDefendProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FuelCell.ABP_FuelCell_C.SetDefendProgress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UABP_FuelCell_C::ExecuteUbergraph_ABP_FuelCell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_FuelCell.ABP_FuelCell_C.ExecuteUbergraph_ABP_FuelCell");

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
