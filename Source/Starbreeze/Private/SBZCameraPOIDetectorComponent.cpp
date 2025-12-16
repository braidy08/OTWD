#include "SBZCameraPOIDetectorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

USBZCameraPOIDetectorComponent::USBZCameraPOIDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraPOITagVolume = CreateDefaultSubobject<USphereComponent>(TEXT("TagVolume"));
    this->CameraComponent = NULL;
    this->ViewDistance = 1;
    this->bCheckCollision = true;
    this->bSetViewDistance = true;
}

void USBZCameraPOIDetectorComponent::OnTagVolumeOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USBZCameraPOIDetectorComponent::OnTagVolumeOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


