// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_MissionBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       InMission                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MissionBar_C::SetGeneratedMission(class UGeneratedMission* InMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.SetGeneratedMission");

	struct
	{
		class UGeneratedMission*       InMission;
	} params;

	params.InMission = InMission;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MissionBar.WND_MissionBar_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MissionBar_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MissionBar.WND_MissionBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWND_MissionBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       OutGeneratedMission            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MissionBar_C::OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.OnGeneratedMissionChanged");

	struct
	{
		class UGeneratedMission*       OutGeneratedMission;
	} params;

	params.OutGeneratedMission = OutGeneratedMission;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MissionBar_C::ExecuteUbergraph_WND_MissionBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MissionBar.WND_MissionBar_C.ExecuteUbergraph_WND_MissionBar");

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
