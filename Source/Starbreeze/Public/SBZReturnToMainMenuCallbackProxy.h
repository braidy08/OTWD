#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnReturnToMainMenuDynamicDelegateDelegate.h"
#include "SBZReturnToMainMenuCallbackProxy.generated.h"

class UObject;
class USBZReturnToMainMenuCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZReturnToMainMenuCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReturnToMainMenuDynamicDelegate OnSuccess;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZReturnToMainMenuCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZReturnToMainMenuCallbackProxy* WaitReturnToMainMenu(UObject* NewWorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStateEntered(FName StateName);
    
};

