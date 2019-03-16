// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ChromaSDKPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnComplete                     (CPF_Parm, CPF_ZeroConstructor)

void UChromaSDKPluginAnimation1DObject::PlayWithOnComplete(const struct FScriptDelegate& OnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete");

	struct
	{
		struct FScriptDelegate         OnComplete;
	} params;

	params.OnComplete = OnComplete;

	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation1DObject::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UChromaSDKPluginAnimation1DObject::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UChromaSDKPluginAnimation1DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColorFrame1D> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FChromaSDKColorFrame1D> UChromaSDKPluginAnimation1DObject::GetFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames");

	struct
	{
		TArray<struct FChromaSDKColorFrame1D> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Unload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnComplete                     (CPF_Parm, CPF_ZeroConstructor)

void UChromaSDKPluginAnimation2DObject::PlayWithOnComplete(const struct FScriptDelegate& OnComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete");

	struct
	{
		struct FScriptDelegate         OnComplete;
	} params;

	params.OnComplete = OnComplete;

	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UChromaSDKPluginAnimation2DObject::Load()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UChromaSDKPluginAnimation2DObject::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UChromaSDKPluginAnimation2DObject::IsLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded");

	struct
	{
		bool                           ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FChromaSDKColorFrame2D> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FChromaSDKColorFrame2D> UChromaSDKPluginAnimation2DObject::GetFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames");

	struct
	{
		TArray<struct FChromaSDKColorFrame2D> ReturnValue;
	} params;


	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKMouseLed             led                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FChromaSDKColors> Colors                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FChromaSDKColors> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::SetMouseLedColor(EChromaSDKMouseLed led, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor");

	struct
	{
		EChromaSDKMouseLed             led;
		struct FLinearColor            Color;
		TArray<struct FChromaSDKColors> Colors;
		TArray<struct FChromaSDKColors> ReturnValue;
	} params;

	params.led = led;
	params.Color = Color;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Colors != nullptr)
		*Colors = params.Colors;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKKeyboardKey          Key                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FChromaSDKColors> Colors                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<struct FChromaSDKColors> ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::SetKeyboardKeyColor(EChromaSDKKeyboardKey Key, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor");

	struct
	{
		EChromaSDKKeyboardKey          Key;
		struct FLinearColor            Color;
		TArray<struct FChromaSDKColors> Colors;
		TArray<struct FChromaSDKColors> ReturnValue;
	} params;

	params.Key = Key;
	params.Color = Color;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	if (Colors != nullptr)
		*Colors = params.Colors;

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UChromaSDKPluginBPLibrary::IsPlatformWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UChromaSDKPluginBPLibrary::IsInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized");

	struct
	{
		bool                           ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::GetMaxRow(EChromaSDKDevice2DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow");

	struct
	{
		EChromaSDKDevice2DEnum         Device;
		int                            ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::GetMaxLeds(EChromaSDKDevice1DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds");

	struct
	{
		EChromaSDKDevice1DEnum         Device;
		int                            ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::GetMaxColumn(EChromaSDKDevice2DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn");

	struct
	{
		EChromaSDKDevice2DEnum         Device;
		int                            ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid          EffectId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UChromaSDKPluginBPLibrary::DebugToString(const struct FChromaSDKGuid& EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString");

	struct
	{
		struct FChromaSDKGuid          EffectId;
		struct FString                 ReturnValue;
	} params;

	params.EffectId = EffectId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FChromaSDKColors> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateRandomColors2D(EChromaSDKDevice2DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D");

	struct
	{
		EChromaSDKDevice2DEnum         Device;
		TArray<struct FChromaSDKColors> ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::CreateRandomColors1D(EChromaSDKDevice1DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D");

	struct
	{
		EChromaSDKDevice1DEnum         Device;
		TArray<struct FLinearColor>    ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FChromaSDKColors> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FChromaSDKColors> UChromaSDKPluginBPLibrary::CreateColors2D(EChromaSDKDevice2DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D");

	struct
	{
		EChromaSDKDevice2DEnum         Device;
		TArray<struct FChromaSDKColors> ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FLinearColor> UChromaSDKPluginBPLibrary::CreateColors1D(EChromaSDKDevice1DEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D");

	struct
	{
		EChromaSDKDevice1DEnum         Device;
		TArray<struct FLinearColor>    ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::ChromaSDKUnInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid          EffectId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect");

	struct
	{
		struct FChromaSDKGuid          EffectId;
		int                            ReturnValue;
	} params;

	params.EffectId = EffectId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::ChromaSDKInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit");

	struct
	{
		int                            ReturnValue;
	} params;


	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FChromaSDKGuid          EffectId                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UChromaSDKPluginBPLibrary::ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect");

	struct
	{
		struct FChromaSDKGuid          EffectId;
		int                            ReturnValue;
	} params;

	params.EffectId = EffectId;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDeviceEnum           Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FChromaSDKEffectResult  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum Device, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic");

	struct
	{
		EChromaSDKDeviceEnum           Device;
		struct FLinearColor            Color;
		struct FChromaSDKEffectResult  ReturnValue;
	} params;

	params.Device = Device;
	params.Color = Color;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDeviceEnum           Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FChromaSDKEffectResult  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum Device)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone");

	struct
	{
		EChromaSDKDeviceEnum           Device;
		struct FChromaSDKEffectResult  ReturnValue;
	} params;

	params.Device = Device;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice2DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FChromaSDKColors> Colors                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FChromaSDKEffectResult  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum Device, TArray<struct FChromaSDKColors> Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D");

	struct
	{
		EChromaSDKDevice2DEnum         Device;
		TArray<struct FChromaSDKColors> Colors;
		struct FChromaSDKEffectResult  ReturnValue;
	} params;

	params.Device = Device;
	params.Colors = Colors;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// EChromaSDKDevice1DEnum         Device                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<struct FLinearColor>    Colors                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FChromaSDKEffectResult  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FChromaSDKEffectResult UChromaSDKPluginBPLibrary::ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum Device, TArray<struct FLinearColor> Colors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D");

	struct
	{
		EChromaSDKDevice1DEnum         Device;
		TArray<struct FLinearColor>    Colors;
		struct FChromaSDKEffectResult  ReturnValue;
	} params;

	params.Device = Device;
	params.Colors = Colors;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
