#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SBZPlaceableVolume.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZPlaceableVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZPlaceableVolume(const FObjectInitializer& ObjectInitializer);

};

