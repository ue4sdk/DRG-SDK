// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Biome_ToolTip_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Biome_ToolTip.Biome_ToolTip_C.SetData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           ResourceA                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UResourceData*           ResourceB                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBiome_ToolTip_C::SetData(class UResourceData* ResourceA, class UResourceData* ResourceB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.SetData");

	struct
	{
		class UResourceData*           ResourceA;
		class UResourceData*           ResourceB;
	} params;

	params.ResourceA = ResourceA;
	params.ResourceB = ResourceB;

	UObject::ProcessEvent(fn, &params);
}


// Function Biome_ToolTip.Biome_ToolTip_C.SetPostionAndAlignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InPosition                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               InAlignment                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBiome_ToolTip_C::SetPostionAndAlignment(const struct FVector2D& InPosition, const struct FVector2D& InAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.SetPostionAndAlignment");

	struct
	{
		struct FVector2D               InPosition;
		struct FVector2D               InAlignment;
	} params;

	params.InPosition = InPosition;
	params.InAlignment = InAlignment;

	UObject::ProcessEvent(fn, &params);
}


// Function Biome_ToolTip.Biome_ToolTip_C.SetTarget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Target_Widget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBiome_ToolTip_C::SetTarget(class UWidget* Target_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.SetTarget");

	struct
	{
		class UWidget*                 Target_Widget;
	} params;

	params.Target_Widget = Target_Widget;

	UObject::ProcessEvent(fn, &params);
}


// Function Biome_ToolTip.Biome_ToolTip_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBiome_ToolTip_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Biome_ToolTip.Biome_ToolTip_C.Set Tool Tip Owner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Owner                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBiome_ToolTip_C::Set_Tool_Tip_Owner(class UWidget* Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.Set Tool Tip Owner");

	struct
	{
		class UWidget*                 Owner;
	} params;

	params.Owner = Owner;

	UObject::ProcessEvent(fn, &params);
}


// Function Biome_ToolTip.Biome_ToolTip_C.ExecuteUbergraph_Biome_ToolTip
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBiome_ToolTip_C::ExecuteUbergraph_Biome_ToolTip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Biome_ToolTip.Biome_ToolTip_C.ExecuteUbergraph_Biome_ToolTip");

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
