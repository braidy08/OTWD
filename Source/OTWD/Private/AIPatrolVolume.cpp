#include "AIPatrolVolume.h"
#include "Components/BoxComponent.h"

AAIPatrolVolume::AAIPatrolVolume() {
    this->NoOfPatrolPoints = 0;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("PatrolVolumeBox"));
}

