// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreenMemorialWall_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Speed                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreenMemorialWall_C::SetLinesSpeed(float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetLinesSpeed");

	struct
	{
		float                          Speed;
	} params;

	params.Speed = Speed;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UUI_ConsoleMemorialLine_C* NewParam                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UConsoleScreenMemorialWall_C::RemoveLine(class UUI_ConsoleMemorialLine_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.RemoveLine");

	struct
	{
		class UUI_ConsoleMemorialLine_C* NewParam;
	} params;

	params.NewParam = NewParam;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsFast                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreenMemorialWall_C::SetAnimationSpeed(bool IsFast)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SetAnimationSpeed");

	struct
	{
		bool                           IsFast;
	} params;

	params.IsFast = IsFast;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsoleScreenMemorialWall_C::SpawnNewLine()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.SpawnNewLine");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Row                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UConsoleScreenMemorialWall_C::GetNameFromRow(int Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.GetNameFromRow");

	struct
	{
		int                            Row;
		struct FText                   ReturnValue;
	} params;

	params.Row = Row;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreenMemorialWall_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreenMemorialWall_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreenMemorialWall_C::ExecuteUbergraph_ConsoleScreenMemorialWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreenMemorialWall.ConsoleScreenMemorialWall_C.ExecuteUbergraph_ConsoleScreenMemorialWall");

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
