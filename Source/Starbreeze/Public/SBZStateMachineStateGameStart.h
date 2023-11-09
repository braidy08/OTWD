#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateGameStart.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateGameStart : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
    USBZStateMachineStateGameStart();
private:
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
};

