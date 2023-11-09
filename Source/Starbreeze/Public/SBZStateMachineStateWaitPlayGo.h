#pragma once
#include "CoreMinimal.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitPlayGo.generated.h"

class UWorld;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateWaitPlayGo : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateWaitPlayGo();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleLoadingFinished(UWorld* NewWorld);
    
};

