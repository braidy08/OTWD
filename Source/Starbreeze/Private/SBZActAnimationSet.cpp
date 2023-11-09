#include "SBZActAnimationSet.h"

FSBZActAnimationSet::FSBZActAnimationSet() {
    this->Intro = NULL;
    this->Using = NULL;
    this->Exit = NULL;
    this->FacialIntro = NULL;
    this->FacialUsing = NULL;
    this->FacialExit = NULL;
    this->bLoopingUsingAnimation = false;
    this->UsingAnimationDuration = 1;
    this->bUseUnequipBeforeIntro = false;
    this->bUseEquipAfterExit = false;
    this->bIsPlayingExitOnInterrupt = false;
}

