// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_HUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HUD.BP_HUD_C.PushEvent
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWidget*                 EventWidget                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_HUD_C::PushEvent(class UWidget* EventWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PushEvent");

	struct
	{
		class UWidget*                 EventWidget;
	} params;

	params.EventWidget = EventWidget;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_C::CreateCheatsIfNotCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CreateCheatsIfNotCreated");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_C::RemoveAllWidgetsFromParents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RemoveAllWidgetsFromParents");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_C::AddAllWidgetToViewport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.AddAllWidgetToViewport");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.AddWidget
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UWidget*                 Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_HUD_C::AddWidget(class UClass* Class, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.AddWidget");

	struct
	{
		class UClass*                  Class;
		class UWidget*                 Widget;
	} params;

	params.Class = Class;

	UObject::ProcessEvent(fn, &params);

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BP_HUD.BP_HUD_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.UserConstructionScript");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.PlayerSpawned
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class APlayerCharacter*        Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_C::PlayerSpawned(class APlayerCharacter* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.PlayerSpawned");

	struct
	{
		class APlayerCharacter*        Player;
	} params;

	params.Player = Player;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.RadarPointAdded
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class URadarPointComponent*    radarPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ABP_HUD_C::RadarPointAdded(class URadarPointComponent* radarPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.RadarPointAdded");

	struct
	{
		class URadarPointComponent*    radarPoint;
	} params;

	params.radarPoint = radarPoint;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.HandleSeamlessTravel
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_HUD_C::HandleSeamlessTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.HandleSeamlessTravel");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.OnVisibilityChanged
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_HUD_C::OnVisibilityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnVisibilityChanged");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.ReceiveDestroyed
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABP_HUD_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ReceiveDestroyed");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.OnHit_Event
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Damage                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageClass*            DamageClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           anyHealthLost                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_C::OnHit_Event(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnHit_Event");

	struct
	{
		float                          Damage;
		class UDamageClass*            DamageClass;
		class AActor*                  DamageCauser;
		bool                           anyHealthLost;
	} params;

	params.Damage = Damage;
	params.DamageClass = DamageClass;
	params.DamageCauser = DamageCauser;
	params.anyHealthLost = anyHealthLost;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.OnShowMainMenu
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_C::OnShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.OnShowMainMenu");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.CheatMenuRequest
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABP_HUD_C::CheatMenuRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.CheatMenuRequest");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_HUD_C::ExecuteUbergraph_BP_HUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HUD.BP_HUD_C.ExecuteUbergraph_BP_HUD");

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
