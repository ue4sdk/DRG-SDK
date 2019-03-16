// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_UI_RewardUnlock_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   OutTitle                       (CPF_Parm, CPF_OutParm)
// class UTexture2D*              Icon                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            IconTint                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              BigImage                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_RewardUnlock_C::GetUnlockDetails(struct FText* OutTitle, class UTexture2D** Icon, struct FLinearColor* IconTint, class UTexture2D** BigImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.GetUnlockDetails");

	struct
	{
		struct FText                   OutTitle;
		class UTexture2D*              Icon;
		struct FLinearColor            IconTint;
		class UTexture2D*              BigImage;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (OutTitle != nullptr)
		*OutTitle = params.OutTitle;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (IconTint != nullptr)
		*IconTint = params.IconTint;
	if (BigImage != nullptr)
		*BigImage = params.BigImage;
}


// Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_RewardUnlock_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UUI_RewardUnlock_C::ExecuteUbergraph_UI_RewardUnlock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_RewardUnlock.UI_RewardUnlock_C.ExecuteUbergraph_UI_RewardUnlock");

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
