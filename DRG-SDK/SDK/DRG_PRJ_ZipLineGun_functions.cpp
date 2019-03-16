// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_ZipLineGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 WorldPosition                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LineStart                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 LineEnd                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NearestLinePosition            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ZipLineGun_C::GetNearestPointOnLine(const struct FVector& WorldPosition, const struct FVector& LineStart, const struct FVector& LineEnd, struct FVector* NearestLinePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine");

	struct
	{
		struct FVector                 WorldPosition;
		struct FVector                 LineStart;
		struct FVector                 LineEnd;
		struct FVector                 NearestLinePosition;
	} params;

	params.WorldPosition = WorldPosition;
	params.LineStart = LineStart;
	params.LineEnd = LineEnd;

	UObject::ProcessEvent(fn, &params);

	if (NearestLinePosition != nullptr)
		*NearestLinePosition = params.NearestLinePosition;
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_ZipLineGun_C::Finish_Zip_Line()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_ZipLineGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_ZipLineGun_C::On_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ZipLineGun_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Origin                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 EndLocation                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ZipLineGun_C::OnShoot(const struct FVector& Origin, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot");

	struct
	{
		struct FVector                 Origin;
		struct FVector                 EndLocation;
	} params;

	params.Origin = Origin;
	params.EndLocation = EndLocation;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ZipLineGun_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_ZipLineGun_C::SetCollider()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRJ_ZipLineGun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine
// (FUNC_Net, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          VerticalSpeed                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ZipLineGun_C::All_ConnectWithZipLine(const struct FVector& Location, float VerticalSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine");

	struct
	{
		struct FVector                 Location;
		float                          VerticalSpeed;
	} params;

	params.Location = Location;
	params.VerticalSpeed = VerticalSpeed;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_ZipLineGun_C::ExecuteUbergraph_PRJ_ZipLineGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun");

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
