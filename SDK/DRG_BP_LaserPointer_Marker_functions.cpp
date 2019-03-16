// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_LaserPointer_Marker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_LaserPointer_Marker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_LaserPointer_Marker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LaserPointer_Marker_C::OnDestroyed_Target(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Target");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LaserPointer_Marker_C::OnDestroyed_Self(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.OnDestroyed_Self");

	struct
	{
		class AActor*                  DestroyedActor;
	} params;

	params.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LaserPointer_Marker_C::ExecuteUbergraph_BP_LaserPointer_Marker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointer_Marker.BP_LaserPointer_Marker_C.ExecuteUbergraph_BP_LaserPointer_Marker");

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
