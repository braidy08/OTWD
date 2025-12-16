#include "BZBTService_Assault.h"

UBZBTService_Assault::UBZBTService_Assault() {
    this->NodeName = TEXT("Assault");
    this->MinTimeBetweenShots = 1;
    this->AlwaysAttackDistance = 1;
    this->bCheckFriendlyFire = true;
}


