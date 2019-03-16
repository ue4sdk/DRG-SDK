// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_PlatformMaker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void APRJ_PlatformMaker_C::OnImpacted(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted");

	struct
	{
		struct FHitResult              HitResult;
	} params;

	params.HitResult = HitResult;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh_to_use                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_PlatformMaker_C::Set_Carver_mesh(class UStaticMesh* Mesh_to_use)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh");

	struct
	{
		class UStaticMesh*             Mesh_to_use;
	} params;

	params.Mesh_to_use = Mesh_to_use;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Scale                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_PlatformMaker_C::SetCarverMeshScale(const struct FVector& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale");

	struct
	{
		struct FVector                 Scale;
	} params;

	params.Scale = Scale;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::UseLessFallDamageMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::UseBugRepellantMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_PlatformMaker_C::UseFallDmgAndBugRepellant()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_PlatformMaker_C::ExecuteUbergraph_PRJ_PlatformMaker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker");

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
