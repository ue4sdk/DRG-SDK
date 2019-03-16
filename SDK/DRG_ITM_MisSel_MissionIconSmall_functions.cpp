// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_MissionIconSmall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconSmall_C::SetData(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.SetData");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
// (FUNC_BlueprintEvent)

void UITM_MisSel_MissionIconSmall_C::BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.BndEvt__ITEM_MissionSelection_MissionIconBasic_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.ExecuteUbergraph_ITM_MisSel_MissionIconSmall
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_MissionIconSmall_C::ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_MissionIconSmall.ITM_MisSel_MissionIconSmall_C.ExecuteUbergraph_ITM_MisSel_MissionIconSmall");

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
