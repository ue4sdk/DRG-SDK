// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_Craft_ItemIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class AFSDPlayerState*         AsFSDPlayer_State              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemIcon_C::GetPlayerState(class AFSDPlayerState** AsFSDPlayer_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.GetPlayerState");

	struct
	{
		class AFSDPlayerState*         AsFSDPlayer_State;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (AsFSDPlayer_State != nullptr)
		*AsFSDPlayer_State = params.AsFSDPlayer_State;
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TScriptInterface<class UCraftable> Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemIcon_C::SetData(const TScriptInterface<class UCraftable>& Item, class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.SetData");

	struct
	{
		TScriptInterface<class UCraftable> Item;
		class UClass*                  CharacterClass;
	} params;

	params.Item = Item;
	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_Craft_ItemIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_Craft_ItemIcon_C::ExecuteUbergraph_ITM_Craft_ItemIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_Craft_ItemIcon.ITM_Craft_ItemIcon_C.ExecuteUbergraph_ITM_Craft_ItemIcon");

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
