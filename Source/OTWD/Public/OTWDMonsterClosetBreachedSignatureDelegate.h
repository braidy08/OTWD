#pragma once
#include "CoreMinimal.h"
#include "OTWDMonsterClosetBreachedSignatureDelegate.generated.h"

class AOTWDMonsterCloset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOTWDMonsterClosetBreachedSignature, AOTWDMonsterCloset*, MonsterCloset);

