// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_MisSel_MissionDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UGeneratedMission*       Mission                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionDescription_C::SetData(class UGeneratedMission* Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.SetData");

	struct
	{
		class UGeneratedMission*       Mission;
	} params;

	params.Mission = Mission;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionDescription_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_MissionDescription_C::ExecuteUbergraph_WND_MisSel_MissionDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_MissionDescription.WND_MisSel_MissionDescription_C.ExecuteUbergraph_WND_MisSel_MissionDescription");

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
