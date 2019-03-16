// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_RadarPoint_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.InitPoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class URadarPointComponent*    RadarComponent                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_RadarPoint_Player_C::InitPoint(class URadarPointComponent* RadarComponent, bool* success)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.InitPoint");

	struct
	{
		class URadarPointComponent*    RadarComponent;
		bool                           success;
	} params;

	params.RadarComponent = RadarComponent;

	UObject::ProcessEvent(fn, &params);

	if (success != nullptr)
		*success = params.success;
}


// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Get3dPosition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector                 Pos                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_RadarPoint_Player_C::Get3dPosition(struct FVector* Pos)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Get3dPosition");

	struct
	{
		struct FVector                 Pos;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (Pos != nullptr)
		*Pos = params.Pos;
}


// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.UpdatePoint
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          verticalDist                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           destroy                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_RadarPoint_Player_C::UpdatePoint(float Alpha, float verticalDist, bool* destroy)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.UpdatePoint");

	struct
	{
		float                          Alpha;
		float                          verticalDist;
		bool                           destroy;
	} params;

	params.Alpha = Alpha;
	params.verticalDist = verticalDist;

	UObject::ProcessEvent(fn, &params);

	if (destroy != nullptr)
		*destroy = params.destroy;
}


// Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Deactivate
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_RadarPoint_Player_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_RadarPoint_Player.HUD_RadarPoint_Player_C.Deactivate");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
