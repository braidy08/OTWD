#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CharacterAbilityChangedDelegate.h"
#include "CharacterCrouchStateChangedDelegateDelegate.h"
#include "CharacterKilledSignatureDelegate.h"
#include "CharacterSchematicChangedDelegate.h"
#include "EAISoundType.h"
#include "EAbilityInput.h"
#include "ESBZAIVisibilityNodeComputationFrequency.h"
#include "ESBZGrappleParticipantType.h"
#include "ESBZGrappleRequestFailedReason.h"
#include "ESBZGrappleState.h"
#include "ESBZPeekingState.h"
#include "ESBZVoiceComment.h"
#include "ESBZVoicePriority.h"
#include "PawnStanceData.h"
#include "SBZAIVisibilityLeafNode.h"
#include "SBZGameplayEffectData.h"
#include "SBZGrappleAlignmentSettings.h"
#include "SBZGrappleEventSettings.h"
#include "SBZGrappleEventStateProperties.h"
#include "SBZGrappleStateChangedSignatureDelegate.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZPostDamageProcessedSignatureDelegate.h"
#include "SBZSchematicNetworkReference.h"
#include "SBZTeleportingSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "SBZCharacter.generated.h"

class AActor;
class APawn;
class ASBZCharacterGadget;
class ASBZMeleeWeapon;
class ASBZPlayerController;
class ASBZRangedWeapon;
class ASBZWeapon;
class UAbilitySystemComponent;
class UAkAudioEvent;
class UAttributeSet;
class UDamageType;
class UDataTable;
class UGameplayAbility;
class UGameplayEffect;
class UObject;
class UPhysicsAsset;
class UPrimitiveComponent;
class USBZAIAimTargetComponent;
class USBZAIFactionHideZoneComponent;
class USBZArmorPartChildActor;
class USBZCharacterMVComponent;
class USBZCharacterMovementMultiplierModifier;
class USBZCharacterSchematic;
class USBZCharacterSkin;
class USBZCharacterVoiceComponent;
class USBZClimbComponent;
class USBZGenericAnimationCollection;
class USBZHealthAttributeSet;
class USBZHurtReaction;
class USBZLocomotionAttributeSet;
class USBZNoiseSchematic;
class USBZOutlineComponent;
class USBZOutlineSchematic;
class USBZTagTriggeredMontageMapData;
class USBZWaypointComponent;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZCharacter : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UGameplayAbility>, EAbilityInput> ActivatedAbilityClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UGameplayAbility>> StartupAbilityClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UGameplayAbility>> PassiveAbilityClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartingGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UAttributeSet>, UDataTable*> AdditionalAttributeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAttribute> PersistentAttributes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData GameplayEffectsPerDifficulty[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZGameplayEffectData> StartingGameplayEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGameplayEffectData HealthRegenEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZCharacterGadget>> DefaultGadgetClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGenericAnimationCollection* GenericAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldTearOffNetworkOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment MarkedVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZVoiceComment DeathVoiceComment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroWeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> UnequippedWeaponSocketArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LandSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathByHeadTraumaEvent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeChancePerDifficulty[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float MediumHurtHealthScaleLimitPerDifficulty[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeavyHurtHealthScaleLimitPerDifficulty[4];
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlueprintAttributeEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZHealthAttributeSet* HealthAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZLocomotionAttributeSet* LocomotionAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZAIVisibilityNodeComputationFrequency AIVisibilityNodeComputationFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZAIVisibilityLeafNode AIVisibilityNode;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZPostDamageProcessedSignature PostDamageProcessed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZGrappleStateChangedSignature GrappleStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USBZAIAimTargetComponent*> AimTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponAttachPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ASBZWeapon>> DefaultWeaponSlotClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWeapon, meta=(AllowPrivateAccess=true))
    ASBZWeapon* CurrentWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* ShoveNoiseSchematic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterKilledSignature OnKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterKilledSignature OnRagdolled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterKilledSignature OnPredictedRagdolled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSchematicChanged OnCharacterSchematicChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterAbilityChanged OnCharacterAbilityChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTeleportingSignature OnPreTeleport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZTeleportingSignature OnPostTeleport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterCrouchStateChangedDelegate OnCrouchStateChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExplosionLineTraceBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerStandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCrouchingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerProneHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerSlideHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerJumpingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerVaultHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FallDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FallDamageCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FallingStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsProne, meta=(AllowPrivateAccess=true))
    bool bIsProne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsVaulted, meta=(AllowPrivateAccess=true))
    uint8 bIsVaulted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsSliding, meta=(AllowPrivateAccess=true))
    bool bIsSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsHopping, meta=(AllowPrivateAccess=true))
    bool bIsHopping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedIsGrabbingLedge, meta=(AllowPrivateAccess=true))
    bool bIsGrabbingLedge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedPeekingState, meta=(AllowPrivateAccess=true))
    ESBZPeekingState CurrentPeekingState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* DieReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* HurtReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* KnockbackReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* DodgeReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LocalHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LocalHitSoundHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFaceAnimated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNoiseSchematic* LandedNoiseSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KnockbackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* RagdollPhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZGrappleState GrappleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultGrappleKnifeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnGrappleKnifeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GrappleKnifeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterSchematic, meta=(AllowPrivateAccess=true))
    FSBZSchematicNetworkReference CharacterSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle ShoveTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* TargetingMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionInventoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* CrouchMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* ProneMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementMultiplierModifier* SlideMovementModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZClimbComponent* ClimbComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCharacterGadget*> Gadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Inventory, meta=(AllowPrivateAccess=true))
    TArray<ASBZWeapon*> Inventory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RagdollTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle TearOffTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZTagTriggeredMontageMapData* TagTriggeredMontageMap3P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> TagsBreakGrapple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> ActiveTagTriggeredMontageSet3P;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterMVComponent* MantlingVaultingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* AlertLowOutlineSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* AlertMediumOutlineSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZOutlineSchematic* AlertHighOutlineSchematic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterVoiceComponent* VoiceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIFactionHideZoneComponent* FactionSafeZoneComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<ASBZPlayerController>, float> ReceivedDamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RemoteViewYaw, meta=(AllowPrivateAccess=true))
    uint8 RemoteViewYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZWaypointComponent* WaypointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZArmorPartChildActor* HelmetPartComponent;
    
