#include "SBZInteractableComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void USBZInteractableComponent::SetTemplate(TSubclassOf<USBZInteractableTemplate> NewTemplate) {
}

void USBZInteractableComponent::SetMaxNumInteractors(uint8 NewMaxNumInteractors) {
}

void USBZInteractableComponent::SetMaxDistance(float NewMaxDistance) {
}

void USBZInteractableComponent::SetLookAtShapes(TArray<UPrimitiveComponent*> InLookAtShapes) {
}

void USBZInteractableComponent::SetLookatShapeOutlineConnection(UPrimitiveComponent* LookAtShape, USBZOutlineComponent* Outline, bool bUseLookAtShapeAsOutlinePosition) {
}

USBZOutlineComponent* USBZInteractableComponent::SetLookatShapeHightlightMeshesConnection(UPrimitiveComponent* LookAtShape, TArray<UMeshComponent*> MeshesToHighlight) {
    return NULL;
}

void USBZInteractableComponent::SetIsInteractableOutlineSchematic(USBZOutlineSchematic* InIsInteractableOutlineSchematic) {
}

void USBZInteractableComponent::SetInteractionWidgetClass(TSubclassOf<USBZInteractionWidget> InInteractionWidgetClass) {
}

void USBZInteractableComponent::SetInteractionSpeedModifier(float InSpeedModifier) {
}

void USBZInteractableComponent::SetInteractionEnabled(bool bInInteractionEnabled) {
}

void USBZInteractableComponent::SetHighlightSchematic(USBZOutlineSchematic* InHighlightOutlineSchematic) {
}

void USBZInteractableComponent::SetGameplayInteractionQuery(USBZGameplayAbilityQuery* InGameplayInteractionQuery) {
}

void USBZInteractableComponent::SetGameplayEffectsOnInteract(const TArray<FSBZGameplayEffectData> GameplayEffects) {
}

void USBZInteractableComponent::SetAllowLocalInteraction(bool bInInteractionEnabled) {
}

void USBZInteractableComponent::OnRep_IsLoot() {
}

void USBZInteractableComponent::OnRep_InteractionProgress(float OldInteractionProgress) {
}

void USBZInteractableComponent::OnRep_Enabled() {
}

void USBZInteractableComponent::Multicast_OnInteractionEnded_Implementation(USBZBaseInteractorComponent* Interactor) {
}

void USBZInteractableComponent::Multicast_InteractionSuccessful_Implementation(const TArray<USBZBaseInteractorComponent*>& NewInteractors) {
}

bool USBZInteractableComponent::IsServerInteractionEnabled() const {
    return false;
}

bool USBZInteractableComponent::IsInteractionEnabled() const {
    return false;
}

bool USBZInteractableComponent::IsInteractionAllowed(const USBZBaseInteractorComponent* Interactor) {
    return false;
}

bool USBZInteractableComponent::HasInteractionNotAllowedText() const {
    return false;
}

FText USBZInteractableComponent::GetText() const {
    return FText::GetEmpty();
}

USBZInteractableTemplate* USBZInteractableComponent::GetTemplate() const {
    return NULL;
}

USBZOutlineComponent* USBZInteractableComponent::GetOutlineComponentForLookAtShape(UPrimitiveComponent* LookAtShape) {
    return NULL;
}

uint8 USBZInteractableComponent::GetMaxNumInteractors() const {
    return 0;
}

float USBZInteractableComponent::GetMaxDistance() const {
    return 0.0f;
}

TArray<UPrimitiveComponent*> USBZInteractableComponent::GetLookAtShapes() const {
    return TArray<UPrimitiveComponent*>();
}

TArray<USBZBaseInteractorComponent*> USBZInteractableComponent::GetInteractors() const {
    return TArray<USBZBaseInteractorComponent*>();
}

TSubclassOf<USBZInteractionWidget> USBZInteractableComponent::GetInteractionWidgetClass() const {
    return NULL;
}


