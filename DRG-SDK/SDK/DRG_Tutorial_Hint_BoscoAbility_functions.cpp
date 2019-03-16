// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_BoscoAbility_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerPressed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::OnLaserPointerPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerPressed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerReleased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::OnLaserPointerReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnLaserPointerReleased");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_BoscoAbility_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ReceiveOnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.Mark Ready If
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_BoscoAbility_C::Mark_Ready_If(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.Mark Ready If");

	struct
	{
		bool                           Condition;
	} params;

	params.Condition = Condition;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnBoscoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABosco*                  Bosco                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_BoscoAbility_C::OnBoscoChanged(class ABosco* Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.OnBoscoChanged");

	struct
	{
		class ABosco*                  Bosco;
	} params;

	params.Bosco = Bosco;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ExecuteUbergraph_Tutorial_Hint_BoscoAbility
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_BoscoAbility_C::ExecuteUbergraph_Tutorial_Hint_BoscoAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_BoscoAbility.Tutorial_Hint_BoscoAbility_C.ExecuteUbergraph_Tutorial_Hint_BoscoAbility");

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
