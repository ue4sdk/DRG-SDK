// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_MissionIconBasic_Locked_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconBasic_Locked_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconBasic_Locked_C::ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconBasic_Locked.ITM_MisSel_MissionIconBasic_Locked_C.ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked");

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
