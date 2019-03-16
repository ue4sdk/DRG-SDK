// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_ObjectiveBox_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.Set Objective
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::Set_Objective(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.Set Objective");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.OnObjectiveUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::OnObjectiveUpdated(class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.OnObjectiveUpdated");

	struct
	{
		class UObjective*              Objective;
	} params;

	params.Objective = Objective;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_ObjectiveBox_Item_C::ExecuteUbergraph_HUD_ObjectiveBox_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ObjectiveBox_Item.HUD_ObjectiveBox_Item_C.ExecuteUbergraph_HUD_ObjectiveBox_Item");

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
