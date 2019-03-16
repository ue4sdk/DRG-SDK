// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_DropPodScreenWidget5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.GetNewOperation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DropPodScreenWidget5_C::GetNewOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.GetNewOperation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.DoOperation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_DropPodScreenWidget5_C::DoOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.DoOperation");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_DropPodScreenWidget5_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget5_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget5_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.ExecuteUbergraph_BP_DropPodScreenWidget5
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_DropPodScreenWidget5_C::ExecuteUbergraph_BP_DropPodScreenWidget5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DropPodScreenWidget5.BP_DropPodScreenWidget5_C.ExecuteUbergraph_BP_DropPodScreenWidget5");

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
