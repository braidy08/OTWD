#pragma once
#include "CoreMinimal.h"
#include "Starbreeze/Public/SBZAIAggroSystemComponent.h"
#include "OTWDAIAggroSystemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDAIAggroSystemComponent : public USBZAIAggroSystemComponent {
    GENERATED_BODY()
public:
    UOTWDAIAggroSystemComponent(const FObjectInitializer& ObjectInitializer);

};

