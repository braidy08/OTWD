#pragma once
#include "CoreMinimal.h"
#include "SBZStateMachineStateWaitingActionPhase.h"
#include "SBZStateMachineStateWaitingActionPhaseClient.generated.h"

class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingActionPhaseClient : public USBZStateMachineStateWaitingActionPhase {
    GENERATED_BODY()
public:
    USBZStateMachineStateWaitingActionPhaseClient();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTransitionGameModeReady();
    
    UFUNCTION(BlueprintCallable)
    void HandlePostLoadMapAfterServerTravel(UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable)
    void HandlePostLoadMapAfterSeamlessTravel(UWorld* NewWorld);
    
};

