// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_CabinOwnerSign_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void ABP_CabinOwnerSign_C::SetPlayerName(struct FText* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetPlayerName");

	struct
	{
		struct FText                   Value;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_CabinOwnerSign_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CabinOwnerSign_C::SetCabinOwner(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.SetCabinOwner");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void ABP_CabinOwnerSign_C::ChangeName(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ChangeName");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_CabinOwnerSign_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_CabinOwnerSign_C::ExecuteUbergraph_BP_CabinOwnerSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CabinOwnerSign.BP_CabinOwnerSign_C.ExecuteUbergraph_BP_CabinOwnerSign");

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
