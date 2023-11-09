#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/RecastNavMesh.h"
#include "SBZVehicleRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class ASBZVehicleRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ASBZVehicleRecastNavMesh();
};

