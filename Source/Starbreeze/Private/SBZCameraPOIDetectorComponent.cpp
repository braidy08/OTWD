#include "SBZCameraPOIDetectorComponent.h"
#include "Components/SphereComponent.h"

void USBZCameraPOIDetectorComponent::OnTagVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USBZCameraPOIDetectorComponent::OnTagVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

USBZCameraPOIDetectorComponent::USBZCameraPOIDetectorComponent() {
    this->CameraPOITagVolume = CreateDefaultSubobject<USphereComponent>(TEXT("TagVolume"));
    this->CameraComponent = NULL;
    this->ViewDistance = 1;
    this->bCheckCollision = true;
    this->bSetViewDistance = true;
}

