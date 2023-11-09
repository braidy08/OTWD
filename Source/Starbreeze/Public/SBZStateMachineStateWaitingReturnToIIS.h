#pragma once
#include "CoreMinimal.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitingReturnToIIS.generated.h"

class USBZStateMachineDataIIS;
class UWorld;

UCLASS(Blueprintable)
class STARBREEZE_API USBZStateMachineStateWaitingReturnToIIS : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataIIS* ReturnReason;
    
public:
    USBZStateMachineStateWaitingReturnToIIS();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePostLoadMap(UWorld* NewWorld);
    
};

