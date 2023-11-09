#include "SBZCombatArea.h"

void ASBZCombatArea::SetSeekOutPlayersInCombat(bool bValue) {
}

void ASBZCombatArea::SetOptions(int32 InMaxNumRusher, float InDelayForAssigningRushersMin, float InDelayForAssigningRushersMax, float InOngoingAlertBufferTime, bool InbStayInCombat, bool InbAlertAllInLinkedAreas, bool InbSeekOutPlayersInCombat) {
}

void ASBZCombatArea::SetMaxNumberOfRushers(int32 InMaxNumRusher) {
}

void ASBZCombatArea::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCause) {
}

float ASBZCombatArea::GetTimeAfterCombatStarted() const {
    return 0.0f;
}

bool ASBZCombatArea::GetSeekOutPlayersInCombat() const {
    return false;
}

int32 ASBZCombatArea::GetNumberOfDeadRushers() const {
    return 0;
}

int32 ASBZCombatArea::GetMaxNumberOfRushers() const {
    return 0;
}

int32 ASBZCombatArea::GetMaxCapOfRushers() const {
    return 0;
}

int32 ASBZCombatArea::GetCurMaxNumberOfRushers() const {
    return 0;
}

void ASBZCombatArea::ForceAllAIsIntoCombat() {
}

ASBZCombatArea::ASBZCombatArea() {
    this->bEnableCombatArea = true;
    this->MaxNumRusher = 0;
    this->LeashDistance = 1;
    this->bStayInCombat = false;
    this->bAlertAllInLinkedAreas = true;
    this->OngoingAlertBufferTime = 1;
    this->bSeekOutPlayersInCombat = false;
}

