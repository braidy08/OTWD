#pragma once
#include "CoreMinimal.h"
#include "OnCanVaultMantleChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanVaultMantleChange, bool, bCanVaultMantle);

