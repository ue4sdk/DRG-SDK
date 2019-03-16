#pragma once

// Deep Rock Galactic (0.22) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum FSD.EDrinkableAlcoholStrength
enum class EDrinkableAlcoholStrength : uint8_t
{
	EDrinkableAlcoholStrength__NonAlcoholic = 0,
	EDrinkableAlcoholStrength__Light = 1,
	EDrinkableAlcoholStrength__Regular = 2,
	EDrinkableAlcoholStrength__Strong = 3,
	EDrinkableAlcoholStrength__InstantPassout = 4,
	EDrinkableAlcoholStrength__EDrinkableAlcoholStrength_MAX = 5
};


// Enum FSD.EIntoxicationState
enum class EIntoxicationState : uint8_t
{
	EIntoxicationState__NotIntoxicated = 0,
	EIntoxicationState__Intoxicated = 1,
	EIntoxicationState__PassOut    = 2,
	EIntoxicationState__EIntoxicationState_MAX = 3
};


// Enum FSD.ECharacterState
enum class ECharacterState : uint8_t
{
	ECharacterState__Walking       = 0,
	ECharacterState__Downed        = 1,
	ECharacterState__Dead          = 2,
	ECharacterState__Falling       = 3,
	ECharacterState__Paralyzed     = 4,
	ECharacterState__Using         = 5,
	ECharacterState__ZipLine       = 6,
	ECharacterState__NoMovement    = 7,
	ECharacterState__Grabbed       = 8,
	ECharacterState__Flying        = 9,
	ECharacterState__Frozen        = 10,
	ECharacterState__PassedOut     = 11,
	ECharacterState__Photography   = 12,
	ECharacterState__ECharacterState_MAX = 13
};


// Enum FSD.ELaserPointerTargetType
enum class ELaserPointerTargetType : uint8_t
{
	ELaserPointerTargetType__Chunkable = 0,
	ELaserPointerTargetType__Dirt  = 1,
	ELaserPointerTargetType__Player = 2,
	ELaserPointerTargetType__Enemy = 3,
	ELaserPointerTargetType__EmbeddedGem = 4,
	ELaserPointerTargetType__Other = 5,
	ELaserPointerTargetType__ELaserPointerTargetType_MAX = 6
};


// Enum FSD.ECharacterCameraMode
enum class ECharacterCameraMode : uint8_t
{
	ECharacterCameraMode__FirstPerson = 0,
	ECharacterCameraMode__ThirdPerson = 1,
	ECharacterCameraMode__Follow   = 2,
	ECharacterCameraMode__DownCamera = 3,
	ECharacterCameraMode__TerrainScanner = 4,
	ECharacterCameraMode__PhotographyMode = 5,
	ECharacterCameraMode__ECharacterCameraMode_MAX = 6
};


// Enum FSD.EPlayerTemperatureState
enum class EPlayerTemperatureState : uint8_t
{
	EPlayerTemperatureState__Normal = 0,
	EPlayerTemperatureState__Frozen = 1,
	EPlayerTemperatureState__Overheated = 2,
	EPlayerTemperatureState__EPlayerTemperatureState_MAX = 3
};


// Enum FSD.EImpactDecalSize
enum class EImpactDecalSize : uint8_t
{
	EImpactDecalSize__Small        = 0,
	EImpactDecalSize__Medium       = 1,
	EImpactDecalSize__Large        = 2,
	EImpactDecalSize__None         = 3,
	EImpactDecalSize__EImpactDecalSize_MAX = 4
};


// Enum FSD.EGroundLeechState
enum class EGroundLeechState : uint8_t
{
	EGroundLeechState__Idle        = 0,
	EGroundLeechState__Tracking    = 1,
	EGroundLeechState__Pulling     = 2,
	EGroundLeechState__Retracting  = 3,
	EGroundLeechState__Dying       = 4,
	EGroundLeechState__Dead        = 5,
	EGroundLeechState__EGroundLeechState_MAX = 6
};


// Enum FSD.EChatSenderType
enum class EChatSenderType : uint8_t
{
	EChatSenderType__NormalUser    = 0,
	EChatSenderType__DeluxUser     = 1,
	EChatSenderType__Developer     = 2,
	EChatSenderType__EChatSenderType_MAX = 3
};


// Enum FSD.EChatMessageType
enum class EChatMessageType : uint8_t
{
	EChatMessageType__ES_Chat      = 0,
	EChatMessageType__ES_Game      = 1,
	EChatMessageType__ES_MAX       = 2
};


// Enum FSD.ECharselectionCameraLocation
enum class ECharselectionCameraLocation : uint8_t
{
	ECharselectionCameraLocation__Selection = 0,
	ECharselectionCameraLocation__Customization = 1,
	ECharselectionCameraLocation__Crafting = 2,
	ECharselectionCameraLocation__ViewWeapon = 3,
	ECharselectionCameraLocation__EndScreen = 4,
	ECharselectionCameraLocation__ECharselectionCameraLocation_MAX = 5
};


// Enum FSD.EFSDMixerLoginState
enum class EFSDMixerLoginState : uint8_t
{
	EFSDMixerLoginState__Not_Logged_In = 0,
	EFSDMixerLoginState__Logging_In = 1,
	EFSDMixerLoginState__Logged_In = 2,
	EFSDMixerLoginState__Logging_Out = 3,
	EFSDMixerLoginState__EFSDMixerLoginState_MAX = 4
};


// Enum FSD.EInputSource
enum class EInputSource : uint8_t
{
	EInputSource__None             = 0,
	EInputSource__MouseAndKeyboard = 1,
	EInputSource__Controller       = 2,
	EInputSource__EInputSource_MAX = 3
};


// Enum FSD.EKeyboardLayout
enum class EKeyboardLayout : uint8_t
{
	EKeyboardLayout__QWERTY        = 0,
	EKeyboardLayout__AZERTY        = 1,
	EKeyboardLayout__QWERTZ        = 2,
	EKeyboardLayout__EKeyboardLayout_MAX = 3
};


// Enum FSD.EDisconnectReason
enum class EDisconnectReason : uint8_t
{
	EDisconnectReason__None        = 0,
	EDisconnectReason__Kicked_HaveMyReasons = 1,
	EDisconnectReason__Kicked_ShouldBePrivate = 2,
	EDisconnectReason__Kicked_AFK  = 3,
	EDisconnectReason__Banned      = 4,
	EDisconnectReason__ServerQuit  = 5,
	EDisconnectReason__Disconnected = 6,
	EDisconnectReason__SignInChange = 7,
	EDisconnectReason__JoinSessionFail_SessionIsFull = 8,
	EDisconnectReason__JoinSessionFail_SessionDoesNotExist = 9,
	EDisconnectReason__JoinSessionFail_Other = 10,
	EDisconnectReason__JoinSessionFail_Privilege = 11,
	EDisconnectReason__NetworkError = 12,
	EDisconnectReason__SignOutComplete = 13,
	EDisconnectReason__WrongPassword = 14,
	EDisconnectReason__EDisconnectReason_MAX = 15
};


// Enum FSD.EHUDVisibilityReason
enum class EHUDVisibilityReason : uint8_t
{
	EHUDVisibilityReason__UserChoice = 0,
	EHUDVisibilityReason__StandDown = 1,
	EHUDVisibilityReason__MenuActive = 2,
	EHUDVisibilityReason__Photography = 3,
	EHUDVisibilityReason__EHUDVisibilityReason_MAX = 4
};


// Enum FSD.ECarveFilterType
enum class ECarveFilterType : uint8_t
{
	ECarveFilterType__ReplaceAll   = 0,
	ECarveFilterType__ReplaceEmpty = 1,
	ECarveFilterType__ReplaceSolid = 2,
	ECarveFilterType__ECarveFilterType_MAX = 3
};


