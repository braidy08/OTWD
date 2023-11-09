#include "AkAudioEvent.h"

UAkAudioEvent::UAkAudioEvent() {
    this->RequiredBank = NULL;
    this->MaxAttenuationRadius = 1;
    this->IsInfinite = false;
    this->MinimumDuration = 1;
    this->MaximumDuration = 1;
}

