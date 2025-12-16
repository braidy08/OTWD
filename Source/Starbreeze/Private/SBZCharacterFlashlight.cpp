#include "SBZCharacterFlashlight.h"
#include "SBZFlashlightComponent.h"

ASBZCharacterFlashlight::ASBZCharacterFlashlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USBZFlashlightComponent>(TEXT("SBZFlashlightComponent"));
    this->FlashlightSchematic = NULL;
    this->FlashlightComponent = (USBZFlashlightComponent*)RootComponent;
}


