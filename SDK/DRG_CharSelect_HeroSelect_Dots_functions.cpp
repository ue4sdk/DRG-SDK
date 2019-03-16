// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_CharSelect_HeroSelect_Dots_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_Dots_C::UpdateDots()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.UpdateDots");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  CharacterClass                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::Set_Character_Class(class UClass* CharacterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Set Character Class");

	struct
	{
		class UClass*                  CharacterClass;
	} params;

	params.CharacterClass = CharacterClass;

	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCharSelect_HeroSelect_Dots_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCharSelect_HeroSelect_Dots_C::ExecuteUbergraph_CharSelect_HeroSelect_Dots(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharSelect_HeroSelect_Dots.CharSelect_HeroSelect_Dots_C.ExecuteUbergraph_CharSelect_HeroSelect_Dots");

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
