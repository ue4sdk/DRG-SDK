// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_LaserPointerDisplay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_LaserPointerDisplay_C::UpdateCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.UpdateCommands");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          distance                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FText                   Description                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UHUD_LaserPointerDisplay_C::Update_Display(const struct FHitResult& Hit, float distance, const struct FText& Name, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Update Display");

	struct
	{
		struct FHitResult              Hit;
		float                          distance;
		struct FText                   Name;
		struct FText                   Description;
	} params;

	params.Hit = Hit;
	params.distance = distance;
	params.Name = Name;
	params.Description = Description;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_LaserPointerDisplay_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnEquipped");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_LaserPointerDisplay_C::Point_Of_Interest(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Point Of Interest");

	struct
	{
		class UTexture2D*              Texture;
	} params;

	params.Texture = Texture;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_LaserPointerDisplay_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABosco*                  Bosco                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_LaserPointerDisplay_C::OnBoscoChanged(class ABosco* Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.OnBoscoChanged");

	struct
	{
		class ABosco*                  Bosco;
	} params;

	params.Bosco = Bosco;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_LaserPointerDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_LaserPointerDisplay_C::ExecuteUbergraph_HUD_LaserPointerDisplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_LaserPointerDisplay.HUD_LaserPointerDisplay_C.ExecuteUbergraph_HUD_LaserPointerDisplay");

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