// Enum FSD.CarveOptionsCellSize
enum class ECarveOptionsCellSize : uint8_t
{
	CarveOptionsCellSize__CARVE_CELL_SIZE = 0,
	CarveOptionsCellSize__CARVE_CELL_SIZE01 = 1,
	CarveOptionsCellSize__CARVE_CELL_SIZE02 = 2,
	CarveOptionsCellSize__CARVE_CELL_SIZE03 = 3,
	CarveOptionsCellSize__CARVE_CELL_SIZE_MAX = 4
};


// Enum FSD.EPreciousMaterialOptions
enum class EPreciousMaterialOptions : uint8_t
{
	EPreciousMaterialOptions__TurnIntoGems = 0,
	EPreciousMaterialOptions__LeaveUntouched = 1,
	EPreciousMaterialOptions__Ignore = 2,
	EPreciousMaterialOptions__EPreciousMaterialOptions_MAX = 3
};


// Enum FSD.ESpacerigStartType
enum class ESpacerigStartType : uint8_t
{
	ESpacerigStartType__PlayerHub  = 0,
	ESpacerigStartType__Medbay     = 1,
	ESpacerigStartType__ESpacerigStartType_MAX = 2
};


// Enum FSD.EItemCategory
enum class EItemCategory : uint8_t
{
	EItemCategory__PrimaryWeapon   = 0,
	EItemCategory__SecondaryWeapon = 1,
	EItemCategory__TraversalTool   = 2,
	EItemCategory__ClassTool       = 3,
	EItemCategory__Grenade         = 4,
	EItemCategory__Flare           = 5,
	EItemCategory__MiningTool      = 6,
	EItemCategory__Armor           = 7,
	EItemCategory__EItemCategory_MAX = 8
};


// Enum FSD.EKeyBindingAxis
enum class EKeyBindingAxis : uint8_t
{
	EKeyBindingAxis__None          = 0,
	EKeyBindingAxis__Positive      = 1,
	EKeyBindingAxis__Negative      = 2,
	EKeyBindingAxis__EKeyBindingAxis_MAX = 3
};


// Enum FSD.EMissionStatType
enum class EMissionStatType : uint8_t
{
	EMissionStatType__Float        = 0,
	EMissionStatType__Integer      = 1,
	EMissionStatType__Time         = 2,
	EMissionStatType__Distance     = 3,
	EMissionStatType__EMissionStatType_MAX = 4
};


// Enum FSD.EUpgradeClass
enum class EUpgradeClass : uint8_t
{
	EUpgradeClass__Class_A         = 0,
	EUpgradeClass__Class_B         = 1,
	EUpgradeClass__Gear_A          = 2,
	EUpgradeClass__Gear_B          = 3,
	EUpgradeClass__Armor           = 4,
	EUpgradeClass__Class_Bosco     = 5,
	EUpgradeClass__EUpgradeClass_MAX = 6
};


// Enum FSD.EUpgradeTiers
enum class EUpgradeTiers : uint8_t
{
	EUpgradeTiers__Tier            = 0,
	EUpgradeTiers__Tier01          = 1,
	EUpgradeTiers__Tier02          = 2,
	EUpgradeTiers__Tier03          = 3,
	EUpgradeTiers__Tier04          = 4,
	EUpgradeTiers__Tier_MAX        = 5
};


// Enum FSD.EDroneAIState
enum class EDroneAIState : uint8_t
{
	EDroneAIState__Follow          = 0,
	EDroneAIState__Mine            = 1,
	EDroneAIState__Fight           = 2,
	EDroneAIState__Revive          = 3,
	EDroneAIState__Light           = 4,
	EDroneAIState__GoToPlayer      = 5,
	EDroneAIState__Salute          = 6,
	EDroneAIState__UseAbillity     = 7,
	EDroneAIState__EDroneAIState_MAX = 8
};


// Enum FSD.EHealthbarType
enum class EHealthbarType : uint8_t
{
	EHealthbarType__None           = 0,
	EHealthbarType__MainLife       = 1,
	EHealthbarType__Shield         = 2,
	EHealthbarType__EHealthbarType_MAX = 3
};


// Enum FSD.EUseRestriction
enum class EUseRestriction : uint8_t
{
	EUseRestriction__Free          = 0,
	EUseRestriction__DepositOnly   = 1,
	EUseRestriction__Repair        = 2,
	EUseRestriction__Zipline       = 3,
	EUseRestriction__BlockAll      = 4,
	EUseRestriction__PickupItem    = 5,
	EUseRestriction__EUseRestriction_MAX = 6
};


// Enum FSD.EDialogRestriction
enum class EDialogRestriction : uint8_t
{
	EDialogRestriction__None       = 0,
	EDialogRestriction__SinglePlayerOnly = 1,
	EDialogRestriction__MultiPlayerOnly = 2,
	EDialogRestriction__EDialogRestriction_MAX = 3
};


// Enum FSD.ERecallableActorState
enum class ERecallableActorState : uint8_t
{
	ERecallableActorState__Idle    = 0,
	ERecallableActorState__RelocateRequested = 1,
	ERecallableActorState__Relocating = 2,
	ERecallableActorState__ReturnRequested = 3,
	ERecallableActorState__Returning = 4,
	ERecallableActorState__Home    = 5,
	ERecallableActorState__ERecallableActorState_MAX = 6
};


// Enum FSD.ERedeployableSentryGunState
enum class ERedeployableSentryGunState : uint8_t
{
	ERedeployableSentryGunState__Deploying = 0,
	ERedeployableSentryGunState__Deployed = 1,
	ERedeployableSentryGunState__Dismantling = 2,
	ERedeployableSentryGunState__Dismantled = 3,
	ERedeployableSentryGunState__ERedeployableSentryGunState_MAX = 4
};


// Enum FSD.EDeepMovementState
enum class EDeepMovementState : uint8_t
{
	EDeepMovementState__Stationary = 0,
	EDeepMovementState__Controlled = 1,
	EDeepMovementState__Moving     = 2,
	EDeepMovementState__WaitingForPath = 3,
	EDeepMovementState__AttackStance = 4,
	EDeepMovementState__FakePhysics = 5,
	EDeepMovementState__EDeepMovementState_MAX = 6
};


// Enum FSD.EFSDTargetPlatform
enum class EFSDTargetPlatform : uint8_t
{
	EFSDTargetPlatform__Steam      = 0,
	EFSDTargetPlatform__UWPBox     = 1,
	EFSDTargetPlatform__XboxOne    = 2,
	EFSDTargetPlatform__EFSDTargetPlatform_MAX = 3
};


// Enum FSD.ECreatureSize
enum class ECreatureSize : uint8_t
{
	ECreatureSize__Tiny            = 0,
	ECreatureSize__Small           = 1,
	ECreatureSize__Medium          = 2,
	ECreatureSize__Large           = 3,
	ECreatureSize__Huge            = 4,
	ECreatureSize__ECreatureSize_MAX = 5
};


// Enum FSD.EFrozenBitsSize
enum class EFrozenBitsSize : uint8_t
{
	EFrozenBitsSize__Tiny          = 0,
	EFrozenBitsSize__Small         = 1,
	EFrozenBitsSize__Medium        = 2,
	EFrozenBitsSize__Large         = 3,
	EFrozenBitsSize__Huge          = 4,
	EFrozenBitsSize__EFrozenBitsSize_MAX = 5
};


// Enum FSD.EAmmoWeaponState
enum class EAmmoWeaponState : uint8_t
{
	EAmmoWeaponState__Equipping    = 0,
	EAmmoWeaponState__Ready        = 1,
	EAmmoWeaponState__Cycling      = 2,
	EAmmoWeaponState__Reloading    = 3,
	EAmmoWeaponState__BurstCycling = 4,
	EAmmoWeaponState__EAmmoWeaponState_MAX = 5
};


