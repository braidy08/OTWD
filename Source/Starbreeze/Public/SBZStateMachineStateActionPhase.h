#pragma once
#include "CoreMinimal.h"
#include "ESBZEndMissionState.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateActionPhase.generated.h"

class USBZStateMachineDataActionPhase;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateActionPhase : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataActionPhase* ActionPhaseData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialLongTimeoutDelay;
    
public:
    USBZStateMachineStateActionPhase();
private:
    UFUNCTION(BlueprintCallable)
    void OnPawnObtained();
    
    UFUNCTION(BlueprintCallable)
    void HandleMissionEnd(ESBZEndMissionState EndMissionStateResult);
    
};

