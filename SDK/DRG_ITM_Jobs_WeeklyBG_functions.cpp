// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Jobs_WeeklyBG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Jobs_WeeklyBG_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.ExecuteUbergraph_ITM_Jobs_WeeklyBG
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Jobs_WeeklyBG_C::ExecuteUbergraph_ITM_Jobs_WeeklyBG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Jobs_WeeklyBG.ITM_Jobs_WeeklyBG_C.ExecuteUbergraph_ITM_Jobs_WeeklyBG");

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
