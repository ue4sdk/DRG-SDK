// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_AIC_MiniMule_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIC_MiniMule.AIC_MiniMule_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_MiniMule_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_MiniMule.AIC_MiniMule_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void AAIC_MiniMule_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_MiniMule.AIC_MiniMule_C.CustomEvent_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAIC_MiniMule_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.CustomEvent_1");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function AIC_MiniMule.AIC_MiniMule_C.ExecuteUbergraph_AIC_MiniMule
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAIC_MiniMule_C::ExecuteUbergraph_AIC_MiniMule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIC_MiniMule.AIC_MiniMule_C.ExecuteUbergraph_AIC_MiniMule");

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
