// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITEM_SpaceRig_Buf_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_Buf_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UITEM_SpaceRig_Buf_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.OnTemporaryBuffChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTemporaryBuff*          buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_Buf_C::OnTemporaryBuffChanged(class UTemporaryBuff* buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.OnTemporaryBuffChanged");

	struct
	{
		class UTemporaryBuff*          buff;
	} params;

	params.buff = buff;

	UObject::ProcessEvent(fn, &params);
}


// Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.ExecuteUbergraph_ITEM_SpaceRig_Buf
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UITEM_SpaceRig_Buf_C::ExecuteUbergraph_ITEM_SpaceRig_Buf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITEM_SpaceRig_Buf.ITEM_SpaceRig_Buf_C.ExecuteUbergraph_ITEM_SpaceRig_Buf");

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
