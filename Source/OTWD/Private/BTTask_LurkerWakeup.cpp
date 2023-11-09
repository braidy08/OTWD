#include "BTTask_LurkerWakeup.h"

UBTTask_LurkerWakeup::UBTTask_LurkerWakeup() {
    this->CON_REF = NULL;
    this->SCHEMATIC_REF = NULL;
    this->Timer = 1;
    this->WakeUpChance = 1;
    this->CurrentInfluenceKey = TEXT("potentialWakeuper");
    this->Target = NULL;
    this->CH_REF = NULL;
    this->LocationKey = TEXT("InfluenceLocationLastValid");
    this->bWakeSound = false;
    this->SenseTypeKey = TEXT("InfluenceTypeLastValid");
    this->AlertnessKey = TEXT("CurrentAlertnessLevel");
}

