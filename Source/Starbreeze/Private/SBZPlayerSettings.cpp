#include "SBZPlayerSettings.h"

bool USBZPlayerSettings::IsValidPlayerPawnClass(TSoftClassPtr<APawn> PawnClass) {
    return false;
}

TArray<TSoftClassPtr<APawn>> USBZPlayerSettings::GetPlayerPawnClasses() {
    return TArray<TSoftClassPtr<APawn>>();
}

USBZWeaponDataCollection* USBZPlayerSettings::GetGlobalWeaponDataCollection() {
    return NULL;
}

USBZCharacterSchematic* USBZPlayerSettings::GetDefaultCharacterSchematic() {
    return NULL;
}

USBZCharacterSchematic* USBZPlayerSettings::GetCharacterSchematic(TSoftClassPtr<APawn> InPawnClass) {
    return NULL;
}

USBZPlayerSettings::USBZPlayerSettings() {
}

