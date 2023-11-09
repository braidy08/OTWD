#include "SBZDepthOfFieldSettings.h"

FSBZDepthOfFieldSettings::FSBZDepthOfFieldSettings() {
    this->DepthOfFieldMethod = DOFM_BokehDOF;
    this->bMobileHQGaussian = false;
    this->DepthOfFieldFstop = 1;
    this->DepthOfFieldSensorWidth = 1;
    this->DepthOfFieldFocalDistance = 1;
    this->DepthOfFieldDepthBlurAmount = 1;
    this->DepthOfFieldDepthBlurRadius = 1;
    this->DepthOfFieldFocalRegion = 1;
    this->DepthOfFieldNearTransitionRegion = 1;
    this->DepthOfFieldFarTransitionRegion = 1;
    this->DepthOfFieldScale = 1;
    this->DepthOfFieldMaxBokehSize = 1;
    this->DepthOfFieldNearBlurSize = 1;
    this->DepthOfFieldFarBlurSize = 1;
    this->DepthOfFieldBokehShape = NULL;
    this->DepthOfFieldOcclusion = 1;
    this->DepthOfFieldColorThreshold = 1;
    this->DepthOfFieldSizeThreshold = 1;
    this->DepthOfFieldSkyFocusDistance = 1;
    this->DepthOfFieldVignetteSize = 1;
}

