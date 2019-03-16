#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_LIB_Text_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LIB_Text.LIB_Text_C
// 0x0000 (0x0028 - 0x0028)
class ULIB_Text_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass LIB_Text.LIB_Text_C");
		return ptr;
	}


	static void GetFontSize(class UObject* __WorldContext, class UTextBlock** Label, int* Size);
	static void SetFontSize(int NewSize, class UObject* __WorldContext, class UTextBlock** Label);
	static void SetTextUpperCased(class UTextBlock* Target, const struct FText& InText, class UObject* __WorldContext);
	static void GetDisconnectReasonCaption(EDisconnectReason DisconnectReason, class UObject* __WorldContext, struct FText* Text);
	static void GetDisconnectReasonText(EDisconnectReason DisconnectReason, class UObject* __WorldContext, struct FText* Text);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
