#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnStartActionPhaseDynamicDelegateDelegate.h"
#include "SBZOnStartActionPhaseCallbackProxy.generated.h"

class UObject;
class USBZOnStartActionPhaseCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZOnStartActionPhaseCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartActionPhaseDynamicDelegate OnSuccess;
    
    USBZOnStartActionPhaseCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZOnStartActionPhaseCallbackProxy* WaitActionPhase(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStateEntered(FName StateName);
    
};

