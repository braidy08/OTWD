#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleParticipantType.h"
#include "GrappleEventOnAIStruggleEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGrappleEventOnAIStruggleEnd, int32, EventID, ESBZGrappleParticipantType, WinnerType);

