// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_CharacterSelectMovie_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Collapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Collapse");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UITEM_CharacterSelectMovie_C::SetVideo(const struct FString& Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.SetVideo");

	struct
	{
		struct FString                 Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_CharacterSelectMovie_C::InitPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.InitPlayer");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Build
// (FUNC_Net, FUNC_NetClient, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITEM_CharacterSelectMovie_C::Build()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.Build");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_CharacterSelectMovie_C::ExecuteUbergraph_ITEM_CharacterSelectMovie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_CharacterSelectMovie.ITEM_CharacterSelectMovie_C.ExecuteUbergraph_ITEM_CharacterSelectMovie");

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
