// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_SER_FindNearestPlayer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SER_FindNearestPlayer.SER_FindNearestPlayer_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USER_FindNearestPlayer_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SER_FindNearestPlayer.SER_FindNearestPlayer_C.ReceiveTickAI");

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params;

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(fn, &params);
}


// Function SER_FindNearestPlayer.SER_FindNearestPlayer_C.ExecuteUbergraph_SER_FindNearestPlayer
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USER_FindNearestPlayer_C::ExecuteUbergraph_SER_FindNearestPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SER_FindNearestPlayer.SER_FindNearestPlayer_C.ExecuteUbergraph_SER_FindNearestPlayer");

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
