#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RecastNavMesh -FallbackName=RecastNavMesh
#include "SBZVehicleRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class ASBZVehicleRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ASBZVehicleRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

