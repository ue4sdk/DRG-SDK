// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_FlareIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Percent                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_FlareIcon_C::SetProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.SetProgress");

	struct
	{
		float                          Percent;
	} params;

	params.Percent = Percent;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInventoryComponent*     Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_FlareIcon_C::Init(int Index, class UInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.Init");

	struct
	{
		int                            Index;
		class UInventoryComponent*     Inventory;
	} params;

	params.Index = Index;
	params.Inventory = Inventory;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            CurrentCount                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UInventoryComponent*     Inventory                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UHUD_FlareIcon_C::OnFlareCountChanged(int CurrentCount, class UInventoryComponent* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.OnFlareCountChanged");

	struct
	{
		int                            CurrentCount;
		class UInventoryComponent*     Inventory;
	} params;

	params.CurrentCount = CurrentCount;
	params.Inventory = Inventory;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_FlareIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_FlareIcon_C::On_Flare_Production_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.On Flare Production Finished");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_FlareIcon_C::ExecuteUbergraph_HUD_FlareIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_FlareIcon.HUD_FlareIcon_C.ExecuteUbergraph_HUD_FlareIcon");

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
