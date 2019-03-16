// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PlayerReadyBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerReadyBox.PlayerReadyBox_C.HideClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UPlayerReadyBox_C::HideClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.HideClass");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.GetPlayerState
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*       PlayerState                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::GetPlayerState(class ABP_PlayerState_C** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.GetPlayerState");

	struct
	{
		class ABP_PlayerState_C*       PlayerState;
	} params;


	UObject::ProcessEvent(fn, &params);

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function PlayerReadyBox.PlayerReadyBox_C.SetReady
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsReady                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::SetReady(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.SetReady");

	struct
	{
		bool                           IsReady;
	} params;

	params.IsReady = IsReady;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UPlayerReadyBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.ReadyChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsReady                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::ReadyChanged(bool IsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.ReadyChanged");

	struct
	{
		bool                           IsReady;
	} params;

	params.IsReady = IsReady;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.Init
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*       PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::Init(class ABP_PlayerState_C* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.Init");

	struct
	{
		class ABP_PlayerState_C*       PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.NameChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewName                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UPlayerReadyBox_C::NameChanged(const struct FString& NewName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.NameChanged");

	struct
	{
		struct FString                 NewName;
	} params;

	params.NewName = NewName;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.OnSelectedCharacterChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  NewCharacter                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::OnSelectedCharacterChanged(class UClass* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.OnSelectedCharacterChanged");

	struct
	{
		class UClass*                  NewCharacter;
	} params;

	params.NewCharacter = NewCharacter;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.FractionGenerated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Fraction                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::FractionGenerated(float Fraction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.FractionGenerated");

	struct
	{
		float                          Fraction;
	} params;

	params.Fraction = Fraction;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.LevelGenState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 NewState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor)

void UPlayerReadyBox_C::LevelGenState(const struct FString& NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.LevelGenState");

	struct
	{
		struct FString                 NewState;
	} params;

	params.NewState = NewState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.UpdateHeroInfo
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass*                  HeroClass                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::UpdateHeroInfo(class UClass* HeroClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.UpdateHeroInfo");

	struct
	{
		class UClass*                  HeroClass;
	} params;

	params.HeroClass = HeroClass;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.OnCharacterStatsChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AFSDPlayerState*         PlayerState                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::OnCharacterStatsChanged(class AFSDPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.OnCharacterStatsChanged");

	struct
	{
		class AFSDPlayerState*         PlayerState;
	} params;

	params.PlayerState = PlayerState;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.PreConstruct");

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function PlayerReadyBox.PlayerReadyBox_C.ExecuteUbergraph_PlayerReadyBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayerReadyBox_C::ExecuteUbergraph_PlayerReadyBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerReadyBox.PlayerReadyBox_C.ExecuteUbergraph_PlayerReadyBox");

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
