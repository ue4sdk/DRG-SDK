// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Jobs_Entry_Weekly_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Updated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Updated_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Updated_Event_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWND_Jobs_Entry_Base_C*  entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWND_Jobs_Entry_Weekly_C::CustomEvent_1(class UWND_Jobs_Entry_Base_C* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.CustomEvent_1");

	struct
	{
		class UWND_Jobs_Entry_Base_C*  entry;
	} params;

	params.entry = entry;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Fold
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Fold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Fold");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Jobs_Entry_Weekly_C::SetData(class UCampaign* Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.SetData");

	struct
	{
		class UCampaign*               Campaign;
	} params;

	params.Campaign = Campaign;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Weekly_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.ExecuteUbergraph_WND_Jobs_Entry_Weekly
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Jobs_Entry_Weekly_C::ExecuteUbergraph_WND_Jobs_Entry_Weekly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Weekly.WND_Jobs_Entry_Weekly_C.ExecuteUbergraph_WND_Jobs_Entry_Weekly");

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
