// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ScreenOverlay_Incapacitated_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UScreenOverlay_Incapacitated_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.ExecuteUbergraph_ScreenOverlay_Incapacitated
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UScreenOverlay_Incapacitated_C::ExecuteUbergraph_ScreenOverlay_Incapacitated(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScreenOverlay_Incapacitated.ScreenOverlay_Incapacitated_C.ExecuteUbergraph_ScreenOverlay_Incapacitated");

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
