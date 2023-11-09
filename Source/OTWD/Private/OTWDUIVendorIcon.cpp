#include "OTWDUIVendorIcon.h"
#include "Components/StaticMeshComponent.h"

AOTWDUIVendorIcon::AOTWDUIVendorIcon() {
    this->Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
    this->TransparencyFadeOutDistance = NULL;
}

