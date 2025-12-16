#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "SBZFactionIgnoreSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZFactionIgnoreSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    USBZFactionIgnoreSphereComponent(const FObjectInitializer& ObjectInitializer);

};

