#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "SBZEncounterVolume.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API ASBZEncounterVolume : public AVolume {
    GENERATED_BODY()
public:
    ASBZEncounterVolume(const FObjectInitializer& ObjectInitializer);

};

