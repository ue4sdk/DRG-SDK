// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ItemUnlockedIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ItemUnlockedIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.PingIcon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NumLoopsToPlay                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ItemUnlockedIcon_C::PingIcon(int NumLoopsToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.PingIcon");

	struct
	{
		int                            NumLoopsToPlay;
	} params;

	params.NumLoopsToPlay = NumLoopsToPlay;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ItemUnlockedIcon_C::ExecuteUbergraph_ITM_ItemUnlockedIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ItemUnlockedIcon.ITM_ItemUnlockedIcon_C.ExecuteUbergraph_ITM_ItemUnlockedIcon");

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
