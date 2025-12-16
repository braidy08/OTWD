#pragma once
#include "CoreMinimal.h"
#include "EUserPrivilegesProxy.h"
#include "OnQueryUserPrivilegeCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnQueryUserPrivilegeComplete, EUserPrivilegesProxy, PrivilegeType, bool, PrivilegeQuerySucceeded, int32, PrivilegeQueryResults);

