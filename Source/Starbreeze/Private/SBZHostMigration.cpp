#include "SBZHostMigration.h"
#include "SBZMigrationGameSave.h"

void USBZHostMigration::SetNextHost() {
}

void USBZHostMigration::SetCurrentLevelScriptCheckpoint(UObject* WorldContextObject, int32 ScriptCheckpointIndex) {
}

bool USBZHostMigration::IsInProgress() const {
    return false;
}

void USBZHostMigration::HandlePlayersChanged(APlayerState* PlayerState) {
}

USBZHostMigration* USBZHostMigration::GetHostMigrationFromContext(UObject* WorldContextObject) {
    return NULL;
}

int32 USBZHostMigration::GetCurrentLevelScriptCheckpoint() const {
    return 0;
}

USBZHostMigration::USBZHostMigration() {
    this->GameSaveDataClass = USBZMigrationGameSave::StaticClass();
    this->MyHostIdx = 0;
    this->MigrationCheckpoint = NULL;
}

