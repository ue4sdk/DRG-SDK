// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_SpectatorBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpectatorBase.BP_SpectatorBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_SpectatorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_SpectatorBase_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_SpectatorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_SpectatorBase.BP_SpectatorBase_C.ExecuteUbergraph_BP_SpectatorBase
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_SpectatorBase_C::ExecuteUbergraph_BP_SpectatorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpectatorBase.BP_SpectatorBase_C.ExecuteUbergraph_BP_SpectatorBase");

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
