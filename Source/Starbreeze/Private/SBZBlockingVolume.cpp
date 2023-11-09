#include "SBZBlockingVolume.h"
#include "Components/BoxComponent.h"

ASBZBlockingVolume::ASBZBlockingVolume() {
    this->BoxBlocker = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxBlocker"));
}

