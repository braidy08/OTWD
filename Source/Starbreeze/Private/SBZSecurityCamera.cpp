#include "SBZSecurityCamera.h"
#include "Components/StaticMeshComponent.h"
#include "SBZSecurityCameraLogicComponent.h"

ASBZSecurityCamera::ASBZSecurityCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraArmMesh"));
    this->CameraArmMesh = (UStaticMeshComponent*)RootComponent;
    this->CameraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
    this->SecurityCameraLogic = CreateDefaultSubobject<USBZSecurityCameraLogicComponent>(TEXT("Logic"));
    this->CameraMesh->SetupAttachment(RootComponent);
}


