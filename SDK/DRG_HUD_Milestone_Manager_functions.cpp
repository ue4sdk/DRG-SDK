// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Milestone_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Milestone_Manager_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Milestone_Manager_C::OnMilestoneReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.OnMilestoneReached");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Milestone_Manager_C::ExecuteUbergraph_HUD_Milestone_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Milestone_Manager.HUD_Milestone_Manager_C.ExecuteUbergraph_HUD_Milestone_Manager");

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
