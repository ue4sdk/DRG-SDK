// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_LineCutter2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::AdjustLineSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.AdjustLineSize");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::DisableProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.DisableProjectile");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::ExpandLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExpandLine");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::DoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.DoDamage");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveEndPlay");

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params;

	params.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::StartLineExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.StartLineExpansion");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::CheckTerrainCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.CheckTerrainCall");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Set Line Size Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MaxSizeVisual                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::Set_Line_Size_Event(float MaxSize, float MaxSizeVisual)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Set Line Size Event");

	struct
	{
		float                          MaxSize;
		float                          MaxSizeVisual;
	} params;

	params.MaxSize = MaxSize;
	params.MaxSizeVisual = MaxSizeVisual;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Multiply Line Size
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Multiplier                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::Multiply_Line_Size(float Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Multiply Line Size");

	struct
	{
		float                          Multiplier;
	} params;

	params.Multiplier = Multiplier;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveTick
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ReceiveTick");

	struct
	{
		float                          DeltaSeconds;
	} params;

	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.K2_OnReset");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::LinelifespanDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.LinelifespanDestroy");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Explode");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::LineReducing()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.LineReducing");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::ThereCanBeOnlyOne()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ThereCanBeOnlyOne");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.Add Line Size
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Size                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::Add_Line_Size(float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.Add Line Size");

	struct
	{
		float                          Size;
	} params;

	params.Size = Size;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnClientInitialized
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void APRJ_LineCutter2_C::OnClientInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnClientInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::OnLineDestroyed(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.OnLineDestroyed");

	struct
	{
		struct FHitResult              Result;
	} params;

	params.Result = Result;

	UObject::ProcessEvent(fn, &params);
}


// Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void APRJ_LineCutter2_C::ExecuteUbergraph_PRJ_LineCutter2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PRJ_LineCutter2.PRJ_LineCutter2_C.ExecuteUbergraph_PRJ_LineCutter2");

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
