#include "SBZSecurityCamera.h"
#include "Components/StaticMeshComponent.h"
#include "SBZSecurityCameraLogicComponent.h"

ASBZSecurityCamera::ASBZSecurityCamera() {
    this->CameraArmMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraArmMesh"));
    this->CameraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    this->SecurityCameraLogic = CreateDefaultSubobject<USBZSecurityCameraLogicComponent>(TEXT("Logic"));
}

