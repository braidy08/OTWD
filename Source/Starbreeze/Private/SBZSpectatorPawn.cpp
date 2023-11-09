#include "SBZSpectatorPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ASBZSpectatorPawn::ASBZSpectatorPawn() {
    this->HUDWidgetClass = NULL;
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->SpectateCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SpectateCamera"));
    this->ControllerDeadZone = 1;
    this->AttachSocket = TEXT("Hips");
    this->SpawnedHUDWidget = NULL;
    this->SpectateTarget = NULL;
}

