// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_NetInfo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_NetInfo.UI_NetInfo_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NetInfo_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetInfo.UI_NetInfo_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UUI_NetInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetInfo.UI_NetInfo_C.OnShowNetInfoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           NewValue                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NetInfo_C::OnShowNetInfoChanged(bool NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.OnShowNetInfoChanged");

	struct
	{
		bool                           NewValue;
	} params;

	params.NewValue = NewValue;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetInfo.UI_NetInfo_C.SlowTick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UUI_NetInfo_C::SlowTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.SlowTick");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_NetInfo_C::ExecuteUbergraph_UI_NetInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_NetInfo.UI_NetInfo_C.ExecuteUbergraph_UI_NetInfo");

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
