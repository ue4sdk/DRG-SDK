// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_SpaceRig_PersonalCharacterLevel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Update(class APlayerCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Update");

	struct
	{
		class APlayerCharacter*        Character;
	} params;

	params.Character = Character;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        PlayerCharacter                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::OnPlayerCharacterSpawned(class APlayerCharacter* PlayerCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnPlayerCharacterSpawned");

	struct
	{
		class APlayerCharacter*        PlayerCharacter;
	} params;

	params.PlayerCharacter = PlayerCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::OnCharacterStatsChanged_Event(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.OnCharacterStatsChanged_Event");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_PersonalCharacterLevel_C::ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_PersonalCharacterLevel.ITEM_SpaceRig_PersonalCharacterLevel_C.ExecuteUbergraph_ITEM_SpaceRig_PersonalCharacterLevel");

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
