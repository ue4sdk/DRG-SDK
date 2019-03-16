// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_MissionStat_PreviewItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UMissionStat*            MissionStat                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::SetMissionStat(class UMissionStat* MissionStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.SetMissionStat");

	struct
	{
		class UMissionStat*            MissionStat;
	} params;

	params.MissionStat = MissionStat;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_MissionStat_PreviewItem_C::ExecuteUbergraph_UI_MissionStat_PreviewItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MissionStat_PreviewItem.UI_MissionStat_PreviewItem_C.ExecuteUbergraph_UI_MissionStat_PreviewItem");

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
