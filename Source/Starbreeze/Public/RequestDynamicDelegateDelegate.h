#pragma once
#include "CoreMinimal.h"
#include "ESBZRequestGroupStatus.h"
#include "SBZRequestGroupHandle.h"
#include "RequestDynamicDelegateDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FRequestDynamicDelegate, FSBZRequestGroupHandle, RequestHandle, const TArray<APawn*>&, CreatedPawns, ESBZRequestGroupStatus, FinalStatus);

