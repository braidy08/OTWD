#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZLookAtCameraModifier.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZLookAtCameraModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
    USBZLookAtCameraModifier();
};

