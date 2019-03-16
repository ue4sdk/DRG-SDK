// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_BarGlass_Standard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BarGlass_Standard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.Fill
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_BarGlass_Standard_C::Fill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.Fill");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.ExecuteUbergraph_BP_BarGlass_Standard
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_BarGlass_Standard_C::ExecuteUbergraph_BP_BarGlass_Standard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BarGlass_Standard.BP_BarGlass_Standard_C.ExecuteUbergraph_BP_BarGlass_Standard");

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
