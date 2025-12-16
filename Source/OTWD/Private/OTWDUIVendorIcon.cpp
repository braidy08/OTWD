#include "OTWDUIVendorIcon.h"
#include "Components/StaticMeshComponent.h"

AOTWDUIVendorIcon::AOTWDUIVendorIcon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
    this->TransparencyFadeOutDistance = NULL;
}


