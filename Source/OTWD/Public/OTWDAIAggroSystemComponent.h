#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Starbreeze -ObjectName=SBZAIAggroSystemComponent -FallbackName=SBZAIAggroSystemComponent
#include "OTWDAIAggroSystemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OTWD_API UOTWDAIAggroSystemComponent : public USBZAIAggroSystemComponent {
    GENERATED_BODY()
public:
    UOTWDAIAggroSystemComponent(const FObjectInitializer& ObjectInitializer);

};

