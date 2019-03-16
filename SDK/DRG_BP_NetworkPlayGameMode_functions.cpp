// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_NetworkPlayGameMode_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.PlayersAreReady
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ABP_NetworkPlayGameMode_C::PlayersAreReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.PlayersAreReady");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AController*             InController                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UClass* ABP_NetworkPlayGameMode_C::GetDefaultPawnClassForController(class AController* InController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController");

	struct
	{
		class AController*             InController;
		class UClass*                  ReturnValue;
	} params;

	params.InController = InController;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_NetworkPlayGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_NetworkPlayGameMode_C::RecieveAllDwarvesDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_NetworkPlayGameMode_C::ExecuteUbergraph_BP_NetworkPlayGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode");

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
