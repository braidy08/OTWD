#include "HoudiniAssetComponent.h"

int32 UHoudiniAssetComponent::GetAssetId() const {
    return 0;
}

UHoudiniAssetComponent::UHoudiniAssetComponent() {
    this->bGeneratedDoubleSidedGeometry = false;
    this->GeneratedPhysMaterial = NULL;
    this->GeneratedCollisionTraceFlag = CTF_UseDefault;
    this->GeneratedLightMapResolution = 0;
    this->GeneratedLpvBiasMultiplier = 1;
    this->GeneratedDistanceFieldResolutionScale = 1;
    this->GeneratedLightMapCoordinateIndex = 0;
    this->bGeneratedUseMaximumStreamingTexelRatio = false;
    this->GeneratedStreamingDistanceMultiplier = 1;
    this->GeneratedFoliageDefaultSettings = NULL;
}

