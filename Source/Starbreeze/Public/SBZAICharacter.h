#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ESBZDifficulty.h"
#include "ESBZVoiceComment.h"
#include "SBZAIStanceIdHelper.h"
#include "SBZActData.h"
#include "SBZAlertnessLevelIdHelper.h"
#include "SBZCharacter.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZSyncLandResultData.h"
#include "SBZTickIntervalLODParams.h"
#include "SBZTurnAnimationCancelParameters.h"
#include "SBZTurnAnimationParameters.h"
#include "Templates/SubclassOf.h"
#include "SBZAICharacter.generated.h"

class AActor;
class ASBZAIPointOfInterestDynamic;
class ASBZSpawnerBase;
class UActorComponent;
class UAnimMontage;
class USBZAIAggroSystemComponent;
class USBZAICharacterAnimation;
class USBZAICharacterSchematic;
class USBZAIDoorInteractionComponent;
class USBZAIHumanTankComponent;
class USBZAIIgnoreFactionComponent;
class USBZAIRangedAttackHandlerBaseComponent;
class USBZAISchematic;
class USBZAIShoveAttributeSet;
class USBZAIShoveHandlerComponent;
class USBZAITankComponent;
class USBZAIThrownAttackHandlerComponent;
class USBZActHandlerComponent;
class USBZAlertnessComponent;
class USBZDamageMemoryComponent;
class USBZInteractableComponent;
class USBZMoveToInteractionHandlerComponent;
class USBZNoiseSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZAICharacter : public ASBZCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASBZSpawnerBase> Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAICharacterSchematic* AICharacterSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAISchematic* AISchematicStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAISchematic* AISchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float YawValueWhenToAnimTurnStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASBZAIPointOfInterestDynamic> DeathPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* DeathNoiseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* TakedownDeathNoiseData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BulletMagnetismSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionnalBulletDeviationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPinnerGetShovedOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinnerShovedDamageRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinnerShovedImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinnerShovedRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESBZDifficulty, float> PinnerShovedDamageRequiredDifficultyOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> BlockRecruitmentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BigAimYawAccumulator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BigAimYawAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadAbsAimYawAngleThreshold;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZAlertnessLevelIdHelper CurrentAlertness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentStance, meta=(AllowPrivateAccess=true))
    uint8 CurrentStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* TakedownInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIDoorInteractionComponent* DoorInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZMoveToInteractionHandlerComponent* MoveToInteractionHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumAbsRotationByAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadingDeadZoneHalfAngleIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadingDeadZoneHalfAngleMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelayBeforeTurnOnSpotInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDelayBeforeReducingBigAimYaw;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PinnedActor, meta=(AllowPrivateAccess=true))
    AActor* PinnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiesFromLandedOn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAIEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StatusEffectTypeMaskAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumChanceIncreaseOnHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyChanceIncreaseOnHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadMediumChanceIncreaseOnHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadHeavyChanceIncreaseOnHeadshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAITankComponent* TankComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* FallingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* FallingEquippedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LightLandingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LandingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LightLandingEquippedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* HeavyLandingEquippedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightLandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastFallingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SyncLandResultData, meta=(AllowPrivateAccess=true))
    FSBZSyncLandResultData SyncLandResultData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> TagsBreakPinning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasIgnoreFactionCollisionRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IgnoreFactionCollisionMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAlertnessComponent* AlertnessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAggroSystemComponent* AggroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZActHandlerComponent* ActHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIIgnoreFactionComponent* IgnoreFactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIRangedAttackHandlerBaseComponent* RangedAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIThrownAttackHandlerComponent* ThrowAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZDamageMemoryComponent* DamageMemoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActData, meta=(AllowPrivateAccess=true))
    FSBZActData ActData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZAIPointOfInterestDynamic* DeathPOISpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIShoveHandlerComponent* ShoveHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIShoveAttributeSet* ShoveAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment StreakComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBrainTickLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTickIntervalLODParams BrainTickIntervalLODParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowMassDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIHumanTankComponent* AIHumanTankcomponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAICharacterAnimation* CachedSBZAICharAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSet<UActorComponent*> ComponentsKeptAfterDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* LastLandingMontage;
    
public:
    ASBZAICharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetPinningTarget(AActor* InPinnedActor);
    
    UFUNCTION(BlueprintCallable)
    void SeekOutPlayer(FSBZAlertnessLevelIdHelper AlertLevelToSet, float Alertness, FName BlackboardInfluenceTargetName, FName BlackboardInfluenceLocationName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStanceChanged(FSBZAIStanceIdHelper NewStance, FSBZAIStanceIdHelper OldStance);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SyncLandResultData(FSBZSyncLandResultData OldSyncLandResultData);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PinnedActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActData();
    
    UFUNCTION(BlueprintCallable)
    void OnLandingMontageEnded3P(UAnimMontage* InMontage, bool bInInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAlertnessChanged(USBZAlertnessComponent* Sender, FSBZAlertnessLevelIdHelper NewLevel, FSBZAlertnessLevelIdHelper OldLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAIEnabledChanged(bool bInIsAIEnabled);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ApplyPinnerShove(AActor* DamageCauser, const FSBZHurtReactionPrediction& ShoveReaction);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_AbortAct();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnimationTurnCancel(const FSBZTurnAnimationCancelParameters& CancelParameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AnimationTurn(const FSBZTurnAnimationParameters& TurnParameters);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float LimitToCharacterTurnSpeed(float DeltaTime, float DesiredRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingAct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoaming() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void InteractWithDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAIDoorInteractionComponent* GetDoorInteractionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAlertnessComponent* GetAlertnessComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZAIAggroSystemComponent* GetAggroComponent() const;
    
    UFUNCTION(BlueprintCallable)
    bool ForceMove(FSBZAIStanceIdHelper Stance, FVector Location);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void EquipWeapon();
    
    UFUNCTION(BlueprintCallable)
    void EnablePatrol(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CleanupOnDeath();
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckNetRelevancy();
    
    UFUNCTION(BlueprintCallable)
    void AbortPOI();
    
    UFUNCTION(BlueprintCallable)
    void AbortAct();
    
};

