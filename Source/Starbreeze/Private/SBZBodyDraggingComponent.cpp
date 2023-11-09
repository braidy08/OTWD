#include "SBZBodyDraggingComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Net/UnrealNetwork.h"

void USBZBodyDraggingComponent::StopDragging() {
}

bool USBZBodyDraggingComponent::StartDragging(ASBZCharacter* Character) {
    return false;
}

void USBZBodyDraggingComponent::Server_StopDragging_Implementation() {
}
bool USBZBodyDraggingComponent::Server_StopDragging_Validate() {
    return true;
}

void USBZBodyDraggingComponent::Server_StartDragging_Implementation(ASBZCharacter* Character) {
}
bool USBZBodyDraggingComponent::Server_StartDragging_Validate(ASBZCharacter* Character) {
    return true;
}

void USBZBodyDraggingComponent::OnRep_DraggedCharacter(ASBZCharacter* Character) {
}

bool USBZBodyDraggingComponent::IsDraggingBody() const {
    return false;
}

ASBZCharacter* USBZBodyDraggingComponent::GetDraggingBody() const {
    return NULL;
}

void USBZBodyDraggingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZBodyDraggingComponent, DraggedCharacter);
    DOREPLIFETIME(USBZBodyDraggingComponent, CurrentGrabbedSocketName);
}

USBZBodyDraggingComponent::USBZBodyDraggingComponent() {
    this->DraggedCharacter = NULL;
    this->AllowedAngleMin = 1;
    this->AllowedAngleMax = 1;
    this->DistanceToKeepAtAlive = 1;
    this->DistanceToKeepAtDeadMin = 1;
    this->DistanceToKeepAtDeadMax = 1;
    this->BlockedMovementConeToDraggedBody = 1;
    this->HandZStandingOffsetWhenDraggingDead = 1;
    this->HandZCrouchedOffsetWhenDraggingDead = 1;
    this->PullRightOffset = 1;
    this->InterpSpeed = 1;
    this->bRenderDraggedCharacterInTopPass = false;
    this->HandBoneName = TEXT("LeftHand");
    this->GrabbedBodyRoot = TEXT("Hips");
    this->HandReachInterpSpeed = 1;
    this->OnDragBodyEffectClass = NULL;
    this->BodyDraggingInputComponent = NULL;
    this->PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("BodyDraggingPhysicsHandleComponent"));
}

