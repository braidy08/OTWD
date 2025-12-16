#include "OTWDProfileSaveData.h"

UOTWDProfileSaveData::UOTWDProfileSaveData() {
    this->CachedMaxAmountInVault = 0;
    this->CachedMaxAmountInPostmaster = 0;
    this->RewardsSinceLastDrop_WeaponSlot[0] = 0;
    this->RewardsSinceLastDrop_WeaponSlot[1] = 0;
    this->RewardsSinceLastDrop_WeaponSlot[2] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[0] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[1] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[2] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[3] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[4] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[5] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[6] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[7] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[8] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[9] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[10] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[11] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[12] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[13] = 0;
    this->RewardsSinceLastDrop_WeaponFamily[14] = 0;
    this->bUseNewSaveData = false;
    this->HeatherPawnData = NULL;
    this->ReinaPawnData = NULL;
}

bool UOTWDProfileSaveData::HaveValidationChangedLoadout() {
    return false;
}

bool UOTWDProfileSaveData::HaveAnyMissionReports() {
    return false;
}

bool UOTWDProfileSaveData::CreateReinaSaveData() {
    return false;
}

void UOTWDProfileSaveData::AssignPawnLevelingData(const FGuid& SavedDataGuid, int32 Level, int32 Exp, int32 Skillpoints) {
}


