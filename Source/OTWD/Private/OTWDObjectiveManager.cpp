#include "OTWDObjectiveManager.h"
#include "Net/UnrealNetwork.h"

void AOTWDObjectiveManager::SetGlobalObjectiveText(UObject* WorldContextObject, const FText& NewGlobalObjectiveText) {
}

void AOTWDObjectiveManager::SetGlobalObjective(UObject* WorldContextObject, UOTWDGlobalObjectiveData* NewGlobalObjective) {
}

void AOTWDObjectiveManager::OnRep_GlobalObjective() {
}

void AOTWDObjectiveManager::AddObjectiveOTWD(UObject* WorldContextObject, USBZObjectiveSchematic* MainObjective, USBZObjectiveSchematic* SubObjective, bool bChangeTargetCount, int32 TargetCount) {
}

void AOTWDObjectiveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDObjectiveManager, GlobalObjectiveText);
    DOREPLIFETIME(AOTWDObjectiveManager, CurrentGlobalObjective);
}

AOTWDObjectiveManager::AOTWDObjectiveManager() {
    this->CurrentGlobalObjective = NULL;
}

