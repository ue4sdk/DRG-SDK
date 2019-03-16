// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ITM_MissionMapIcon_Objective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C.SetData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   InText                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UITM_MissionMapIcon_Objective_C::SetData(class UTexture2D* Texture, const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ITM_MissionMapIcon_Objective.ITM_MissionMapIcon_Objective_C.SetData");

	struct
	{
		class UTexture2D*              Texture;
		struct FText                   InText;
	} params;

	params.Texture = Texture;
	params.InText = InText;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
