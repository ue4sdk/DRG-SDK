// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_MixerAnnouncement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_MixerAnnouncement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.OnMixerAnnouncement
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FFSD_FMixerAnnouncement Announcement                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UHUD_MixerAnnouncement_C::OnMixerAnnouncement(const struct FFSD_FMixerAnnouncement& Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.OnMixerAnnouncement");

	struct
	{
		struct FFSD_FMixerAnnouncement Announcement;
	} params;

	params.Announcement = Announcement;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_MixerAnnouncement_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.ExecuteUbergraph_HUD_MixerAnnouncement
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_MixerAnnouncement_C::ExecuteUbergraph_HUD_MixerAnnouncement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_MixerAnnouncement.HUD_MixerAnnouncement_C.ExecuteUbergraph_HUD_MixerAnnouncement");

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
