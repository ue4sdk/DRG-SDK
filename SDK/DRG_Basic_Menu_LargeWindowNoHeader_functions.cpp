// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_Menu_LargeWindowNoHeader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_LargeWindowNoHeader_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBasic_Menu_LargeWindowNoHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_Menu_LargeWindowNoHeader_C::ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_Menu_LargeWindowNoHeader.Basic_Menu_LargeWindowNoHeader_C.ExecuteUbergraph_Basic_Menu_LargeWindowNoHeader");

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
