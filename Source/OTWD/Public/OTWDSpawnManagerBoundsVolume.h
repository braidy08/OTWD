#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "OTWDSpawnManagerBoundsVolume.generated.h"

UCLASS(Blueprintable)
class OTWD_API AOTWDSpawnManagerBoundsVolume : public AVolume {
    GENERATED_BODY()
public:
    AOTWDSpawnManagerBoundsVolume(const FObjectInitializer& ObjectInitializer);

};

