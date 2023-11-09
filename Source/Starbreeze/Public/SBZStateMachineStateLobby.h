#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateLobby.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateLobby : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayersWaitTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionPhasePlayersWaitTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameStartTimeout;
    
public:
    USBZStateMachineStateLobby();
private:
    UFUNCTION(BlueprintCallable)
    void WaitPlayersTickSeconds();
    
    UFUNCTION(BlueprintCallable)
    void WaitGameTickSeconds();
    
    UFUNCTION(BlueprintCallable)
    void TryUpdateWaitPlayersTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartWaitPlayersTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartWaitGameTimer();
    
    UFUNCTION(BlueprintCallable)
    void ResetWaitPlayersTimer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissionEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToHost(ESBZOnlineCode ErrorCode);
    
};

