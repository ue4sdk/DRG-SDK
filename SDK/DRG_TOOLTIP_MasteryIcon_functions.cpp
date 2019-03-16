// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TOOLTIP_MasteryIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UUnlockReward*>   Array                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UTOOLTIP_MasteryIcon_C::SetUnlocks(TArray<class UUnlockReward*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.SetUnlocks");

	struct
	{
		TArray<class UUnlockReward*>   Array;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Array != nullptr)
		*Array = params.Array;
}


// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_MasteryIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_MasteryIcon_C::ExecuteUbergraph_TOOLTIP_MasteryIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_MasteryIcon.TOOLTIP_MasteryIcon_C.ExecuteUbergraph_TOOLTIP_MasteryIcon");

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
