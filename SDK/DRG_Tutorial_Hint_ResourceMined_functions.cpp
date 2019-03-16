// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_ResourceMined_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.OnIncreased_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_ResourceMined_C::OnIncreased_Event(class UCappedResource* Resource, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.OnIncreased_Event");

	struct
	{
		class UCappedResource*         Resource;
		float                          Amount;
	} params;

	params.Resource = Resource;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.ReceiveOnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_ResourceMined_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.ReceiveOnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.ExecuteUbergraph_Tutorial_Hint_ResourceMined
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_ResourceMined_C::ExecuteUbergraph_Tutorial_Hint_ResourceMined(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_ResourceMined.Tutorial_Hint_ResourceMined_C.ExecuteUbergraph_Tutorial_Hint_ResourceMined");

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
