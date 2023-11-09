#pragma once
#include "CoreMinimal.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitFirstGameStart.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateWaitFirstGameStart : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreWait;
    
    USBZStateMachineStateWaitFirstGameStart();
protected:
    UFUNCTION(BlueprintCallable)
    void CheckPendingInvites();
    
};

