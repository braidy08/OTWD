#pragma once
#include "CoreMinimal.h"
#include "AIOnNavMeshNodeDelegateDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAIOnNavMeshNodeDelegate, ASBZAICharacter*, Sender);

