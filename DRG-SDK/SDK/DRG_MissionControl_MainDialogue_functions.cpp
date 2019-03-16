// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_MissionControl_MainDialogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDialogDataAsset*        MissionShout                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Duration                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAudioComponent*         AudioComponent                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UMissionControl_MainDialogue_C::SpeakManually(class UDialogDataAsset* MissionShout, float* Duration, class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.SpeakManually");

	struct
	{
		class UDialogDataAsset*        MissionShout;
		float                          Duration;
		class UAudioComponent*         AudioComponent;
	} params;

	params.MissionShout = MissionShout;

	UObject::ProcessEvent(fn, &params);

	if (Duration != nullptr)
		*Duration = params.Duration;
	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UMissionControl_MainDialogue_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.DoShout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDialogStruct           Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMissionControl_MainDialogue_C::DoShout(const struct FDialogStruct& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.DoShout");

	struct
	{
		struct FDialogStruct           Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnShout
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDialogStruct           Shout                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsSubtitle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionControl_MainDialogue_C::OnShout(class APlayerCharacter* Sender, const struct FDialogStruct& Shout, bool IsSubtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnShout");

	struct
	{
		class APlayerCharacter*        Sender;
		struct FDialogStruct           Shout;
		bool                           IsSubtitle;
	} params;

	params.Sender = Sender;
	params.Shout = Shout;
	params.IsSubtitle = IsSubtitle;

	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FDialogStruct           Message                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UMissionControl_MainDialogue_C::OnMissionShout(const struct FDialogStruct& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShout");

	struct
	{
		struct FDialogStruct           Message;
	} params;

	params.Message = Message;

	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionControl_MainDialogue_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionControl_MainDialogue_C::OnMissionShoutEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.OnMissionShoutEnd");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Do Running Text
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UMissionControl_MainDialogue_C::Do_Running_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.Do Running Text");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UMissionControl_MainDialogue_C::ExecuteUbergraph_MissionControl_MainDialogue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionControl_MainDialogue.MissionControl_MainDialogue_C.ExecuteUbergraph_MissionControl_MainDialogue");

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
