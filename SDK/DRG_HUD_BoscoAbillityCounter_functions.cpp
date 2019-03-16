// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_BoscoAbillityCounter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            IconCount                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::CreateIcons(int IconCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.CreateIcons");

	struct
	{
		int                            IconCount;
	} params;

	params.IconCount = IconCount;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_BoscoAbillityCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_BoscoAbillityCounter_C::OnItemsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnItemsLoaded");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          aProgress                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            aNextIndex                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::OnAbillityChargeProgress(float aProgress, int aNextIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnAbillityChargeProgress");

	struct
	{
		float                          aProgress;
		int                            aNextIndex;
	} params;

	params.aProgress = aProgress;
	params.aNextIndex = aNextIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABosco*                  Bosco                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::OnBoscoChanged(class ABosco* Bosco)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.OnBoscoChanged");

	struct
	{
		class ABosco*                  Bosco;
	} params;

	params.Bosco = Bosco;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_BoscoAbillityCounter_C::ExecuteUbergraph_HUD_BoscoAbillityCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_BoscoAbillityCounter.HUD_BoscoAbillityCounter_C.ExecuteUbergraph_HUD_BoscoAbillityCounter");

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
