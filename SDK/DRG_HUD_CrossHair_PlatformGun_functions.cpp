// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_CrossHair_PlatformGun_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_CrossHair_PlatformGun.HUD_CrossHair_PlatformGun_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_PlatformGun_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PlatformGun.HUD_CrossHair_PlatformGun_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_CrossHair_PlatformGun.HUD_CrossHair_PlatformGun_C.ExecuteUbergraph_HUD_CrossHair_PlatformGun
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_CrossHair_PlatformGun_C::ExecuteUbergraph_HUD_CrossHair_PlatformGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_CrossHair_PlatformGun.HUD_CrossHair_PlatformGun_C.ExecuteUbergraph_HUD_CrossHair_PlatformGun");

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
