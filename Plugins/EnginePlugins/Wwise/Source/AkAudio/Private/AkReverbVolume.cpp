#include "AkReverbVolume.h"
#include "AkLateReverbComponent.h"

AAkReverbVolume::AAkReverbVolume() {
    this->bEnabled = true;
    this->AuxBus = NULL;
    this->SendLevel = 1;
    this->FadeRate = 1;
    this->Priority = 1;
    this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("LateReverb"));
}

