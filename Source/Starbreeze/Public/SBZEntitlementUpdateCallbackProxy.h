#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EntitlementQueryCompleteDelegate.h"
#include "SBZEntitlementUpdateCallbackProxy.generated.h"

class UObject;
class USBZEntitlementUpdateCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZEntitlementUpdateCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntitlementQueryComplete OnUpdateComplete;
    
    USBZEntitlementUpdateCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZEntitlementUpdateCallbackProxy* UpdateUserEntitlements(UObject* WorldContextObject);
    
};

