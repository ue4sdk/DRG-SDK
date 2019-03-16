// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_Cursor_Mouse_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnHover
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_Cursor_Mouse_C::OnHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnHover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnUnhover
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UUI_Cursor_Mouse_C::OnUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.OnUnhover");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.ExecuteUbergraph_UI_Cursor_Mouse
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Cursor_Mouse_C::ExecuteUbergraph_UI_Cursor_Mouse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Cursor_Mouse.UI_Cursor_Mouse_C.ExecuteUbergraph_UI_Cursor_Mouse");

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
