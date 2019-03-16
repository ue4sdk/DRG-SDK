// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_ConsoleMemorialLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UConsoleScreenMemorialWall_C* NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_ConsoleMemorialLine_C::AddBoard(class UConsoleScreenMemorialWall_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.AddBoard");

	struct
	{
		class UConsoleScreenMemorialWall_C* NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ConsoleMemorialLine_C::SetSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetSpeed");

	struct
	{
		float                          Speed;
	} params;

	params.Speed = Speed;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UUI_ConsoleMemorialLine_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.SetText");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_ConsoleMemorialLine_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.BndEvt__Move_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UUI_ConsoleMemorialLine_C::BndEvt__Move_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.BndEvt__Move_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_ConsoleMemorialLine_C::ExecuteUbergraph_UI_ConsoleMemorialLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ConsoleMemorialLine.UI_ConsoleMemorialLine_C.ExecuteUbergraph_UI_ConsoleMemorialLine");

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
