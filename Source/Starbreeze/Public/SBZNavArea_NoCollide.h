#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavAreas/NavArea.h"
#include "SBZNavArea_NoCollide.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNavArea_NoCollide : public UNavArea {
    GENERATED_BODY()
public:
    USBZNavArea_NoCollide();
};

