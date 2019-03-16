// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_HUD_PlayerClass_Icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetBuf
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTemporaryBuff*          Buf                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::SetBuf(class UTemporaryBuff* Buf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetBuf");

	struct
	{
		class UTemporaryBuff*          Buf;
	} params;

	params.Buf = Buf;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetIsServer
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsServer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::SetIsServer(bool IsServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetIsServer");

	struct
	{
		bool                           IsServer;
	} params;

	params.IsServer = IsServer;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHUD_PlayerClass_Icon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.FromPlayerState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class APlayerState*            PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UClass*                  playerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::FromPlayerState(class APlayerState* PlayerState, class UClass* playerClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.FromPlayerState");

	struct
	{
		class APlayerState*            PlayerState;
		class UClass*                  playerClass;
	} params;

	params.PlayerState = PlayerState;
	params.playerClass = playerClass;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.OnTemporaryBuffChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTemporaryBuff*          buff                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::OnTemporaryBuffChanged(class UTemporaryBuff* buff)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.OnTemporaryBuffChanged");

	struct
	{
		class UTemporaryBuff*          buff;
	} params;

	params.buff = buff;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  playerClass                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TimesRetired                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsServer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTemporaryBuff*          Buf                            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::SetData(class UClass* playerClass, int TimesRetired, bool IsServer, class UTemporaryBuff* Buf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.SetData");

	struct
	{
		class UClass*                  playerClass;
		int                            TimesRetired;
		bool                           IsServer;
		class UTemporaryBuff*          Buf;
	} params;

	params.playerClass = playerClass;
	params.TimesRetired = TimesRetired;
	params.IsServer = IsServer;
	params.Buf = Buf;

	UObject::ProcessEvent(fn, &params);
}


// Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.ExecuteUbergraph_HUD_PlayerClass_Icon
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHUD_PlayerClass_Icon_C::ExecuteUbergraph_HUD_PlayerClass_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_PlayerClass_Icon.HUD_PlayerClass_Icon_C.ExecuteUbergraph_HUD_PlayerClass_Icon");

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
