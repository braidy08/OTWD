#include "SBZInteractorVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "SBZInteractableComponent.h"

void ASBZInteractorVolume::OnSuccess(USBZInteractableComponent* InInteractable, const TArray<USBZBaseInteractorComponent*>& InInteractors) {
}

void ASBZInteractorVolume::OnInteractionStateChanged(USBZInteractableComponent* Interactable, bool bIsEnabled) {
}

void ASBZInteractorVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZInteractorVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZInteractorVolume::DeactivateVolume() {
}

void ASBZInteractorVolume::ActivateVolume() {
}

ASBZInteractorVolume::ASBZInteractorVolume() {
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->bIsDeactivatedOnSuccess = true;
}

