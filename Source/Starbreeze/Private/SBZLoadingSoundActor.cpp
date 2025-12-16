#include "SBZLoadingSoundActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaSoundComponent -FallbackName=MediaSoundComponent

ASBZLoadingSoundActor::ASBZLoadingSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SoundComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("SoundComponent"));
}

bool ASBZLoadingSoundActor::IsReady() const {
    return false;
}

void ASBZLoadingSoundActor::HandleGameReady() {
}


