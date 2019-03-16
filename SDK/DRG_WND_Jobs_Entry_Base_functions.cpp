// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_Jobs_Entry_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Fold()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Fold");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCampaign*               Campaign                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Jobs_Entry_Base_C::SetData(class UCampaign* Campaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.SetData");

	struct
	{
		class UCampaign*               Campaign;
	} params;

	params.Campaign = Campaign;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Refresh");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_Jobs_Entry_Base_C::ExecuteUbergraph_WND_Jobs_Entry_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.ExecuteUbergraph_WND_Jobs_Entry_Base");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWND_Jobs_Entry_Base_C::Updated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Updated__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWND_Jobs_Entry_Base_C*  entry                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UWND_Jobs_Entry_Base_C::Unfolded__DelegateSignature(class UWND_Jobs_Entry_Base_C* entry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_Jobs_Entry_Base.WND_Jobs_Entry_Base_C.Unfolded__DelegateSignature");

	struct
	{
		class UWND_Jobs_Entry_Base_C*  entry;
	} params;

	params.entry = entry;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
