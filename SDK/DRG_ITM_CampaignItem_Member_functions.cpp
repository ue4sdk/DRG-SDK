// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_CampaignItem_Member_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_CampaignItem_Member_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.ExecuteUbergraph_ITM_CampaignItem_Member
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_CampaignItem_Member_C::ExecuteUbergraph_ITM_CampaignItem_Member(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_CampaignItem_Member.ITM_CampaignItem_Member_C.ExecuteUbergraph_ITM_CampaignItem_Member");

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
