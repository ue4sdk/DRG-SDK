// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_CoolDownBar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCoolDownItemAggregator* Cooldown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_CoolDownBar_C::Initialize(class UCoolDownItemAggregator* Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Initialize");

	struct
	{
		class UCoolDownItemAggregator* Cooldown;
	} params;

	params.Cooldown = Cooldown;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_CoolDownBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CoolDownBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CoolDownBar_C::ExecuteUbergraph_HUD_CoolDownBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CoolDownBar.HUD_CoolDownBar_C.ExecuteUbergraph_HUD_CoolDownBar");

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
