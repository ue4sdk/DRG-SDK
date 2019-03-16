// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_OnScreen_SentryDistance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Set End Points
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  Destination                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreen_SentryDistance_C::Set_End_Points(class AActor* Target, class AActor* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Set End Points");

	struct
	{
		class AActor*                  Target;
		class AActor*                  Destination;
	} params;

	params.Target = Target;
	params.Destination = Destination;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreen_SentryDistance_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Tick");

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params;

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(fn, &params);
}


// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UOnScreen_SentryDistance_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.Construct");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.ExecuteUbergraph_OnScreen_SentryDistance
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UOnScreen_SentryDistance_C::ExecuteUbergraph_OnScreen_SentryDistance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnScreen_SentryDistance.OnScreen_SentryDistance_C.ExecuteUbergraph_OnScreen_SentryDistance");

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
