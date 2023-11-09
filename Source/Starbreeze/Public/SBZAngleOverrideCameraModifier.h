#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZAngleOverrideCameraModifier.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZAngleOverrideCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
    USBZAngleOverrideCameraModifier();
};

