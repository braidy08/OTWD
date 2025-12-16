#include "SBZSoundEnvironment.h"
#include "AkComponent.h"
#include "AkLateReverbComponent.h"
#include "AkRoomComponent.h"

ASBZSoundEnvironment::ASBZSoundEnvironment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LateReverbComponent = CreateDefaultSubobject<UAkLateReverbComponent>(TEXT("AkLateReverbComponent"));
    this->RoomComponent = CreateDefaultSubobject<UAkRoomComponent>(TEXT("UAkRoomComponent"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    this->AkComponent->SetupAttachment(RootComponent);
}


