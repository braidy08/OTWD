#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EntitlementPurchaseCompleteDelegate.h"
#include "SBZEntitlementPurchaseCallbackProxy.generated.h"

class UObject;
class USBZContentPack;
class USBZEntitlementPurchaseCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZEntitlementPurchaseCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEntitlementPurchaseComplete OnPurchaseCompleteEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZContentPack* contentPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZEntitlementPurchaseCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZEntitlementPurchaseCallbackProxy* PurchaseUserEntitlement(UObject* NewWorldContextObject, const USBZContentPack* NewContentPack);
    
};

