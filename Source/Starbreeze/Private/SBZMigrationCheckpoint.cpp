#include "SBZMigrationCheckpoint.h"
#include "SBZMigrationGameSave.h"

USBZMigrationCheckpoint::USBZMigrationCheckpoint() {
    this->GameSaveDataClass = USBZMigrationGameSave::StaticClass();
}

