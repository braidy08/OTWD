#include "SBZInteractorVolume.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "Components/SceneComponent.h"
#include "SBZInteractableComponent.h"

ASBZInteractorVolume::ASBZInteractorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->bIsDeactivatedOnSuccess = true;
    this->TriggerArea->SetupAttachment(RootComponent);
}

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