float USBZInteractableComponent::GetInteractionProgress(bool bNormalize) const {
    return 0.0f;
}

TArray<USBZOutlineComponent*> USBZInteractableComponent::GetInteractionOutlineComponents() {
    return TArray<USBZOutlineComponent*>();
}

FText USBZInteractableComponent::GetInteractionOccupiedText() const {
    return FText::GetEmpty();
}

FText USBZInteractableComponent::GetInteractionNotAllowedText() const {
    return FText::GetEmpty();
}

UTexture2D* USBZInteractableComponent::GetInteractionNotAllowedIcon() const {
    return NULL;
}

float USBZInteractableComponent::GetInteractionDuration() const {
    return 0.0f;
}

USBZGameplayAbilityQuery* USBZInteractableComponent::GetGameplayInteractionQuery() const {
    return NULL;
}

void USBZInteractableComponent::GetGameplayEffectsOnInteract(TArray<FSBZGameplayEffectData>& GameplayEffects) const {
}

void USBZInteractableComponent::GetAllHighlightMeshComponents(TArray<UMeshComponent*>& OutMeshComponents) const {
}

void USBZInteractableComponent::ExlusiveInteractorsRemove(const USBZBaseInteractorComponent* Interactor) {
}

void USBZInteractableComponent::ExlusiveInteractorsAdd(const USBZBaseInteractorComponent* Interactor) {
}

void USBZInteractableComponent::CopyLookAtShapesToOtherInteractable(USBZInteractableComponent* InInteractableComponent) {
}

void USBZInteractableComponent::CopyHighlightMeshesToOtherInteractable(USBZInteractableComponent* InInteractableComponent) {
}

void USBZInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZInteractableComponent, HighlightOutlineSchematic);
    DOREPLIFETIME(USBZInteractableComponent, IsInteractableOutlineSchematic);
    DOREPLIFETIME(USBZInteractableComponent, bIsLoot);
    DOREPLIFETIME(USBZInteractableComponent, bInteractionEnabled);
    DOREPLIFETIME(USBZInteractableComponent, InteractionProgress);
}

USBZInteractableComponent::USBZInteractableComponent() {
    this->bInteractionInitiallyEnabled = true;
    this->HighlightOutlineSchematic = NULL;
    this->IsInteractableOutlineSchematic = NULL;
    this->InteractionTemplate = NULL;
    this->bIsLoot = false;
    this->bOverrideDuration = false;
    this->bOverrideText = false;
    this->bOverrideNotAllowedText = false;
    this->bOverrideOccupiedText = false;
    this->bOverrideMaxDistance = false;
    this->bOverridePriority = false;
    this->bOverrideMaxNumInteractors = false;
    this->bOverridePlayAnimationOnInteraction = false;
    this->bOverrideAnimationType = false;
    this->bOverrideInteractionWidgetClass = false;
    this->bOverrideCanInteractQuery = false;
    this->bOverrideInteractStartVoiceComment = false;
    this->bOverrideInteractSuccessVoiceComment = false;
    this->Duration = 1;
    this->NotAllowedIcon = NULL;
    this->MaxDistance = 1;
    this->Priority = 0;
    this->MaxNumInteractors = 0;
    this->bPlayAnimationOnInteraction = true;
    this->AnimationType = EInteractionAnimationType::Default;
    this->InteractionWidgetClass = NULL;
    this->GameplayInteractionQuery = NULL;
    this->InteractStartVoiceComment = ESBZVoiceComment::None;
    this->InteractSuccessVoiceComment = ESBZVoiceComment::None;
    this->bIgnoreGameplayEffectsFromTemplate = false;
    this->RestrictTo = EInteractionFactionRestriction::NoRestriction;
    this->bAllowLocalInteraction = true;
    this->bInteractionEnabled = false;
    this->InteractionProgress = 1;
}

