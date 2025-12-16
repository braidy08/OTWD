#include "SBZWeaponConfigurationSettings.h"

USBZWeaponConfigurationSettings::USBZWeaponConfigurationSettings() {
    this->RarityDisplayNames[0] = FText::FromString(TEXT("SALVAGE"));
    this->RarityDisplayNames[1] = FText::FromString(TEXT("SALVAGE"));
    this->RarityDisplayNames[2] = FText::FromString(TEXT("SALVAGE"));
    this->RarityDisplayNames[3] = FText::FromString(TEXT("SALVAGE"));
    this->RarityDisplayNames[4] = FText::FromString(TEXT("SALVAGE"));
    this->RarityDisplayNames[5] = FText::FromString(TEXT("SALVAGE"));
    this->RarityDisplayNames[6] = FText::FromString(TEXT("SALVAGE"));
    this->ConditionDisplayNames[0] = FText::FromString(TEXT("DEGRADED"));
    this->ConditionDisplayNames[1] = FText::FromString(TEXT("DEGRADED"));
    this->ConditionDisplayNames[2] = FText::FromString(TEXT("DEGRADED"));
    this->ConditionDisplayNames[3] = FText::FromString(TEXT("DEGRADED"));
    this->FamilyDisplayNames[0] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[1] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[2] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[3] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[4] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[5] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[6] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[7] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[8] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[9] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[10] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[11] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[12] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[13] = FText::FromString(TEXT("NONE"));
    this->FamilyDisplayNames[14] = FText::FromString(TEXT("NONE"));
    this->FireModeDisplayNames[0] = FText::FromString(TEXT("Semi-Automatic"));
    this->FireModeDisplayNames[1] = FText::FromString(TEXT("Semi-Automatic"));
    this->FireModeDisplayNames[2] = FText::FromString(TEXT("Semi-Automatic"));
    this->LoudnessDisplayNames.AddDefaulted(4);
    this->RangedUIStats.AddDefaulted(11);
    this->MeleeUIStats.AddDefaulted(6);
    this->WeaponPartUIStats.AddDefaulted(11);
}


