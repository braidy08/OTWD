#pragma once
#include "CoreMinimal.h"
#include "SBZTeleportingSignatureDelegate.generated.h"

class ASBZCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZTeleportingSignature, ASBZCharacter*, Character);

