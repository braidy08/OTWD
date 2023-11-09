#include "SBZLoadingSoundActor.h"
#include "MediaSoundComponent.h"

bool ASBZLoadingSoundActor::IsReady() const {
    return false;
}

void ASBZLoadingSoundActor::HandleGameReady() {
}

ASBZLoadingSoundActor::ASBZLoadingSoundActor() {
    this->SoundComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("SoundComponent"));
}

