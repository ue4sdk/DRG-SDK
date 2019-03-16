// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPodScreenTextWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FSlateColor             InColorAndOpacity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_DropPodScreenTextWidget_C::SetColor(const struct FSlateColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetColor");

	struct
	{
		struct FSlateColor             InColorAndOpacity;
	} params;

	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetText
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_DropPodScreenTextWidget_C::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.SetText");

	struct
	{
		struct FText                   InText;
	} params;

	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DropPodScreenTextWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenTextWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.ExecuteUbergraph_BP_DropPodScreenTextWidget
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenTextWidget_C::ExecuteUbergraph_BP_DropPodScreenTextWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenTextWidget.BP_DropPodScreenTextWidget_C.ExecuteUbergraph_BP_DropPodScreenTextWidget");

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
