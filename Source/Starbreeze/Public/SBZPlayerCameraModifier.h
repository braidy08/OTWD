#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "SBZPlayerCameraModifier.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZPlayerCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    USBZPlayerCameraModifier();
};