// Enum FSD.EAutoMiningState
enum class EAutoMiningState : uint8_t
{
	EAutoMiningState__Equipping    = 0,
	EAutoMiningState__Idle         = 1,
	EAutoMiningState__Mining       = 2,
	EAutoMiningState__Overheated   = 3,
	EAutoMiningState__EAutoMiningState_MAX = 4
};


// Enum FSD.EBarnacleState
enum class EBarnacleState : uint8_t
{
	EBarnacleState__Idle           = 0,
	EBarnacleState__Tracking       = 1,
	EBarnacleState__Pulling        = 2,
	EBarnacleState__Retracting     = 3,
	EBarnacleState__Dying          = 4,
	EBarnacleState__Dead           = 5,
	EBarnacleState__Frozen         = 6,
	EBarnacleState__EBarnacleState_MAX = 7
};


// Enum FSD.ECampaignMutators
enum class ECampaignMutators : uint8_t
{
	ECampaignMutators__NotAllowed  = 0,
	ECampaignMutators__Allowed     = 1,
	ECampaignMutators__Preffered   = 2,
	ECampaignMutators__ECampaignMutators_MAX = 3
};


// Enum FSD.ECellCategory
enum class ECellCategory : uint8_t
{
	ECellCategory__Cave            = 0,
	ECellCategory__Tunnel          = 1,
	ECellCategory__ECellCategory_MAX = 2
};


// Enum FSD.EFSDChromaEffect
enum class EFSDChromaEffect : uint8_t
{
	EFSDChromaEffect__HealthDamage = 0,
	EFSDChromaEffect__ShieldDamage = 1,
	EFSDChromaEffect__Flare        = 2,
	EFSDChromaEffect__MissionSuccess = 3,
	EFSDChromaEffect__None         = 4,
	EFSDChromaEffect__EFSDChromaEffect_MAX = 5
};


// Enum FSD.EItemUpgradeStatus
enum class EItemUpgradeStatus : uint8_t
{
	EItemUpgradeStatus__Locked     = 0,
	EItemUpgradeStatus__AvailableCannotAfford = 1,
	EItemUpgradeStatus__AvailableCanAfford = 2,
	EItemUpgradeStatus__Owned      = 3,
	EItemUpgradeStatus__Equipped   = 4,
	EItemUpgradeStatus__EItemUpgradeStatus_MAX = 5
};


// Enum FSD.EShoutType
enum class EShoutType : uint8_t
{
	EShoutType__Attention          = 0,
	EShoutType__Follow             = 1,
	EShoutType__StandingDown       = 2,
	EShoutType__Downed             = 3,
	EShoutType__RequestRevive      = 4,
	EShoutType__Revived            = 5,
	EShoutType__Resupply           = 6,
	EShoutType__FriendlyFire       = 7,
	EShoutType__KillCry            = 8,
	EShoutType__Dead               = 9,
	EShoutType__Cheating           = 10,
	EShoutType__ResourceFull       = 11,
	EShoutType__ResourceFullNoDonkey = 12,
	EShoutType__CallDonkey         = 13,
	EShoutType__Depositing         = 14,
	EShoutType__DepositingNoDonkey = 15,
	EShoutType__OutOfAmmo          = 16,
	EShoutType__Reloading          = 17,
	EShoutType__CharacterSelected  = 18,
	EShoutType__UpgradeBought      = 19,
	EShoutType__WaitingInDropPod   = 20,
	EShoutType__EShoutType_MAX     = 21
};


// Enum FSD.ERobotState
enum class ERobotState : uint8_t
{
	ERobotState__Enemy             = 0,
	ERobotState__Friendly          = 1,
	ERobotState__PoweredDown       = 2,
	ERobotState__ERobotState_MAX   = 3
};


// Enum FSD.EDashPointsGenerationMode
enum class EDashPointsGenerationMode : uint8_t
{
	EDashPointsGenerationMode__Surround = 0,
	EDashPointsGenerationMode__Forward = 1,
	EDashPointsGenerationMode__EDashPointsGenerationMode_MAX = 2
};


// Enum FSD.EDebrisOrientation
enum class EDebrisOrientation : uint8_t
{
	EDebrisOrientation__Random     = 0,
	EDebrisOrientation__RandomXY   = 1,
	EDebrisOrientation__AlignToSurfaceNormal = 2,
	EDebrisOrientation__Fixed      = 3,
	EDebrisOrientation__EDebrisOrientation_MAX = 4
};


// Enum FSD.EDebrisCarvedType
enum class EDebrisCarvedType : uint8_t
{
	EDebrisCarvedType__Large       = 0,
	EDebrisCarvedType__Small       = 1,
	EDebrisCarvedType__EDebrisCarvedType_MAX = 2
};


// Enum FSD.EDebrisMeshShadows
enum class EDebrisMeshShadows : uint8_t
{
	EDebrisMeshShadows__Never      = 0,
	EDebrisMeshShadows__High       = 1,
	EDebrisMeshShadows__Always     = 2,
	EDebrisMeshShadows__EDebrisMeshShadows_MAX = 3
};


// Enum FSD.EDebrisMeshCollisionProfile
enum class EDebrisMeshCollisionProfile : uint8_t
{
	EDebrisMeshCollisionProfile__NoCollision = 0,
	EDebrisMeshCollisionProfile__HitOnly = 1,
	EDebrisMeshCollisionProfile__HitAndCollide = 2,
	EDebrisMeshCollisionProfile__EDebrisMeshCollisionProfile_MAX = 3
};


// Enum FSD.EDebrisColliderType
enum class EDebrisColliderType : uint8_t
{
	EDebrisColliderType__Object    = 0,
	EDebrisColliderType__AirParticles = 1,
	EDebrisColliderType__ObjectB   = 2,
	EDebrisColliderType__ObjectC   = 3,
	EDebrisColliderType__EDebrisColliderType_MAX = 4
};


// Enum FSD.ELandscapeCellFilter
enum class ELandscapeCellFilter : uint8_t
{
	ELandscapeCellFilter__Any      = 0,
	ELandscapeCellFilter__Empty    = 1,
	ELandscapeCellFilter__Filled   = 2,
	ELandscapeCellFilter__Diggable = 3,
	ELandscapeCellFilter__NotDiggable = 4,
	ELandscapeCellFilter__Collidable = 5,
	ELandscapeCellFilter__NotCollidable = 6,
	ELandscapeCellFilter__Rubble   = 7,
	ELandscapeCellFilter__NotRubble = 8,
	ELandscapeCellFilter__ELandscapeCellFilter_MAX = 9
};


// Enum FSD.EPathfinderResult
enum class EPathfinderResult : uint8_t
{
	EPathfinderResult__Success     = 0,
	EPathfinderResult__Failed_StartingPointNotFound = 1,
	EPathfinderResult__Failed_EndPointNotFound = 2,
	EPathfinderResult__Failed_PointsNotConnected = 3,
	EPathfinderResult__Failed_UsedTooManyNodes = 4,
	EPathfinderResult__Failed_NotReady = 5,
	EPathfinderResult__Failed_UnknownError = 6,
	EPathfinderResult__EPathfinderResult_MAX = 7
};


// Enum FSD.PFCollisionType
enum class EPFCollisionType : uint8_t
{
	PFCollisionType__SolidWalkable = 0,
	PFCollisionType__Block         = 1,
	PFCollisionType__Danger        = 2,
	PFCollisionType__PFCollisionType_MAX = 3
};


// Enum FSD.DeepPathFinderPreference
enum class EDeepPathFinderPreference : uint8_t
{
	DeepPathFinderPreference__None = 0,
	DeepPathFinderPreference__Floor = 1,
	DeepPathFinderPreference__Walls = 2,
	DeepPathFinderPreference__Ceiling = 3,
	DeepPathFinderPreference__DeepPathFinderPreference_MAX = 4
};


