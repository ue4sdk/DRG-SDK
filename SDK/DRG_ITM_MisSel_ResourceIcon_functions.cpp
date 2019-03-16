// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MisSel_ResourceIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_ResourceIcon_C::SetData(class UResourceData* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.SetData");

	struct
	{
		class UResourceData*           Resource;
	} params;

	params.Resource = Resource;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.ExecuteUbergraph_ITM_MisSel_ResourceIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MisSel_ResourceIcon_C::ExecuteUbergraph_ITM_MisSel_ResourceIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MisSel_ResourceIcon.ITM_MisSel_ResourceIcon_C.ExecuteUbergraph_ITM_MisSel_ResourceIcon");

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
