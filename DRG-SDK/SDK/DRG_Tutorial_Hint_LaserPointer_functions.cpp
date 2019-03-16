// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_LaserPointer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// ELaserPointerTargetType        TargetType                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  ExtraActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_LaserPointer_C::OnLaserPointerEvent(class AActor* Target, ELaserPointerTargetType TargetType, const struct FVector& Location, class AActor* ExtraActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.OnLaserPointerEvent");

	struct
	{
		class AActor*                  Target;
		ELaserPointerTargetType        TargetType;
		struct FVector                 Location;
		class AActor*                  ExtraActor;
	} params;

	params.Target = Target;
	params.TargetType = TargetType;
	params.Location = Location;
	params.ExtraActor = ExtraActor;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_LaserPointer_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ReceiveOnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_LaserPointer_C::ExecuteUbergraph_Tutorial_Hint_LaserPointer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_LaserPointer.Tutorial_Hint_LaserPointer_C.ExecuteUbergraph_Tutorial_Hint_LaserPointer");

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
