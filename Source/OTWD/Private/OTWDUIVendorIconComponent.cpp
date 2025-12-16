#include "OTWDUIVendorIconComponent.h"
#include "Components/StaticMeshComponent.h"

UOTWDUIVendorIconComponent::UOTWDUIVendorIconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Plane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
    this->TransparencyFadeOutDistance = NULL;
}