// Enum FSD.DeepPathFinderSize
enum class EDeepPathFinderSize : uint8_t
{
	DeepPathFinderSize__Small      = 0,
	DeepPathFinderSize__Medium     = 1,
	DeepPathFinderSize__Large      = 2,
	DeepPathFinderSize__DeepPathFinderSize_MAX = 3
};


// Enum FSD.DeepPathFinderType
enum class EDeepPathFinderType : uint8_t
{
	DeepPathFinderType__Walk       = 0,
	DeepPathFinderType__WalkUpright = 1,
	DeepPathFinderType__Fly        = 2,
	DeepPathFinderType__MAX        = 3
};


// Enum FSD.EDeepMovementMode
enum class EDeepMovementMode : uint8_t
{
	EDeepMovementMode__Normal      = 0,
	EDeepMovementMode__Flee        = 1,
	EDeepMovementMode__Fly         = 2,
	EDeepMovementMode__EDeepMovementMode_MAX = 3
};


// Enum FSD.EBoscoAbillityTargetPreference
enum class EBoscoAbillityTargetPreference : uint8_t
{
	EBoscoAbillityTargetPreference__Self = 0,
	EBoscoAbillityTargetPreference__SelectedTarget = 1,
	EBoscoAbillityTargetPreference__ClosestPlayer = 2,
	EBoscoAbillityTargetPreference__ClosestEnemy = 3,
	EBoscoAbillityTargetPreference__TargetLocation = 4,
	EBoscoAbillityTargetPreference__EBoscoAbillityTargetPreference_MAX = 5
};


// Enum FSD.EDroneActions
enum class EDroneActions : uint8_t
{
	EDroneActions__Wandering       = 0,
	EDroneActions__Mining          = 1,
	EDroneActions__Fighting        = 2,
	EDroneActions__Lighting        = 3,
	EDroneActions__Reviving        = 4,
	EDroneActions__EDroneActions_MAX = 5
};


// Enum FSD.EDropPodState
enum class EDropPodState : uint8_t
{
	EDropPodState__WaitingToDrop   = 0,
	EDropPodState__Drilling        = 1,
	EDropPodState__Landed          = 2,
	EDropPodState__PrepTakeoff     = 3,
	EDropPodState__Departing       = 4,
	EDropPodState__EDropPodState_MAX = 5
};


// Enum FSD.EEnemySignificance
enum class EEnemySignificance : uint8_t
{
	EEnemySignificance__Swarmer    = 0,
	EEnemySignificance__Normal     = 1,
	EEnemySignificance__Critical   = 2,
	EEnemySignificance__Critter    = 3,
	EEnemySignificance__EEnemySignificance_MAX = 4
};


// Enum FSD.EEnemyHealthScaling
enum class EEnemyHealthScaling : uint8_t
{
	EEnemyHealthScaling__SmallEnemy = 0,
	EEnemyHealthScaling__LargeEnemy = 1,
	EEnemyHealthScaling__ExtraLargeEnemy = 2,
	EEnemyHealthScaling__EEnemyHealthScaling_MAX = 3
};


// Enum FSD.ETargetStateDamageBonusType
enum class ETargetStateDamageBonusType : uint8_t
{
	ETargetStateDamageBonusType__Frozen = 0,
	ETargetStateDamageBonusType__OnFire = 1,
	ETargetStateDamageBonusType__Fleeing = 2,
	ETargetStateDamageBonusType__ETargetStateDamageBonusType_MAX = 3
};


// Enum FSD.ESteamServerJoinStatus
enum class ESteamServerJoinStatus : uint8_t
{
	ESteamServerJoinStatus__Open   = 0,
	ESteamServerJoinStatus__PasswordRequired = 1,
	ESteamServerJoinStatus__ESteamServerJoinStatus_MAX = 2
};


// Enum FSD.ESteamSearchRegion
enum class ESteamSearchRegion : uint8_t
{
	ESteamSearchRegion__Close      = 0,
	ESteamSearchRegion__Medium     = 1,
	ESteamSearchRegion__Far        = 2,
	ESteamSearchRegion__World      = 3,
	ESteamSearchRegion__ESteamSearchRegion_MAX = 4
};


// Enum FSD.EPauseReason
enum class EPauseReason : uint8_t
{
	EPauseReason__MenuActive       = 0,
	EPauseReason__ReconnectController = 1,
	EPauseReason__EPauseReason_MAX = 2
};


// Enum FSD.EMissionStructure
enum class EMissionStructure : uint8_t
{
	EMissionStructure__SingleMission = 0,
	EMissionStructure__DailyAdvendture = 1,
	EMissionStructure__EMissionStructure_MAX = 2
};


// Enum FSD.EVolumeType
enum class EVolumeType : uint8_t
{
	EVolumeType__Master            = 0,
	EVolumeType__SFX               = 1,
	EVolumeType__Music             = 2,
	EVolumeType__VoiceChat         = 3,
	EVolumeType__EVolumeType_MAX   = 4
};


// Enum FSD.EPostProcessingType
enum class EPostProcessingType : uint8_t
{
	EPostProcessingType__GameWorld = 0,
	EPostProcessingType__CharacterSelector = 1,
	EPostProcessingType__EPostProcessingType_MAX = 2
};


// Enum FSD.ESteamBranch
enum class ESteamBranch : uint8_t
{
	ESteamBranch__Main             = 0,
	ESteamBranch__Experimental     = 1,
	ESteamBranch__Internal_Testing = 2,
	ESteamBranch__Other            = 3,
	ESteamBranch__ESteamBranch_MAX = 4
};


// Enum FSD.EMoveType
enum class EMoveType : uint8_t
{
	EMoveType__EaseIn              = 0,
	EMoveType__EaseOut             = 1,
	EMoveType__EMoveType_MAX       = 2
};


// Enum FSD.EPingType
enum class EPingType : uint8_t
{
	EPingType__EaseOut             = 0,
	EPingType__Bounce              = 1,
	EPingType__EPingType_MAX       = 2
};


// Enum FSD.EFlyingLifterSpeed
enum class EFlyingLifterSpeed : uint8_t
{
	EFlyingLifterSpeed__Normal     = 0,
	EFlyingLifterSpeed__Chasing    = 1,
	EFlyingLifterSpeed__Grabbed    = 2,
	EFlyingLifterSpeed__EFlyingLifterSpeed_MAX = 3
};


// Enum FSD.EGrabberState
enum class EGrabberState : uint8_t
{
	EGrabberState__Chase           = 0,
	EGrabberState__Wander          = 1,
	EGrabberState__Carry           = 2,
	EGrabberState__Flee            = 3,
	EGrabberState__StandBy         = 4,
	EGrabberState__EGrabberState_MAX = 5
};


// Enum FSD.ENodeType
enum class ENodeType : uint8_t
{
	ENodeType__Any                 = 0,
	ENodeType__Start               = 1,
	ENodeType__End                 = 2,
	ENodeType__SmallRoom           = 3,
	ENodeType__LargeRoom           = 4,
	ENodeType__ENodeType_MAX       = 5
};


// Enum FSD.ECharacterAnimSet
enum class ECharacterAnimSet : uint8_t
{
	ECharacterAnimSet__Pistol      = 0,
	ECharacterAnimSet__Rifle       = 1,
	ECharacterAnimSet__HeavyLow    = 2,
	ECharacterAnimSet__NoHands     = 3,
	ECharacterAnimSet__HeavyDual   = 4,
	ECharacterAnimSet__DualPistol  = 5,
	ECharacterAnimSet__ECharacterAnimSet_MAX = 6
};


