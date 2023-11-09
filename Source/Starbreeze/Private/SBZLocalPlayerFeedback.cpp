#include "SBZLocalPlayerFeedback.h"

USBZLocalPlayerFeedback::USBZLocalPlayerFeedback() {
    this->PostProcessSettings = NULL;
    this->PostProcessBlendWeight = 1;
    this->bLoopingCurve = false;
    this->bUseFadeOut = false;
    this->ParticleSystem = NULL;
    this->ParticleLifeTime = 1;
    this->CameraShakeClass = NULL;
    this->CameraShakeScale = 1;
    this->AkStartEvent = NULL;
    this->AkStopEvent = NULL;
    this->AkStopEventTime = 1;
    this->ForceFeedbackEffect = NULL;
    this->CameraOwner = NULL;
    this->LensParticleComponent = NULL;
    this->CameraShake = NULL;
    this->AkComponent = NULL;
}

