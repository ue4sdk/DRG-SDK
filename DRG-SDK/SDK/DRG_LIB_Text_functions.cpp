// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_Text_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_Text.LIB_Text_C.GetFontSize
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTextBlock*              Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            Size                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Text_C::GetFontSize(class UObject* __WorldContext, class UTextBlock** Label, int* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetFontSize");

	struct
	{
		class UTextBlock*              Label;
		class UObject*                 __WorldContext;
		int                            Size;
	} params;

	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Label != nullptr)
		*Label = params.Label;
	if (Size != nullptr)
		*Size = params.Size;
}


// Function LIB_Text.LIB_Text_C.SetFontSize
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Label                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            NewSize                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Text_C::SetFontSize(int NewSize, class UObject* __WorldContext, class UTextBlock** Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetFontSize");

	struct
	{
		class UTextBlock*              Label;
		int                            NewSize;
		class UObject*                 __WorldContext;
	} params;

	params.NewSize = NewSize;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Label != nullptr)
		*Label = params.Label;
}


// Function LIB_Text.LIB_Text_C.SetTextUpperCased
// (FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTextBlock*              Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULIB_Text_C::SetTextUpperCased(class UTextBlock* Target, const struct FText& InText, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.SetTextUpperCased");

	struct
	{
		class UTextBlock*              Target;
		struct FText                   InText;
		class UObject*                 __WorldContext;
	} params;

	params.Target = Target;
	params.InText = InText;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);
}


// Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EDisconnectReason              DisconnectReason               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void ULIB_Text_C::GetDisconnectReasonCaption(EDisconnectReason DisconnectReason, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetDisconnectReasonCaption");

	struct
	{
		EDisconnectReason              DisconnectReason;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params;

	params.DisconnectReason = DisconnectReason;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


// Function LIB_Text.LIB_Text_C.GetDisconnectReasonText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// EDisconnectReason              DisconnectReason               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_Parm, CPF_OutParm)

void ULIB_Text_C::GetDisconnectReasonText(EDisconnectReason DisconnectReason, class UObject* __WorldContext, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_Text.LIB_Text_C.GetDisconnectReasonText");

	struct
	{
		EDisconnectReason              DisconnectReason;
		class UObject*                 __WorldContext;
		struct FText                   Text;
	} params;

	params.DisconnectReason = DisconnectReason;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Text != nullptr)
		*Text = params.Text;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
