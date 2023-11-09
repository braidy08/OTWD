#include "SBZCharacterMVComponent.h"

void USBZCharacterMVComponent::TickMantlingVaulting(float DeltaTime) {
}

void USBZCharacterMVComponent::StopMantlingVaulting() {
}

bool USBZCharacterMVComponent::StartMantlingVaultingWithCustomTrajectory(const FClimbTrajectory& Trajectory) {
    return false;
}

void USBZCharacterMVComponent::StartMantlingVaulting(const FMinimalClimbTrajectory& MinimalTrajectory) {
}

void USBZCharacterMVComponent::Server_StopMantlingVaulting_Implementation() {
}
bool USBZCharacterMVComponent::Server_StopMantlingVaulting_Validate() {
    return true;
}

void USBZCharacterMVComponent::Server_StartMantlingVaulting_Implementation(const FMinimalClimbTrajectory& MinimalTrajectory) {
}
bool USBZCharacterMVComponent::Server_StartMantlingVaulting_Validate(const FMinimalClimbTrajectory& MinimalTrajectory) {
    return true;
}

void USBZCharacterMVComponent::ResetMoveToInteraction() {
}

void USBZCharacterMVComponent::NetMulticast_StopMantlingVaulting_Implementation(bool bServerDecision) {
}

void USBZCharacterMVComponent::NetMulticast_StartMantlingVaulting_Implementation(const FMinimalClimbTrajectory& MinimalTrajectory) {
}

bool USBZCharacterMVComponent::IsVaultingLoop() const {
    return false;
}

bool USBZCharacterMVComponent::IsVaultingExit() const {
    return false;
}

bool USBZCharacterMVComponent::IsVaultingEnter() const {
    return false;
}

bool USBZCharacterMVComponent::IsVaulting() const {
    return false;
}

bool USBZCharacterMVComponent::IsMantlingLoop() const {
    return false;
}

bool USBZCharacterMVComponent::IsMantlingExit() const {
    return false;
}

bool USBZCharacterMVComponent::IsMantlingEnter() const {
    return false;
}

bool USBZCharacterMVComponent::IsMantling() const {
    return false;
}

void USBZCharacterMVComponent::Init(ASBZCharacter* InOwningCharacter) {
}

float USBZCharacterMVComponent::GetIKInterpolationFactor() const {
    return 0.0f;
}

void USBZCharacterMVComponent::ComputeMantlingVaultingTrajectory(bool bDebug, const FVector& StartLocation, const FVector& EndLocation, const FVector& Forward, const bool bUseProvidedLocations, const bool bComputeHands, const bool bComputeSurfaceType, const float InCharacterSpeed) {
}

bool USBZCharacterMVComponent::CanExecuteMoveToInteraction() {
    return false;
}

USBZCharacterMVComponent::USBZCharacterMVComponent() {
    this->VaultingSchematic = NULL;
    this->MantlingSchematic = NULL;
    this->bAutoComputeTrajectories = false;
    this->AutoComputeTimeRate = 1;
    this->CameraBlendTotalTimePercentage = 1;
    this->CameraMaxYawFromAnimation = 1;
    this->CameraMaxPitchFromAnimation = 1;
    this->bIgnoreMVVolumes = false;
    this->OwningCharacter = NULL;
    this->OwningPlayerCameraManager = NULL;
    this->VaultingStartHeight = 1;
}

