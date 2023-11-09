#include "OTWDUIVendorIconComponent.h"
#include "Components/StaticMeshComponent.h"

UOTWDUIVendorIconComponent::UOTWDUIVendorIconComponent() {
    this->Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
    this->TransparencyFadeOutDistance = NULL;
}

