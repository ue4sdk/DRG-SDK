#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_ChromaSDKPlugin_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// 0x00D0 (0x00F8 - 0x0028)
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              OverrideFrameTime;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0038(0x0078) (CPF_Edit)
	EChromaSDKDevice1DEnum                             Device;                                                   // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FChromaSDKColorFrame1D>              Frames;                                                   // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}


	void Unload();
	void Stop();
	void PlayWithOnComplete(const struct FScriptDelegate& OnComplete);
	void Play();
	void Load();
	bool IsPlaying();
	bool IsLoaded();
	TArray<struct FChromaSDKColorFrame1D> GetFrames();
};


// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// 0x00D0 (0x00F8 - 0x0028)
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              OverrideFrameTime;                                        // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                                    // 0x0038(0x0078) (CPF_Edit)
	EChromaSDKDevice2DEnum                             Device;                                                   // 0x00B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	TArray<struct FChromaSDKColorFrame2D>              Frames;                                                   // 0x00B8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x00C8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}


	void Unload();
	void Stop();
	void PlayWithOnComplete(const struct FScriptDelegate& OnComplete);
	void Play();
	void Load();
	bool IsPlaying();
	bool IsLoaded();
	TArray<struct FChromaSDKColorFrame2D> GetFrames();
};


// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}


	static TArray<struct FChromaSDKColors> SetMouseLedColor(EChromaSDKMouseLed led, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors);
	static TArray<struct FChromaSDKColors> SetKeyboardKeyColor(EChromaSDKKeyboardKey Key, const struct FLinearColor& Color, TArray<struct FChromaSDKColors>* Colors);
	static bool IsPlatformWindows();
	static bool IsInitialized();
	static int GetMaxRow(EChromaSDKDevice2DEnum Device);
	static int GetMaxLeds(EChromaSDKDevice1DEnum Device);
	static int GetMaxColumn(EChromaSDKDevice2DEnum Device);
	static struct FString DebugToString(const struct FChromaSDKGuid& EffectId);
	static TArray<struct FChromaSDKColors> CreateRandomColors2D(EChromaSDKDevice2DEnum Device);
	static TArray<struct FLinearColor> CreateRandomColors1D(EChromaSDKDevice1DEnum Device);
	static TArray<struct FChromaSDKColors> CreateColors2D(EChromaSDKDevice2DEnum Device);
	static TArray<struct FLinearColor> CreateColors1D(EChromaSDKDevice1DEnum Device);
	static int ChromaSDKUnInit();
	static int ChromaSDKSetEffect(const struct FChromaSDKGuid& EffectId);
	static int ChromaSDKInit();
	static int ChromaSDKDeleteEffect(const struct FChromaSDKGuid& EffectId);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectStatic(EChromaSDKDeviceEnum Device, const struct FLinearColor& Color);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectNone(EChromaSDKDeviceEnum Device);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom2D(EChromaSDKDevice2DEnum Device, TArray<struct FChromaSDKColors> Colors);
	static struct FChromaSDKEffectResult ChromaSDKCreateEffectCustom1D(EChromaSDKDevice1DEnum Device, TArray<struct FLinearColor> Colors);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
