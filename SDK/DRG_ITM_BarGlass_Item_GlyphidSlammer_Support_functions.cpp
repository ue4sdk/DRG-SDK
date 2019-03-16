// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_BarGlass_Item_GlyphidSlammer_Support_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.PlayDrink
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AITM_BarGlass_Item_GlyphidSlammer_Support_C::PlayDrink()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.PlayDrink");

	struct
	{
		float                          ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AITM_BarGlass_Item_GlyphidSlammer_Support_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bReset                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_BarGlass_Item_GlyphidSlammer_Support_C::BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.BndEvt__ParticleSystem_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature");

	struct
	{
		class UActorComponent*         Component;
		bool                           bReset;
	} params;

	params.Component = Component;
	params.bReset = bReset;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.ExecuteUbergraph_ITM_BarGlass_Item_GlyphidSlammer_Support
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AITM_BarGlass_Item_GlyphidSlammer_Support_C::ExecuteUbergraph_ITM_BarGlass_Item_GlyphidSlammer_Support(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_BarGlass_Item_GlyphidSlammer_Support.ITM_BarGlass_Item_GlyphidSlammer_Support_C.ExecuteUbergraph_ITM_BarGlass_Item_GlyphidSlammer_Support");

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
