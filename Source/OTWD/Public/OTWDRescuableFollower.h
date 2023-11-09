#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EClimbType.h"
#include "EHumanFollowerStatus.h"
#include "ESBZLadderClimbActionType.h"
#include "ESBZPinningType.h"
#include "SBZHumanFollower.h"
#include "ERescuableFollowerAnimCollection.h"
#include "ERescuableFollowerName.h"
#include "ERescuableFollowerType.h"
#include "OTWDMetaSurvivorIngameData.h"
#include "OTWDRescuableFollower.generated.h"

class AActor;
class ASBZCharacter;
class ASBZPlayerCharacter;
class UOTWDSurvivorVoiceDataAsset;
class USBZAnimationAct;
class USBZGeneralHumanAIAnimationCollection;

UCLASS(Blueprintable)
class OTWD_API AOTWDRescuableFollower : public ASBZHumanFollower {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDestinationReachedDelegate, AActor*, DestinationActor);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOTWDMetaSurvivorIngameData> SurvivorOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDSurvivorVoiceDataAsset*> PossibleFemaleVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UOTWDSurvivorVoiceDataAsset*> PossibleMaleVoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAnimationAct* EatenByZombiesAct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOTWDMetaSurvivorIngameData SurvivorData;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestinationReachedDelegate OnDestinationReachedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERescuableFollowerName RescuableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERescuableFollowerType RescuableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PinningReEnableDelaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowCrouchMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGeneralHumanAIAnimationCollection* NeutralGeneralAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZGeneralHumanAIAnimationCollection* ScaredGeneralAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeingTargetedOnReviveDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MetersAwayWhenRevived;
    
    AOTWDRescuableFollower();
    UFUNCTION(BlueprintCallable)
    bool ShouldBeCrouched();
    
    UFUNCTION(BlueprintCallable)
    bool SetScaredAnimationCollection();
    
    UFUNCTION(BlueprintCallable)
    bool SetNeutralAnimationCollection();
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RescueCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnMVComponentClimbStateChanged(EClimbType MVActionType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerTargetingToggled(bool bIsNowAiming);
    
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerTargetInfoUpdated(ASBZPlayerCharacter* CurrentFollowedCharacter, int32 NewAlertEnemiesNumber, int32 NewAggroEnemiesNumber);
    
    UFUNCTION(BlueprintCallable)
    void OnFollowedPlayerContinuousFireToggled(bool bIsNowContinuouslyFiring);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClimbComponentClimbStateChanged(ESBZLadderClimbActionType ClimbActionType);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_SetGeneralAnimationCollection(ERescuableFollowerAnimCollection SelectedAnimSet);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_LastPinnerReleased();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_FirstPinnerAdded();
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToIndependentLocation(FVector IndependentLocation, bool bLimitMoveTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePinningAvailabilityToggled(bool bIsNowAnyAvailable);
    
    UFUNCTION(BlueprintCallable)
    void HandlePinnedActorAdded(AActor* NewPinnedActor, ESBZPinningType PinningType);
    
    UFUNCTION(BlueprintCallable)
    void HandleLastPinnedActorReleased(AActor* NewPinnedActor, ESBZPinningType PinningType);
    
    UFUNCTION(BlueprintCallable)
    void HandleFollowedCharacterCrouchChanged(bool bIsNowCrouched);
    
    UFUNCTION(BlueprintCallable)
    void HandleDestinationReached(AActor* DestinationActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeFollowerStatus(EHumanFollowerStatus NewStatus, ASBZCharacter* ByCharacter);
    
    UFUNCTION(BlueprintCallable)
    void ApplySurvivorData();
    
};

