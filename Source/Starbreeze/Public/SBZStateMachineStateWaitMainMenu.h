#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitMainMenu.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateWaitMainMenu : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeSliceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TickSeamlessTravelTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StartAsyncLoadTimer;
    
public:
    USBZStateMachineStateWaitMainMenu();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBufferLevelLoadingFinished();
    
    UFUNCTION(BlueprintCallable)
    void CompleteAsyncLoading();
    
};

