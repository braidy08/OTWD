#include "SBZThrowable.h"
#include "Components/StaticMeshComponent.h"

void ASBZThrowable::Throw(const FVector& Direction, float Strength) {
}


ASBZThrowable::ASBZThrowable() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

