// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_CampaignProgress_NoBrackets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_NoBrackets_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_CampaignProgress_NoBrackets_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_NoBrackets_C::Update_Campaign(class UCampaign* Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Update_Campaign");

	struct
	{
		class UCampaign*               Campaign;
	} params;

	params.Campaign = Campaign;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_CampaignProgress_NoBrackets_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignProgress_NoBrackets_C::ExecuteUbergraph_ITM_CampaignProgress_NoBrackets(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignProgress_NoBrackets.ITM_CampaignProgress_NoBrackets_C.ExecuteUbergraph_ITM_CampaignProgress_NoBrackets");

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
