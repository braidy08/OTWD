#pragma once
#include "CoreMinimal.h"
#include "ESBZGrappleState.h"
#include "SBZGrappleEventStateProperties.h"
#include "SBZGrappleStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZGrappleStateChangedSignature, ESBZGrappleState, NewState, const FSBZGrappleEventStateProperties&, EventProperties);

