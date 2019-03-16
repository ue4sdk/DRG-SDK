// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_TabPlayerListEntry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.UpdateStats
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHUD_TabPlayerListEntry_C::UpdateStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.UpdateStats");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Update
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_C::Update(class AFSDPlayerState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Update");

	struct
	{
		class AFSDPlayerState*         State;
	} params;

	params.State = State;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.ExecuteUbergraph_HUD_TabPlayerListEntry
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_TabPlayerListEntry_C::ExecuteUbergraph_HUD_TabPlayerListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_TabPlayerListEntry.HUD_TabPlayerListEntry_C.ExecuteUbergraph_HUD_TabPlayerListEntry");

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
