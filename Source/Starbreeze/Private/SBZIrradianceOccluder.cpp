#include "SBZIrradianceOccluder.h"
#include "SBZIrradianceOccluderComponent.h"

ASBZIrradianceOccluder::ASBZIrradianceOccluder() {
    this->IrradianceOccluderComponent = CreateDefaultSubobject<USBZIrradianceOccluderComponent>(TEXT("IrradianceOccluder0"));
}

