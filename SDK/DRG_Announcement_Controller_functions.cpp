// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Announcement_Controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            FractionalDigits               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Icon_Tint                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Controller_C::CreateValueAnnouncement(float Value, const struct FText& Name, const struct FLinearColor& Color, int FractionalDigits, class UTexture2D* Icon, const struct FLinearColor& Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateValueAnnouncement");

	struct
	{
		float                          Value;
		struct FText                   Name;
		struct FLinearColor            Color;
		int                            FractionalDigits;
		class UTexture2D*              Icon;
		struct FLinearColor            Icon_Tint;
	} params;

	params.Value = Value;
	params.Name = Name;
	params.Color = Color;
	params.FractionalDigits = FractionalDigits;
	params.Icon = Icon;
	params.Icon_Tint = Icon_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              Icon                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            Icon_Tint                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Controller_C::CreateTextAnnouncement(const struct FText& Text, const struct FLinearColor& Color, class UTexture2D* Icon, const struct FLinearColor& Icon_Tint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.CreateTextAnnouncement");

	struct
	{
		struct FText                   Text;
		struct FLinearColor            Color;
		class UTexture2D*              Icon;
		struct FLinearColor            Icon_Tint;
	} params;

	params.Text = Text;
	params.Color = Color;
	params.Icon = Icon;
	params.Icon_Tint = Icon_Tint;

	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAnnouncement_Controller_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.OnHealed
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Controller_C::OnHealed(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnHealed");

	struct
	{
		float                          Amount;
	} params;

	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.OnResourceFull
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Controller_C::OnResourceFull(class UCappedResource* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceFull");

	struct
	{
		class UCappedResource*         Resource;
	} params;

	params.Resource = Resource;

	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCappedResource*         Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Amount                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Controller_C::OnResourceIncreased(class UCappedResource* Resource, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnResourceIncreased");

	struct
	{
		class UCappedResource*         Resource;
		float                          Amount;
	} params;

	params.Resource = Resource;
	params.Amount = Amount;

	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.Do Resource Full
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Name                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UAnnouncement_Controller_C::Do_Resource_Full(const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.Do Resource Full");

	struct
	{
		struct FText                   Name;
	} params;

	params.Name = Name;

	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAnnouncement_Controller_C::OnFullHealthCannotHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.OnFullHealthCannotHeal");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.BndEvt__ResourceFull_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UAnnouncement_Controller_C::BndEvt__ResourceFull_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.BndEvt__ResourceFull_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.BndEvt__ResourceFull_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (FUNC_BlueprintEvent)

void UAnnouncement_Controller_C::BndEvt__ResourceFull_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.BndEvt__ResourceFull_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnnouncement_Controller_C::ExecuteUbergraph_Announcement_Controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Controller.Announcement_Controller_C.ExecuteUbergraph_Announcement_Controller");

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
