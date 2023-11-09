#include "OTWDCampSummary.h"

FOTWDCampSummary::FOTWDCampSummary() {
    this->UpkeepPaymentsMade = 0;
    this->UpkeepPaymentsMissed = 0;
    this->bCampDefenseNeedsShow = false;
    this->bCampDefenseSuccesful = false;
    this->NewMissionsPresent = 0;
    this->MissionsCompleted = 0;
    this->bAreSurvivorsPending = false;
    this->ChangeInMorale = 1;
    this->ChangeInSVR = 0;
    this->bIsVendorUnlocked = false;
    this->bIsVendorRefusedToEnterCamp = false;
    this->bHasVendorLeftTheCamp = false;
    this->bIsVendorItemsReadyToCollect = false;
    this->bWasVendorAlreadyInCamp = false;
    this->bHaveBuildingBonusesChanged = false;
    this->bIsVendorRefusedToEnterCampDueToUpgrades = false;
}

