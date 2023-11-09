#pragma once
#include "CoreMinimal.h"
#include "SBZShoutTargetComponent.h"
#include "OTWDReviveShoutTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDReviveShoutTargetComponent : public USBZShoutTargetComponent {
    GENERATED_BODY()
public:
    UOTWDReviveShoutTargetComponent();
};

