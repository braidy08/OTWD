#pragma once
#include "CoreMinimal.h"
#include "SBZCharacterGadget.h"
#include "SBZCharacterFlashlight.generated.h"

class USBZFlashlightComponent;
class USBZFlashlightStatsSchematic;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API ASBZCharacterFlashlight : public ASBZCharacterGadget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZFlashlightStatsSchematic* FlashlightSchematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZFlashlightComponent* FlashlightComponent;
    
public:
    ASBZCharacterFlashlight();
};

