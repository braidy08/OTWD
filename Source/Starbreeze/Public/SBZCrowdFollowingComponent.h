#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "SBZCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    USBZCrowdFollowingComponent();
};

