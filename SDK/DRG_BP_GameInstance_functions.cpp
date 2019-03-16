// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_GameInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           EligibleForRetirementAssignment (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GameInstance_C::IsEligibleForRetirementAassignment(bool* EligibleForRetirementAssignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.IsEligibleForRetirementAassignment");

	struct
	{
		bool                           EligibleForRetirementAssignment;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (EligibleForRetirementAssignment != nullptr)
		*EligibleForRetirementAssignment = params.EligibleForRetirementAssignment;
}


// Function BP_GameInstance.BP_GameInstance_C.SetEligibleForRetirementAssignment
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsEligible                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GameInstance_C::SetEligibleForRetirementAssignment(bool IsEligible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.SetEligibleForRetirementAssignment");

	struct
	{
		bool                           IsEligible;
	} params;

	params.IsEligible = IsEligible;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.UpdateNewCraftableObjects
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewPlayerRank                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<TScriptInterface<class UCraftable>> NewCraftableItems              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void UBP_GameInstance_C::UpdateNewCraftableObjects(int NewPlayerRank, TArray<TScriptInterface<class UCraftable>>* NewCraftableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.UpdateNewCraftableObjects");

	struct
	{
		int                            NewPlayerRank;
		TArray<TScriptInterface<class UCraftable>> NewCraftableItems;
	} params;

	params.NewPlayerRank = NewPlayerRank;

	UObject::ProcessEvent(fn, &params);

	if (NewCraftableItems != nullptr)
		*NewCraftableItems = params.NewCraftableItems;
}


// Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_GameInstance_C::OnFailure_D72617F2470A6492F0633884F8A94A97()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_D72617F2470A6492F0633884F8A94A97");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_GameInstance_C::OnSuccess_D72617F2470A6492F0633884F8A94A97()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_D72617F2470A6492F0633884F8A94A97");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_GameInstance_C::OnFailure_E6A52403462766A65D96D581DEE58F2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnFailure_E6A52403462766A65D96D581DEE58F2A");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_GameInstance_C::OnSuccess_E6A52403462766A65D96D581DEE58F2A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnSuccess_E6A52403462766A65D96D581DEE58F2A");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.ReceiveInit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_GameInstance_C::ReceiveInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ReceiveInit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult Session                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UBP_GameInstance_C::JoinFriendInvite(const struct FBlueprintSessionResult& Session)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.JoinFriendInvite");

	struct
	{
		struct FBlueprintSessionResult Session;
	} params;

	params.Session = Session;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 MapName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UBP_GameInstance_C::OnLoadComplete(const struct FString& MapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnLoadComplete");

	struct
	{
		struct FString                 MapName;
	} params;

	params.MapName = MapName;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnPlayerProgressChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Rank                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Stars                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GameInstance_C::OnPlayerProgressChanged(int Rank, int Stars)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnPlayerProgressChanged");

	struct
	{
		int                            Rank;
		int                            Stars;
	} params;

	params.Rank = Rank;
	params.Stars = Stars;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBP_GameInstance_C*      GameInstance                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GameInstance_C::OnEligibleForRetirementAssignment__DelegateSignature(class UBP_GameInstance_C* GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnEligibleForRetirementAssignment__DelegateSignature");

	struct
	{
		class UBP_GameInstance_C*      GameInstance;
	} params;

	params.GameInstance = GameInstance;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<TScriptInterface<class UCraftable>> NewItems                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UBP_GameInstance_C::OnAvailableCraftingItems__DelegateSignature(TArray<TScriptInterface<class UCraftable>>* NewItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.OnAvailableCraftingItems__DelegateSignature");

	struct
	{
		TArray<TScriptInterface<class UCraftable>> NewItems;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (NewItems != nullptr)
		*NewItems = params.NewItems;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
