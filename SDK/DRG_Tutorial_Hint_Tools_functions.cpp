// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_Tools_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_Tools.Tutorial_Hint_Tools_C.ReceiveOnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_Tools_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Tools.Tutorial_Hint_Tools_C.ReceiveOnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_Tools.Tutorial_Hint_Tools_C.ExecuteUbergraph_Tutorial_Hint_Tools
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_Tools_C::ExecuteUbergraph_Tutorial_Hint_Tools(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_Tools.Tutorial_Hint_Tools_C.ExecuteUbergraph_Tutorial_Hint_Tools");

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
