// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TOOLTIP_ServerWorkEnvironment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetCampaignAssignment
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CampaignRequirement            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerWorkEnvironment_C::SetCampaignAssignment(class UClass* CampaignRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.SetCampaignAssignment");

	struct
	{
		class UClass*                  CampaignRequirement;
	} params;

	params.CampaignRequirement = CampaignRequirement;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerWorkEnvironment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerWorkEnvironment_C::ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerWorkEnvironment.TOOLTIP_ServerWorkEnvironment_C.ExecuteUbergraph_TOOLTIP_ServerWorkEnvironment");

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
