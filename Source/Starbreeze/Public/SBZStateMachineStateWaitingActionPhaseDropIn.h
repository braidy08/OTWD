#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZOnlineCode.h"
#include "SBZStateMachineStateWaitingActionPhase.h"
#include "SBZStateMachineStateWaitingActionPhaseDropIn.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseDropIn : public USBZStateMachineStateWaitingActionPhase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CinematicTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AsyncLoadTimer;
    
public:
    USBZStateMachineStateWaitingActionPhaseDropIn();
protected:
    UFUNCTION(BlueprintCallable)
    void TickCinematicAndLoading();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTravelAckReceived(const ESBZOnlineCode& Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePostLoadMapAfterServerTravel(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadingStarted(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadingComplete(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void GameReadyToActionPhase();
    
};

