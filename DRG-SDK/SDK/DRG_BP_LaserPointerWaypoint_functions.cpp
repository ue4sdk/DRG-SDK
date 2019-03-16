// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_LaserPointerWaypoint_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_LaserPointerWaypoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_LaserPointerWaypoint_C::Scanner_Object_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_LaserPointerWaypoint_C::Scanner_Object_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.Scanner Object Timeline__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_LaserPointerWaypoint_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnShow");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_LaserPointerWaypoint_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.OnHide");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_LaserPointerWaypoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_LaserPointerWaypoint_C::ExecuteUbergraph_BP_LaserPointerWaypoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LaserPointerWaypoint.BP_LaserPointerWaypoint_C.ExecuteUbergraph_BP_LaserPointerWaypoint");

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
