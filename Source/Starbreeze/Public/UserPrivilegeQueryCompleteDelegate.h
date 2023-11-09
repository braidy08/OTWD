#pragma once
#include "CoreMinimal.h"
#include "UserPrivilegeQueryCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUserPrivilegeQueryComplete, bool, PrivilegeQuerySucceeded, int32, PrivilegeQueryResults);

