#pragma once
#include "CoreMinimal.h"
#include "SBZSkyboundRegisterUserDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZSkyboundRegisterUserDelegate, int32, Status, const FString&, Msg);

