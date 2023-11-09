#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "EClimbType.h"
#include "EHumanFollowerStatus.h"
#include "ESBZLadderClimbActionType.h"
#include "ESBZVoiceComment.h"
#include "SBZHumanAICharacter.h"
#include "Templates/SubclassOf.h"
#include "SBZHumanFollower.generated.h"

class AActor;
class ASBZCharacter;
class UCapsuleComponent;
class UGameplayEffect;
class USBZBaseInteractorComponent;
class USBZCharacterPinningComponent;
class USBZInteractableComponent;
class USBZPlayerDefeatSettingsSchematic;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZHumanFollower : public ASBZHumanAICharacter {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGrappleStartedDelegate, AActor*, MainAttackerActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrappleEndedDelegate, bool, bFollowerLost, AActor*, MainAttackerActor);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFollowerStatusChangedDelegate, EHumanFollowerStatus, NewStatus, ASBZCharacter*, ByCharacter);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowerStatusChangedDelegate OnFollowerStatusChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKillable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZCharacterPinningComponent* PinningComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCrouchDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCrouchDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFollowerVOs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFollowedChReactVOs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DefeatCapsuleUpper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DefeatCapsuleLower;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZPlayerDefeatSettingsSchematic* DefeatSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHumanFollowerStatus FollowerStatus;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleStartedDelegate OnGrappleStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrappleEndedDelegate OnGrappleEndedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* FollowerInteractableComponent;
    
public:
    ASBZHumanFollower();
    UFUNCTION(BlueprintCallable)
    bool ShouldAlwaysSurviveWhenLosingGrapple();
    
    UFUNCTION(BlueprintCallable)
    void SetHumanFollowerInteractionEnabled(bool bIsActive);
    
    UFUNCTION(BlueprintCallable)
    void QueueDelayedVOComment(ESBZVoiceComment NewDelayedComment, ASBZCharacter* SpeakingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void PlayVOComment(ESBZVoiceComment CommentToSay, ASBZCharacter* SpeakingCharacter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMVComponentClimbStateChanged(EClimbType MVActionType);
    
    UFUNCTION(BlueprintCallable)
    void OnClimbComponentClimbStateChanged(ESBZLadderClimbActionType ClimbActionType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_UpdateNewStatusParams(EHumanFollowerStatus NewStatus);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Kill(const FGameplayEffectContextHandle& ContextHandle, TSubclassOf<UGameplayEffect> GameplayEffectClass, float KillDamage);
    
private:
    UFUNCTION(BlueprintCallable)
    void InteractionSuccessfulHandler(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors);
    
    UFUNCTION(BlueprintCallable)
    void InteractionStartedHandler(USBZInteractableComponent* Interactable, USBZBaseInteractorComponent* Interactor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleFollowedCharacterKilled(ASBZCharacter* KilledOwner);
    
    UFUNCTION(BlueprintCallable)
    void HandleFollowedCharacterDestroyed(AActor* DespawnedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    USBZCharacterPinningComponent* GetPinningComponent();
    
    UFUNCTION(BlueprintCallable)
    USBZInteractableComponent* GetHumanFollowerInteractableComponent();
    
    UFUNCTION(BlueprintCallable)
    USBZInteractableComponent* GetFollowerInteractableComponent();
    
    UFUNCTION(BlueprintCallable)
    ASBZCharacter* GetFollowedCharacter();
    
    UFUNCTION(BlueprintCallable)
    EHumanFollowerStatus GetCurrentHumanFollowerStatus();
    
private:
    UFUNCTION(BlueprintCallable)
    void FollowedCharacterTeleported(ASBZCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndAnyCurrentAction();
    
    UFUNCTION(BlueprintCallable)
    void DoUnCrouch();
    
    UFUNCTION(BlueprintCallable)
    void DoCrouch();
    
    UFUNCTION(BlueprintCallable)
    void ChangeFollowerStatus(EHumanFollowerStatus NewStatus, ASBZCharacter* ByCharacter);
    
};

