#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SBZIrradianceOccluderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZIrradianceOccluderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USBZIrradianceOccluderComponent();
};

