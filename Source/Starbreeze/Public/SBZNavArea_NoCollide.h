#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NavArea -FallbackName=NavArea
#include "SBZNavArea_NoCollide.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZNavArea_NoCollide : public UNavArea {
    GENERATED_BODY()
public:
    USBZNavArea_NoCollide();

};

