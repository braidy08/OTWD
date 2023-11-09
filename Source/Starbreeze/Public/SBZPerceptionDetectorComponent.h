#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "SBZPerceptionDetectorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZPerceptionDetectorComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    USBZPerceptionDetectorComponent();
};

