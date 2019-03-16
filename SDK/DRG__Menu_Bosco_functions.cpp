// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG__Menu_Bosco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function _Menu_Bosco._Menu_Bosco_C.OnShown
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void U_Menu_Bosco_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Bosco._Menu_Bosco_C.OnShown");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function _Menu_Bosco._Menu_Bosco_C.ExecuteUbergraph__Menu_Bosco
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void U_Menu_Bosco_C::ExecuteUbergraph__Menu_Bosco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function _Menu_Bosco._Menu_Bosco_C.ExecuteUbergraph__Menu_Bosco");

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
