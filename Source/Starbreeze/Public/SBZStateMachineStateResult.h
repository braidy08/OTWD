#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateResult.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateResult : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestartMatchTimeMax;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RestartMatchTimer;
    
public:
    USBZStateMachineStateResult();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMatchInfoUpdated();
    
};

