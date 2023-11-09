#include "SBZPlayerDefeatMarkerSetings.h"

FSBZPlayerDefeatMarkerSetings::FSBZPlayerDefeatMarkerSetings() {
    this->bEnableMarker = false;
    this->OnScreenBlueprint = NULL;
    this->OffScreenBlueprint = NULL;
    this->OnScreenIcon = NULL;
    this->OffScreenIcon = NULL;
    this->bHasOnScreenTracking = false;
    this->bHasOffScreenTracking = false;
    this->bShowDistance = false;
    this->MinVisibleDistance = 1;
    this->MaxVisibleDistance = 1;
    this->InitialFadeAlpha = 1;
}

