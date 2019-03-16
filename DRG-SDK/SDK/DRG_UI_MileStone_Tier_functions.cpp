// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_MileStone_Tier_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UUI_Milestone_Tier_C::InitTierImage(class UImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.InitTierImage");

	struct
	{
		class UImage*                  Image;
	} params;

	params.Image = Image;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Tier                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Tier_C::Set_Tier(int Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.Set Tier");

	struct
	{
		int                            Tier;
	} params;

	params.Tier = Tier;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Tier_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_Milestone_Tier_C::ExecuteUbergraph_UI_Milestone_Tier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MileStone_Tier.UI_Milestone_Tier_C.ExecuteUbergraph_UI_Milestone_Tier");

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
