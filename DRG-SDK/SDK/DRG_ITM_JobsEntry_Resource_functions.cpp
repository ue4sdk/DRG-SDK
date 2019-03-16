// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_JobsEntry_Resource_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_JobsEntry_Resource_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            RequiredLevel                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_JobsEntry_Resource_C::SetData(int RequiredLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.SetData");

	struct
	{
		int                            RequiredLevel;
	} params;

	params.RequiredLevel = RequiredLevel;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_JobsEntry_Resource_C::ExecuteUbergraph_ITM_JobsEntry_Resource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_JobsEntry_Resource.ITM_JobsEntry_Resource_C.ExecuteUbergraph_ITM_JobsEntry_Resource");

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
