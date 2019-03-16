#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DRG_Basic.hpp"
#include "DRG_FSD_enums.hpp"
#include "DRG_AIModule_classes.hpp"
#include "DRG_Engine_classes.hpp"
#include "DRG_CoreUObject_classes.hpp"
#include "DRG_UMG_classes.hpp"
#include "DRG_SlateCore_classes.hpp"
#include "DRG_Slate_classes.hpp"
#include "DRG_GameplayTags_classes.hpp"
#include "DRG_OnlineSubsystemUtils_classes.hpp"
#include "DRG_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FSD.MissionShouts
// 0x0020
struct FMissionShouts
{
	class UDialogDataAsset*                            AfterDropPodExit;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            OnExitPodDescending;                                      // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            OnExitPodArrived;                                         // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            OnCompletion;                                             // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CreditsReward
// 0x0020
struct FCreditsReward
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Amount;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.HeroInfo
// 0x0080
struct FHeroInfo
{
	struct FString                                     HeroAnalyticsID;                                          // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FText                                       HeroName;                                                 // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UTexture2D*                                  HeroIcon;                                                 // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  SmallHeroIcon;                                            // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HeroFullSizeImage;                                        // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                HeroColor;                                                // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       HeroShortDescription;                                     // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       HeroLongDescription;                                      // 0x0068(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FSD.AttachMeshesAfflictionItem
// 0x0018
struct FAttachMeshesAfflictionItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 Mesh;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RandRange
// 0x0008
struct FRandRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FrozenAfflictionItem
// 0x0018
struct FFrozenAfflictionItem
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandRange                                  MeshScale;                                                // 0x0008(0x0008) (CPF_Edit)
	EFrozenBitsSize                                    FrozenBitsSize;                                           // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              ChanceToSpawn;                                            // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.QueuedMontage
// 0x0010
struct FQueuedMontage
{
	class UAnimMontage*                                Montage;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               ForceUpdate;                                              // 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.ItemAnimationItem
// 0x0018
struct FItemAnimationItem
{
	class UAnimMontage*                                FP_CharacterMontage;                                      // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                TP_CharacterMontage;                                      // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                ItemMontage;                                              // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RecoilSettings
// 0x0028
struct FRecoilSettings
{
	struct FRandRange                                  RecoilRoll;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FRandRange                                  RecoilPitch;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FRandRange                                  RecoilYaw;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               CanRecoilDown;                                            // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              SpringStiffness;                                          // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CriticalDampening;                                        // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DestructableBodypartItem
// 0x0010
struct FDestructableBodypartItem
{
	TArray<struct FName>                               ArmorBones;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.ArmorHealthSubItem
// 0x0020
struct FArmorHealthSubItem
{
	float                                              Health;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               AdditionalBones;                                          // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.ArmorHealthItem
// 0x0010
struct FArmorHealthItem
{
	TArray<struct FArmorHealthSubItem>                 ArmorBones;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.AttackerInfo
// 0x0010
struct FAttackerInfo
{
	TWeakObjectPtr<class AActor>                       Attacker;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                PositionIndex;                                            // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              AttackerRadius;                                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.AutoMinerDamageItem
// 0x0030
struct FAutoMinerDamageItem
{
	TWeakObjectPtr<class UPrimitiveComponent>          Target;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                                 // 0x0008(0x000C) (CPF_Transient)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x0014(0x000C) (CPF_Transient)
	class UFSDPhysicalMaterial*                        Material;                                                 // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      BoneIndex;                                                // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.BiomeDebrisInfluencerVariant
// 0x0010
struct FBiomeDebrisInfluencerVariant
{
	class UCaveInfluencer*                             Influencer;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RandomWeight;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.BiomeNoiseItem
// 0x0038
struct FBiomeNoiseItem
{
	class UFloodFillSettings*                          CeilingNoise;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDetailNoise*                                CeilingDetailNoise;                                       // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFloodFillSettings*                          WallNoise;                                                // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDetailNoise*                                WallDetailNoise;                                          // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFloodFillSettings*                          FloorNoise;                                               // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDetailNoise*                                FloorDetailNoise;                                         // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RandFloatIntervalItem
// 0x000C
struct FRandFloatIntervalItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandRange                                  Range;                                                    // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FSD.RandFloatInterval
// 0x0010
struct FRandFloatInterval
{
	TArray<struct FRandFloatIntervalItem>              Intervals;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.ResourceSpawner
// 0x0018
struct FResourceSpawner
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandFloatInterval                          AmountToSpawn;                                            // 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct FSD.RequiredMissionItem
// 0x0018
struct FRequiredMissionItem
{
	class UMissionTemplate*                            MissionTemplate;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionComplexity*                          Complexity;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionDuration*                            Duration;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.VeinResource
// 0x0028
struct FVeinResource
{
	class UVeinResourceCreator*                        ResourceCreator;                                          // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              VeinLengthToGenerate;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct FSD.CarvedResource
// 0x0010
struct FCarvedResource
{
	class UCarvedResourceCreator*                      ResourceCreator;                                          // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Overflow;                                                 // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.GemResourceAmount
// 0x0010
struct FGemResourceAmount
{
	class UGemResourceCreator*                         GemCreator;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CollectableSpawnableItem
// 0x0010
struct FCollectableSpawnableItem
{
	class UCollectableResourceData*                    Resource;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RoomNodeBase
// 0x0001
struct FRoomNodeBase
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.RoomEntrance
// 0x0020
struct FRoomEntrance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	bool                                               IsBLocked;                                                // 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	ECaveEntranceType                                  EntranceType;                                             // 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	int                                                PathObstacleID;                                           // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RoomLinePoint
// 0x0030
struct FRoomLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HRange;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VRange;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CielingNoiseRange;                                        // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WallNoiseRange;                                           // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloorNoiseRange;                                          // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Cielingheight;                                            // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeightScale;                                              // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloorDepth;                                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloorAngle;                                               // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RoomLine
// 0x0038
struct FRoomLine
{
	class UFloodFillSettings*                          WallNoiseOverride;                                        // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UFloodFillSettings*                          CeilingNoiseOverride;                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UFloodFillSettings*                          FloorNoiseOverride;                                       // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FRoomLinePoint>                      Points;                                                   // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FVector>                             RightVectors;                                             // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FSD.WeightedLinePoint
// 0x001C
struct FWeightedLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SkewFactor;                                               // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FillAmount;                                               // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.Pillar
// 0x0020
struct FPillar
{
	class UFloodFillSettings*                          NoiseOverride;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FWeightedLinePoint>                  Points;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	float                                              NoiseScale;                                               // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              EndcapScale;                                              // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FSD.Rotator_NoQuantize
// 0x0000 (0x000C - 0x000C)
struct FRotator_NoQuantize : public FRotator
{

};

// ScriptStruct FSD.RoomBox
// 0x0030
struct FRoomBox
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FRotator_NoQuantize                         Rotation;                                                 // 0x000C(0x000C) (CPF_Edit, CPF_EditConst)
	struct FVector                                     Extends;                                                  // 0x0018(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              NoiseRange;                                               // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UFloodFillSettings*                          Noise;                                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RoomItem
// 0x0040
struct FRoomItem
{
	class UClass*                                      Spawnable;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     AdjustmentDirection;                                      // 0x0014(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	EItemAdjustmentType                                Adjustment;                                               // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector                                     Scale;                                                    // 0x0024(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FRotator_NoQuantize                         Rotation;                                                 // 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedRoom
// 0x0068
struct FGeneratedRoom
{
	class UTerrainMaterial*                            Material;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FRoomLine>                           Lines;                                                    // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FPillar>                             Pillars;                                                  // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FRoomBox>                            BoxCarvers;                                               // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FRoomBox>                            BoxFillers;                                               // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FRoomEntrance>                       Entrances;                                                // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FRoomItem>                           RoomItems;                                                // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FSD.RoomGeneratorItem
// 0x0018
struct FRoomGeneratorItem
{
	class URoomGeneratorBase*                          RoomGenerator;                                            // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Rotation;                                                 // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RoomNode
// 0x00D7 (0x00D8 - 0x0001)
struct FRoomNode : public FRoomNodeBase
{
	int                                                ID;                                                       // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	ERoomType                                          RoomType;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<int>                                        EntranceIDs;                                              // 0x0018(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient)
	TArray<int>                                        ExitIDs;                                                  // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FRoomEntrance>                       RoomEntrances;                                            // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient)
	bool                                               CanHaveEnemies;                                           // 0x0048(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<struct FGeneratedRoom>                      Rooms;                                                    // 0x0050(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient)
	float                                              ResourceMultiplier;                                       // 0x0060(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              WeightedResourceAmount;                                   // 0x0064(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FRoomGeneratorItem>                  RoomGenerators;                                           // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0078(0x0060) MISSED OFFSET
};

// ScriptStruct FSD.TunnelPath
// 0x0010
struct FTunnelPath
{
	TArray<struct FVector>                             Path;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FSD.TunnelNode
// 0x00BF (0x00C0 - 0x0001)
struct FTunnelNode : public FRoomNodeBase
{
	int                                                EntranceRoomID;                                           // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                ExitRoomID;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FRoomEntrance                               Entrance;                                                 // 0x0008(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_EditConst)
	struct FRoomEntrance                               Exit;                                                     // 0x0028(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_EditConst)
	struct FTunnelPath                                 Path;                                                     // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Transient, CPF_EditConst)
	int                                                ID;                                                       // 0x0058(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              WeightedResourceAmount;                                   // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET
};

// ScriptStruct FSD.CaveInfluence
// 0x0010
struct FCaveInfluence
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Range;                                                    // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.GeneratedInfluenceSet
// 0x0020
struct FGeneratedInfluenceSet
{
	class UObject*                                     CaveInfluencer;                                           // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NetworkID;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FCaveInfluence>                      CaveInfluences;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.GeneratedInfluenceSets
// 0x0018
struct FGeneratedInfluenceSets
{
	TArray<struct FGeneratedInfluenceSet>              InfluenceSets;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	bool                                               IsValid;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.GeneratedInstantCarver
// 0x0020
struct FGeneratedInstantCarver
{
	class UClass*                                      Carver;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationPitch;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYaw;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRoll;                                             // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.GeneratedInstantCarverLists
// 0x0010
struct FGeneratedInstantCarverLists
{
	TArray<struct FGeneratedInstantCarver>             Carvers;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.MatrixWithExactSync
// 0x0040
struct FMatrixWithExactSync
{
	float                                              Values[0x10];                                             // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.LevelGenerationCarver
// 0x0068
struct FLevelGenerationCarver
{
	struct FMatrixWithExactSync                        Transform;                                                // 0x0000(0x0040)
	class USTLMeshCarver*                              MeshCarver;                                               // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 ConvexCarver;                                             // 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConvexExpensiveNoise;                                     // 0x0050(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECarveOptionsCellSize                              CarveCellSize;                                            // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTerrainMaterial*                            TerrainMaterial;                                          // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECarveFilterType                                   Filter;                                                   // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.LevelGenerationCarverLists
// 0x0010
struct FLevelGenerationCarverLists
{
	TArray<struct FLevelGenerationCarver>              Carvers;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.GeneratedInstantCarvers
// 0x0028
struct FGeneratedInstantCarvers
{
	TArray<struct FGeneratedInstantCarverLists>        Carvers;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FLevelGenerationCarverLists>         levelCarvers;                                             // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.PathObstacle
// 0x0010
struct FPathObstacle
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CaveInfluenceSet
// 0x0010
struct FCaveInfluenceSet
{
	TArray<struct FCaveInfluence>                      CaveInfluences;                                           // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.InfluenceMap
// 0x0050
struct FInfluenceMap
{
	TMap<class UObject*, struct FCaveInfluenceSet>     CaveInfluences;                                           // 0x0000(0x0050) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.DebrisCapsule
// 0x001C
struct FDebrisCapsule
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EdgeType
// 0x0018
struct FEdgeType
{
	float                                              MinLength;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLength;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Abstract;                                                 // 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.NodeType
// 0x0010
struct FNodeType
{
	float                                              Radius;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Abstract;                                                 // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EdgeFilterEditor
// 0x0030
struct FEdgeFilterEditor
{
	class ADeepGraphEdge*                              SpecificType;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             RequiredFlags;                                            // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             DiscardFlags;                                             // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              MinLength;                                                // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLength;                                                // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.NodeFilterEditor
// 0x0028
struct FNodeFilterEditor
{
	class ADeepGraphNode*                              SpecificType;                                             // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             RequiredFlags;                                            // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             DiscardFlags;                                             // 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.SplitEdgeProdEditor
// 0x0090
struct FSplitEdgeProdEditor
{
	float                                              ProductionPriority;                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEdgeFilterEditor                           Filter;                                                   // 0x0008(0x0030) (CPF_Edit)
	struct FNodeFilterEditor                           NodeFilters[0x2];                                         // 0x0038(0x0028) (CPF_Edit)
	class ADeepGraphNode*                              NewNode;                                                  // 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.PredefinedCharacterMeshData
// 0x0030
struct FPredefinedCharacterMeshData
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UStaticMesh*                                 Mesh;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeshInstance;                                             // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     PivotOffset;                                              // 0x0018(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AddToFirstPerson;                                         // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.LerpingPercent
// 0x0008
struct FLerpingPercent
{
	unsigned char                                      TargetPercent;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CountDownFloat
// 0x000C
struct FCountDownFloat
{
	float                                              CountDownDuration;                                        // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.ProjectileImpact
// 0x0030
struct FProjectileImpact
{
	struct FVector_NetQuantize                         Location;                                                 // 0x0000(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x000C(0x000C)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.UpgradeTier
// 0x0018
struct FUpgradeTier
{
	TArray<class UItemUpgrade*>                        upgrades;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	int                                                RequiredCharacterLevel;                                   // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequiredPlayerRank;                                       // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.MasteryItem
// 0x0018
struct FMasteryItem
{
	int                                                NeededMastery;                                            // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UUnlockReward*>                       Unlocks;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GearStatEntry
// 0x0068
struct FGearStatEntry
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (CPF_BlueprintVisible, CPF_Transient)
	struct FText                                       Value;                                                    // 0x0018(0x0018) (CPF_BlueprintVisible, CPF_Transient)
	struct FText                                       BaseValue;                                                // 0x0030(0x0018) (CPF_BlueprintVisible, CPF_Transient)
	struct FText                                       UpgradeValue;                                             // 0x0048(0x0018) (CPF_BlueprintVisible, CPF_Transient)
	EItemPreviewStatus                                 PreviewStatus;                                            // 0x0060(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.CraftingCost
// 0x0010
struct FCraftingCost
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Amount;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CharacterShouts
// 0x00A8
struct FCharacterShouts
{
	class UDialogDataAsset*                            Attention;                                                // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Follow;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            StandingDown;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Downed;                                                   // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            RequestRevive;                                            // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Revived;                                                  // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Resupply;                                                 // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            FriendlyFire;                                             // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            KillCry;                                                  // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Dead;                                                     // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Cheating;                                                 // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            ResourceFull;                                             // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            ResourceFullNoDonkey;                                     // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            CallDonkey;                                               // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Depositing;                                               // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepositingNoDonkey;                                       // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            OutOfAmmo;                                                // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Reloading;                                                // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            CharacterSelected;                                        // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            UpgradeBought;                                            // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            WaitingInDropPod;                                         // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DialogStruct
// 0x0030
struct FDialogStruct
{
	bool                                               Enabled;                                                  // 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class USoundBase*                                  Audio;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDialogRestriction                                 Restriction;                                              // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.MixerAnnouncement
// 0x0028
struct FFSD_FMixerAnnouncement
{
	struct FString                                     username;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FText                                       Text;                                                     // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct FSD.ActionIconMapping
// 0x0028
struct FActionIconMapping
{
	struct FKey                                        ActionKey;                                                // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DoNotTint;                                                // 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.DecalData
// 0x0018
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalSize;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalDepth;                                               // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FadeDuration;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CellNoise
// 0x001C
struct FCellNoise
{
	int                                                Seed;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CellSize;                                                 // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumValues;                                                // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCellValue;                                             // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCellValue;                                             // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DebrisCellNoiseParameters
// 0x0010
struct FDebrisCellNoiseParameters
{
	class UDebrisCellNoise*                            Noise;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinCellValue;                                             // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxCellValue;                                             // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.UDebrisCarveMesh
// 0x0010
struct FUDebrisCarveMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probablity;                                               // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisInfluence
// 0x0010
struct FDebrisInfluence
{
	class UObject*                                     CaveInfluencer;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisItemActorItem
// 0x0010
struct FDebrisItemActorItem
{
	class UClass*                                      Actor;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Probability;                                              // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.IRandRange
// 0x0008
struct FIRandRange
{
	int                                                Min;                                                      // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Max;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DebrisStaticMesh
// 0x0030
struct FDebrisStaticMesh
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDebrisMeshCollisionProfile                        CollisionProfile;                                         // 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Probablity;                                               // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundCue*                                   DestroyedSound;                                           // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             DestroyedParticles;                                       // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Fragile;                                                  // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EDebrisMeshShadows                                 CastShadows;                                              // 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Durable;                                                  // 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SpawnWhenCarving;                                         // 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DebrisWhenCarving
// 0x0030
struct FDebrisWhenCarving
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class UDebrisInstances*                            Debris;                                                   // 0x0028(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FSD.GrenadeExplodeOperationData
// 0x0020
struct FGrenadeExplodeOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Noise;                                                    // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BurnThickness;                                            // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseBulletBurntMaterial;                                   // 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.CarveWithColliderOperationData
// 0x0068
struct FCarveWithColliderOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTerrainMaterial*                            Material;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECarveFilterType                                   CarveFilter;                                              // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FMatrixWithExactSync                        Transform;                                                // 0x001C(0x0040) (CPF_Edit)
	float                                              ExpensiveNoise;                                           // 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPreciousMaterialOptions                           Precious;                                                 // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECarveOptionsCellSize                              CarveCellSize;                                            // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct FSD.CarveWithSTLMeshOperationData
// 0x0060
struct FCarveWithSTLMeshOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class USTLMeshCarver*                              MeshCarver;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTerrainMaterial*                            Material;                                                 // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	ECarveFilterType                                   CarveFilter;                                              // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EPreciousMaterialOptions                           Precious;                                                 // 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FMatrixWithExactSync                        Transform;                                                // 0x001C(0x0040) (CPF_Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PickaxeDigOperationData
// 0x0028
struct FPickaxeDigOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DigSize;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Miner;                                                    // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DrillOperationData
// 0x002C
struct FDrillOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitPos;                                                   // 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Dir;                                                      // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CarveSize;                                                // 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CarveNoise;                                               // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.MeltOperationData
// 0x0020
struct FMeltOperationData
{
	int                                                OperationNumber;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FVector>                             Points;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Radius;                                                   // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.TerrainLateJoinData
// 0x0088
struct FTerrainLateJoinData
{
	TArray<struct FGrenadeExplodeOperationData>        Explosions;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FCarveWithColliderOperationData>     colliderCarves;                                           // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FCarveWithSTLMeshOperationData>      meshCarves;                                               // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FPickaxeDigOperationData>            pickAxe;                                                  // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FDrillOperationData>                 drills;                                                   // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FMeltOperationData>                  melts;                                                    // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<int>                                        DebrisInstanceComponentPairs;                             // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<uint32_t>                                   visibleChunks;                                            // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                OperationCount;                                           // 0x0080(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EncodedChunkId
// 0x0004
struct FEncodedChunkId
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CSGRaycastHitInfo
// 0x001C
struct FCSGRaycastHitInfo
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Material;                                                 // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DeepRepPath
// 0x00D0
struct FDeepRepPath
{
	struct FVector                                     PathBase;                                                 // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      PathLength;                                               // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDeepMovementState                                 State;                                                    // 0x000D(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      StateBits;                                                // 0x000E(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	struct FVector                                     PathOffsets[0x10];                                        // 0x0010(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FakeMoverState
// 0x0060
struct FFakeMoverState
{
	float                                              TickRate;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickTime;                                                 // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     PrevPos;                                                  // 0x0008(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     NextPos;                                                  // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     PrevSurfaceNormal;                                        // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     NextSurfaceNormal;                                        // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              AccumulatedTime;                                          // 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0048(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               NearSurface;                                              // 0x0054(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              SignedDistToSurface;                                      // 0x0058(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RandIntervalItem
// 0x000C
struct FRandIntervalItem
{
	float                                              Weight;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIRandRange                                 Range;                                                    // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FSD.RandInterval
// 0x0010
struct FRandInterval
{
	TArray<struct FRandIntervalItem>                   Intervals;                                                // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.ManagedEncounterItem
// 0x0010
struct FManagedEncounterItem
{
	class UEnemyDescriptor*                            Descriptor;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PrePlacedEncounterItem
// 0x0050
struct FPrePlacedEncounterItem
{
	class UEnemyDescriptor*                            Descriptor;                                               // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Location;                                                 // 0x0010(0x0030) (CPF_Transient, CPF_IsPlainOldData)
	class AEncounterActor*                             EncounterActor;                                           // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.EncounterManagerItem
// 0x0030
struct FEncounterManagerItem
{
	TArray<struct FManagedEncounterItem>               ManagedEcnounterItems;                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FPrePlacedEncounterItem>             PrePlacedEncounterItems;                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                ID;                                                       // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               IsRoom;                                                   // 0x0024(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0025(0x000B) MISSED OFFSET
};

// ScriptStruct FSD.EnemyDebris
// 0x0018
struct FEnemyDebris
{
	float                                              InfluenceRange;                                           // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<class UDebrisBase*>                         Debris;                                                   // 0x0008(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct FSD.EnemyGroupDescriptorItem
// 0x0008
struct FEnemyGroupDescriptorItem
{
	class UEnemyDescriptor*                            EnemyDescriptor;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.SpawnQueueItem
// 0x0080
struct FSpawnQueueItem
{
	TSoftObjectPtr<class UClass>                       enemyClass;                                               // 0x0000(0x0028) (CPF_Transient)
	class UEnemyDescriptor*                            enemy;                                                    // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // 0x0030(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct FSD.SpawnEffectItem
// 0x0030 (0x003C - 0x000C)
struct FSpawnEffectItem : public FFastArraySerializerItem
{
	ECreatureSize                                      CreatureSize;                                             // 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000C(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FVector_NetQuantize                         Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.SpawnEffectsArray
// 0x0018 (0x00C8 - 0x00B0)
struct FSpawnEffectsArray : public FFastArraySerializer
{
	TArray<struct FSpawnEffectItem>                    Items;                                                    // 0x00B0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.WaveEntry
// 0x0010
struct FWaveEntry
{
	class UClass*                                      WaveController;                                           // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.FakeMoverPropulsion
// 0x0014
struct FFakeMoverPropulsion
{
	float                                              Speed;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirAcceleration;                                          // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AirDeceleration;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundAcceleration;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundDeceleration;                                       // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FakeMoverTarget
// 0x001C
struct FFakeMoverTarget
{
	float                                              InfluenceDistance;                                        // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetDistance;                                           // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GetCloserAirAcceleration;                                 // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GetAwayAirAcceleration;                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GetCloserGroundAcceleration;                              // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GetAwayGroundAcceleration;                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistance;                                              // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FakeMoveState
// 0x0024
struct FFakeMoveState
{
	struct FVector                                     Pos1;                                                     // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Pos2;                                                     // 0x000C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Vel;                                                      // 0x0018(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FlareMeta
// 0x0024
struct FFlareMeta
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Inhibit;                                                  // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InvRadius;                                                // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Pos;                                                      // 0x0014(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               Moving;                                                   // 0x0020(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.FloatPerkRank
// 0x000C
struct FFloatPerkRank
{
	int                                                Tier;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Cost;                                                     // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.LayeredNoise
// 0x0010
struct FLayeredNoise
{
	class UFloodFillSettings*                          Noise;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.FormationDataItem
// 0x0010
struct FFormationDataItem
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              distance;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct FSD.PendingRewardsStats
// 0x00B0
struct FPendingRewardsStats
{
	TMap<class UResourceData*, float>                  AllResources;                                             // 0x0000(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	TMap<class UResourceData*, float>                  CollectedResources;                                       // 0x0050(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	bool                                               PrimaryObjectiveCompleted;                                // 0x00A0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               SecondaryObjectiveCompleted;                              // 0x00A1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	float                                              TimePlayed;                                               // 0x00A4(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                EnemiesKilled;                                            // 0x00A8(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.XPReward
// 0x0020
struct FXPReward
{
	struct FText                                       Description;                                              // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                XP;                                                       // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PendingRewards
// 0x0190
struct FPendingRewards
{
	struct FPendingRewardsStats                        StartStats;                                               // 0x0000(0x00B0) (CPF_Transient)
	struct FPendingRewardsStats                        EndStats;                                                 // 0x00B0(0x00B0) (CPF_Transient)
	TArray<struct FCreditsReward>                      CreditsRewardEntries;                                     // 0x0160(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	int                                                CreditsReward;                                            // 0x0170(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0174(0x0004) MISSED OFFSET
	TArray<struct FXPReward>                           XPRewardEntries;                                          // 0x0178(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	int                                                XPReward;                                                 // 0x0188(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bHasData;                                                 // 0x018C(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsRecording;                                             // 0x018D(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bWasRewarded;                                             // 0x018E(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x018F(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.GameStateSeamlessTravelStorage
// 0x00A8
struct FGameStateSeamlessTravelStorage
{
	class UDifficultySetting*                          ChosenDifficulty;                                         // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TMap<class UPlayer*, bool>                         PlayerShouldStartInMedbay;                                // 0x0008(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TMap<class UResourceData*, float>                  resources;                                                // 0x0058(0x0050) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.FadeData
// 0x0040
struct FFadeData
{
	bool                                               bEnabled;                                                 // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowDebugOutput;                                         // 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UClass*                                      WidgetType;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UUserWidget>                  Widget;                                                   // 0x0010(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              CurrentFade;                                              // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TargetFade;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              FadeSpeed;                                                // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Delay;                                                    // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bFadeWorldOnly;                                           // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bCapFramerate;                                            // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FString                                     DebugMsg;                                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.SpaceRigNotification
// 0x0040
struct FSpaceRigNotification
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	class UTexture2D*                                  Icon;                                                     // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                IconColor;                                                // 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DiscordRichPresenceData
// 0x00B8
struct FDiscordRichPresenceData
{
	struct FString                                     State;                                                    // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     details;                                                  // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                startTimestamp;                                           // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                endTimestamp;                                             // 0x0024(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     largeImageKey;                                            // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     largeImageText;                                           // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     smallImageKey;                                            // 0x0048(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     smallImageText;                                           // 0x0058(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     partyId;                                                  // 0x0068(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	int                                                partySize;                                                // 0x0078(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                partyMax;                                                 // 0x007C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     matchSecret;                                              // 0x0080(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     joinSecret;                                               // 0x0090(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	struct FString                                     spectateSecret;                                           // 0x00A0(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
	bool                                               instance;                                                 // 0x00B0(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.FSDChatMessage
// 0x0038
struct FFSDChatMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EChatMessageType                                   MsgType;                                                  // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Sender;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	EChatSenderType                                    SenderType;                                               // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FString                                     Msg;                                                      // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GeneratedMissionGroup
// 0x0010
struct FGeneratedMissionGroup
{
	TArray<class UGeneratedMission*>                   AvailableMissions;                                        // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.ReplicatedObjectives
// 0x0018
struct FReplicatedObjectives
{
	bool                                               HasReplicated;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UObjective*>                          Objectives;                                               // 0x0008(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.GeneratedMissionSeed
// 0x0040
struct FGeneratedMissionSeed
{
	int                                                Seed;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                GlobalSeed;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UBiome*                                      Biome;                                                    // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMissionTemplate*                            Template;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMissionComplexity*                          ComplexityLimit;                                          // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMissionDuration*                            DurationLimit;                                            // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMissionMutator*                             Mutator;                                                  // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMissionWarning*                             Warning;                                                  // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EMissionStructure                                  MissionStructure;                                         // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.FSDLocalizedChatMessage
// 0x0048
struct FFSDLocalizedChatMessage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	EChatMessageType                                   MsgType;                                                  // 0x0008(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     Sender;                                                   // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FText                                       Msg;                                                      // 0x0020(0x0018) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TArray<struct FText>                               Arguments;                                                // 0x0038(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.ScaledEffect
// 0x0010
struct FScaledEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.HUDElements
// 0x0004
struct FHUDElements
{
	bool                                               EnemyHealth;                                              // 0x0000(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               Radar;                                                    // 0x0001(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               Depth;                                                    // 0x0002(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool                                               PlayerNameClass;                                          // 0x0003(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CustomKeyBinding
// 0x0030
struct FCustomKeyBinding
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EKeyBindingAxis                                    ActionAxis;                                               // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FKey                                        Key;                                                      // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                Index;                                                    // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ControllerSettings
// 0x000C
struct FControllerSettings
{
	float                                              AimInnerDeadZone;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimSensitivity;                                           // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimOuterAcceleration;                                     // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.PlayerProgress
// 0x0008
struct FPlayerProgress
{
	int                                                PlayerRank;                                               // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PlayerStars;                                              // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CharacterProgress
// 0x0020
struct FCharacterProgress
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Level;                                                    // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Progress;                                                 // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentXP;                                                // 0x0010(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NextLevelXP;                                              // 0x0014(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TimesRetired;                                             // 0x0018(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EndMissionResult
// 0x0058
struct FEndMissionResult
{
	struct FPlayerProgress                             PreviousPlayerProgress;                                   // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FPlayerProgress                             PlayerProgress;                                           // 0x0008(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCharacterProgress                          PreviousCharacterProgress;                                // 0x0010(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FCharacterProgress                          CharacterProgress;                                        // 0x0030(0x0020) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bReadyForUse;                                             // 0x0050(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.MissionStatCounter
// 0x0024
struct FMissionStatCounter
{
	struct FGuid                                       PlayerClassID;                                            // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MissionStatID;                                            // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.MissionStatSave
// 0x0018
struct FMissionStatSave
{
	TArray<struct FMissionStatCounter>                 Counters;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	bool                                               bCharacterLevelUpFixed;                                   // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBoughtVanityItemsFixed;                                  // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bBoughtEquipmentUpgradesFixed;                            // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCampaignsCompletedFixed;                                 // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MilestoneCounter
// 0x0014
struct FMilestoneCounter
{
	struct FGuid                                       KPIGuid;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Tier;                                                     // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.MilestoneSave
// 0x0010
struct FMilestoneSave
{
	TArray<struct FMilestoneCounter>                   ClaimedKPIRewards;                                        // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.PerkClaimEntry
// 0x0014
struct FPerkClaimEntry
{
	struct FGuid                                       PerkID;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                currentRank;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.PerkClaimsSave
// 0x0010
struct FPerkClaimsSave
{
	TArray<struct FPerkClaimEntry>                     PerkEntries;                                              // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.PerkEquipEntry
// 0x0020
struct FPerkEquipEntry
{
	struct FGuid                                       characterID;                                              // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGuid>                               PerkIDs;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.CharacterPerksSave
// 0x0010
struct FCharacterPerksSave
{
	TArray<struct FPerkEquipEntry>                     CharacterPerks;                                           // 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.UnLockedMissionParameters
// 0x0020
struct FUnLockedMissionParameters
{
	TArray<struct FGuid>                               UnLockedComplexities;                                     // 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGuid>                               UnLockedDurations;                                        // 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.ActiveCampaignItem
// 0x0014
struct FActiveCampaignItem
{
	struct FGuid                                       CampaignID;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Progress;                                                 // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CampaignSave
// 0x0030
struct FCampaignSave
{
	struct FActiveCampaignItem                         ActiveCampaign;                                           // 0x0000(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FGuid>                               CompletedCampaigns;                                       // 0x0018(0x0010) (CPF_ZeroConstructor)
	int                                                ActiveCampaignWeek;                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastCompletedWeeklyCampaignWeek;                          // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DailyMissionSave
// 0x0004
struct FDailyMissionSave
{
	int                                                LastCompletedDailyMission;                                // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CharacterVanitySave
// 0x00C8
struct FCharacterVanitySave
{
	struct FGuid                                       EquippedHeadItemID;                                       // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedBeardItemID;                                      // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedArmorItemID;                                      // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedBeardColorItemID;                                 // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedSkinColorItemID;                                  // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedEyebrowsItemID;                                   // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedMoustacheItemID;                                  // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       EquippedSideburnsItemID;                                  // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UHeadVanityItem*                             EquippedHeadItem;                                         // 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBeardVanityItem*                            EquippedBeardItem;                                        // 0x0088(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UArmorVanityItem*                            EquippedArmorSetItem;                                     // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBeardColorVanityItem*                       EquippedBeardColor;                                       // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkinColorVanityItem*                        EquippedSkinColor;                                        // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UVanityItem*>                         UnLockedVanityItems;                                      // 0x00A8(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGuid>                               UnLockedVanityItemIDs;                                    // 0x00B8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.ItemLoadout
// 0x0080
struct FItemLoadout
{
	struct FGuid                                       PrimaryWeapon;                                            // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       SecondaryWeapon;                                          // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       TraversalTool;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ClassTool;                                                // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       Armor;                                                    // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       Flare;                                                    // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MiningTool;                                               // 0x0060(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       Grenade;                                                  // 0x0070(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CharacterSave
// 0x0170
struct FCharacterSave
{
	struct FGuid                                       SavegameID;                                               // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XP;                                                       // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasCompletedRetirementCampaign;                           // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                TimesRetired;                                             // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RetiredCharacterLevels;                                   // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CharacterClass;                                           // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCharacterVanitySave                        Vanity;                                                   // 0x0028(0x00C8)
	struct FItemLoadout                                Loadout;                                                  // 0x00F0(0x0080)
};

// ScriptStruct FSD.ItemUpgradeSelection
// 0x0040
struct FItemUpgradeSelection
{
	struct FGuid                                       WeaponID;                                                 // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FGuid>                               EquippedUpgrades;                                         // 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FGuid>                               PermanentUpgrades;                                        // 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       EquippedSkin;                                             // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ResourcesSave
// 0x00A0
struct FResourcesSave
{
	TMap<struct FGuid, float>                          OwnedResources;                                           // 0x0000(0x0050) (CPF_ZeroConstructor)
	TMap<class UResourceData*, float>                  resources;                                                // 0x0050(0x0050) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.WatchedTutorial
// 0x0018
struct FWatchedTutorial
{
	struct FString                                     TutorialName;                                             // 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Count;                                                    // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ConsoleOptionsInSaveGame
// 0x0058
struct FConsoleOptionsInSaveGame
{
	struct FControllerSettings                         ControllerSettings;                                       // 0x0000(0x000C)
	struct FHUDElements                                HUDElements;                                              // 0x000C(0x0004)
	bool                                               SaveGameOptionsValid;                                     // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTutorialHintsEnabled;                                    // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               EnableOnScreenButtonHints;                                // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowFPS;                                                 // 0x0013(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowNetInfo;                                             // 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              FOV;                                                      // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeadbobbingScale;                                         // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UIDPIScale;                                               // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              volumeMaster;                                             // 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              volumeSFX;                                                // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              volumeMusic;                                              // 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               InvertMouse;                                              // 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     Language;                                                 // 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCustomKeyBinding>                   CustomKeyBindings;                                        // 0x0048(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.OptionsInSaveGame
// 0x0008
struct FOptionsInSaveGame
{
	bool                                               SaveGameOptionsValid;                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ScreenMode;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ItemRefundResourceItem
// 0x0018
struct FItemRefundResourceItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	float                                              Amount;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ItemRefundListItem
// 0x0068
struct FItemRefundListItem
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TMap<struct FGuid, struct FItemRefundResourceItem> resources;                                                // 0x0010(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	float                                              CreditCost;                                               // 0x0060(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.WidgetPing
// 0x0020
struct FWidgetPing
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.WidgetFade
// 0x001C
struct FWidgetFade
{
	TWeakObjectPtr<class UUserWidget>                  Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.WidgetTextCounter
// 0x001C
struct FWidgetTextCounter
{
	TWeakObjectPtr<class UTextBlock>                   Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct FSD.CustomCounter
// 0x0028
struct FCustomCounter
{
	struct FScriptDelegate                             OnCount;                                                  // 0x0000(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	TWeakObjectPtr<class UObject>                      Owner;                                                    // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.WidgetMover
// 0x0028
struct FWidgetMover
{
	TWeakObjectPtr<class UWidget>                      Widget;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.UpgradeCostItem
// 0x0010
struct FUpgradeCostItem
{
	TArray<int>                                        Amounts;                                                  // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDMissionStats
// 0x0090
struct FGDMissionStats
{
	class UMissionStat*                                TimePlayed;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                DistanceTravelled;                                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                EnemiesKilled;                                            // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                MineralsMined;                                            // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                MissionCompleted;                                         // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                SoloMissionCompleted;                                     // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                SecondaryMissionCompleted;                                // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                CharacterLevelUp;                                         // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                VanityItemsBought;                                        // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                ItemUpgradesBought;                                       // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                DrinkablesConsumed;                                       // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                DrinkableRoundsOrdered;                                   // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                CampaignMissionsCompleted;                                // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                CampaignsCompleted;                                       // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                TimesDowned;                                              // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMissionStat*                                TimesPassedOut;                                           // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMissionStat*>                        AllMissionStats;                                          // 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FSD.GDMilestones
// 0x0010
struct FGDMilestones
{
	TArray<class UMilestoneAsset*>                     Milestones;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDPerks
// 0x0020
struct FGDPerks
{
	TArray<class UPerkAsset*>                          PerkAssets;                                               // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<int>                                        RequiredClaimsPerTier;                                    // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDBarMenu
// 0x0010
struct FGDBarMenu
{
	TArray<class UDrinkableDataAsset*>                 Drinkables;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDDamageClasses
// 0x0040
struct FGDDamageClasses
{
	class UDamageClass*                                Falling;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Fire;                                                     // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Heat;                                                     // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Physical;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Kinetic;                                                  // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Explosive;                                                // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Cold;                                                     // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageClass*                                Ice;                                                      // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.GDStats
// 0x00C8
struct FGDStats
{
	class UPawnStat*                                   MaxAmmo;                                                  // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MaxShields;                                               // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MaxHealth;                                                // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   DamageResistance;                                         // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   FireResistance;                                           // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   ColdResistance;                                           // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MeleeAttackDamage;                                        // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MovementSpeed;                                            // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   SprintSpeed;                                              // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   CarryingSpeedModifier;                                    // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   ReviveSpeed;                                              // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   DepositSpeed;                                             // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   RessuplySpeed;                                            // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   RedSugarHeal;                                             // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   CarryingCapacity;                                         // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   ZiplineSpeed;                                             // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MaxAcceleration;                                          // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   GroundFriction;                                           // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   BreakingDeceleration;                                     // 0x0090(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   SlideDownIce;                                             // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   FriendlyFire;                                             // 0x00A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   FlareThrowingStrength;                                    // 0x00A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   CaveLeechSense;                                           // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   IronWill;                                                 // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MorkiteMining;                                            // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.GDResources
// 0x00B0
struct FGDResources
{
	class UCreditsResourceData*                        CreditsResource;                                          // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               MOMResource;                                              // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               GoldResource;                                             // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               NitraResource;                                            // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               HollomiteResource;                                        // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               MagniteResource;                                          // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               NeromiteResource;                                         // 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               QuantriteResource;                                        // 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               UmaniteResource;                                          // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               CropaniteResource;                                        // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               DystrumResource;                                          // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               IronResource;                                             // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               EnorResource;                                             // 0x0060(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               BismorResource;                                           // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGemResourceData*                            JadizResource;                                            // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGemResourceData*                            BittergemResource;                                        // 0x0078(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGemResourceData*                            MotherlodeGemResource;                                    // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UResourceData*                               RedSugarResource;                                         // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UResourceData*>                       CraftingResources;                                        // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<class UResourceData*>                       AllResources;                                             // 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
};

// ScriptStruct FSD.GDTerrainTypes
// 0x0050
struct FGDTerrainTypes
{
	TSoftObjectPtr<class UTerrainType>                 Rock;                                                     // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	TSoftObjectPtr<class UTerrainType>                 Dirt;                                                     // 0x0028(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FSD.GDGameStatsTracking
// 0x0020
struct FGDGameStatsTracking
{
	struct FGameplayTagContainer                       TotalEnemyKillsFilter;                                    // 0x0000(0x0020) (CPF_Edit)
};

// ScriptStruct FSD.GDAudio
// 0x0040
struct FGDAudio
{
	TSoftObjectPtr<class USoundAttenuation>            FirstPersonHitscanAttenuationOverride;                    // 0x0000(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UClass*                                      ReverbActor;                                              // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SmallCaveRadius;                                          // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MediumCaveRadius;                                         // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LargeCaveRadius;                                          // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.GDDifficulty
// 0x0010
struct FGDDifficulty
{
	TArray<class UDifficultySetting*>                  DifficultySettings;                                       // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDStatusEffects
// 0x0008
struct FGDStatusEffects
{
	class UClass*                                      Frozen;                                                   // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RetirementCostItem
// 0x0050
struct FRetirementCostItem
{
	TMap<class UResourceData*, int>                    RetirementCost;                                           // 0x0000(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDCharacterRetirement
// 0x00C0
struct FGDCharacterRetirement
{
	TMap<class UPlayerCharacterID*, class UClass*>     Campaigns;                                                // 0x0000(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TMap<class UPlayerCharacterID*, struct FRetirementCostItem> RetirementCost;                                           // 0x0050(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      CreditsCostMultipliers;                                   // 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      ResourceCostMultipliers;                                  // 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GDPlayerAndCharacterProgression
// 0x0050
struct FGDPlayerAndCharacterProgression
{
	TArray<TSoftObjectPtr<class UClass>>               RankedHeroClasses;                                        // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<TSoftObjectPtr<class UClass>>               TestHeroClasses;                                          // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UClass*>                              LoadedClasses;                                            // 0x0020(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FText>                               PlayerRankNames;                                          // 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<int>                                        CharacterXPLevels;                                        // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.GMMutatorItem
// 0x0010
struct FGMMutatorItem
{
	TArray<class UMutator*>                            Mutators;                                                 // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.StateStats
// 0x0018
struct FStateStats
{
	float                                              MaxAcceleration;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPawnSpeed;                                             // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSlowdownAngle;                                         // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSlowdownAngle;                                         // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBreakingDeceleration;                                  // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StanceDistance;                                           // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.HealthBarLooks
// 0x0020
struct FHealthBarLooks
{
	struct FLinearColor                                HealthColor;                                              // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                DamageColor;                                              // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.UpgradeValues
// 0x0014
struct FUpgradeValues
{
	float                                              BaseValue;                                                // 0x0000(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              UpgradedValue;                                            // 0x0004(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              OldUpgradedValue;                                         // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentValue;                                             // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EItemPreviewStatus                                 PreviewStatus;                                            // 0x0010(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.HoldButton
// 0x0028
struct FHoldButton
{
	struct FText                                       HoldingText;                                              // 0x0000(0x0018) (CPF_Edit)
	float                                              HoldStartTime;                                            // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HoldDuration;                                             // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.LineSegmentCarverPoint
// 0x0024
struct FLineSegmentCarverPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HRange;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VRange;                                                   // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloorAngle;                                               // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CielingNoiseRange;                                        // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WallNoiseRange;                                           // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloorNoiseRange;                                          // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.LineSegmentFillerPoint
// 0x0024
struct FLineSegmentFillerPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandRange                                  RandomRange;                                              // 0x000C(0x0008) (CPF_Edit)
	struct FRandRange                                  RandomNoiseRange;                                         // 0x0014(0x0008) (CPF_Edit)
	struct FRandRange                                  FillAmount;                                               // 0x001C(0x0008) (CPF_Edit)
};

// ScriptStruct FSD.LocalizedLanguageInfo
// 0x0038
struct FLocalizedLanguageInfo
{
	struct FString                                     EnglishName;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     NativeName;                                               // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     CodeName;                                                 // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               CommunityTranslated;                                      // 0x0030(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                TranslatedPercent;                                        // 0x0034(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FSDTranslationProgress
// 0x0018
struct FFSDTranslationProgress
{
	struct FString                                     CodeName;                                                 // 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                TranslatedPercent;                                        // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MilestoneTier
// 0x0008
struct FMilestoneTier
{
	float                                              CompletionCount;                                          // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PerkPoints;                                               // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.MiningPodDialogs
// 0x0048
struct FMiningPodDialogs
{
	class UDialogDataAsset*                            DepartingIn5Min;                                          // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn4Min;                                          // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn3Min;                                          // 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn2Min;                                          // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn1Min;                                          // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn30Sec;                                         // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn10Sec;                                         // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            DepartingIn123Sec;                                        // 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDialogDataAsset*                            Departed;                                                 // 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.MissionHazardSetting
// 0x0020
struct FMissionHazardSetting
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (CPF_Edit)
	float                                              HazardBonus;                                              // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MissionTemplateItem
// 0x0010
struct FMissionTemplateItem
{
	class UMissionTemplate*                            Template;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Rarity;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MissionBiomeItem
// 0x0020
struct FMissionBiomeItem
{
	class UBiome*                                      Biome;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Rarity;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FMissionTemplateItem>                AvailableMissions;                                        // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.MultiHitscanHit
// 0x0030
struct FMultiHitscanHit
{
	class UPrimitiveComponent*                         TargetCompoenent;                                         // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFSDPhysicalMaterial>         PhysicalMaterial;                                         // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0010(0x000C) (CPF_Transient)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x001C(0x000C) (CPF_Transient)
	unsigned char                                      BoneIndex;                                                // 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               PlayImpactSound;                                          // 0x0029(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               SpawnDecal;                                               // 0x002A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
};

// ScriptStruct FSD.PawnAfflictionItem
// 0x0018
struct FPawnAfflictionItem
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TArray<class UAfflictionEffect*>                   Afflictions;                                              // 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.PawnStatEntry
// 0x0020
struct FPawnStatEntry
{
	class UPawnStat*                                   PawnStat;                                                 // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
	float                                              Value;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PillarSegment
// 0x0008
struct FPillarSegment
{
	float                                              Scale;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeightOffset;                                             // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DownCameraSettings
// 0x0018
struct FDownCameraSettings
{
	TWeakObjectPtr<class APlayerCharacter>             Target;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                TargetIndex;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MinPitch;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPitch;                                                 // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SmoothSpeed;                                              // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.AnalogAimSettings
// 0x0040
struct FAnalogAimSettings
{
	bool                                               ShowDebugOutput;                                          // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0001(0x0013) MISSED OFFSET
	struct FVector2D                                   AimRate;                                                  // 0x0014(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 SensitivityCurve;                                         // 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LookAtStickyness;                                         // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StickynessRecoverySpeed;                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StickynessMaxSensitivity;                                 // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   ThirdPersonLookRate;                                      // 0x0034(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.CameraSpringSettings
// 0x003C
struct FCameraSpringSettings
{
	bool                                               SpringEnabled;                                            // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StepThreshold;                                            // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SpringExtend;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RetractStrength;                                          // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RetractDownReduction;                                     // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShowDebug;                                                // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LastSpeedZ;                                               // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x0020(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     StartSpringLocation;                                      // 0x002C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bSpringInitialized;                                       // 0x0038(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.HealthRegenerationParams
// 0x0010
struct FHealthRegenerationParams
{
	bool                                               bIsRegenerating;                                          // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              DelayAfterDamage;                                         // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthPerSecond;                                          // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetHealthRatio;                                        // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.PlayerSphere
// 0x0020
struct FPlayerSphere
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<TWeakObjectPtr<class APlayerCharacter>>     Players;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.ProximityTriggerItem
// 0x0028
struct FProximityTriggerItem
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FScriptDelegate                             Callback;                                                 // 0x0018(0x0014) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference)
};

// ScriptStruct FSD.RejoinFloat
// 0x0020
struct FRejoinFloat
{
	struct FGuid                                       ItemKey;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ValueKey;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.RejoinInt
// 0x0020
struct FRejoinInt
{
	struct FGuid                                       ItemKey;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ValueKey;                                                 // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Value;                                                    // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PostProcessingBlendable
// 0x0020
struct FPostProcessingBlendable
{
	TScriptInterface<class UBlendableInterface>        Blendable;                                                // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.ResourceDebris
// 0x0010
struct FResourceDebris
{
	float                                              InfluencerRange;                                          // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UDebrisBase*                                 Debris;                                                   // 0x0008(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct FSD.TextStyleOverride
// 0x0098
struct FTextStyleOverride
{
	bool                                               bOverrideFont;                                            // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (CPF_Edit)
	bool                                               bOverrideColor;                                           // 0x0060(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FSlateColor                                 Color;                                                    // 0x0068(0x0028) (CPF_Edit)
	bool                                               bOverrideSize;                                            // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              SizeScale;                                                // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RandLinePoint
// 0x002C
struct FRandLinePoint
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandRange                                  Range;                                                    // 0x000C(0x0008) (CPF_Edit)
	struct FRandRange                                  NoiseRange;                                               // 0x0014(0x0008) (CPF_Edit)
	struct FRandRange                                  SkewFactor;                                               // 0x001C(0x0008) (CPF_Edit)
	struct FRandRange                                  FillAmount;                                               // 0x0024(0x0008) (CPF_Edit)
};

// ScriptStruct FSD.RoomGeneratorGroupInstance
// 0x0010
struct FRoomGeneratorGroupInstance
{
	TArray<class URoomGenerator*>                      Rooms;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.InfluenceSphere
// 0x0010
struct FInfluenceSphere
{
	class UCaveInfluencer*                             Influencer;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.SaveGameSnapShot
// 0x00C8
struct FSaveGameSnapShot
{
	TWeakObjectPtr<class UFSDSaveGame>                 SaveGame;                                                 // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     Filename;                                                 // 0x0008(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	bool                                               IsObsolete;                                               // 0x0018(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                VersionNumber;                                            // 0x001C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Credits;                                                  // 0x0020(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	TMap<class UClass*, int>                           CharacterLevels;                                          // 0x0028(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	TMap<class UClass*, int>                           resources;                                                // 0x0078(0x0050) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.SaveGameStatePerkItem
// 0x0010
struct FSaveGameStatePerkItem
{
	unsigned char                                      Rank;                                                     // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPerkAsset*                                  Perk;                                                     // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ActiveCampaingMission
// 0x000C
struct FActiveCampaingMission
{
	bool                                               HasMission;                                               // 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                GlobalSeed;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                MissionSeed;                                              // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FriendInfo
// 0x0038
struct FFriendInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     RealName;                                                 // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	bool                                               IsOnline;                                                 // 0x0020(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPlaying;                                                // 0x0021(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsPlayingThisGame;                                        // 0x0022(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsJoinable;                                               // 0x0023(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HasVoiceSupport;                                          // 0x0024(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     PresenceStatus;                                           // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.RandomWalkCycleEntry
// 0x000C
struct FRandomWalkCycleEntry
{
	float                                              RandomSelectionWeight;                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandRange                                  Duration;                                                 // 0x0004(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
};

// ScriptStruct FSD.DrinkableBarSlot
// 0x0014
struct FDrinkableBarSlot
{
	struct FVector                                     WorldLocation;                                            // 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TWeakObjectPtr<class ADrinkableActor>              DrinkableActor;                                           // 0x000C(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ActiveStatusEffect
// 0x0008
struct FActiveStatusEffect
{
	class AActor*                                      Owner;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ActiveStatusEffectBank
// 0x0028
struct FActiveStatusEffectBank
{
	class UClass*                                      Key;                                                      // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UStatusEffect*                               ActiveEffect;                                             // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
	TArray<struct FActiveStatusEffect>                 Effects;                                                  // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.DeepCSGNode
// 0x0004
struct FDeepCSGNode
{
	uint32_t                                           Val;                                                      // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGFloatPlane
// 0x0020
struct FDeepCSGFloatPlane
{
	struct FVector4                                    Plane;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDeepCSGNode                                Top;                                                      // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDeepCSGNode                                Bottom;                                                   // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGFloatTree
// 0x0018
struct FDeepCSGFloatTree
{
	struct FDeepCSGNode                                Root;                                                     // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FDeepCSGFloatPlane>                  planes;                                                   // 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct FSD.TerrainPlacementBox
// 0x001C
struct FTerrainPlacementBox
{
	struct FVector                                     Min;                                                      // 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FVector                                     Max;                                                      // 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	ETerrainPlacementBoxType                           PlacementType;                                            // 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct FSD.TunnelSettingItem
// 0x0010
struct FTunnelSettingItem
{
	class UTunnelSegmentSetting*                       SegmentSetting;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInt32Interval                              SegmentSize;                                              // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.TutorialHint
// 0x0048
struct FTutorialHint
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       ControllerOverrideText;                                   // 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Title;                                                    // 0x0030(0x0018) (CPF_Edit)
};

// ScriptStruct FSD.WeightedRoomSelectorItem
// 0x0010
struct FWeightedRoomSelectorItem
{
	class URoomGenerator*                              Room;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Weight;                                                   // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.WeightedRoomSelector
// 0x0010
struct FWeightedRoomSelector
{
	TArray<struct FWeightedRoomSelectorItem>           Items;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct FSD.YesNoPromptSettings
// 0x0040
struct FYesNoPromptSettings
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Title;                                                    // 0x0010(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FText                                       Message;                                                  // 0x0028(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct FSD.ZapperTarget
// 0x0010
struct FZapperTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Timestamp;                                                // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.DiscordUser
// 0x0040
struct FDiscordUser
{
	struct FString                                     userId;                                                   // 0x0000(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     username;                                                 // 0x0010(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     discriminator;                                            // 0x0020(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     avatar;                                                   // 0x0030(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.CharacterViewInfo
// 0x0018
struct FCharacterViewInfo
{
	class UClass*                                      CharacterClass;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UVanityItem*>                         EquippedVanity;                                           // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FSD.CharacterViewScene
// 0x0010
struct FCharacterViewScene
{
	TArray<struct FCharacterViewInfo>                  Characters;                                               // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct FSD.DailyMissionItem
// 0x0008
struct FDailyMissionItem
{
	class UGeneratedMission*                           Mission;                                                  // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EdgeTypeId
// 0x0002
struct FEdgeTypeId
{
	uint16_t                                           idx;                                                      // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CavePropertySet
// 0x0020
struct FCavePropertySet
{
	uint64_t                                           bits[0x4];                                                // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EdgeFilter
// 0x0050
struct FEdgeFilter
{
	struct FEdgeTypeId                                 SpecificType;                                             // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FCavePropertySet                            RequiredFlags;                                            // 0x0008(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCavePropertySet                            DiscardFlags;                                             // 0x0028(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinLength;                                                // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLength;                                                // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.NodeTypeId
// 0x0002
struct FNodeTypeId
{
	uint16_t                                           idx;                                                      // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.NodeFilter
// 0x0048
struct FNodeFilter
{
	struct FNodeTypeId                                 SpecificType;                                             // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FCavePropertySet                            RequiredFlags;                                            // 0x0008(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCavePropertySet                            DiscardFlags;                                             // 0x0028(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EdgeIndex
// 0x0002
struct FEdgeIndex
{
	uint16_t                                           idx;                                                      // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CaveNode
// 0x0048
struct FCaveNode
{
	struct FCavePropertySet                            Flags;                                                    // 0x0000(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNodeTypeId                                 NodeType;                                                 // 0x0020(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	struct FVector                                     Pos;                                                      // 0x0024(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           NumEdges;                                                 // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEdgeIndex                                  Edges[0x8];                                               // 0x0034(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.SplitEdgeProd
// 0x0130
struct FSplitEdgeProd
{
	float                                              ProductionPriority;                                       // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FEdgeFilter                                 Filter;                                                   // 0x0008(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNodeFilter                                 NodeFilters[0x2];                                         // 0x0058(0x0048) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCaveNode                                   NewNode;                                                  // 0x00E8(0x0048) (CPF_Edit)
};

// ScriptStruct FSD.GraphFilter
// 0x0040
struct FGraphFilter
{
	struct FCavePropertySet                            RequiredFlags;                                            // 0x0000(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCavePropertySet                            DiscardFlags;                                             // 0x0020(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.NodeIndex
// 0x0002
struct FNodeIndex
{
	uint16_t                                           idx;                                                      // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CaveEdge
// 0x0028
struct FCaveEdge
{
	struct FCavePropertySet                            Flags;                                                    // 0x0000(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEdgeTypeId                                 EdgeType;                                                 // 0x0020(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNodeIndex                                  StartNode;                                                // 0x0022(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNodeIndex                                  EndNode;                                                  // 0x0024(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.GraphSettings
// 0x0030
struct FGraphSettings
{
	struct FCavePropertySet                            Flags;                                                    // 0x0000(0x0020) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxNodes;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxEedges;                                                // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxDeadEndDepth;                                          // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxDeadEndDiversions;                                     // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CharacterMeshData
// 0x0028
struct FCharacterMeshData
{
	class UStaticMesh*                                 Mesh;                                                     // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PivotOffset;                                              // 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scale;                                                    // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               AddToFirstPerson;                                         // 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct FSD.MissionShoutQueueItem
// 0x0010
struct FMissionShoutQueueItem
{
	class UDialogDataAsset*                            Shout;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGTree
// 0x0018
struct FDeepCSGTree
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.ChunkOffset
// 0x0006
struct FChunkOffset
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ChunkId
// 0x0006
struct FChunkId
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CellId
// 0x0006
struct FCellId
{
	int16_t                                            X;                                                        // 0x0000(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Y;                                                        // 0x0002(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int16_t                                            Z;                                                        // 0x0004(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DeepCSGTreeOperations
// 0x0001
struct FDeepCSGTreeOperations
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.DeepCSGUtils
// 0x0001
struct FDeepCSGUtils
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.LinearCellId
// 0x0006
struct FLinearCellId
{
	uint16_t                                           X;                                                        // 0x0000(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Y;                                                        // 0x0002(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           Z;                                                        // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EncodedChunkCellId
// 0x0008
struct FEncodedChunkCellId
{
	struct FEncodedChunkId                             ChunkId;                                                  // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           cellOffset;                                               // 0x0004(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
};

// ScriptStruct FSD.ChunckIDAndOffsetBox
// 0x0012
struct FChunckIDAndOffsetBox
{
	struct FChunkId                                    ChunkId;                                                  // 0x0000(0x0006)
	struct FChunkOffset                                minOffset;                                                // 0x0006(0x0006)
	struct FChunkOffset                                maxOffset;                                                // 0x000C(0x0006)
};

// ScriptStruct FSD.ChunckIDAndOffset
// 0x000C
struct FChunckIDAndOffset
{
	struct FChunkId                                    ChunkId;                                                  // 0x0000(0x0006)
	struct FChunkOffset                                Offset;                                                   // 0x0006(0x0006)
};

// ScriptStruct FSD.CellBox
// 0x000C
struct FCellBox
{
	struct FCellId                                     Min;                                                      // 0x0000(0x0006)
	struct FCellId                                     Max;                                                      // 0x0006(0x0006)
};

// ScriptStruct FSD.TerrainLateJoinIteration
// 0x0024
struct FTerrainLateJoinIteration
{
	int                                                DrillsIndex;                                              // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                MeltsIndex;                                               // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                PickAxeIndex;                                             // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ColliderCarvesIndex;                                      // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                MeshCarvesIndex;                                          // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ExplosionsIndex;                                          // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                LateJoinIndex;                                            // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                DebrisIndex;                                              // 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                ChunkVisibilityIndex;                                     // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.EnemyGroupDescriptorSpawnItem
// 0x0010
struct FEnemyGroupDescriptorSpawnItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EnemySpawnParamsEntry
// 0x0028 (0x0030 - 0x0008)
struct FEnemySpawnParamsEntry : public FTableRowBase
{
	struct FString                                     ItemName;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	float                                              DifficultyRating;                                         // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinSpawnCount;                                            // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSpawnCount;                                            // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Rarity;                                                   // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpawnAmountModifier;                                      // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EnemySpawnItem
// 0x0010
struct FEnemySpawnItem
{
	class UEnemyDescriptor*                            enemy;                                                    // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.MUSTBEHERETOCOMPILE
// 0x0001
struct FMUSTBEHERETOCOMPILE
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.FallingDamageEvent
// 0x0000 (0x0010 - 0x0010)
struct FFallingDamageEvent : public FDamageEvent
{

};

// ScriptStruct FSD.Formation
// 0x0020
struct FFormation
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	class UFormationData*                              FormationData;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FormationID
// 0x0008
struct FFormationID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct FSD.DamageEffect
// 0x0010
struct FDamageEffect
{
	float                                              TriggerChance;                                            // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      StatusEffect;                                             // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.DamageResistance
// 0x0004
struct FDamageResistance
{
	float                                              Resistance;                                               // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.FSDDamageEvent
// 0x0008 (0x0018 - 0x0010)
struct FFSDDamageEvent : public FDamageEvent
{
	class UDamageClass*                                DamageClass;                                              // 0x0010(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.BodypartDamageEvent
// 0x0018 (0x00C0 - 0x00A8)
struct FBodypartDamageEvent : public FPointDamageEvent
{
	class UFSDPhysicalMaterial*                        Bodypart;                                                 // 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET
	float                                              DamageModifier;                                           // 0x00B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.GIPawnStats
// 0x0020
struct FGIPawnStats
{
	class UPawnStat*                                   MovmementSpeed;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   MeleeAttackDamage;                                        // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   DamageResistance;                                         // 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnStat*                                   FireResistance;                                           // 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.TesterName
// 0x0020 (0x0028 - 0x0008)
struct FTesterName : public FTableRowBase
{
	struct FString                                     SteamID;                                                  // 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	struct FString                                     SteamProfileName;                                         // 0x0018(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
};

// ScriptStruct FSD.TipsTableRow
// 0x0068 (0x0070 - 0x0008)
struct FTipsTableRow : public FTableRowBase
{
	struct FText                                       Header;                                                   // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0020(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       InputText;                                                // 0x0038(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FText                                       InputTextControllerOverride;                              // 0x0050(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              TimeToDisplay;                                            // 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.BodypartDamageModifier
// 0x0010
struct FBodypartDamageModifier
{
	class UFSDPhysicalMaterial*                        PhysicalMaterial;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageModifier;                                           // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.PlanetZoneItem
// 0x0028
struct FPlanetZoneItem
{
	TArray<class UBiome*>                              Biomes;                                                   // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct FSD.PathCell
// 0x0010
struct FPathCell
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.PathDebugNode
// 0x0020
struct FPathDebugNode
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct FSD.DebrisPatchResource
// 0x0018
struct FDebrisPatchResource
{
	class UDebrisPatchComponent*                       Debris;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.DebrisVeinResource
// 0x0018
struct FDebrisVeinResource
{
	class UDebrisVeinComponent*                        Debris;                                                   // 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct FSD.TerrainPlacementDebugItem
// 0x0060
struct FTerrainPlacementDebugItem
{
	TArray<struct FTerrainPlacementBox>                TerrainCheckers;                                          // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	bool                                               BoxGood;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               CapsuleGood;                                              // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	EDebrisColliderType                                CapsuleType;                                              // 0x0012(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
	struct FDebrisCapsule                              Capsule;                                                  // 0x0014(0x001C) (CPF_Transient)
	struct FTransform                                  Transform;                                                // 0x0030(0x0030) (CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct FSD.PLSResource
// 0x0010
struct FPLSResource
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmountToGenerate;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.ExposedProperty
// 0x0001
struct FExposedProperty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct FSD.ExposedFloat
// 0x0027 (0x0028 - 0x0001)
struct FExposedFloat : public FExposedProperty
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Description;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              MinValue;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ExposableFloat
// 0x0028
struct FExposableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Exposed;                                                  // 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	float                                              MinValue;                                                 // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.RecoilImpulse
// 0x000C
struct FRecoilImpulse
{
	float                                              Rotation;                                                 // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Impulse;                                                  // 0x0004(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.ResourceInitalizer
// 0x0010
struct FResourceInitalizer
{
	class UResourceData*                               Resource;                                                 // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAmount;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct FSD.EnemyLocation
// 0x0010
struct FEnemyLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Category;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.SpiderAnimInstanceProxy
// 0x0000 (0x0570 - 0x0570)
struct FSpiderAnimInstanceProxy : public FAnimInstanceProxy
{

};

// ScriptStruct FSD.UpgradableStatusEffect
// 0x0010
struct FUpgradableStatusEffect
{
	class UStatusEffect*                               StatusEffect;                                             // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UClass*                                      StatusEffectClass;                                        // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.CraftableDataEntry
// 0x0030 (0x0038 - 0x0008)
struct FCraftableDataEntry : public FTableRowBase
{
	struct FString                                     ItemName;                                                 // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	int                                                PlayerRank;                                               // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Credits;                                                  // 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Jadiz;                                                    // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Magnite;                                                  // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Croppa;                                                   // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Umanite;                                                  // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Enor;                                                     // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Bismor;                                                   // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct FSD.VanityDataEntry
// 0x0020 (0x0058 - 0x0038)
struct FVanityDataEntry : public FCraftableDataEntry
{
	struct FString                                     Character;                                                // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     Category;                                                 // 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct FSD.XPSettings
// 0x000C
struct FXPSettings
{
	float                                              XP_PerGold;                                               // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XP_PerKill;                                               // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              XP_OnSurvivedLevel;                                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
