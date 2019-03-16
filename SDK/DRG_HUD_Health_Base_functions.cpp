// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Health_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Health_Base.HUD_Health_Base_C.SetHealthBarAlpha
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Alpha                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::SetHealthBarAlpha(float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.SetHealthBarAlpha");

	struct
	{
		float                          Alpha;
	} params;

	params.Alpha = Alpha;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHUD_Health_Base_C::HasLowHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.HasLowHealth");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::HealthChanged(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.HealthChanged");

	struct
	{
		float                          Health;
	} params;

	params.Health = Health;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UPlayerHealthComponent*  HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Health_Base_C::Bind_Health_Component(class UPlayerHealthComponent* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Bind Health Component");

	struct
	{
		class UPlayerHealthComponent*  HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InPercent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::Set_Health_Pct(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Set Health Pct");

	struct
	{
		float                          InPercent;
	} params;

	params.InPercent = InPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Health_Base_C::Unbind_Health_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind Health Component");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::Bind_To_Player(class APlayerCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Bind To Player");

	struct
	{
		class APlayerCharacter*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           isRegenerating                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::OnHealthRegeneratingChanged_Event(bool isRegenerating)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.OnHealthRegeneratingChanged_Event");

	struct
	{
		bool                           isRegenerating;
	} params;

	params.isRegenerating = isRegenerating;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Health_Base_C::Unbind_HealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind HealthChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Health_Base_C::Unbind_Regenerating_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Unbind Regenerating Changed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Health_Base_C::ExecuteUbergraph_HUD_Health_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Health_Base.HUD_Health_Base_C.ExecuteUbergraph_HUD_Health_Base");

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
