#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "SBZFactionIgnoreBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZFactionIgnoreBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USBZFactionIgnoreBoxComponent(const FObjectInitializer& ObjectInitializer);

};

