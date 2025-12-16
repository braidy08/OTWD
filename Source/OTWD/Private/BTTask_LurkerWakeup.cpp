#include "BTTask_LurkerWakeup.h"

UBTTask_LurkerWakeup::UBTTask_LurkerWakeup() {
    this->NodeName = TEXT("Lurker Wakeup");
    this->CON_REF = NULL;
    this->SCHEMATIC_REF = NULL;
    this->Timer = 1;
    this->WakeUpChance = 1;
    this->CharacterInProximityKey = TEXT("potentialWakeuper");
    this->CurrentInfluenceKey = TEXT("InfluenceTargetCurrent");
    this->Target = NULL;
    this->CH_REF = NULL;
    this->LocationKey = TEXT("InfluenceLocationLastValid");
    this->bWakeFromStimuli = false;
    this->SenseTypeKey = TEXT("InfluenceTypeLastValid");
    this->AlertnessKey = TEXT("CurrentAlertnessLevel");
}


