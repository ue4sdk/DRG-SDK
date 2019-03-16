// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MissionMap_Icon_BG_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionMap_Icon_BG_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionMap_Icon_BG_C::ExecuteUbergraph_ITM_MissionMap_Icon_BG(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMap_Icon_BG.ITM_MissionMap_Icon_BG_C.ExecuteUbergraph_ITM_MissionMap_Icon_BG");

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
