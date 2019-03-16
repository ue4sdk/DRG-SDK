// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_UpgradesSmall_SingleIcon_Connector_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_UpgradesSmall_SingleIcon_Connector.ITEM_UpgradesSmall_SingleIcon_Connector_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_Connector_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon_Connector.ITEM_UpgradesSmall_SingleIcon_Connector_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon_Connector.ITEM_UpgradesSmall_SingleIcon_Connector_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsLocked                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_Connector_C::SetData(bool IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon_Connector.ITEM_UpgradesSmall_SingleIcon_Connector_C.SetData");

	struct
	{
		bool                           IsLocked;
	} params;

	params.IsLocked = IsLocked;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_UpgradesSmall_SingleIcon_Connector.ITEM_UpgradesSmall_SingleIcon_Connector_C.ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon_Connector
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_UpgradesSmall_SingleIcon_Connector_C::ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon_Connector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_UpgradesSmall_SingleIcon_Connector.ITEM_UpgradesSmall_SingleIcon_Connector_C.ExecuteUbergraph_ITEM_UpgradesSmall_SingleIcon_Connector");

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
