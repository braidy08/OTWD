#include "OTWDLibraryItemData.h"

UOTWDLibraryItemData::UOTWDLibraryItemData() {
    this->bIsLocked = true;
    this->bIsHidden = false;
    this->bIsRewardItem = false;
    this->Icon = NULL;
    this->Image = NULL;
    this->bShouldMuteMenuMusic = false;
    this->bShouldLoop = false;
    this->LocalizedSubtitlesOverlay = NULL;
}


