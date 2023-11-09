#include "SBZGhostInteractionData.h"

FSBZGhostInteractionData::FSBZGhostInteractionData() {
    this->GhostMaterial = NULL;
    this->bUnlockAll = false;
    this->bGhostModeInitialyEnabled = false;
    this->InteractionTemplate = NULL;
    this->HighlightOutlineSchematic = NULL;
    this->IsInteractableOutlineSchematic = NULL;
    this->bOverrideDuration = false;
    this->bOverrideText = false;
    this->bOverrideNotAllowedText = false;
    this->bOverrideMaxDistance = false;
    this->bOverridePriority = false;
    this->bOverrideInteractionWidgetClass = false;
    this->bOverrideCanInteractQuery = false;
    this->Duration = 1;
    this->MaxDistance = 1;
    this->Priority = 0;
    this->InteractionWidgetClass = NULL;
    this->GameplayInteractionQuery = NULL;
}

