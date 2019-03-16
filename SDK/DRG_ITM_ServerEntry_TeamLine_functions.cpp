// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_ServerEntry_TeamLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InIcon                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor            InIconTint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITM_ServerEntry_TeamLine_C::SetPlayerData(class UTexture2D* InIcon, const struct FLinearColor& InIconTint, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.SetPlayerData");

	struct
	{
		class UTexture2D*              InIcon;
		struct FLinearColor            InIconTint;
		struct FText                   Text;
	} params;

	params.InIcon = InIcon;
	params.InIconTint = InIconTint;
	params.Text = Text;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerEntry_TeamLine_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_ServerEntry_TeamLine_C::ExecuteUbergraph_ITM_ServerEntry_TeamLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_ServerEntry_TeamLine.ITM_ServerEntry_TeamLine_C.ExecuteUbergraph_ITM_ServerEntry_TeamLine");

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
