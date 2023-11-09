#include "SBZAmbientSound.h"

ASBZAmbientSound::ASBZAmbientSound() {
    this->ActiveAreaAttenuationScale = 1;
    this->DefaultAttenuation = 1;
    this->AttenuationSquared = 1;
    this->AkAudioEvent = NULL;
    this->AmbientAkComponent = NULL;
}

