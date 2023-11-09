#pragma once
#include "CoreMinimal.h"
#include "SBZAttackEndStruct.h"
#include "OnAttackEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackEnd, FSBZAttackEndStruct, Params);

