// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Directional_Damage_Indicator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.UpdatePosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InputPin                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::UpdatePosition(float InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.UpdatePosition");

	struct
	{
		float                          InputPin;
	} params;

	params.InputPin = InputPin;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.SetAngle
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Angle                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::SetAngle(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.SetAngle");

	struct
	{
		float                          Angle;
	} params;

	params.Angle = Angle;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.MoveTowards
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          End                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Delta                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::MoveTowards(float Value, float End, float Delta, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.MoveTowards");

	struct
	{
		float                          Value;
		float                          End;
		float                          Delta;
		float                          Result;
	} params;

	params.Value = Value;
	params.End = End;
	params.Delta = Delta;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Hit
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APlayerCharacter*        Victim                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::Hit(float Damage, class AActor* DamageCauser, class APlayerCharacter* Victim, class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Hit");

	struct
	{
		float                          Damage;
		class AActor*                  DamageCauser;
		class APlayerCharacter*        Victim;
		class UUserWidget*             Widget;
	} params;

	params.Damage = Damage;
	params.DamageCauser = DamageCauser;
	params.Victim = Victim;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Directional_Damage_Indicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.ExecuteUbergraph_HUD_Directional_Damage_Indicator
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Directional_Damage_Indicator_C::ExecuteUbergraph_HUD_Directional_Damage_Indicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Directional_Damage_Indicator.HUD_Directional_Damage_Indicator_C.ExecuteUbergraph_HUD_Directional_Damage_Indicator");

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
