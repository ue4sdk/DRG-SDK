// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_WND_MisSel_BiomeDescription_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UBiome*                  Biome                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_BiomeDescription_C::SetData(class UBiome* Biome)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.SetData");

	struct
	{
		class UBiome*                  Biome;
	} params;

	params.Biome = Biome;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_BiomeDescription_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWND_MisSel_BiomeDescription_C::ExecuteUbergraph_WND_MisSel_BiomeDescription(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WND_MisSel_BiomeDescription.WND_MisSel_BiomeDescription_C.ExecuteUbergraph_WND_MisSel_BiomeDescription");

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
