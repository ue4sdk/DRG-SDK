// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_JukeBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_JukeBox.BP_JukeBox_C.PayCredits
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Purchased                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_JukeBox_C::PayCredits(class APlayerCharacter* user, int Amount, bool* Purchased)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.PayCredits");

	struct
	{
		class APlayerCharacter*        user;
		int                            Amount;
		bool                           Purchased;
	} params;

	params.user = user;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);

	if (Purchased != nullptr)
		*Purchased = params.Purchased;
}


// Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex
// (FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_JukeBox_C::OnRep_MusicIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.OnRep_MusicIndex");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_JukeBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_JukeBox_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.Timeline_0__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_JukeBox_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.Timeline_0__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_JukeBox_C::OnLoaded_C15A19DC4718016F57823CA232EE5860(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.OnLoaded_C15A19DC4718016F57823CA232EE5860");

	struct
	{
		class UObject*                 Loaded;
	} params;

	params.Loaded = Loaded;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        user                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_JukeBox_C::BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* user)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature");

	struct
	{
		class APlayerCharacter*        user;
	} params;

	params.user = user;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_JukeBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_JukeBox_C::ToggleSpeakerRocking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.ToggleSpeakerRocking");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ABP_JukeBox_C::BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
		bool                           bFromSweep;
		struct FHitResult              SweepResult;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_JukeBox_C::BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	struct
	{
		class UPrimitiveComponent*     OverlappedComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		int                            OtherBodyIndex;
	} params;

	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class USoundBase> Music                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void ABP_JukeBox_C::LoadAndPlay(TSoftObjectPtr<class USoundBase> Music)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.LoadAndPlay");

	struct
	{
		TSoftObjectPtr<class USoundBase> Music;
	} params;

	params.Music = Music;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_JukeBox_C::Stop_Juke_Box()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.Stop Juke Box");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_JukeBox_C::ExecuteUbergraph_BP_JukeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JukeBox.BP_JukeBox_C.ExecuteUbergraph_BP_JukeBox");

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
