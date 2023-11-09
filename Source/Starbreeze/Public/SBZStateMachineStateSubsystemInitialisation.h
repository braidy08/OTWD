#pragma once
#include "CoreMinimal.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateSubsystemInitialisation.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateSubsystemInitialisation : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateSubsystemInitialisation();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnalyticsStarted();
    
};

