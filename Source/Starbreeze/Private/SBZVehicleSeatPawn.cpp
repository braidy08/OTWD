#include "SBZVehicleSeatPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "Net/UnrealNetwork.h"

ASBZVehicleSeatPawn::ASBZVehicleSeatPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
    this->FirstPersonCameraAttachment = CreateDefaultSubobject<USceneComponent>(TEXT("FirstPersonCameraAttachment"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->MinCameraZoom = 1;
    this->MaxCameraZoom = 1;
    this->CameraZoomSpeed = 1;
    this->CameraMode = ECameraMode::FIRST_PERSON;
    this->bIsOccupied = false;
    this->FirstPersonCameraAttachment->SetupAttachment(RootComponent);
    this->Camera->SetupAttachment(SpringArm);
    this->SpringArm->SetupAttachment(RootComponent);
}

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


