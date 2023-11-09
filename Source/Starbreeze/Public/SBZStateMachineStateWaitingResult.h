#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ESBZOnlineCode.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateWaitingResult.generated.h"

class USBZStateMachineDataWaitResult;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateWaitingResult : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingPlayersTimeDevelopment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingPlayersTimeShipping;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumberOfAttempts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle StartAsyncLoadTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZStateMachineDataWaitResult* WaitResultData;
    
public:
    USBZStateMachineStateWaitingResult();
private:
    UFUNCTION(BlueprintCallable)
    void TryCheckCachedPlayers();
    
    UFUNCTION(BlueprintCallable)
    void RestoreBeacons();
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToHost(ESBZOnlineCode Result);
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadingFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleBufferLevelLoadingFinished();
    
};

