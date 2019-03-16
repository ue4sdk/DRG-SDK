// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_UsableItem_Simple_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnScreenIndicator_UsableItem_Simple_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AItem*                   Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::OnItemEquipped(class AItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnItemEquipped");

	struct
	{
		class AItem*                   Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::OnVisibilityChanged(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.OnVisibilityChanged");

	struct
	{
		bool                           IsVisible;
	} params;

	params.IsVisible = IsVisible;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_UsableItem_Simple_C::ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_UsableItem_Simple.OnScreenIndicator_UsableItem_Simple_C.ExecuteUbergraph_OnScreenIndicator_UsableItem_Simple");

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
