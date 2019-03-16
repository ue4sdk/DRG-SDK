// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_TeamDisplay_Bosco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentCharges                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            MaxCharges                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::UpdateReviveCharges(int CurrentCharges, int MaxCharges)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.UpdateReviveCharges");

	struct
	{
		int                            CurrentCharges;
		int                            MaxCharges;
	} params;

	params.CurrentCharges = CurrentCharges;
	params.MaxCharges = MaxCharges;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_TeamDisplay_Bosco_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABosco*                  Bosco                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::OnBoscoChanged(class ABosco* Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnBoscoChanged");

	struct
	{
		class ABosco*                  Bosco;
	} params;

	params.Bosco = Bosco;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EDroneAIState                  aCurrentState                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::OnStateChanged(EDroneAIState aCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnStateChanged");

	struct
	{
		EDroneAIState                  aCurrentState;
	} params;

	params.aCurrentState = aCurrentState;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            InColorAndOpacity              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::Update_State_Icon(class UTexture2D* Texture, const struct FLinearColor& InColorAndOpacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.Update State Icon");

	struct
	{
		class UTexture2D*              Texture;
		struct FLinearColor            InColorAndOpacity;
	} params;

	params.Texture = Texture;
	params.InColorAndOpacity = InColorAndOpacity;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            ReviveCount                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::OnReviveused(int ReviveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.OnReviveused");

	struct
	{
		int                            ReviveCount;
	} params;

	params.ReviveCount = ReviveCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TeamDisplay_Bosco_C::ExecuteUbergraph_HUD_TeamDisplay_Bosco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TeamDisplay_Bosco.HUD_TeamDisplay_Bosco_C.ExecuteUbergraph_HUD_TeamDisplay_Bosco");

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
