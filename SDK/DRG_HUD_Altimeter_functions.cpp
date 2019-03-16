// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_Altimeter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_Altimeter.HUD_Altimeter_C.SetDepth
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewDepth                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Altimeter_C::SetDepth(int NewDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.SetDepth");

	struct
	{
		int                            NewDepth;
	} params;

	params.NewDepth = NewDepth;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Altimeter.HUD_Altimeter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_Altimeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Altimeter.HUD_Altimeter_C.DepthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Depth                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Altimeter_C::DepthChanged(int Depth)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.DepthChanged");

	struct
	{
		int                            Depth;
	} params;

	params.Depth = Depth;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Altimeter.HUD_Altimeter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Altimeter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Altimeter.HUD_Altimeter_C.OnHUDVisibilityChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_Altimeter_C::OnHUDVisibilityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.OnHUDVisibilityChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_Altimeter.HUD_Altimeter_C.ExecuteUbergraph_HUD_Altimeter
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_Altimeter_C::ExecuteUbergraph_HUD_Altimeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Altimeter.HUD_Altimeter_C.ExecuteUbergraph_HUD_Altimeter");

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
