#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EUserPrivilegesProxy.h"
#include "UserPrivilegeQueryCompleteDelegate.h"
#include "SBZQueryUserPrivilegeCallbackProxy.generated.h"

class UObject;
class USBZQueryUserPrivilegeCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USBZQueryUserPrivilegeCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserPrivilegeQueryComplete OnPrivilegeCheckComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USBZQueryUserPrivilegeCallbackProxy();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USBZQueryUserPrivilegeCallbackProxy* QueryUserPrivilege(UObject* NewWorldContextObject, EUserPrivilegesProxy PrivilegeRequestType);
    
};

