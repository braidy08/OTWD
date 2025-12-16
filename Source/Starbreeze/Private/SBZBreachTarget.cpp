#include "SBZBreachTarget.h"
#include "Components/StaticMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent
#include "SBZInteractableComponent.h"
#include "SBZTimerComponent.h"

ASBZBreachTarget::ASBZBreachTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->InteractableComponent = CreateDefaultSubobject<USBZInteractableComponent>(TEXT("InteractableComponent"));
    this->TimerComponent = CreateDefaultSubobject<USBZTimerComponent>(TEXT("TimerComponent"));
    this->TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
    this->LinkedActivationType = ESBZBreachTargetActivationType::AtLeastOneActive;
    this->bActivatesLinkedBreachTargets = true;
    this->bHasBeenActivated = false;
    this->bDisableInteractionWhenActivated = false;
    this->TextComponent->SetupAttachment(MeshComponent);
}

void ASBZBreachTarget::ShowLinkedTargets() {
}

void ASBZBreachTarget::Show(bool bInShowLinkedTargets) {
}

void ASBZBreachTarget::SetInteractionEnabledForAllLinkedTargets(bool bInEnabled, bool bInIncludeSelf) {
}

void ASBZBreachTarget::SetActivated(bool bInActivated) {
}

void ASBZBreachTarget::PauseAllLinkedTargets(bool bInIncludeSelf) {
}

void ASBZBreachTarget::OnInteractionSuccessful(USBZInteractableComponent* Interactable, const TArray<USBZBaseInteractorComponent*>& Interactors) {
}


void ASBZBreachTarget::HideLinkedTargets() {
}

void ASBZBreachTarget::Hide(bool bInHideLinkedTargets) {
}