// Enum FSD.EPlatformGunUpgrades
enum class EPlatformGunUpgrades : uint8_t
{
	EPlatformGunUpgrades__BiggerPlatform = 0,
	EPlatformGunUpgrades__LessFallDamage = 1,
	EPlatformGunUpgrades__BugRepellant = 2,
	EPlatformGunUpgrades__CubePlatform = 3,
	EPlatformGunUpgrades__EPlatformGunUpgrades_MAX = 4
};


// Enum FSD.EBoscoUpgrades
enum class EBoscoUpgrades : uint8_t
{
	EBoscoUpgrades__MiningSpeedUpgrade = 0,
	EBoscoUpgrades__ExtraRevive    = 1,
	EBoscoUpgrades__ActiveLightRadius = 2,
	EBoscoUpgrades__Missile        = 3,
	EBoscoUpgrades__CryoGrenade    = 4,
	EBoscoUpgrades__SACooldownReduction = 5,
	EBoscoUpgrades__ExtraAbillityCharge = 6,
	EBoscoUpgrades__EBoscoUpgrades_MAX = 7
};


// Enum FSD.EArmorUpgradeType
enum class EArmorUpgradeType : uint8_t
{
	EArmorUpgradeType__RegenDelay  = 0,
	EArmorUpgradeType__RegenRate   = 1,
	EArmorUpgradeType__ReviveInvulnerability = 2,
	EArmorUpgradeType__EArmorUpgradeType_MAX = 3
};


// Enum FSD.ETriggeredStatusEffectType
enum class ETriggeredStatusEffectType : uint8_t
{
	ETriggeredStatusEffectType__ShieldDestroyed = 0,
	ETriggeredStatusEffectType__GrapplingHookReleased = 1,
	ETriggeredStatusEffectType__NONE = 2,
	ETriggeredStatusEffectType__ETriggeredStatusEffectType_MAX = 3
};


// Enum FSD.EArmorRegeneratorUpgrades
enum class EArmorRegeneratorUpgrades : uint8_t
{
	EArmorRegeneratorUpgrades__Radius = 0,
	EArmorRegeneratorUpgrades__Duration = 1,
	EArmorRegeneratorUpgrades__EArmorRegeneratorUpgrades_MAX = 2
};


// Enum FSD.ESentryGunUpgradeType
enum class ESentryGunUpgradeType : uint8_t
{
	ESentryGunUpgradeType__MaxAmmo = 0,
	ESentryGunUpgradeType__ESentryGunUpgradeType_MAX = 1
};


// Enum FSD.EGrapplingHookUpgrade
enum class EGrapplingHookUpgrade : uint8_t
{
	EGrapplingHookUpgrade__MaxDistance = 0,
	EGrapplingHookUpgrade__MaxSpeed = 1,
	EGrapplingHookUpgrade__WindUpTime = 2,
	EGrapplingHookUpgrade__EGrapplingHookUpgrade_MAX = 3
};


// Enum FSD.EZiplineGunUpgrades
enum class EZiplineGunUpgrades : uint8_t
{
	EZiplineGunUpgrades__MaxAngle  = 0,
	EZiplineGunUpgrades__MaxDistance = 1,
	EZiplineGunUpgrades__MovementSpeed = 2,
	EZiplineGunUpgrades__FallDamageReduction = 3,
	EZiplineGunUpgrades__EZiplineGunUpgrades_MAX = 4
};


// Enum FSD.EElectricalSMGUpgrades
enum class EElectricalSMGUpgrades : uint8_t
{
	EElectricalSMGUpgrades__AoEChance = 0,
	EElectricalSMGUpgrades__EElectricalSMGUpgrades_MAX = 1
};


// Enum FSD.EChargedProjectileUpgrades
enum class EChargedProjectileUpgrades : uint8_t
{
	EChargedProjectileUpgrades__ExplodesOnDamage = 0,
	EChargedProjectileUpgrades__AoEDamageInFlight = 1,
	EChargedProjectileUpgrades__EChargedProjectileUpgrades_MAX = 2
};


// Enum FSD.EFlaregunProjectileUpgrades
enum class EFlaregunProjectileUpgrades : uint8_t
{
	EFlaregunProjectileUpgrades__Duration = 0,
	EFlaregunProjectileUpgrades__EFlaregunProjectileUpgrades_MAX = 1
};


// Enum FSD.EProjectileUpgrade
enum class EProjectileUpgrade : uint8_t
{
	EProjectileUpgrade__Velocity   = 0,
	EProjectileUpgrade__Bouncy     = 1,
	EProjectileUpgrade__Lifetime   = 2,
	EProjectileUpgrade__EProjectileUpgrade_MAX = 3
};


// Enum FSD.ELineCutterUpgradeType
enum class ELineCutterUpgradeType : uint8_t
{
	ELineCutterUpgradeType__LineSize = 0,
	ELineCutterUpgradeType__LineSizeMultiplier = 1,
	ELineCutterUpgradeType__ExplosiveRound = 2,
	ELineCutterUpgradeType__SetDeployDelay = 3,
	ELineCutterUpgradeType__AddDeployTime = 4,
	ELineCutterUpgradeType__ExplodeOnNextProjectile = 5,
	ELineCutterUpgradeType__DoubleLine = 6,
	ELineCutterUpgradeType__LineSizeAdd = 7,
	ELineCutterUpgradeType__SetDeployTime = 8,
	ELineCutterUpgradeType__ELineCutterUpgradeType_MAX = 9
};


// Enum FSD.EGrenadeUpgradeType
enum class EGrenadeUpgradeType : uint8_t
{
	EGrenadeUpgradeType__MaxGrenades = 0,
	EGrenadeUpgradeType__EGrenadeUpgradeType_MAX = 1
};


// Enum FSD.EFlareUpgradeType
enum class EFlareUpgradeType : uint8_t
{
	EFlareUpgradeType__Duration    = 0,
	EFlareUpgradeType__MaxFlares   = 1,
	EFlareUpgradeType__ProductionTime = 2,
	EFlareUpgradeType__EFlareUpgradeType_MAX = 3
};


// Enum FSD.ESingleUsableUpgradeType
enum class ESingleUsableUpgradeType : uint8_t
{
	ESingleUsableUpgradeType__UseDuration = 0,
	ESingleUsableUpgradeType__ESingleUsableUpgradeType_MAX = 1
};


// Enum FSD.EExplosionUpgrade
enum class EExplosionUpgrade : uint8_t
{
	EExplosionUpgrade__NOTUSED     = 0,
	EExplosionUpgrade__EExplosionUpgrade_MAX = 1
};


// Enum FSD.EDamageUpgrade
enum class EDamageUpgrade : uint8_t
{
	EDamageUpgrade__Damage         = 0,
	EDamageUpgrade__WeakpointDamageMultiplier = 1,
	EDamageUpgrade__StaggerChance  = 2,
	EDamageUpgrade__StaggerDuration = 3,
	EDamageUpgrade__RadialDamage   = 4,
	EDamageUpgrade__RadialRange    = 5,
	EDamageUpgrade__ArmorDamageMultiplier = 6,
	EDamageUpgrade__FearFactor     = 7,
	EDamageUpgrade__EDamageUpgrade_MAX = 8
};


// Enum FSD.EHitScanBaseUpgradeType
enum class EHitScanBaseUpgradeType : uint8_t
{
	EHitScanBaseUpgradeType__MaxVerticalSpread = 0,
	EHitScanBaseUpgradeType__MaxHorizontalSpread = 1,
	EHitScanBaseUpgradeType__MaxPenetrations = 2,
	EHitScanBaseUpgradeType__WeaponAccuracySpreadMultiplier = 3,
	EHitScanBaseUpgradeType__SpreadPerShot = 4,
	EHitScanBaseUpgradeType__MinSpreadWhileMoving = 5,
	EHitScanBaseUpgradeType__EHitScanBaseUpgradeType_MAX = 6
};


