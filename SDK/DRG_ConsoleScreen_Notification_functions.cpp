// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_Notification_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UConsoleScreen_Notification_C::SetNotificationText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.SetNotificationText");

	struct
	{
		struct FText                   Text;
	} params;

	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_Notification_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_Notification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_Notification_C::ExecuteUbergraph_ConsoleScreen_Notification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_Notification.ConsoleScreen_Notification_C.ExecuteUbergraph_ConsoleScreen_Notification");

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
