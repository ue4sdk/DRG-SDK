// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_PointOfInterest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PointOfInterest.BP_PointOfInterest_C.Init
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PointOfInterest_C::Init(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.Init");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PointOfInterest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_PointOfInterest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_PointOfInterest_C::Finished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.Finished_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_PointOfInterest_C::ExecuteUbergraph_BP_PointOfInterest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PointOfInterest.BP_PointOfInterest_C.ExecuteUbergraph_BP_PointOfInterest");

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
