#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SBZFactionIgnoreBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZFactionIgnoreBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USBZFactionIgnoreBoxComponent();
};

