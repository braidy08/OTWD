#include "SBZSecurityCameraLogicComponent.h"
#include "Net/UnrealNetwork.h"

void USBZSecurityCameraLogicComponent::TestVisualDetection() {
}

void USBZSecurityCameraLogicComponent::StopMovement() {
}

void USBZSecurityCameraLogicComponent::SetState(ESBZSecurityCameraState NewState) {
}

void USBZSecurityCameraLogicComponent::Server_OnDestroyedSecurityCamera_Implementation() {
}
bool USBZSecurityCameraLogicComponent::Server_OnDestroyedSecurityCamera_Validate() {
    return true;
}

void USBZSecurityCameraLogicComponent::PauseMovement() {
}

void USBZSecurityCameraLogicComponent::Multicast_OnSecurityCameraEnabled_Implementation() {
}

void USBZSecurityCameraLogicComponent::Multicast_OnSecurityCameraDisabled_Implementation() {
}

void USBZSecurityCameraLogicComponent::Multicast_OnDestroyedSecurityCamera_Implementation() {
}

bool USBZSecurityCameraLogicComponent::IsSecurityCameraDestroyed() const {
    return false;
}

bool USBZSecurityCameraLogicComponent::IsPossessed() const {
    return false;
}

float USBZSecurityCameraLogicComponent::GetPeripheralVisionAngleCos() const {
    return 0.0f;
}

int32 USBZSecurityCameraLogicComponent::GetNumVisibleTargets() const {
    return 0;
}

void USBZSecurityCameraLogicComponent::DisableSecurityCamera(float TimeDisabled) {
}

void USBZSecurityCameraLogicComponent::ContinueMovementWithDelay(float Delay) {
}

void USBZSecurityCameraLogicComponent::ContinueMovement() {
}

void USBZSecurityCameraLogicComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USBZSecurityCameraLogicComponent, TargetYaw);
    DOREPLIFETIME(USBZSecurityCameraLogicComponent, TargetPitch);
    DOREPLIFETIME(USBZSecurityCameraLogicComponent, CurrentState);
}

USBZSecurityCameraLogicComponent::USBZSecurityCameraLogicComponent() {
    this->CameraMesh = NULL;
    this->Health = 1;
    this->CurrentHealth = 1;
    this->PeripheralVisionAngle = 1;
    this->VerticalVisionOffsetTop = 1;
    this->VerticalVisionOffsetBottom = 1;
    this->VerticalVisionAngleDegreesTop = 1;
    this->VerticalVisionAngleDegreesBottom = 1;
    this->TargetYaw = 1;
    this->TargetPitch = 1;
    this->RotationSpeed = 1;
    this->DestroyedPitch = 1;
    this->MinPitch = 1;
    this->MaxPitch = 1;
    this->MinYaw = 1;
    this->MaxYaw = 1;
    this->DetectionInterval = 1;
    this->CameraViewDistance = 1;
    this->TimeUntilAlert = 1;
    this->CameraPanDegree = 1;
    this->TimeUntilDirectionChange = 1;
    this->DisabledPitch = 1;
    this->CurrentState = ESBZSecurityCameraState::SCS_None;
}

