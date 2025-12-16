#include "BTDecorator_CanAttackThreat.h"

UBTDecorator_CanAttackThreat::UBTDecorator_CanAttackThreat() {
    this->NodeName = TEXT("Can attack threat");
    this->bSeparateDirection = false;
    this->bCheckObstacles = false;
    this->RequiredSenseType = ESBZSenseType::SenseType_Sight;
}


