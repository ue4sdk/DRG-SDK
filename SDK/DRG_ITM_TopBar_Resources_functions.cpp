// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_TopBar_Resources_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           InResource                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InHideWhenZero                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_Resources_C::AddResource(class UResourceData* InResource, bool InHideWhenZero)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.AddResource");

	struct
	{
		class UResourceData*           InResource;
		bool                           InHideWhenZero;
	} params;

	params.InResource = InResource;
	params.InHideWhenZero = InHideWhenZero;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UResourceData*>   InResources                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UITM_TopBar_Resources_C::SetResources(TArray<class UResourceData*>* InResources)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.SetResources");

	struct
	{
		TArray<class UResourceData*>   InResources;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (InResources != nullptr)
		*InResources = params.InResources;
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_Resources_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITM_TopBar_Resources_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.OnResourceAmountChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UResourceData*           Resource                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          currentAmount                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_Resources_C::OnResourceAmountChanged(class UResourceData* Resource, float currentAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.OnResourceAmountChanged");

	struct
	{
		class UResourceData*           Resource;
		float                          currentAmount;
	} params;

	params.Resource = Resource;
	params.currentAmount = currentAmount;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_TopBar_Resources_C::ExecuteUbergraph_ITM_TopBar_Resources(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_TopBar_Resources.ITM_TopBar_Resources_C.ExecuteUbergraph_ITM_TopBar_Resources");

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
