#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnSubsystemsInitialisedCompleteDelegateDelegate.h"
#include "SBZGameInstanceWaitSubsystemsInitialisedCallbackProxy.generated.h"

class UObject;
class USBZGameInstanceWaitSubsystemsInitialisedCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZGameInstanceWaitSubsystemsInitialisedCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubsystemsInitialisedCompleteDelegate OnSuccess;
    
    USBZGameInstanceWaitSubsystemsInitialisedCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZGameInstanceWaitSubsystemsInitialisedCallbackProxy* WaitSubsystemInitialised(UObject* WorldContextObject);
    
};

