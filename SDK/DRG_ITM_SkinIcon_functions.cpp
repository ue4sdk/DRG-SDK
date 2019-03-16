// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_SkinIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinIcon_C::SetOutlineTint(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetOutlineTint");

	struct
	{
		struct FLinearColor            Color;
	} params;

	params.Color = Color;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           IsLocked                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinIcon_C::GetIsLocked(bool* IsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.GetIsLocked");

	struct
	{
		bool                           IsLocked;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InSize                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinIcon_C::SetSize(float InSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetSize");

	struct
	{
		float                          InSize;
	} params;

	params.InSize = InSize;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UItemSkin*               InSkin                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InIsLocked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinIcon_C::SetSkin(class UItemSkin* InSkin, bool InIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.SetSkin");

	struct
	{
		class UItemSkin*               InSkin;
		bool                           InIsLocked;
	} params;

	params.InSkin = InSkin;
	params.InIsLocked = InIsLocked;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinIcon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_SkinIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_SkinIcon_C::ExecuteUbergraph_ITM_SkinIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_SkinIcon.ITM_SkinIcon_C.ExecuteUbergraph_ITM_SkinIcon");

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
