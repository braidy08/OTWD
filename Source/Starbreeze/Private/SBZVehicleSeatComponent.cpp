#include "SBZVehicleSeatComponent.h"

USBZVehicleSeatComponent::USBZVehicleSeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleSeatClass = NULL;
    this->YawMin = 1;
    this->YawMax = 1;
    this->SortingOrder = EVehicleSeatOrdering::E_VehicleDriverSeat;
    this->bLimitYaw = true;
}


