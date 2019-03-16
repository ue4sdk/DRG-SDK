// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OBJ_1st_Salvage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          missionLength                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UOBJ_1st_Salvage_C::GetObjectiveAmount(float missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveAmount");

	struct
	{
		float                          missionLength;
		int                            ReturnValue;
	} params;

	params.missionLength = missionLength;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOBJ_1st_Salvage_C::GetInMissionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetInMissionText");

	struct
	{
		struct FText                   ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          missionLength                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UOBJ_1st_Salvage_C::GetObjectiveDescription(float missionLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveDescription");

	struct
	{
		float                          missionLength;
		struct FText                   ReturnValue;
	} params;

	params.missionLength = missionLength;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UOBJ_1st_Salvage_C::GetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.GetObjectiveIcon");

	struct
	{
		class UTexture2D*              ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOBJ_1st_Salvage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UOBJ_1st_Salvage_C::AllActorsSalvaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.AllActorsSalvaged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOBJ_1st_Salvage_C::ExecuteUbergraph_OBJ_1st_Salvage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OBJ_1st_Salvage.OBJ_1st_Salvage_C.ExecuteUbergraph_OBJ_1st_Salvage");

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
