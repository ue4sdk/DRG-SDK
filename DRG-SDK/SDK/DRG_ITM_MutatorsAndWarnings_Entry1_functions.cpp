// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MutatorsAndWarnings_Entry1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MutatorsAndWarnings_Entry1_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_MutatorsAndWarnings_Entry1_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MutatorsAndWarnings_Entry1_C::ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MutatorsAndWarnings_Entry1.ITM_MutatorsAndWarnings_Entry1_C.ExecuteUbergraph_ITM_MutatorsAndWarnings_Entry1");

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
