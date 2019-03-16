// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreenIndicator_Actor_Shout_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsOwnShout
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOnScreenIndicator_Actor_Shout_C::IsOwnShout()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsOwnShout");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Shout
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::Shout()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Shout");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D UOnScreenIndicator_Actor_Shout_C::CalculateScreenPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.CalculateScreenPos");

	struct
	{
		struct FVector2D               ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.InViewport
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector2D               Pos                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::InViewport(const struct FVector2D& Pos, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.InViewport");

	struct
	{
		struct FVector2D               Pos;
		bool                           Result;
	} params;

	params.Pos = Pos;

	UObject::ProcessEvent(fn, &params);

	if (Result != nullptr)
		*Result = params.Result;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsSenderBehind
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FVector                 ToSender                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UOnScreenIndicator_Actor_Shout_C::IsSenderBehind(struct FVector* ToSender)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.IsSenderBehind");

	struct
	{
		struct FVector                 ToSender;
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (ToSender != nullptr)
		*ToSender = params.ToSender;

	return params.ReturnValue;
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Update Widget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UOnScreenIndicator_Actor_Shout_C::Update_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Update Widget");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Sender                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FDialogStruct           Shout                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           IsSubtitle                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::OnShout(class APlayerCharacter* Sender, const struct FDialogStruct& Shout, bool IsSubtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.OnShout");

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


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreenIndicator_Actor_Shout_C::ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreenIndicator_Actor_Shout.OnScreenIndicator_Actor_Shout_C.ExecuteUbergraph_OnScreenIndicator_Actor_Shout");

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
