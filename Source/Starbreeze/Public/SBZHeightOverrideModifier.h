#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerCameraModifier.h"
#include "SBZHeightOverrideModifier.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZHeightOverrideModifier : public USBZPlayerCameraModifier {
    GENERATED_BODY()
public:
    USBZHeightOverrideModifier();
};