// Enum FSD.EMultiHitscanUpgradeType
enum class EMultiHitscanUpgradeType : uint8_t
{
	EMultiHitscanUpgradeType__BulletsPerShot = 0,
	EMultiHitscanUpgradeType__EMultiHitscanUpgradeType_MAX = 1
};


// Enum FSD.EInventoryItemUpgradeType
enum class EInventoryItemUpgradeType : uint8_t
{
	EInventoryItemUpgradeType__MovementSpeedWhileUsing = 0,
	EInventoryItemUpgradeType__CooldownRate = 1,
	EInventoryItemUpgradeType__UnJamDuration = 2,
	EInventoryItemUpgradeType__EInventoryItemUpgradeType_MAX = 3
};


// Enum FSD.EAutoMinerUpgradeType
enum class EAutoMinerUpgradeType : uint8_t
{
	EAutoMinerUpgradeType__MiningRate = 0,
	EAutoMinerUpgradeType__MaxFuel = 1,
	EAutoMinerUpgradeType__HeatRemovalOnKill = 2,
	EAutoMinerUpgradeType__HeatRemovalOnDamage = 3,
	EAutoMinerUpgradeType__MovementPenalty = 4,
	EAutoMinerUpgradeType__EAutoMinerUpgradeType_MAX = 5
};


// Enum FSD.EFlameThrowerUpgradeType
enum class EFlameThrowerUpgradeType : uint8_t
{
	EFlameThrowerUpgradeType__StickyFlameDuration = 0,
	EFlameThrowerUpgradeType__LongReach = 1,
	EFlameThrowerUpgradeType__AoEHeat = 2,
	EFlameThrowerUpgradeType__KilledTargetsExplodeChance = 3,
	EFlameThrowerUpgradeType__EFlameThrowerUpgradeType_MAX = 4
};


// Enum FSD.EManualMiningUpgradeType
enum class EManualMiningUpgradeType : uint8_t
{
	EManualMiningUpgradeType__RockMining = 0,
	EManualMiningUpgradeType__OneHitMineralMining = 1,
	EManualMiningUpgradeType__ReceiveBonusMineralNitra = 2,
	EManualMiningUpgradeType__ReceiveBonusMineralGold = 3,
	EManualMiningUpgradeType__EManualMiningUpgradeType_MAX = 4
};


// Enum FSD.ECryoSprayUpgrades
enum class ECryoSprayUpgrades : uint8_t
{
	ECryoSprayUpgrades__PressureDropMultiplier = 0,
	ECryoSprayUpgrades__PressureGainMultiplier = 1,
	ECryoSprayUpgrades__ChargeupTime = 2,
	ECryoSprayUpgrades__RePressurisationTime = 3,
	ECryoSprayUpgrades__FrozenTargetsCanShatter = 4,
	ECryoSprayUpgrades__AoECold    = 5,
	ECryoSprayUpgrades__LongReach  = 6,
	ECryoSprayUpgrades__ECryoSprayUpgrades_MAX = 7
};


// Enum FSD.ERevolerUpgrades
enum class ERevolerUpgrades : uint8_t
{
	ERevolerUpgrades__OnKillFearFactor = 0,
	ERevolerUpgrades__ERevolerUpgrades_MAX = 1
};


// Enum FSD.EBasicPistol
enum class EBasicPistol : uint8_t
{
	EBasicPistol__ConsecutiveHitsDamageBonus = 0,
	EBasicPistol__EBasicPistol_MAX = 1
};


// Enum FSD.EAutoShotgunUpgrades
enum class EAutoShotgunUpgrades : uint8_t
{
	EAutoShotgunUpgrades__TurretSpecialAttackEnabled = 0,
	EAutoShotgunUpgrades__RateOfFireAndAutoMatic = 1,
	EAutoShotgunUpgrades__EAutoShotgunUpgrades_MAX = 2
};


// Enum FSD.EBurstWeaponUpgrades
enum class EBurstWeaponUpgrades : uint8_t
{
	EBurstWeaponUpgrades__FullBurstHitBonusDamage = 0,
	EBurstWeaponUpgrades__FullBurstStaggerDuraion = 1,
	EBurstWeaponUpgrades__EBurstWeaponUpgrades_MAX = 2
};


// Enum FSD.ESawedOffShotgunUpgrades
enum class ESawedOffShotgunUpgrades : uint8_t
{
	ESawedOffShotgunUpgrades__FearOnShoot = 0,
	ESawedOffShotgunUpgrades__AutoReload = 1,
	ESawedOffShotgunUpgrades__ShockWave = 2,
	ESawedOffShotgunUpgrades__ESawedOffShotgunUpgrades_MAX = 3
};


// Enum FSD.EAutoCannonUpgrades
enum class EAutoCannonUpgrades : uint8_t
{
	EAutoCannonUpgrades__FireTimeIncreaseScaleMultiplier = 0,
	EAutoCannonUpgrades__DamageBonusAtFullROF = 1,
	EAutoCannonUpgrades__StatusEffectAtFullROF = 2,
	EAutoCannonUpgrades__EAutoCannonUpgrades_MAX = 3
};


// Enum FSD.EChargedWeaponUpgrades
enum class EChargedWeaponUpgrades : uint8_t
{
	EChargedWeaponUpgrades__ShotCostAtFullCharge = 0,
	EChargedWeaponUpgrades__ChargeSpeed = 1,
	EChargedWeaponUpgrades__CoolingRate = 2,
	EChargedWeaponUpgrades__HeatPerSecondCharging = 3,
	EChargedWeaponUpgrades__HeatPerSecondCharged = 4,
	EChargedWeaponUpgrades__EChargedWeaponUpgrades_MAX = 5
};


// Enum FSD.EDualMachinePistolsUpgrades
enum class EDualMachinePistolsUpgrades : uint8_t
{
	EDualMachinePistolsUpgrades__TriggerStatusEffectOnEmptyClip = 0,
	EDualMachinePistolsUpgrades__EDualMachinePistolsUpgrades_MAX = 1
};


// Enum FSD.EBoltActionRifleUpgrades
enum class EBoltActionRifleUpgrades : uint8_t
{
	EBoltActionRifleUpgrades__FocusSpeed = 0,
	EBoltActionRifleUpgrades__AimedShotStagger = 1,
	EBoltActionRifleUpgrades__AimedWeakShotKillFearFactor = 2,
	EBoltActionRifleUpgrades__FocusDamageBonus = 3,
	EBoltActionRifleUpgrades__EBoltActionRifleUpgrades_MAX = 4
};


// Enum FSD.EAssaultRifleUpgrade
enum class EAssaultRifleUpgrade : uint8_t
{
	EAssaultRifleUpgrade__KillResetsSpread = 0,
	EAssaultRifleUpgrade__KillTriggerStatusEffect = 1,
	EAssaultRifleUpgrade__EAssaultRifleUpgrade_MAX = 2
};


// Enum FSD.EGatlingGunUpgrade
enum class EGatlingGunUpgrade : uint8_t
{
	EGatlingGunUpgrade__DamageMultiplierAtMaxStabilization = 0,
	EGatlingGunUpgrade__HeatRemovedOnKill = 1,
	EGatlingGunUpgrade__CriticalOverheat = 2,
	EGatlingGunUpgrade__EGatlingGunUpgrade_MAX = 3
};


// Enum FSD.EBeltDrivenWeaponUpgrade
enum class EBeltDrivenWeaponUpgrade : uint8_t
{
	EBeltDrivenWeaponUpgrade__BarrelSpinupTime = 0,
	EBeltDrivenWeaponUpgrade__BarrelSpinDownTime = 1,
	EBeltDrivenWeaponUpgrade__EBeltDrivenWeaponUpgrade_MAX = 2
};


