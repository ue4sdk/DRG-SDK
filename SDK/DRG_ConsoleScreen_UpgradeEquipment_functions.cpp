// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ConsoleScreen_UpgradeEquipment_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_UpgradeEquipment_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsoleScreen_UpgradeEquipment_C::OnItemUnlocked_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.OnItemUnlocked_Event");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UConsoleScreen_UpgradeEquipment_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UConsoleScreen_UpgradeEquipment_C::UpdateNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.UpdateNotification");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleScreen_UpgradeEquipment_C::ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleScreen_UpgradeEquipment.ConsoleScreen_UpgradeEquipment_C.ExecuteUbergraph_ConsoleScreen_UpgradeEquipment");

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
