// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_BoscoAbillityIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           DisableAnim                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::SetProgress(float Percent, bool DisableAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.SetProgress");

	struct
	{
		float                          Percent;
		bool                           DisableAnim;
	} params;

	params.Percent = Percent;
	params.DisableAnim = DisableAnim;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBoscoAbillityComponent* Abillity                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::Init(int Index, class UBoscoAbillityComponent* Abillity)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.Init");

	struct
	{
		int                            Index;
		class UBoscoAbillityComponent* Abillity;
	} params;

	params.Index = Index;
	params.Abillity = Abillity;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_BoscoAbillityIcon_C::On_Flare_Production_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.On Flare Production Finished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            aCurrentCharges                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::OnChargeUsed(int aCurrentCharges)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.OnChargeUsed");

	struct
	{
		int                            aCurrentCharges;
	} params;

	params.aCurrentCharges = aCurrentCharges;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityIcon_C::ExecuteUbergraph_HUD_BoscoAbillityIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityIcon.HUD_BoscoAbillityIcon_C.ExecuteUbergraph_HUD_BoscoAbillityIcon");

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
