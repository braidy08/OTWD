#include "SBZAlignmentManager.h"
#include "Net/UnrealNetwork.h"

void ASBZAlignmentManager::OccupySlotWithCallback(int32 SlotID, FSBZAlignmentSlotOccupationSettings Settings, const FSBZAlignmentStateChangeDelegate& StateChangeCallback) {
}

void ASBZAlignmentManager::OccupySlot(int32 SlotID, FSBZAlignmentSlotOccupationSettings Settings) {
}

void ASBZAlignmentManager::NetMulticast_UpdateTagList_Implementation(const TArray<FName>& InAlignmentTags) {
}

void ASBZAlignmentManager::NetMulticast_UpdateSocketList_Implementation(const TArray<FName>& InAlignmentSockets) {
}

void ASBZAlignmentManager::NetMulticast_SetupAlignToPoint_Implementation(uint8 ID, AActor* Actor, FVector_NetQuantize TargetLocation, FRotator TargetRotationEuler, float Duration, uint8 TagIndex, FSBZAlignmentSlotFlags Flags, bool bPending) {
}

void ASBZAlignmentManager::NetMulticast_ResetTargetSlotSettings_Implementation(uint8 TargetID, const TArray<FSBZAlignmentSlotSettings_NetQuantize>& Slots, uint8 TagIndex, uint8 StartingCounterID) {
}

void ASBZAlignmentManager::NetMulticast_ResetSlotSettings_Implementation(uint8 SlotID, const FSBZAlignmentSlotSettings_NetQuantize& Settings) {
}

void ASBZAlignmentManager::NetMulticast_OccupySlot_Implementation(uint8 SlotID, FSBZAlignmentSlotOccupationSettings Settings, bool bPending) {
}

void ASBZAlignmentManager::NetMulticast_InitTargetDataCount_Implementation(AActor* TargetActor, FVector_NetQuantize Location, FRotator RotationEuler, FSBZAlignmentTargetSlotCountSettings_NetQuantize Settings, uint8 TagIndex, uint8 StartingCounterID, bool bPending) {
}

void ASBZAlignmentManager::NetMulticast_InitTargetDataAngles_Implementation(AActor* TargetActor, FVector_NetQuantize Location, FRotator RotationEuler, FSBZAlignmentTargetSlotAnglesSettings_NetQuantize Settings, uint8 TagIndex, uint8 StartingCounterID, bool bPending) {
}

void ASBZAlignmentManager::NetMulticast_ClearAlignment_Implementation(uint8 ID) {
}

bool ASBZAlignmentManager::HasEmptySlot(AActor* TargetActor, AActor* PendingOccupant) {
    return false;
}

int32 ASBZAlignmentManager::GetNearestEmptySlot(AActor* TargetActor, FVector QueryPoint, float MaxDistance, AActor* PendingOccupant) {
    return 0;
}

ASBZAlignmentManager* ASBZAlignmentManager::GetAlignmentManager(UObject* WorldContextObject) {
    return NULL;
}

int32 ASBZAlignmentManager::CreateTargetWithSlotCountWithCallback(AActor* TargetActor, const FSBZAlignmentStateChangeDelegate& StateChangeCallback, FSBZAlignmentTargetSlotCountSettings Settings, FName Tag) {
    return 0;
}

int32 ASBZAlignmentManager::CreateTargetWithSlotCount(AActor* TargetActor, FSBZAlignmentTargetSlotCountSettings Settings, FName Tag) {
    return 0;
}

int32 ASBZAlignmentManager::CreateTargetWithSlotAnglesWithCallback(AActor* TargetActor, const FSBZAlignmentStateChangeDelegate& StateChangeCallback, FSBZAlignmentTargetSlotAnglesSettings Settings, FName Tag) {
    return 0;
}

int32 ASBZAlignmentManager::CreateTargetWithSlotAngles(AActor* TargetActor, FSBZAlignmentTargetSlotAnglesSettings Settings, FName Tag) {
    return 0;
}

void ASBZAlignmentManager::ClearTarget(int32 TargetID, bool bReplicate) {
}

void ASBZAlignmentManager::ClearSlot(int32 SlotID) {
}

void ASBZAlignmentManager::ClearByID(int32 AlignID) {
}

void ASBZAlignmentManager::ClearAllByActor(AActor* Actor) {
}

void ASBZAlignmentManager::CharacterCapsuleSizeChanged(ASBZCharacter* Character) {
}

void ASBZAlignmentManager::CancelAlignToPoint(int32 AlignmentID) {
}

int32 ASBZAlignmentManager::AlignToPointWithCallback(AActor* Actor, const FSBZAlignmentStateChangeDelegate& StateChangeCallback, FVector TargetLocation, FRotator TargetRotation, FSBZAlignmentSlotFlags Flags, float Duration, FName Tag) {
    return 0;
}

int32 ASBZAlignmentManager::AlignToPoint(AActor* Actor, FVector TargetLocation, FRotator TargetRotation, FSBZAlignmentSlotFlags Flags, float Duration, FName Tag) {
    return 0;
}

void ASBZAlignmentManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZAlignmentManager, AlignmentTags);
    DOREPLIFETIME(ASBZAlignmentManager, AlignmentSockets);
}

ASBZAlignmentManager::ASBZAlignmentManager() {
    this->AlignmentTags.AddDefaulted(2);
    this->AlignmentSockets.AddDefaulted(1);
}

