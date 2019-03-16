// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MasteryBar_Block_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsUnlocked                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_Block_C::SetUnlocked(bool IsUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.SetUnlocked");

	struct
	{
		bool                           IsUnlocked;
	} params;

	params.IsUnlocked = IsUnlocked;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_Block_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UITM_MasteryBar_Block_C::ReceiveUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ReceiveUnlocked");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITM_MasteryBar_Block_C::ExecuteUbergraph_ITM_MasteryBar_Block(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MasteryBar_Block.ITM_MasteryBar_Block_C.ExecuteUbergraph_ITM_MasteryBar_Block");

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
