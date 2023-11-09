#include "OTWDGameProgressionStatics.h"

bool UOTWDGameProgressionStatics::IsTimeLimitedVendorUnlocked(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDGameProgressionStatics::IsLevelUnlockOverrideActive(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDGameProgressionStatics::IsLevelGroupCamp(USBZLevelGroupSchematic* InLevelGroupSchematic) {
    return false;
}

bool UOTWDGameProgressionStatics::IsCharacterLockedByGameProgression(const UObject* WorldContextObject, const TSoftObjectPtr<USBZCharacterSchematic>& InCharacterData) {
    return false;
}

UOTWDGameProgressionRootDataAsset* UOTWDGameProgressionStatics::GetGameProgressionRootData() {
    return NULL;
}

USBZLevelGroupSchematic* UOTWDGameProgressionStatics::GetActiveCamp(const UObject* WorldContextObject) {
    return NULL;
}

bool UOTWDGameProgressionStatics::AreWeekliesActive(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDGameProgressionStatics::AreNoCampsActive(const UObject* WorldContextObject) {
    return false;
}

bool UOTWDGameProgressionStatics::AreBountiesActive(const UObject* WorldContextObject) {
    return false;
}

UOTWDGameProgressionStatics::UOTWDGameProgressionStatics() {
}

