#include "SBZVehicleSeatPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZVehicleSeatPawn::SwitchCameraMode() {
}

void ASBZVehicleSeatPawn::SetThirdPersonCameraMode() {
}

void ASBZVehicleSeatPawn::SetFirstPersonCameraMode() {
}

void ASBZVehicleSeatPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZVehicleSeatPawn, bIsOccupied);
}

ASBZVehicleSeatPawn::ASBZVehicleSeatPawn() {
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
    this->FirstPersonCameraAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("FirstPersonCameraAttachment"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->MinCameraZoom = 1;
    this->MaxCameraZoom = 1;
    this->CameraZoomSpeed = 1;
    this->CameraMode = ECameraMode::FIRST_PERSON;
    this->bIsOccupied = false;
}

