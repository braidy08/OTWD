#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "DamageReceivedData.h"
#include "ESBZPickedUpState.h"
#include "ESBZRangedWeaponModuleType.h"
#include "ESBZWeaponSlotType.h"
#include "OnTargetInfoUpdatedDelegate.h"
#include "SBZCharacter.h"
#include "SBZGameplayEffectData.h"
#include "SBZPointDamageInterval.h"
#include "SBZWeaponPartSetEnabledRequestedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "WeaponEquippedDelegate.h"
#include "SBZPlayerCharacter.generated.h"

class AActor;
class AController;
class ASBZCharacterFlashlight;
class ASBZPickupItem;
class ASBZRangedWeapon;
class ASBZThrowableProjectile;
class ASBZThrownItem;
class ASkeletalMeshActor;
class AStaticMeshActor;
class UAkAudioBank;
class UAkAudioEvent;
class UAnimMontage;
class UCapsuleComponent;
class UForceFeedbackEffect;
class UPhysicalMaterial;
class USBZAimAssistComponent;
class USBZAngleOverrideCameraModifier;
class USBZArmorAttributeSet;
class USBZAutoPeekComponent;
class USBZBaseAngleOverrideCameraModifier;
class USBZCarryingComponent;
class USBZCharacterMovementMultiplierModifier;
class USBZClampCameraRotationModifier;
class USBZFirstPersonCameraAttachment;
class USBZGenericAnimationCollection;
class USBZHUDWidget;
class USBZHeadbobCameraModifier;
class USBZHeightOverrideModifier;
class USBZInteractableComponent;
class USBZInteractionAttributeSet;
class USBZLadderCameraModifier;
class USBZLeanCameraModifier;
class USBZLocalPlayerFeedback;
class USBZLookAtCameraModifier;
class USBZNoiseAttributeSet;
class USBZPeekingCameraModifier;
class USBZPlayerActionHandler;
class USBZPlayerCameraModifier;
class USBZPlayerDefeatHandler;
class USBZPlayerDirectionalFeedbackComponent;
class USBZPlayerDownedAttributeSet;
class USBZPlayerGrappleHandler;
class USBZPlayerItemEventTracker;
class USBZPlayerWeaponRestrictionComponent;
class USBZPositionOffsetCameraModifier;
class USBZRecoilComponent;
class USBZStaminaAttributeSet;
class USBZStrengthAttributeSet;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Engine)
class STARBREEZE_API ASBZPlayerCharacter : public ASBZCharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUnPossessedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThrowWaitingChange, bool, bIsWaiting);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPossessedByDelegate, AController*, NewController);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameUi;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThrowWaitingChange OnThrowWaiting;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZArmorAttributeSet* ArmorAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZStaminaAttributeSet* StaminaAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZStrengthAttributeSet* StrengthAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractionAttributeSet* InteractionAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZNoiseAttributeSet* NoiseAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerDownedAttributeSet* PlayerDownedAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData ArmorRegenEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData StaminaRegenEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData StrengthRegenEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData OnSpawnEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData OnReviveEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData OnStaminaEmptyEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData WhileSprintingEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData OnSprintEndEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowThreshholdDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowThreshholdPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLowStaminaPostProcessEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData DisableStrengthRegenEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPointDamageInterval PointDamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultMontagePosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle BubbleWarningHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZWeaponPartSetEnabledRequestedDelegate OnWeaponPartSetEnabledRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZRecoilComponent* RecoilComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerWeaponRestrictionComponent* PlayerWeaponRestrictionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCarryingComponent* CarryingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWeaponSlotType InitiallyEquippedWeaponSlot;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerGrappleHandler* PlayerGrappleHandler;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponEquipped OnWeaponEquipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetInfoUpdated OnTargetInfoUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZHUDWidget* HUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DefeatCapsuleUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DefeatCapsuleLower;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerActionHandler* PlayerActionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatHandler* DefeatHandler;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* CinematicMontageWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CinematicMontageTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* LegMesh1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* WeaponShadow1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsRunActionEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsRunPressed: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZFirstPersonCameraAttachment* FPCameraAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* FPCameraSpringArm;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLadderCameraModifier* LadderModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZHeadbobCameraModifier* HeadbobModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLeanCameraModifier* LeanModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZLookAtCameraModifier* LookAtModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPeekingCameraModifier* PeekingModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZHeightOverrideModifier* HeightOverrideModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZBaseAngleOverrideCameraModifier* BaseAngleOverrideModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPositionOffsetCameraModifier* PositionOffsetModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAngleOverrideCameraModifier* AngleOverrideModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZClampCameraRotationModifier* ClampCameraRotationModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAimAssistComponent* AimAssistComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPlayerDirectionalFeedbackComponent* DirectionalFeedbackComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> LootedContainerTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LootedCommentDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootedCommentNeededContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MeleeKillsInARow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CombatLineCommentMeleeKillsInARowNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadshotAchievementCommentDistance;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraStandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraCrouchingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraProneHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSlideHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVaultHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShovedLookInputBlockDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeekingCameraOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeekingCameraRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeekingCameraTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPeekingCameraOffsetLookingDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAutoPeekComponent* AutoPeekComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ASBZThrownItem* ThrowItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SuppliesFoundCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnTopBaseFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalFOVMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingFOVMagnification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USBZHUDWidget> HUDWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioBank* SFXSoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactArmorEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmorDepletedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmorRegeneratedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CrouchEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StandUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* JumpSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCommentDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OnBulletDamagePlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OnFirePlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OnHealthLowPlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> OnStaminaLowPlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* LandedForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* FirstPersonPhysMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* ThirdPersonPhysMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGenericAnimationCollection* FirstPersonGenericAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USBZPlayerCameraModifier>> CameraModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> WhizzbyActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WhizzbyAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WhizzbyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsClimbSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbSprintSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastDyingModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMesh3PLowerBodyIn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMesh3PRenderOnTopIn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Mesh3PHideBoneNameIn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh3PScaleIn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh3PBackwardOffsetIn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mesh3PBackwardPitchIn1P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCameraOffsetForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCameraOffsetBackward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutCameraOffsetDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAimOffsetYawDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStartAimOffsetYawDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnInterpSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval FoorTurnIKDisableSpeedInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoorTurnIKDisableSmoothSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDiffWithMaxStartAimYawToStartTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWantsToClimbSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZPlayerCameraModifier*> MyCameraModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShovedImmunityDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsFirstPersonRenderOnTop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableActionHandlerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerItemEventTracker* PlayerItemEventTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingVelocityGrappleImmunity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingDistanceFromFloorGrappleImmunity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* RunningMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* ClimbSprintMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* MeleeMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* ItemMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFlashlightEnabled, meta=(AllowPrivateAccess=true))
    bool bIsFlashlightEnabled;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=TargetInfoUpdated, meta=(AllowPrivateAccess=true))
    int16 TargetedByAggroEnemies;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=TargetInfoUpdated, meta=(AllowPrivateAccess=true))
    int16 TargetedByAlertEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacterFlashlight* FlashlightGadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle GrappleDamageAbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle GrappleStruggleShoveDamageAbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle GrappleRegenDisableHandle;
    
