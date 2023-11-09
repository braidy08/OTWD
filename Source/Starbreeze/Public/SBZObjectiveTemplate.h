#pragma once
#include "CoreMinimal.h"
#include "SBZObjectiveComponent.h"
#include "SBZObjectiveTemplate.generated.h"

UCLASS(Abstract, Blueprintable, Deprecated, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API UDEPRECATED_SBZObjectiveTemplate : public USBZObjectiveComponent {
    GENERATED_BODY()
public:
    UDEPRECATED_SBZObjectiveTemplate();
};

