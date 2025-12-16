#pragma once
#include "CoreMinimal.h"
#include "SBZHurtReactionPrediction.h"
#include "DisruptiveHurtStartedDelegateDelegate.generated.h"

class AActor;
class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDisruptiveHurtStartedDelegate, ASBZAICharacter*, AICharacter, AActor*, Instigator, FSBZHurtReactionPrediction, HurtReactionPrediction);

