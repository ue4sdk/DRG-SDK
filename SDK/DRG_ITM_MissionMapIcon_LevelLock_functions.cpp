// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MissionMapIcon_LevelLock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionMapIcon_LevelLock_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.ExecuteUbergraph_ITM_MissionMapIcon_LevelLock
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MissionMapIcon_LevelLock_C::ExecuteUbergraph_ITM_MissionMapIcon_LevelLock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_LevelLock.ITM_MissionMapIcon_LevelLock_C.ExecuteUbergraph_ITM_MissionMapIcon_LevelLock");

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
