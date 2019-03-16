// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_SpaceRig_TeamMember_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Character                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AFSDPlayerState*         Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_TeamMember_C::Update(class APlayerCharacter* Character, class AFSDPlayerState* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Update");

	struct
	{
		class APlayerCharacter*        Character;
		class AFSDPlayerState*         Player;
	} params;

	params.Character = Character;
	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_TeamMember_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_SpaceRig_TeamMember_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_TeamMember_C::ExecuteUbergraph_ITEM_SpaceRig_TeamMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_TeamMember.ITEM_SpaceRig_TeamMember_C.ExecuteUbergraph_ITEM_SpaceRig_TeamMember");

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
