#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZPositionOffsetCameraModifier.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPositionOffsetCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
    USBZPositionOffsetCameraModifier();
};

