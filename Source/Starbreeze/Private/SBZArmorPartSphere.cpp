#include "SBZArmorPartSphere.h"
#include "Components/SphereComponent.h"

USphereComponent* ASBZArmorPartSphere::GetSphere() const {
    return NULL;
}

ASBZArmorPartSphere::ASBZArmorPartSphere() {
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
}

