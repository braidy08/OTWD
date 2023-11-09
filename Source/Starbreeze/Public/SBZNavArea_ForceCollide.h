#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAreas/NavArea.h"
#include "SBZNavArea_ForceCollide.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNavArea_ForceCollide : public UNavArea {
    GENERATED_BODY()
public:
    USBZNavArea_ForceCollide();
};