public:
    ASBZPlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleWeaponPart(ESBZRangedWeaponModuleType PartType);
    
    UFUNCTION(BlueprintCallable)
    void TargetInfoUpdated();
    
    UFUNCTION(BlueprintCallable)
    void StartThrowThrowableProjectile(TSubclassOf<ASBZThrowableProjectile> ThrowableProjectileClass, const FVector& StartLocation, float ThrowForce, const FRadialDamageParams& RadialDamage);
    
    UFUNCTION(BlueprintCallable)
    void StartThrowSimple();
    
    UFUNCTION(BlueprintCallable)
    void StartThrow(AActor* ActorToThrow, float ThrowForce, bool bAddCharacterVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponPartEnabled(ESBZRangedWeaponModuleType PartType, bool bEnabled);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetWeaponPartEnabled(ASBZRangedWeapon* Weapon, ESBZRangedWeaponModuleType PartType, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetClimbSprinting(bool bInIsRunning);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAnimationJumping(bool bInIsJumping);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SpawnDone();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetThrowing(bool bInIsThrowing, bool bInIsInterrupted);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRunPressed(bool bInIsRunPressed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetRunActionEnabled(bool bInIsRunActionEnabled);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetMeleeMovementModifierMultiplier(float InMultiplier);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetIsForwardInput(bool bInIsForwardInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetFlashlightEnabled(bool bInIsFlashlightEnabled);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_OnDisableStrengthRegenChanged(bool bInIsDisabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveThrowItem(bool bRemoveEffectsOnly, bool bDestroyThrowItem);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCameraFeedback(int32 RemoveID);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundEffectByName(const FString& EventName);
    
    UFUNCTION(BlueprintCallable)
    void PlaySoundEffect(UAkAudioEvent* InAkEvent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayCinematicMontage(UAnimMontage* InCharacterMontage1P, UAnimMontage* InCharacterMontage3P, UAnimMontage* InWeaponMontage1P, UAnimMontage* InWeaponMontage3P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass1P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass3P, FName InAttachSocket1P, FName InAttachSocket3P);
    
    UFUNCTION(BlueprintCallable)
    void PickupSupplies();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFlashlightEnabled();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionSuccess(USBZInteractableComponent* Interactable);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamage(const FDamageReceivedData& DamageData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCinematicMontageTimerDone(bool bInIsEquippedWeaponHidden);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetThrowing(bool bInIsThrowing, bool bInIsInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_RepVaultMontagePosition(float InVaultMontagePosition);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void McastSetAnimationJumping(bool bInIsJumping);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void K2_PlayCinematicMontage(UAnimMontage* InCharacterMontage1P, UAnimMontage* InCharacterMontage3P, UAnimMontage* InWeaponMontage1P, UAnimMontage* InWeaponMontage3P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass1P, TSubclassOf<ASkeletalMeshActor> InWeaponMeshActorClass3P, FName InAttachSocket1P, FName InAttachSocket3P);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetedByAlertEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetedByAggroEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstPerson() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleWeaponContinuousFireToggled(bool bIsNowContinuouslyFiring);
    
    UFUNCTION(BlueprintCallable)
    void HandlePickupStateChanged(ESBZPickedUpState NewState, ASBZPickupItem* PickupItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWantedFOV() const;
    
    UFUNCTION(BlueprintCallable)
    ASBZThrownItem* GetThrowItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingTransitionTime() const;
    
    UFUNCTION(BlueprintCallable)
    void GetTargetingProgress(float& OutProgress, bool& bOutWantsTargeting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingOnTopFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalOnTopFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalFOV() const;
    
    UFUNCTION(BlueprintCallable)
    USBZLadderCameraModifier* GetLadderModifier();
    
    UFUNCTION(BlueprintCallable)
    USBZHeadbobCameraModifier* GetHeadbobModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOVModifier(bool bWantsTargeting, bool bOnTop) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShoveImmunity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetControllerInputModifier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZFirstPersonCameraAttachment* GetCameraAttachment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZPlayerActionHandler* GetActionHandler() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutCameraFeedback(int32 RemoveID);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDetachFPCamera(AController* InController);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StopNeedsToMove();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartNeedsToMove(float TimeLeft);
    
    UFUNCTION(BlueprintCallable)
    void CheckNetRelevancy();
    
    UFUNCTION(BlueprintCallable)
    FString CharacterName();
    
    UFUNCTION(BlueprintCallable)
    void ChangeWeaponToIndex(int32 InNewWeaponIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTargetInfoUpdated(int32 AggroEnemies, int32 AlertEnemies);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStrengthValueChanged(const float NewValue, const float OldValue, const float MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStaminaValueChanged(const float NewValue, const float OldValue, const float MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnArmorValueChanged(const float NewValue, const float OldValue, const float MaxValue);
    
public:
    UFUNCTION(BlueprintCallable)
    int32 ApplyCameraFeedback(TSubclassOf<USBZLocalPlayerFeedback> FeedbackClass);
    
};

