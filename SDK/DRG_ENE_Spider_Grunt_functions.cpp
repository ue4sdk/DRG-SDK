// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ENE_Spider_Grunt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ENE_Spider_Grunt.ENE_Spider_Grunt_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Grunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt.ENE_Spider_Grunt_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt.ENE_Spider_Grunt_C.OnRagdoll
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AENE_Spider_Grunt_C::OnRagdoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt.ENE_Spider_Grunt_C.OnRagdoll");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ENE_Spider_Grunt.ENE_Spider_Grunt_C.ExecuteUbergraph_ENE_Spider_Grunt
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AENE_Spider_Grunt_C::ExecuteUbergraph_ENE_Spider_Grunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ENE_Spider_Grunt.ENE_Spider_Grunt_C.ExecuteUbergraph_ENE_Spider_Grunt");

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
