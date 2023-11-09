#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZOnlineCode.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitingActionPhase.generated.h"

class UWorld;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhase : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTimeOutTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeOutTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeSliceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TryStartAsyncLoadTimer;
    
public:
    USBZStateMachineStateWaitingActionPhase();
protected:
    UFUNCTION(BlueprintCallable)
    void PostLoadTransitionMap(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleTransitionGameModeReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleGameReady();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleBeaconNetworkError(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void DelayedNetworkBeaconError();
    
    UFUNCTION(BlueprintCallable)
    void CompleteAsyncLoading();
    
};

