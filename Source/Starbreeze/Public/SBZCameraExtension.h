#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ECameraMode.h"
#include "Templates/SubclassOf.h"
#include "SBZCameraExtension.generated.h"

class USBZCameraData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STARBREEZE_API USBZCameraExtension : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZCameraData> CameraDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraMode CameraMode;
    
public:
    USBZCameraExtension();
};

