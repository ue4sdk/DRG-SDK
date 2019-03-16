// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ChaCus_ColorChange_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ColorChange_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.SetData
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UVanityItem*>     Items                          (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// class UVanityItem*             EquippedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ColorChange_C::SetData(TArray<class UVanityItem*> Items, class UVanityItem* EquippedItem, class UClass* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.SetData");

	struct
	{
		TArray<class UVanityItem*>     Items;
		class UVanityItem*             EquippedItem;
		class UClass*                  Character;
	} params;

	params.Items = Items;
	params.EquippedItem = EquippedItem;
	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ColorSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UITM_ChaCus_ColorChange_ColorBox_C* Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UITM_ChaCus_ColorChange_C::ColorSelected(class UITM_ChaCus_ColorChange_ColorBox_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ColorSelected");

	struct
	{
		class UITM_ChaCus_ColorChange_ColorBox_C* Item;
	} params;

	params.Item = Item;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ExecuteUbergraph_ITM_ChaCus_ColorChange
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ChaCus_ColorChange_C::ExecuteUbergraph_ITM_ChaCus_ColorChange(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ChaCus_ColorChange.ITM_ChaCus_ColorChange_C.ExecuteUbergraph_ITM_ChaCus_ColorChange");

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
