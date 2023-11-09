#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveFloat.h"
#include "GameplayTagContainer.h"
#include "ESBZGrappleState.h"
#include "ESBZHurtReactionWeight.h"
#include "SBZHurtReactionPrediction.h"
#include "SBZNonHumanAICharacter.h"
#include "OTWDWoundEffectArray.h"
#include "OTWDWoundSlots.h"
#include "SBZExplodeLimbMappingArray.h"
#include "SBZExplodePrediction.h"
#include "SBZLungePrediction.h"
#include "Templates/SubclassOf.h"
#include "ZombieCharacter.generated.h"

class AActor;
class AOTWDCosmeticCharacterVariation;
class AOTWDWoundReferenceActor;
class ASBZCharacter;
class AZombieCharacter;
class UAISchematicZombie;
class UAkAudioEvent;
class UAnimMontage;
class UAnimSequenceBase;
class UAnimationAsset;
class UDamageType;
class UOTWDZombieCharacterAnimation;
class UParticleSystem;
class USBZAIAimTargetComponent;
class USBZAISchematic;
class USBZCharacterFootStepComponent;
class USBZDamageType;
class USBZGeneralZombieAIAnimationCollection;
class USBZHurtReaction;
class USBZLocalPlayerFeedback;
class USkeletalMesh;

UCLASS(Blueprintable)
class OTWD_API AZombieCharacter : public ASBZNonHumanAICharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnZombieExploded, AZombieCharacter*, ExplodedZombie);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHurtMontageHasEnded, AActor*, InInstigator, ESBZHurtReactionWeight, Weight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBecomeCrawlerDelegate, AZombieCharacter*, Zombie);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOTWDWoundReferenceActor> WoundReferenceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOTWDWoundReferenceActor* WoundReferenceCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndex0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndex1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndex2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WoundIndex3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WoundSlots, meta=(AllowPrivateAccess=true))
    FOTWDWoundSlots WoundSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UDamageType>> UnrestrictedDamageTypeClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsLurker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Crawler, meta=(AllowPrivateAccess=true))
    bool bIsCrawler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCapsuleCrawlerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBloater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bShouldStandUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldWakeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Crowd, meta=(AllowPrivateAccess=true))
    bool IsCrowdZombie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsStumbling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowedToStumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAsCrawler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAISchematic* CrawlerSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZGeneralZombieAIAnimationCollection* AnimationCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FallKillCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve FallToCrawlerCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RandomSeed, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOTWDCosmeticCharacterVariation> CosmeticVariation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> CrowdAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CrowdAnimationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> CrowdStumbleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CrowdGrapplAnimIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CrowdGrapplAnimStruggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CrowdGrapplAnimEndWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CrowdGrapplAnimEndLose;
    
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_RandomStumbleAnim, meta=(AllowPrivateAccess=true))
    int8 RandomStumbleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastStumbleAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZCharacter* EatingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeAttackTimeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExplodeOriginBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeDamageMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeDamageMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeDamageDifficultyMultiplier[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ExplodeDamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeDamageFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageType> ExplodeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExplodeAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplodeEmitterTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExplodeEmitterSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLocalPlayerFeedback> ExplodeLocalPlayerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeLensRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ExplodePostMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ExplodeResidualActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeResidualActorLifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeStunDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeShoveImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplodeShoveRecoveryDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZExplodeLimbMappingArray> ExplodeLimbSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BlindedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StunnedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshOffsetCrawler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLimbPhysicImpulse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnZombieExploded OnZombieExploded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHurtMontageHasEnded OnHurtMontageHasEndedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBecomeCrawlerDelegate OnBecomeCrawlerDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAnimMontage*, UAnimMontage*> CrawlerMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLunging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* CrawlerDieReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* CrawlerHurtReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZHurtReaction* CrawlerKnockbackReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CrawlerFallingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* LightCrawlerLandingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* CrawlerLandingMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterFootStepComponent* SBZCharacterFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAimTargetComponent* Target_Head;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAISchematicZombie* ZombieSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<int32> WoundIndexSpawnSet;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOTWDWoundEffectArray WoundSlotBodyEffectArray[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChanceToNotKillZombiesOnFirstHitRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TryingToGrapple, meta=(AllowPrivateAccess=true))
    bool bIsTryingToGrapple;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UOTWDZombieCharacterAnimation* CrawlerABP;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSaveDataIsAlive;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 HashedAISchematic;
    
    AZombieCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void TryExplodeZombie();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToNormalCPP();
    
    UFUNCTION(BlueprintCallable)
    void SwitchToCrowdCPP();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StartLunge(const FSBZLungePrediction& InPrediction);
    
    UFUNCTION(BlueprintCallable)
    void SetTryingToGrapple(bool bNewState);
    
    UFUNCTION(BlueprintCallable)
    void SetIsCrawler();
    
    UFUNCTION(BlueprintCallable)
    void SetFinishCrawlerTransition();
    
    UFUNCTION(BlueprintCallable)
    void RefreshWounds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWounded();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_WoundSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TryingToGrapple();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomStumbleAnim();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RandomSeed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Crowd();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Crawler(bool bWasCrawler);
    
    UFUNCTION(BlueprintCallable)
    void OnCrowdGrappleAnimationEnded(ESBZGrappleState GrappleAnimationState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_InternalExplodeReaction(const TArray<FSBZExplodePrediction>& InPredictionArray);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ExplodeReaction(const FSBZHurtReactionPrediction& Prediction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Explode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoaming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetWoundTransform(const int32 WoundIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceToNormal();
    
    UFUNCTION(BlueprintCallable)
    void EndLunge();
    
    UFUNCTION(BlueprintCallable)
    void EnableRandomRoam(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ChangeWoundReferenceClass(const TSubclassOf<AOTWDWoundReferenceActor>& NewWoundReferenceClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool CanExplodeZombie();
    
    UFUNCTION(BlueprintCallable)
    void BP_Log(const FString& Message);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool BeginExplodeAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ApplyWound(int32 WoundIndex, const FVector& InImpulse);
    
};