public:
    ASBZCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void TakeFallingDamage(float Percentage, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void StopShoveRecovery();
    
    UFUNCTION(BlueprintCallable)
    bool SetStuck(bool bIsStuck);
    
    UFUNCTION(BlueprintCallable)
    void SetPeekState(ESBZPeekingState PeekingState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHelmetPartComponent(USBZArmorPartChildActor* HelmetComponent);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetTargeting(bool bInIsTargeting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipWeapon(int32 InNewWeaponIndex);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Vault();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnVault();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_UnProne();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetPeekState(ESBZPeekingState PeekingState);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetGadgetEnabled(TSubclassOf<ASBZCharacterGadget> InGadgetClass, bool bInIsEnabled);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Prone();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_InterruptShoveRecovery();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_DropFromLedge();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_ClimbLedge();
    
    UFUNCTION(BlueprintCallable)
    void SaySystemComment(ESBZVoiceComment Comment, bool bReplicated, ESBZVoicePriority InPlayingPriority);
    
    UFUNCTION(BlueprintCallable)
    void ResetWeaponSlots(int32 NewWeaponSlotCount);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceWeaponInSlot(int32 WeaponSlot, ASBZWeapon* ReplacementWeapon);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemoveWaypoint();
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshGrappleTags();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWakeup(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShoveRecoveryEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShoveApplied(const FVector& Impulse, const float RecoveryDuration, AActor* ShoveInstigator, const bool bIsNewShove);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedPeekingState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsVaulted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsSliding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsProne();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsHopping();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedIsGrabbingLedge();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemoteViewYaw(uint8 InOldRemoteViewYaw);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Inventory(TArray<ASBZWeapon*> InOldInventory);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWeapon(ASBZWeapon* InLastWeapon);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterSchematic();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleStateChanged(ESBZGrappleState NewState, const FSBZGrappleEventStateProperties& EventProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGrappleRequestDenied(ESBZGrappleRequestFailedReason Reason, AActor* Attacker, AActor* Victim, const FSBZGrappleEventSettings& GrappleConfig, const FSBZGrappleAlignmentSettings& AlignmentSettings);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAnimInstanceInitializedDelegate();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_InterruptShoveRecovery();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetGadgetEnabled(TSubclassOf<ASBZCharacterGadget> InGadgetClass, bool bInIsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PredictedRagdollDenied();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_OnKill(const FGameplayEffectContextHandle& ContextHandle, TSubclassOf<UGameplayEffect> GameplayEffectClass, float KillDamage);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ApplyShove(AActor* InInstigator, const FSBZHurtReactionPrediction& InHurtReactionPrediction);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Kill(const FGameplayEffectContextHandle& ContextHandle, TSubclassOf<UGameplayEffect> GameplayEffectClass, float KillDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultingLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultingExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaultingEnter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVaulting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidGrappleOpponent(AActor* InOpponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargeting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStuck() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveringFromShove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPredictedAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantlingLoop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantlingExit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantlingEnter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMantling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrappling(bool bIncludePending) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquippedWeapon(const ASBZWeapon* TestWeapon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnteringExitingLadder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDowned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefeated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidVaultTrajectory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidMantleTrajectory() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool HasHelmet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASBZWeapon*> GetWeapons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZWeapon* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    FPawnStanceData GetStanceData();
    
    UFUNCTION(BlueprintCallable)
    FGameplayEffectContextHandle GetSelfInflictedEffectContextHandle();
    
    UFUNCTION(BlueprintCallable)
    FName GetRandomWeaponInDefaultWeaponSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZPeekingState GetPeekState() const;
    
    UFUNCTION(BlueprintCallable)
    FName GetMissionInventoryName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FString> GetGrappleCharacterTags(bool bForAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZRangedWeapon* GetEquippedRangedWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASBZMeleeWeapon* GetEquippedMeleeWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZClimbComponent* GetClimbComponent() const;
    
    UFUNCTION(BlueprintCallable)
    USBZCharacterSchematic* GetCharacterSchematic();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAlignmentPointTransform(FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    bool EquipWeaponIndex(int32 InNewWeaponIndex);
    
    UFUNCTION(BlueprintCallable)
    void Die();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    USBZWaypointComponent* CreateWaypoint(TSubclassOf<USBZWaypointComponent> WaypointClass);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CharacterMakeNoise(APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, EAISoundType SoundType, FName Tag, UObject* UserData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanVaultMantle() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHealthValueChanged(const float NewValue, const float OldValue, const float MaxValue);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyShove(const FVector& Impulse, const float RecoveryDuration, AActor* ShoveInstigator);
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharacterSkin(const USBZCharacterSkin* NewCharacterSkin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowedToGrapple(ESBZGrappleParticipantType ParticipantType);
    
};

