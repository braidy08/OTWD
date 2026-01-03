#include "SBZSpectatorPawn.h"
#include "Camera/CameraComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ASBZSpectatorPawn::ASBZSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HUDWidgetClass = NULL;
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->SpectateCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SpectateCamera"));
    this->ControllerDeadZone = 1;
    this->AttachSocket = TEXT("Hips");
    this->SpawnedHUDWidget = NULL;
    this->SpectateTarget = NULL;
    this->SpectateCamera->SetupAttachment(SpringArm);
    this->SpringArm->SetupAttachment(RootComponent);
}


