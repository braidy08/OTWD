#include "SBZBaseActAnimationSet.h"

USBZBaseActAnimationSet::USBZBaseActAnimationSet() {
    this->Intro = NULL;
    this->Using = NULL;
    this->Exit = NULL;
    this->FacialIntro = NULL;
    this->FacialUsing = NULL;
    this->FacialExit = NULL;
    this->bUseUnequipBeforeIntro = false;
    this->bUseEquipAfterExit = false;
    this->bIsPlayingExitOnInterrupt = false;
}


