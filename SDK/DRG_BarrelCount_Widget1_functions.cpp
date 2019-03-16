// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BarrelCount_Widget1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BarrelCount_Widget1.BarrelCount_Widget1_C.SetScore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBarrelCount_Widget1_C::SetScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarrelCount_Widget1.BarrelCount_Widget1_C.SetScore");

	struct
	{
		int                            Score;
	} params;

	params.Score = Score;

	UObject::ProcessEvent(fn, &params);
}


// Function BarrelCount_Widget1.BarrelCount_Widget1_C.ExecuteUbergraph_BarrelCount_Widget1
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBarrelCount_Widget1_C::ExecuteUbergraph_BarrelCount_Widget1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BarrelCount_Widget1.BarrelCount_Widget1_C.ExecuteUbergraph_BarrelCount_Widget1");

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
