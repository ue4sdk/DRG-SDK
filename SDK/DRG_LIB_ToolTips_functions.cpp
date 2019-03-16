// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_ToolTips_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 ToolTipTarget                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UClass*                  ToolTipClass                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Offset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget*             OutToolTip                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ULIB_ToolTips_C::CreateToolTip(class UWidget* ToolTipTarget, class UClass* ToolTipClass, const struct FVector2D& Offset, class UObject* __WorldContext, class UUserWidget** OutToolTip)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateToolTip");

	struct
	{
		class UWidget*                 ToolTipTarget;
		class UClass*                  ToolTipClass;
		struct FVector2D               Offset;
		class UObject*                 __WorldContext;
		class UUserWidget*             OutToolTip;
	} params;

	params.ToolTipTarget = ToolTipTarget;
	params.ToolTipClass = ToolTipClass;
	params.Offset = Offset;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (OutToolTip != nullptr)
		*OutToolTip = params.OutToolTip;
}


// Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FVector2D               Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Alignment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UResourceData*           ResourceA                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UResourceData*           ResourceB                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBiome_ToolTip_C*        ToolTipWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ULIB_ToolTips_C::CreateBiomeToolTip(class UWidget* Target, const struct FVector2D& Position, const struct FVector2D& Alignment, class UResourceData* ResourceA, class UResourceData* ResourceB, class UObject* __WorldContext, class UBiome_ToolTip_C** ToolTipWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateBiomeToolTip");

	struct
	{
		class UWidget*                 Target;
		struct FVector2D               Position;
		struct FVector2D               Alignment;
		class UResourceData*           ResourceA;
		class UResourceData*           ResourceB;
		class UObject*                 __WorldContext;
		class UBiome_ToolTip_C*        ToolTipWidget;
	} params;

	params.Target = Target;
	params.Position = Position;
	params.Alignment = Alignment;
	params.ResourceA = ResourceA;
	params.ResourceB = ResourceB;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ToolTipWidget != nullptr)
		*ToolTipWidget = params.ToolTipWidget;
}


// Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FText                   Text                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// struct FVector2D               Position                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector2D               Alignment                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UBasic_ToolTip_C*        ToolTipWidget                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ULIB_ToolTips_C::CreateBasicToolTip(class UWidget* Target, const struct FText& Text, const struct FVector2D& Position, const struct FVector2D& Alignment, class UObject* __WorldContext, class UBasic_ToolTip_C** ToolTipWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LIB_ToolTips.LIB_ToolTips_C.CreateBasicToolTip");

	struct
	{
		class UWidget*                 Target;
		struct FText                   Text;
		struct FVector2D               Position;
		struct FVector2D               Alignment;
		class UObject*                 __WorldContext;
		class UBasic_ToolTip_C*        ToolTipWidget;
	} params;

	params.Target = Target;
	params.Text = Text;
	params.Position = Position;
	params.Alignment = Alignment;
	params.__WorldContext = __WorldContext;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (ToolTipWidget != nullptr)
		*ToolTipWidget = params.ToolTipWidget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
