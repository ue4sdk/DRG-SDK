// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MAG_BaseClass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MAG_BaseClass.MAG_BaseClass_C.Released
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AMAG_BaseClass_C::Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.Released");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function MAG_BaseClass.MAG_BaseClass_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMAG_BaseClass_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MAG_BaseClass.MAG_BaseClass_C.DoRelease
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AMAG_BaseClass_C::DoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.DoRelease");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMAG_BaseClass_C::ExecuteUbergraph_MAG_BaseClass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MAG_BaseClass.MAG_BaseClass_C.ExecuteUbergraph_MAG_BaseClass");

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
