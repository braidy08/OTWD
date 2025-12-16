#include "SBZAutoPickUpItemContainer.h"
#include "Components/SceneComponent.h"
#include "SBZInteractableComponent.h"

ASBZAutoPickUpItemContainer::ASBZAutoPickUpItemContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->MaxPickUpDistributionRadius = 1;
    this->bShouldDestroyOnLooted = false;
}

void ASBZAutoPickUpItemContainer::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}


