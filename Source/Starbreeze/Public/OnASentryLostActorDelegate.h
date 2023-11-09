#pragma once
#include "CoreMinimal.h"
#include "OnASentryLostActorDelegate.generated.h"

class AActor;
class USBZSentryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnASentryLostActor, USBZSentryComponent*, Sentry, AActor*, LostActor);

