#pragma once
#include "CoreMinimal.h"
#include "OnSentryDetectedActorDelegate.generated.h"

class AActor;
class USBZSentryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSentryDetectedActor, USBZSentryComponent*, Sentry, AActor*, DetectedActor);

