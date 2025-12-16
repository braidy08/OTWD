#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RemoteActorVisibilityDelta.h"
#include "RemoteActorVisiblityState.h"
#include "SBZRemoteActorVisibility.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class STARBREEZE_API USBZRemoteActorVisibility : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastRenderTimeTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SyncPeriod;
    
    USBZRemoteActorVisibility();

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SyncVisibilityState(const FRemoteActorVisiblityState& State);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_NotifyVisibilityChanged(const FRemoteActorVisibilityDelta& Delta);
    
};

