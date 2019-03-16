// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HoopsScore_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoopsScore_Widget.HoopsScore_Widget_C.SetScore
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Score                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHoopsScore_Widget_C::SetScore(int Score)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoopsScore_Widget.HoopsScore_Widget_C.SetScore");

	struct
	{
		int                            Score;
	} params;

	params.Score = Score;

	UObject::ProcessEvent(fn, &params);
}


// Function HoopsScore_Widget.HoopsScore_Widget_C.ExecuteUbergraph_HoopsScore_Widget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHoopsScore_Widget_C::ExecuteUbergraph_HoopsScore_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoopsScore_Widget.HoopsScore_Widget_C.ExecuteUbergraph_HoopsScore_Widget");

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
