#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZPeekingCameraModifier.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZPeekingCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
    USBZPeekingCameraModifier();
};

