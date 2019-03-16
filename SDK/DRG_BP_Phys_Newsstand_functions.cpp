// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Phys_Newsstand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Phys_Newsstand.BP_Phys_Newsstand_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_Phys_Newsstand_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand.BP_Phys_Newsstand_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_Phys_Newsstand.BP_Phys_Newsstand_C.ExecuteUbergraph_BP_Phys_Newsstand
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_Phys_Newsstand_C::ExecuteUbergraph_BP_Phys_Newsstand(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Phys_Newsstand.BP_Phys_Newsstand_C.ExecuteUbergraph_BP_Phys_Newsstand");

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
