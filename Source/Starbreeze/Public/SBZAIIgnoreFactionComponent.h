#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SBZAIIgnoreFactionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZAIIgnoreFactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USBZAIIgnoreFactionComponent();
};

