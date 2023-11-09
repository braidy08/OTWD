#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBZSecurityCamera.generated.h"

class USBZSecurityCameraLogicComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZSecurityCamera : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CameraArmMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CameraMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSecurityCameraLogicComponent* SecurityCameraLogic;
    
public:
    ASBZSecurityCamera();
};

