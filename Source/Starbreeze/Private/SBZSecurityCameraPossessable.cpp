#include "SBZSecurityCameraPossessable.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SBZSecurityCameraLogicComponent.h"

void ASBZSecurityCameraPossessable::Server_UnpossessSecurityCamera_Implementation(float Pitch, float Yaw) {
}
bool ASBZSecurityCameraPossessable::Server_UnpossessSecurityCamera_Validate(float Pitch, float Yaw) {
    return true;
}

void ASBZSecurityCameraPossessable::Server_SetTargetPitchYaw_Implementation(float Pitch, float Yaw) {
}
bool ASBZSecurityCameraPossessable::Server_SetTargetPitchYaw_Validate(float Pitch, float Yaw) {
    return true;
}

void ASBZSecurityCameraPossessable::Server_SetCameraOrientation_Implementation(float Pitch, float Yaw, float FOV) {
}
bool ASBZSecurityCameraPossessable::Server_SetCameraOrientation_Validate(float Pitch, float Yaw, float FOV) {
    return true;
}

void ASBZSecurityCameraPossessable::Server_PossessSecurityCamera_Implementation(ACharacter* Character) {
}
bool ASBZSecurityCameraPossessable::Server_PossessSecurityCamera_Validate(ACharacter* Character) {
    return true;
}

void ASBZSecurityCameraPossessable::Server_PossessPreviousSecurityCamera_Implementation(float Pitch, float Yaw) {
}
bool ASBZSecurityCameraPossessable::Server_PossessPreviousSecurityCamera_Validate(float Pitch, float Yaw) {
    return true;
}

void ASBZSecurityCameraPossessable::Server_PossessNextSecurityCamera_Implementation(float Pitch, float Yaw) {
}
bool ASBZSecurityCameraPossessable::Server_PossessNextSecurityCamera_Validate(float Pitch, float Yaw) {
    return true;
}

void ASBZSecurityCameraPossessable::PossessSecurityCamera(ACharacter* Character) {
}

void ASBZSecurityCameraPossessable::OnSecurityCameraDestroyed() {
}

void ASBZSecurityCameraPossessable::Multicast_OnUnpossessedSecurityCameraDestroyed_Implementation() {
}

void ASBZSecurityCameraPossessable::Multicast_OnUnpossessedSecurityCamera_Implementation(float Pitch, float Yaw) {
}

void ASBZSecurityCameraPossessable::Multicast_OnPossessedSecurityCamera_Implementation() {
}






bool ASBZSecurityCameraPossessable::IsSecurityCameraDestroyed() const {
    return false;
}

bool ASBZSecurityCameraPossessable::IsPossessedByPlayer() const {
    return false;
}

void ASBZSecurityCameraPossessable::Client_OnPossess_Implementation() {
}

bool ASBZSecurityCameraPossessable::CanPossess() const {
    return false;
}

ASBZSecurityCameraPossessable::ASBZSecurityCameraPossessable() {
    this->CameraArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraArmMesh"));
    this->CameraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->PossessedByCharacter = NULL;
    this->SecurityCameraLogic = CreateDefaultSubobject<USBZSecurityCameraLogicComponent>(TEXT("Logic"));
    this->SecurityCameraSwitcher = NULL;
    this->SpeedStep = 1;
    this->PossessedRotationSpeed = 1;
    this->MinimumMovementDifference = 1;
    this->ZoomStep = 1;
    this->ZoomSpeed = 1;
    this->MinZoom = 1;
    this->MaxZoom = 1;
    this->HUDMenu = NULL;
    this->bEnableControl = true;
}

