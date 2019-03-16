// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_NetworkGameSpectator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkGameSpectator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_NetworkGameSpectator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.OnBack
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkGameSpectator_C::OnBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.OnBack");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_NetworkGameSpectator_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ShowLoadingScreen
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkGameSpectator_C::ShowLoadingScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ShowLoadingScreen");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ShowCharacterSelection
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkGameSpectator_C::ShowCharacterSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ShowCharacterSelection");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ExecuteUbergraph_BP_NetworkGameSpectator
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkGameSpectator_C::ExecuteUbergraph_BP_NetworkGameSpectator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkGameSpectator.BP_NetworkGameSpectator_C.ExecuteUbergraph_BP_NetworkGameSpectator");

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
