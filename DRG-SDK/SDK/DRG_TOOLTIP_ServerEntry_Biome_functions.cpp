// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_TOOLTIP_ServerEntry_Biome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBiome*                  InBiome                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerEntry_Biome_C::SetData(class UBiome* InBiome)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.SetData");

	struct
	{
		class UBiome*                  InBiome;
	} params;

	params.InBiome = InBiome;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerEntry_Biome_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UTOOLTIP_ServerEntry_Biome_C::ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TOOLTIP_ServerEntry_Biome.TOOLTIP_ServerEntry_Biome_C.ExecuteUbergraph_TOOLTIP_ServerEntry_Biome");

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
