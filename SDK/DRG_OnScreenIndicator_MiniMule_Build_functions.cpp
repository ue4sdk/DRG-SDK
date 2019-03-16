// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_MiniMule_Build_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_MiniMule_Build_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.ExecuteUbergraph_OnScreenIndicator_MiniMule_Build
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_MiniMule_Build_C::ExecuteUbergraph_OnScreenIndicator_MiniMule_Build(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_MiniMule_Build.OnScreenIndicator_MiniMule_Build_C.ExecuteUbergraph_OnScreenIndicator_MiniMule_Build");

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
