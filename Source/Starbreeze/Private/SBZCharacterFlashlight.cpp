#include "SBZCharacterFlashlight.h"
#include "SBZFlashlightComponent.h"

ASBZCharacterFlashlight::ASBZCharacterFlashlight() {
    this->FlashlightSchematic = NULL;
    this->FlashlightComponent = CreateDefaultSubobject<USBZFlashlightComponent>(TEXT("SBZFlashlightComponent"));
}

