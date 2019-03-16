// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Menu_ColorBarVertical_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_ColorBarVertical_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.ExecuteUbergraph_Basic_Menu_ColorBarVertical
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_ColorBarVertical_C::ExecuteUbergraph_Basic_Menu_ColorBarVertical(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_ColorBarVertical.Basic_Menu_ColorBarVertical_C.ExecuteUbergraph_Basic_Menu_ColorBarVertical");

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