// Enum FSD.EAmmoDrivenWeapnUpgradeType
enum class EAmmoDrivenWeapnUpgradeType : uint8_t
{
	EAmmoDrivenWeapnUpgradeType__MaxAmmo = 0,
	EAmmoDrivenWeapnUpgradeType__ClipSize = 1,
	EAmmoDrivenWeapnUpgradeType__RateOfFire = 2,
	EAmmoDrivenWeapnUpgradeType__ReloadSpeed = 3,
	EAmmoDrivenWeapnUpgradeType__RecoilMultiplier = 4,
	EAmmoDrivenWeapnUpgradeType__BurstCount = 5,
	EAmmoDrivenWeapnUpgradeType__BurstRateOfFire = 6,
	EAmmoDrivenWeapnUpgradeType__EAmmoDrivenWeapnUpgradeType_MAX = 7
};


// Enum FSD.EItemPreviewStatus
enum class EItemPreviewStatus : uint8_t
{
	EItemPreviewStatus__Normal     = 0,
	EItemPreviewStatus__Upgraded   = 1,
	EItemPreviewStatus__Previewed  = 2,
	EItemPreviewStatus__PreviewReduced = 3,
	EItemPreviewStatus__UpgradedAndPreviewReduced = 4,
	EItemPreviewStatus__EItemPreviewStatus_MAX = 5
};


// Enum FSD.EManualMiningState
enum class EManualMiningState : uint8_t
{
	EManualMiningState__Equipping  = 0,
	EManualMiningState__Idle       = 1,
	EManualMiningState__Mining     = 2,
	EManualMiningState__EManualMiningState_MAX = 3
};


// Enum FSD.EMiningPodMission
enum class EMiningPodMission : uint8_t
{
	EMiningPodMission__DropAndReturn = 0,
	EMiningPodMission__Extraction  = 1,
	EMiningPodMission__DropFromSpacerig = 2,
	EMiningPodMission__EMiningPodMission_MAX = 3
};


// Enum FSD.EMiningPodRampState
enum class EMiningPodRampState : uint8_t
{
	EMiningPodRampState__Closed    = 0,
	EMiningPodRampState__Opening   = 1,
	EMiningPodRampState__Open      = 2,
	EMiningPodRampState__Closing   = 3,
	EMiningPodRampState__EMiningPodRampState_MAX = 4
};


// Enum FSD.EMiningPodState
enum class EMiningPodState : uint8_t
{
	EMiningPodState__Dropping      = 0,
	EMiningPodState__Drilling      = 1,
	EMiningPodState__Landed        = 2,
	EMiningPodState__PrepTakeoff   = 3,
	EMiningPodState__Departing     = 4,
	EMiningPodState__WaitingForGameStart = 5,
	EMiningPodState__InSpace       = 6,
	EMiningPodState__Destroy       = 7,
	EMiningPodState__WaitOnSpacerig = 8,
	EMiningPodState__ExitSpacerig  = 9,
	EMiningPodState__Damaged       = 10,
	EMiningPodState__PoweringUp    = 11,
	EMiningPodState__PoweredUp     = 12,
	EMiningPodState__EMiningPodState_MAX = 13
};


// Enum FSD.EOutline
enum class EOutline : uint8_t
{
	EOutline__OL_NONE              = 0,
	EOutline__OL_FRIENDLY          = 1,
	EOutline__OL_NEUTRAL           = 2,
	EOutline__OL_ENEMY             = 3,
	EOutline__OL_ITEM              = 4,
	EOutline__EOutline_MAX         = 5
};


// Enum FSD.EAfflictionSocket
enum class EAfflictionSocket : uint8_t
{
	EAfflictionSocket__CenterMass  = 0,
	EAfflictionSocket__Feet        = 1,
	EAfflictionSocket__EAfflictionSocket_MAX = 2
};


// Enum FSD.EPawnStatType
enum class EPawnStatType : uint8_t
{
	EPawnStatType__Multiplicative  = 0,
	EPawnStatType__Additive        = 1,
	EPawnStatType__EPawnStatType_MAX = 2
};


// Enum FSD.EPerkTierState
enum class EPerkTierState : uint8_t
{
	EPerkTierState__Claimable      = 0,
	EPerkTierState__Claimed        = 1,
	EPerkTierState__Locked         = 2,
	EPerkTierState__Unaffordable   = 3,
	EPerkTierState__NotAvailable   = 4,
	EPerkTierState__EPerkTierState_MAX = 5
};


// Enum FSD.ECharacterMoveDirection
enum class ECharacterMoveDirection : uint8_t
{
	ECharacterMoveDirection__None  = 0,
	ECharacterMoveDirection__Forward = 1,
	ECharacterMoveDirection__Left  = 2,
	ECharacterMoveDirection__Right = 3,
	ECharacterMoveDirection__Back  = 4,
	ECharacterMoveDirection__ECharacterMoveDirection_MAX = 5
};


// Enum FSD.ESpawnSettings
enum class ESpawnSettings : uint8_t
{
	ESpawnSettings__Normal         = 0,
	ESpawnSettings__NoSpawning     = 1,
	ESpawnSettings__SpawnAll       = 2,
	ESpawnSettings__ESpawnSettings_MAX = 3
};


// Enum FSD.ETerrainPlacementBoxType
enum class ETerrainPlacementBoxType : uint8_t
{
	ETerrainPlacementBoxType__NoTerrain = 0,
	ETerrainPlacementBoxType__Terrain = 1,
	ETerrainPlacementBoxType__ETerrainPlacementBoxType_MAX = 2
};


// Enum FSD.ERoomMirror
enum class ERoomMirror : uint8_t
{
	ERoomMirror__None              = 0,
	ERoomMirror__MirrorX           = 1,
	ERoomMirror__MirrorY           = 2,
	ERoomMirror__ERoomMirror_MAX   = 3
};


// Enum FSD.ERoomMirroringSupport
enum class ERoomMirroringSupport : uint8_t
{
	ERoomMirroringSupport__NotAllowed = 0,
	ERoomMirroringSupport__MirrorAroundX = 1,
	ERoomMirroringSupport__MirrorAroundY = 2,
	ERoomMirroringSupport__MirrorBoth = 3,
	ERoomMirroringSupport__ERoomMirroringSupport_MAX = 4
};


// Enum FSD.EItemAdjustmentType
enum class EItemAdjustmentType : uint8_t
{
	EItemAdjustmentType__None      = 0,
	EItemAdjustmentType__Cieling   = 1,
	EItemAdjustmentType__Wall      = 2,
	EItemAdjustmentType__Floor     = 3,
	EItemAdjustmentType__EItemAdjustmentType_MAX = 4
};


// Enum FSD.ECaveEntranceType
enum class ECaveEntranceType : uint8_t
{
	ECaveEntranceType__EntranceAndExit = 0,
	ECaveEntranceType__Entrance    = 1,
	ECaveEntranceType__Exit        = 2,
	ECaveEntranceType__TreassureRoom = 3,
	ECaveEntranceType__ECaveEntranceType_MAX = 4
};


// Enum FSD.ERoomType
enum class ERoomType : uint8_t
{
	ERoomType__Start               = 0,
	ERoomType__End                 = 1,
	ERoomType__MainPath            = 2,
	ERoomType__Gold                = 3,
	ERoomType__ERoomType_MAX       = 4
};


// Enum FSD.ERessuplyPodState
enum class ERessuplyPodState : uint8_t
{
	ERessuplyPodState__ReadyToDrop = 0,
	ERessuplyPodState__Dropping    = 1,
	ERessuplyPodState__Landed      = 2,
	ERessuplyPodState__ERessuplyPodState_MAX = 3
};


// Enum FSD.ERoomPieceSide
enum class ERoomPieceSide : uint8_t
{
	ERoomPieceSide__Up             = 0,
	ERoomPieceSide__Down           = 1,
	ERoomPieceSide__Forward        = 2,
	ERoomPieceSide__Backward       = 3,
	ERoomPieceSide__Right          = 4,
	ERoomPieceSide__Left           = 5,
	ERoomPieceSide__ERoomPieceSide_MAX = 6
};


