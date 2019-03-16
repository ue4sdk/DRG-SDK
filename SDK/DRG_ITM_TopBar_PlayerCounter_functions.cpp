// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TopBar_PlayerCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.SetFilled
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFilled                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerCounter_C::SetFilled(bool IsFilled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.SetFilled");

	struct
	{
		bool                           IsFilled;
	} params;

	params.IsFilled = IsFilled;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerCounter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_PlayerCounter_C::ExecuteUbergraph_ITM_TopBar_PlayerCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_PlayerCounter.ITM_TopBar_PlayerCounter_C.ExecuteUbergraph_ITM_TopBar_PlayerCounter");

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
