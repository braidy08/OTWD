#include "SBZBTDecorator_IsTargetVisible.h"

USBZBTDecorator_IsTargetVisible::USBZBTDecorator_IsTargetVisible() {
    this->NodeName = TEXT("IsTargetVisible");
    this->bUseCoverPoint = false;
    this->bRayCastToTarget = false;
    this->bCheckVisionCone = true;
    this->bUseHighestAggroTarget = false;
}