// Enum FSD.EEnemyPlacementMask
enum class EEnemyPlacementMask : uint8_t
{
	EEnemyPlacementMask__Ground    = 0,
	EEnemyPlacementMask__Spawner   = 1,
	EEnemyPlacementMask__Cieling   = 2,
	EEnemyPlacementMask__EEnemyPlacementMask_MAX = 3
};


// Enum FSD.EBPUWPMandatoryUpdateCheck
enum class EBPUWPMandatoryUpdateCheck : uint8_t
{
	EBPUWPMandatoryUpdateCheck__NotStarted = 0,
	EBPUWPMandatoryUpdateCheck__Waiting = 1,
	EBPUWPMandatoryUpdateCheck__NoUpdates = 2,
	EBPUWPMandatoryUpdateCheck__UpdateNeeded = 3,
	EBPUWPMandatoryUpdateCheck__EBPUWPMandatoryUpdateCheck_MAX = 4
};


// Enum FSD.EUWPBPTrialCheck
enum class EUWPBPTrialCheck : uint8_t
{
	EUWPBPTrialCheck__NotStarted   = 0,
	EUWPBPTrialCheck__Waiting      = 1,
	EUWPBPTrialCheck__Expired      = 2,
	EUWPBPTrialCheck__Valid        = 3,
	EUWPBPTrialCheck__EUWPBPTrialCheck_MAX = 4
};


// Enum FSD.EFSDNATType
enum class EFSDNATType : uint8_t
{
	EFSDNATType__Open              = 0,
	EFSDNATType__Moderate          = 1,
	EFSDNATType__Strict            = 2,
	EFSDNATType__Unknown           = 3,
	EFSDNATType__EFSDNATType_MAX   = 4
};


// Enum FSD.EFSDMissionStatus
enum class EFSDMissionStatus : uint8_t
{
	EFSDMissionStatus__SpaceRig    = 0,
	EFSDMissionStatus__InGame      = 1,
	EFSDMissionStatus__Starting    = 2,
	EFSDMissionStatus__EscapeSequence = 3,
	EFSDMissionStatus__EFSDMissionStatus_MAX = 4
};


// Enum FSD.ESharkEnemyState
enum class ESharkEnemyState : uint8_t
{
	ESharkEnemyState__Idle         = 0,
	ESharkEnemyState__Circling     = 1,
	ESharkEnemyState__Attacking    = 2,
	ESharkEnemyState__OutOfGround  = 3,
	ESharkEnemyState__Vulnerable   = 4,
	ESharkEnemyState__Dive         = 5,
	ESharkEnemyState__ESharkEnemyState_MAX = 6
};


// Enum FSD.EMoveDirection
enum class EMoveDirection : uint8_t
{
	EMoveDirection__None           = 0,
	EMoveDirection__Forward        = 1,
	EMoveDirection__Left           = 2,
	EMoveDirection__Right          = 3,
	EMoveDirection__Back           = 4,
	EMoveDirection__EMoveDirection_MAX = 5
};


// Enum FSD.ETemperatureIntensity
enum class ETemperatureIntensity : uint8_t
{
	ETemperatureIntensity__Cold3   = 0,
	ETemperatureIntensity__Cold2   = 1,
	ETemperatureIntensity__Cold1   = 2,
	ETemperatureIntensity__Heat1   = 3,
	ETemperatureIntensity__Heat2   = 4,
	ETemperatureIntensity__Heat3   = 5,
	ETemperatureIntensity__ETemperatureIntensity_MAX = 6
};


// Enum FSD.EHeadVanityType
enum class EHeadVanityType : uint8_t
{
	EHeadVanityType__HairOnly      = 0,
	EHeadVanityType__HeadGearOnly  = 1,
	EHeadVanityType__HeadGearOnly_UseArmorMaterial = 2,
	EHeadVanityType__HairAndHeadGear = 3,
	EHeadVanityType__HairAndHeadGear_UseArmorMaterial = 4,
	EHeadVanityType__EHeadVanityType_MAX = 5
};


// Enum FSD.EArmorSetLegs
enum class EArmorSetLegs : uint8_t
{
	EArmorSetLegs__Invalid         = 0,
	EArmorSetLegs__LeftUpperLeg    = 1,
	EArmorSetLegs__LeftLowerLeg    = 2,
	EArmorSetLegs__LeftFoot        = 3,
	EArmorSetLegs__LeftToe         = 4,
	EArmorSetLegs__RightUpperLeg   = 5,
	EArmorSetLegs__RightLowerLeg   = 6,
	EArmorSetLegs__RightFoot       = 7,
	EArmorSetLegs__RightToe        = 8,
	EArmorSetLegs__EArmorSetLegs_MAX = 9
};


// Enum FSD.EArmorSetTorso
enum class EArmorSetTorso : uint8_t
{
	EArmorSetTorso__Invalid        = 0,
	EArmorSetTorso__UpperTorso     = 1,
	EArmorSetTorso__MiddleTorso    = 2,
	EArmorSetTorso__LowerTorso     = 3,
	EArmorSetTorso__UpperBack      = 4,
	EArmorSetTorso__MiddleBack     = 5,
	EArmorSetTorso__LowerBack      = 6,
	EArmorSetTorso__LeftHip        = 7,
	EArmorSetTorso__RightHip       = 8,
	EArmorSetTorso__FrontHip       = 9,
	EArmorSetTorso__LeftUpperLeg   = 10,
	EArmorSetTorso__LeftLowerLeg   = 11,
	EArmorSetTorso__LeftFoot       = 12,
	EArmorSetTorso__LeftToe        = 13,
	EArmorSetTorso__RightUpperLeg  = 14,
	EArmorSetTorso__RightLowerLeg  = 15,
	EArmorSetTorso__RightFoot      = 16,
	EArmorSetTorso__RightToe       = 17,
	EArmorSetTorso__EArmorSetTorso_MAX = 18
};


// Enum FSD.EArmorSetArms
enum class EArmorSetArms : uint8_t
{
	EArmorSetArms__Invalid         = 0,
	EArmorSetArms__LeftShoulder    = 1,
	EArmorSetArms__RightShoulder   = 2,
	EArmorSetArms__LeftUpperArm    = 3,
	EArmorSetArms__LeftLowerArm1   = 4,
	EArmorSetArms__LeftLowerArm2   = 5,
	EArmorSetArms__LeftHand        = 6,
	EArmorSetArms__LeftHandAttach  = 7,
	EArmorSetArms__RightUpperArm   = 8,
	EArmorSetArms__RightLowerArm1  = 9,
	EArmorSetArms__RightLowerArm2  = 10,
	EArmorSetArms__RightHand       = 11,
	EArmorSetArms__RightHandAttach = 12,
	EArmorSetArms__EArmorSetArms_MAX = 13
};


// Enum FSD.EVanitySlot
enum class EVanitySlot : uint8_t
{
	EVanitySlot__Head              = 0,
	EVanitySlot__Beard             = 1,
	EVanitySlot__Armor             = 2,
	EVanitySlot__BeardColor        = 3,
	EVanitySlot__SkinColor         = 4,
	EVanitySlot__Moustache         = 5,
	EVanitySlot__Eyebrows          = 6,
	EVanitySlot__Sideburns         = 7,
	EVanitySlot__EVanitySlot_MAX   = 8
};


// Enum FSD.EWoodLouseState
enum class EWoodLouseState : uint8_t
{
	EWoodLouseState__Unfolded      = 0,
	EWoodLouseState__Folded        = 1,
	EWoodLouseState__Size          = 2,
	EWoodLouseState__EWoodLouseState_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
