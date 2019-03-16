// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_CountDownWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CountDownWidget.BP_CountDownWidget_C.UpdateDepthText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_CountDownWidget_C::UpdateDepthText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.UpdateDepthText");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Progress                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_CountDownWidget_C::SetProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.SetProgress");

	struct
	{
		float                          Progress;
	} params;

	params.Progress = Progress;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_CountDownWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CountDownWidget.BP_CountDownWidget_C.ExecuteUbergraph_BP_CountDownWidget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_CountDownWidget_C::ExecuteUbergraph_BP_CountDownWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CountDownWidget.BP_CountDownWidget_C.ExecuteUbergraph_BP_CountDownWidget");

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
