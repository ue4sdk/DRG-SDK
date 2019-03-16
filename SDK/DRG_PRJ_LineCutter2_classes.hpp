#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_PRJ_LineCutter2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C
// 0x00B0 (0x05A8 - 0x04F8)
class APRJ_LineCutter2_C : public ALineCutterProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                               // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            SphereRight2;                                             // 0x0508(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            SphereLeft2;                                              // 0x0510(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Plasma_Projectile2;                                     // 0x0518(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right2;                        // 0x0520(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left2;                         // 0x0528(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDamageComponent*                            DamageExplosion;                                          // 0x0530(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UProjectileExplosion*                        ProjectileExplosion;                                      // 0x0538(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Left;                          // 0x0540(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Linecutter_Projectile_A_Right;                         // 0x0548(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Plasma_Projectile;                                      // 0x0550(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Sphere1;                                                  // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            SphereRight;                                              // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            SphereLeft;                                               // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FTimerHandle                                ExpandLineTimerHandle;                                    // 0x0578(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                TimerHandleExecutions;                                    // 0x0580(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VisualMaxSize;                                            // 0x0584(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                FireTimerHandle;                                          // 0x0588(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                DestructionByTerrainTimerHandle;                          // 0x0590(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              TerrainCallTime;                                          // 0x0598(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                TerrainIndex;                                             // 0x059C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                ReduceLineTimerHandle;                                    // 0x05A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass PRJ_LineCutter2.PRJ_LineCutter2_C");
		return ptr;
	}


	void AdjustLineSize();
	void UserConstructionScript();
	void DisableProjectile();
	void ReceiveBeginPlay();
	void ExpandLine();
	void DoDamage();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void StartLineExpansion();
	void CheckTerrainCall();
	void Set_Line_Size_Event(float MaxSize, float MaxSizeVisual);
	void Multiply_Line_Size(float Multiplier);
	void ReceiveTick(float DeltaSeconds);
	void K2_OnReset();
	void LinelifespanDestroy();
	void Explode();
	void LineReducing();
	void ThereCanBeOnlyOne();
	void Add_Line_Size(float Size);
	void OnClientInitialized();
	void OnLineDestroyed(const struct FHitResult& Result);
	void ExecuteUbergraph_PRJ_LineCutter2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
