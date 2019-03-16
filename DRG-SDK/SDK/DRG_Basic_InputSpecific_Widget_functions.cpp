// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_InputSpecific_Widget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBasic_InputSpecific_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.OnInputSourceChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EInputSource                   InputSource                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_InputSpecific_Widget_C::OnInputSourceChanged(EInputSource InputSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.OnInputSourceChanged");

	struct
	{
		EInputSource                   InputSource;
	} params;

	params.InputSource = InputSource;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.ExecuteUbergraph_Basic_InputSpecific_Widget
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_InputSpecific_Widget_C::ExecuteUbergraph_Basic_InputSpecific_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_InputSpecific_Widget.Basic_InputSpecific_Widget_C.ExecuteUbergraph_Basic_InputSpecific_Widget");

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
