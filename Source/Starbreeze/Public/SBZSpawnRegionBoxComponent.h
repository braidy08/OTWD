#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "SBZSpawnRegionBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZSpawnRegionBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    USBZSpawnRegionBoxComponent();
};

