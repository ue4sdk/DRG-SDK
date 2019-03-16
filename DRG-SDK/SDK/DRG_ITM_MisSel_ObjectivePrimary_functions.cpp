// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_ObjectivePrimary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Objective                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MissionScale                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          HazardBonus                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_ObjectivePrimary_C::SetData(class UClass* Objective, float MissionScale, float HazardBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.SetData");

	struct
	{
		class UClass*                  Objective;
		float                          MissionScale;
		float                          HazardBonus;
	} params;

	params.Objective = Objective;
	params.MissionScale = MissionScale;
	params.HazardBonus = HazardBonus;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_ObjectivePrimary_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.ExecuteUbergraph_ITM_MisSel_ObjectivePrimary
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_ObjectivePrimary_C::ExecuteUbergraph_ITM_MisSel_ObjectivePrimary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ObjectivePrimary.ITM_MisSel_ObjectivePrimary_C.ExecuteUbergraph_ITM_MisSel_ObjectivePrimary");

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
