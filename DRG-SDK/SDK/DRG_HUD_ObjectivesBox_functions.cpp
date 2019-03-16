// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ObjectivesBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ObjectivesBox_C::CreateObjectiveWidget(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.CreateObjectiveWidget");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_ObjectivesBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ObjectivesBox_C::OnObjectiveAdded(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.OnObjectiveAdded");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Add Objective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ObjectivesBox_C::Add_Objective(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.Add Objective");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ObjectivesBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ObjectivesBox_C::ExecuteUbergraph_HUD_ObjectivesBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectivesBox.HUD_ObjectivesBox_C.ExecuteUbergraph_HUD_ObjectivesBox");

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
