#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitSoloGame.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateWaitSoloGame : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeSliceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StartAsyncLoadTimer;
    
public:
    USBZStateMachineStateWaitSoloGame();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleCinematicStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleBufferLevelLoadingFinished();
    
    UFUNCTION(BlueprintCallable)
    void CompleteAsyncLoading();
    
};

