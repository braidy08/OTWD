#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZClampCameraRotationModifier.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZClampCameraRotationModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
    USBZClampCameraRotationModifier();
};

