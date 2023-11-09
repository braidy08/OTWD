#pragma once
#include "CoreMinimal.h"
#include "ESBZOnlineCode.h"
#include "SBZGameStateMachineState.h"
#include "SBZStateMachineStateMatchmaking.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Starbreeze)
class STARBREEZE_API USBZStateMachineStateMatchmaking : public USBZGameStateMachineState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchTimeMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimeDebug;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimeShipping;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimePrivateParty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcceptMatchUnlockTimeCamp;
    
public:
    USBZStateMachineStateMatchmaking();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSessionBecomeOutdated();
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerCountChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchInfoUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToPartyHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void HandleLostConnectionToHost(ESBZOnlineCode ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void FireMatchAcceptUnlock();
    
};

