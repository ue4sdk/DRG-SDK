// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Frozen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Frozen.HUD_Frozen_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Frozen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Frozen.HUD_Frozen_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Frozen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ECharacterState                NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Frozen_C::OnCharacterStateChanged_Event(ECharacterState NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.OnCharacterStateChanged_Event");

	struct
	{
		ECharacterState                NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Frozen.HUD_Frozen_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Frozen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Frozen.HUD_Frozen_C.SetProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          CurrentProgress                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Frozen_C::SetProgress(float CurrentProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.SetProgress");

	struct
	{
		float                          CurrentProgress;
	} params;

	params.CurrentProgress = CurrentProgress;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Frozen_C::ExecuteUbergraph_HUD_Frozen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Frozen.HUD_Frozen_C.ExecuteUbergraph_HUD_Frozen");

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
