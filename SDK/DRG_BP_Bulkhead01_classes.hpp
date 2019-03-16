#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_BP_Bulkhead01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Bulkhead01.BP_Bulkhead01_C
// 0x0085 (0x03AD - 0x0328)
class ABP_Bulkhead01_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UStaticMeshComponent*                        DoorR;                                                    // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               DoorR_Holder;                                             // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        DoorL;                                                    // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               DoorL_Holder;                                             // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBoxComponent*                               TriggerBox;                                               // 0x0350(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Frame;                                                    // 0x0358(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0360(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TL_Open_Movement_20FE459B46C78C2032475C820E41D3EA;        // 0x0368(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TL_Open__Direction_20FE459B46C78C2032475C820E41D3EA;      // 0x036C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TL_Open;                                                  // 0x0370(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Driver_Movement_137D39154F4F54A9387D6EB46EC05709;         // 0x0378(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Driver__Direction_137D39154F4F54A9387D6EB46EC05709;       // 0x037C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Driver;                                                   // 0x0380(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Open_Time;                                                // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	TArray<class APlayerCharacter*>                    Players;                                                  // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               IsOpen;                                                   // 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              TimeSinceLastSwap;                                        // 0x03A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinDoorTime;                                              // 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DoorCanOpen;                                              // 0x03AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Bulkhead01.BP_Bulkhead01_C");
		return ptr;
	}


	void HasPlayersNearby(bool* AnyPlayers);
	void OnRep_IsOpen();
	void UserConstructionScript();
	void Driver__FinishedFunc();
	void Driver__UpdateFunc();
	void TL_Open__FinishedFunc();
	void TL_Open__UpdateFunc();
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_222_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TriggerBox_K2Node_ComponentBoundEvent_233_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Open();
	void Close();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Bulkhead01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
