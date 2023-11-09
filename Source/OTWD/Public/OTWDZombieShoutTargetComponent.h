#pragma once
#include "CoreMinimal.h"
#include "SBZShoutTargetComponent.h"
#include "OTWDZombieShoutTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDZombieShoutTargetComponent : public USBZShoutTargetComponent {
    GENERATED_BODY()
public:
    UOTWDZombieShoutTargetComponent();
};

