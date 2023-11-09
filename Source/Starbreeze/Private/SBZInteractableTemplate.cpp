#include "SBZInteractableTemplate.h"

USBZInteractableTemplate::USBZInteractableTemplate() {
    this->InteractionBlockedIcon = NULL;
    this->Duration = 1;
    this->MaxDistance = 1;
    this->Priority = 0;
    this->MaxNumInteractors = 0;
    this->bPlayAnimationOnInteraction = true;
    this->AnimationType = EInteractionAnimationType::Default;
    this->InteractionWidgetClass = NULL;
    this->GameplayInteractionQuery = NULL;
    this->InteractStartVoiceComment = ESBZVoiceComment::None;
    this->InteractSuccessVoiceComment = ESBZVoiceComment::None;
}

