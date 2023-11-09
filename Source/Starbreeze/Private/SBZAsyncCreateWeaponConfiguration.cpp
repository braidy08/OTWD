#include "SBZAsyncCreateWeaponConfiguration.h"

void USBZAsyncCreateWeaponConfiguration::OnFinishAsyncLoading(FAsyncCreateWeaponConfigurationPayload Payload) {
}

USBZAsyncCreateWeaponConfiguration* USBZAsyncCreateWeaponConfiguration::AsyncCreateWeaponConfigurationFromWeaponSavedData(const USBZProfileSaveData* ProfileSaveData, const FGuid& SavedDataGuid) {
    return NULL;
}

USBZAsyncCreateWeaponConfiguration* USBZAsyncCreateWeaponConfiguration::AsyncCreateWeaponConfiguration(const TSoftClassPtr<ASBZWeapon>& WeaponClassAsset, const FSBZWeaponConfiguration& StubWeaponConfiguration) {
    return NULL;
}

USBZAsyncCreateWeaponConfiguration::USBZAsyncCreateWeaponConfiguration() {
}

