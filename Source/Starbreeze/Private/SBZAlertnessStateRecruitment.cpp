#include "SBZAlertnessStateRecruitment.h"

FSBZAlertnessStateRecruitment::FSBZAlertnessStateRecruitment() {
    this->InitialRadius = 1;
    this->InitialAlertness = 1;
    this->InitialMaximumRecruited = 0;
    this->OngoingRadius = 1;
    this->OngoingAlertness = 1;
    this->OngoingFrequency = 1;
    this->OngoingMaximumRecruited = 0;
    this->bRequireLineOfSight = false;
    this->RecruitmentBufferTime = 1;
}

