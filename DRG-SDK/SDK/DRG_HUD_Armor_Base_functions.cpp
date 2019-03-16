// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Armor_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Health                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Armor_Base_C::ArmorChanged(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.ArmorChanged");

	struct
	{
		float                          Health;
	} params;

	params.Health = Health;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UHealthComponent*        HealthComponent                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Armor_Base_C::Bind_To_Health_Component(class UHealthComponent* HealthComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Health Component");

	struct
	{
		class UHealthComponent*        HealthComponent;
	} params;

	params.HealthComponent = HealthComponent;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Armor_Base_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Armor_Base_C::Unbind_Health_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Unbind Health Component");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InPercent                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Armor_Base_C::Set_Armor_Pct(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Set Armor Pct");

	struct
	{
		float                          InPercent;
	} params;

	params.InPercent = InPercent;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Armor_Base_C::Bind_To_Player(class APlayerCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.Bind To Player");

	struct
	{
		class APlayerCharacter*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Armor_Base_C::ExecuteUbergraph_HUD_Armor_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Armor_Base.HUD_Armor_Base_C.ExecuteUbergraph_HUD_Armor_Base");

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
