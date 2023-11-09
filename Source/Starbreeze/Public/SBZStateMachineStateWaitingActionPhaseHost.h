#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SBZStateMachineStateWaitingActionPhase.h"
#include "SBZStateMachineStateWaitingActionPhaseHost.generated.h"

class APlayerState;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseHost : public USBZStateMachineStateWaitingActionPhase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelTimeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle WaitingCinematicTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LobbyCinematicTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle WaitingMissionReadyTimer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TransitionTimeOutTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TravelTimeoutTimer;
    
public:
    USBZStateMachineStateWaitingActionPhaseHost();
protected:
    UFUNCTION(BlueprintCallable)
    void PostSeamlessTravel(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleTransitionGameModeReady();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateRegister(APlayerState* ChangedPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerReadyToAbsoluteTravel(FUniqueNetIdRepl PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerFinishedAbsoluteTravel(FUniqueNetIdRepl PlayerId);
    
};

