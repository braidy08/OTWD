#include "SBZArmorPartSphere.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASBZArmorPartSphere::ASBZArmorPartSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
    this->Sphere->SetupAttachment(RootComponent);
}

USphereComponent* ASBZArmorPartSphere::GetSphere() const {
    return NULL;
}


