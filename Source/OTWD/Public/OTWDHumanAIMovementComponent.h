#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterMovementComponent.h"
#include "OTWDHumanAIMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDHumanAIMovementComponent : public USBZCharacterMovementComponent {
    GENERATED_BODY()
public:
    UOTWDHumanAIMovementComponent();
};

