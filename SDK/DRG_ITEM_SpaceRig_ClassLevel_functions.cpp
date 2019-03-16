// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_SpaceRig_ClassLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_SpaceRig_ClassLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_ClassLevel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Level                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_ClassLevel_C::SetLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.SetLevel");

	struct
	{
		int                            Level;
	} params;

	params.Level = Level;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_ClassLevel_C::ExecuteUbergraph_ITEM_SpaceRig_ClassLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_ClassLevel.ITEM_SpaceRig_ClassLevel_C.ExecuteUbergraph_ITEM_SpaceRig_ClassLevel");

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
