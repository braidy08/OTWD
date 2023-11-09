#include "SBZObjectiveManager.h"
#include "Net/UnrealNetwork.h"

void ASBZObjectiveManager::UpdateTimersLoop() {
}

void ASBZObjectiveManager::SetObjectiveTargetCount(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, int32 NewTargetCount) {
}

void ASBZObjectiveManager::Server_FailAllObjectives_Implementation() {
}
bool ASBZObjectiveManager::Server_FailAllObjectives_Validate() {
    return true;
}

void ASBZObjectiveManager::Server_CompleteAllObjectives_Implementation() {
}
bool ASBZObjectiveManager::Server_CompleteAllObjectives_Validate() {
    return true;
}

void ASBZObjectiveManager::ResumeObjectiveTimer(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::ResetObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::PrintActiveObjectives(UObject* WorldContextObject, const FLinearColor& Color, float Duration) {
}

void ASBZObjectiveManager::PauseObjectiveTimer(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::OnRep_ReplicatedTimers() {
}

void ASBZObjectiveManager::Multicast_SetObjectiveTargetCount_Implementation(USBZObjectiveSchematic* Objective, int32 NewObjectiveTargetCount) {
}

void ASBZObjectiveManager::Multicast_ResetObjective_Implementation(USBZObjectiveSchematic* Objective) {
}

void ASBZObjectiveManager::Multicast_IncrementObjective_Implementation(USBZObjectiveSchematic* Objective, int32 Value) {
}

void ASBZObjectiveManager::Multicast_FailObjective_Implementation(USBZObjectiveSchematic* Objective) {
}

void ASBZObjectiveManager::Multicast_CompleteObjective_Implementation(USBZObjectiveSchematic* Objective) {
}

void ASBZObjectiveManager::Multicast_ClearObjective_Implementation(USBZObjectiveSchematic* Objective) {
}

void ASBZObjectiveManager::Multicast_AddObjectiveEx_Implementation(USBZObjectiveSchematic* Objective, const FSBZObjectiveConstructionParameters& Params) {
}

void ASBZObjectiveManager::Multicast_AddObjective_Implementation(USBZObjectiveSchematic* Objective) {
}

void ASBZObjectiveManager::ModifyObjectiveTimer(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, float Time) {
}

bool ASBZObjectiveManager::IsObjectiveFailed(USBZObjectiveSchematic* ObjectiveSchematic, int32& TimesCompleted) const {
    return false;
}

bool ASBZObjectiveManager::IsObjectiveCompleted(USBZObjectiveSchematic* ObjectiveSchematic, int32& TimesCompleted) const {
    return false;
}

bool ASBZObjectiveManager::IsObjectiveActive(USBZObjectiveSchematic* ObjectiveSchematic) const {
    return false;
}

void ASBZObjectiveManager::IncrementObjectiveBy(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, int32 Value) {
}

void ASBZObjectiveManager::IncrementObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::HandlePlayerRemoved(APlayerState* PlayerState) {
}

void ASBZObjectiveManager::HandlePlayerPossessed(AController* Controller) {
}

int32 ASBZObjectiveManager::GetObjectiveTargetCount(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
    return 0;
}

float ASBZObjectiveManager::GetObjectiveStartTime(UObject* WorldContextObject, USBZObjectiveSchematic* Objective) {
    return 0.0f;
}

ASBZObjectiveManager* ASBZObjectiveManager::GetObjectiveManager(UObject* WorldContextObject) {
    return NULL;
}

int32 ASBZObjectiveManager::GetObjectiveCount(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
    return 0;
}

void ASBZObjectiveManager::GetActiveObjectivesAsEvent(TArray<FSBZObjectiveEvent>& Objectives) {
}

void ASBZObjectiveManager::FailObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::DisableObjective(USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::DecrementObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

USBZObjectiveStateCallback* ASBZObjectiveManager::CreateOnObjectiveFailedCallback(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
    return NULL;
}

USBZObjectiveStateCallback* ASBZObjectiveManager::CreateOnObjectiveCompletedCallback(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
    return NULL;
}

USBZObjectiveStateCallback* ASBZObjectiveManager::CreateOnObjectiveCallback(UObject* WorldContextObject, ESBZObjectiveCallbackType CallbackType, USBZObjectiveSchematic* ObjectiveSchematic) {
    return NULL;
}

USBZObjectiveStateCallback* ASBZObjectiveManager::CreateOnObjectiveActivatedCallback(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
    return NULL;
}

void ASBZObjectiveManager::CreateObjectiveCallback(UObject* WorldContextObject, USBZObjectiveSchematic* Objective, ESBZObjectiveCallbackType CallbackType, const FSBZObjectiveStateSignature& Callback) {
}

void ASBZObjectiveManager::CompleteObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::ClearObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

bool ASBZObjectiveManager::AreObjectivesFailed(UObject* WorldContextObject, const TArray<USBZObjectiveSchematic*>& Objectives) {
    return false;
}

bool ASBZObjectiveManager::AreObjectivesCompleted(UObject* WorldContextObject, const TArray<USBZObjectiveSchematic*>& Objectives) {
    return false;
}

bool ASBZObjectiveManager::AreObjectivesActive(UObject* WorldContextObject, const TArray<USBZObjectiveSchematic*>& Objectives) {
    return false;
}

void ASBZObjectiveManager::AddObjectiveEx(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic, const FSBZObjectiveConstructionParameters& Params) {
}

void ASBZObjectiveManager::AddObjective(UObject* WorldContextObject, USBZObjectiveSchematic* ObjectiveSchematic) {
}

void ASBZObjectiveManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZObjectiveManager, ObjectivesStateList);
    DOREPLIFETIME(ASBZObjectiveManager, ReplicatedTimers);
}

ASBZObjectiveManager::ASBZObjectiveManager() {
}

