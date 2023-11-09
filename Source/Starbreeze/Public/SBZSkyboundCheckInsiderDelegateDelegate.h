#pragma once
#include "CoreMinimal.h"
#include "SBZSkyboundCheckInsiderDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSkyboundCheckInsiderDelegate, bool, Result, const FString&, UserName);

