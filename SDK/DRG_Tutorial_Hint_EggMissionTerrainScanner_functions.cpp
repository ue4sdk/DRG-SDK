// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Tutorial_Hint_EggMissionTerrainScanner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnInitialized
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_EggMissionTerrainScanner_C::ReceiveOnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnInitialized");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.OnToggleMapTool_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Visible                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_EggMissionTerrainScanner_C::OnToggleMapTool_Event(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.OnToggleMapTool_Event");

	struct
	{
		bool                           Visible;
	} params;

	params.Visible = Visible;

	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.Mark Ready
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTutorial_Hint_EggMissionTerrainScanner_C::Mark_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.Mark Ready");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnHidden
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTutorial_Hint_EggMissionTerrainScanner_C::ReceiveOnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ReceiveOnHidden");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTutorial_Hint_EggMissionTerrainScanner_C::ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_Hint_EggMissionTerrainScanner.Tutorial_Hint_EggMissionTerrainScanner_C.ExecuteUbergraph_Tutorial_Hint_EggMissionTerrainScanner");

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
