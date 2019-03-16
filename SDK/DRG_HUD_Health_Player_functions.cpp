// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Health_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Health_Player.HUD_Health_Player_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Health_Player_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Player.HUD_Health_Player_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Player.HUD_Health_Player_C.ExecuteUbergraph_HUD_Health_Player
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Player_C::ExecuteUbergraph_HUD_Health_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Player.HUD_Health_Player_C.ExecuteUbergraph_HUD_Health_Player");

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
