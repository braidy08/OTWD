#pragma once
#include "CoreMinimal.h"
#include "ESBZSparseIrradianceVolumeHintVolumeAction.generated.h"

UENUM(BlueprintType)
namespace ESBZSparseIrradianceVolumeHintVolumeAction {
    enum Type {
        ExcludeTriangles,
        VoxelizeEmptySpace,
        DiscardEmptySpaceProbes,
        DiscardAllProbes,
        RepulseProbes,
        DisableCompression,
        Max,
    };
}

