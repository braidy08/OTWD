#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnGameReadyDynamicDelegateDelegate.h"
#include "SBZOnGameReadyCallbackProxy.generated.h"

class UObject;
class USBZOnGameReadyCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZOnGameReadyCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameReadyDynamicDelegate OnSuccess;
    
    USBZOnGameReadyCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZOnGameReadyCallbackProxy* WaitGameReady(UObject* WorldContextObject);
    
};

