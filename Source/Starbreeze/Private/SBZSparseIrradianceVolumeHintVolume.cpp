#include "SBZSparseIrradianceVolumeHintVolume.h"

ASBZSparseIrradianceVolumeHintVolume::ASBZSparseIrradianceVolumeHintVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSolidWhenSelected = true;
    this->Action = ESBZSparseIrradianceVolumeHintVolumeAction::ExcludeTriangles;
    this->RepulsionDistance = 1;
}


