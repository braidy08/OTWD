#include "SBZGrappleStateAudioEvent.h"

FSBZGrappleStateAudioEvent::FSBZGrappleStateAudioEvent() {
    this->VoiceComment = ESBZVoiceComment::None;
    this->Event = NULL;
    this->State = ESBZGrappleState::None;
    this->bPlayForLocalPlayer = false;
    this->bPlayForNonLocalPlayer = false;
}

