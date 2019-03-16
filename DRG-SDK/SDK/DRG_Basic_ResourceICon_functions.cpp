// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic_ResourceICon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basic_ResourceICon.Basic_ResourceIcon_C.SetResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ResourceIcon_C::SetResource(class UResourceData* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.SetResource");

	struct
	{
		class UResourceData*           Resource;
	} params;

	params.Resource = Resource;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ResourceICon.Basic_ResourceIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ResourceIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function Basic_ResourceICon.Basic_ResourceIcon_C.ExecuteUbergraph_Basic_ResourceIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBasic_ResourceIcon_C::ExecuteUbergraph_Basic_ResourceIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basic_ResourceICon.Basic_ResourceIcon_C.ExecuteUbergraph_Basic_ResourceIcon");

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
