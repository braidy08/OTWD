#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 1;
    this->bAutoConnectToWAAPI = false;
    this->SuppressWwiseProjectPathWarnings = true;
    this->StreamMemPoolSize = 0;
    this->IOMemPoolSize = 0;
    this->MonitorQueueMemPoolSize = 0;
    this->MonitorMemPoolSize = 0;
    this->LowerEngineMemPoolSize = 0;
    this->CommandQueueMemPoolSize = 0;
    this->DefaultMemPoolSize = 0;
    this->DefaultMemPoolThreshold = 1;
    this->LowerEngineMemPoolThreshold = 1;
    this->MemoryBudget = 0;
}

