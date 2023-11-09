#include "SBZBagManager.h"
#include "Net/UnrealNetwork.h"

void ASBZBagManager::SetNumberOfBagsNeeded(int32 NumberNeeded) {
}

void ASBZBagManager::SecureMultipleBags(const TArray<ASBZBagItem*>& BagsToSecure, ASBZTriggerPoint* TriggerPoint) {
}

bool ASBZBagManager::SecureBag_Internal(ASBZBagItem* BagToSecure, ASBZTriggerPoint* TriggerPoint, ASBZCharacter* Character) {
    return false;
}

void ASBZBagManager::SecureBag(ASBZBagItem* BagToSecure, ASBZTriggerPoint* TriggerPoint, ASBZCharacter* Character) {
}

void ASBZBagManager::OnRep_SecuredBags(TArray<ASBZBagItem*> OldSecuredBags) {
}

void ASBZBagManager::OnRep_PickedUpBags(TArray<ASBZBagItem*> OldPickedUpBags) {
}

void ASBZBagManager::NetMulticast_SecureMultipleBags_Implementation(const TArray<ASBZBagItem*>& BagsToSecure, ASBZTriggerPoint* TriggerPoint) {
}

void ASBZBagManager::NetMulticast_SecureBag_Implementation(ASBZBagItem* BagToSecure, ASBZTriggerPoint* TriggerPoint, ASBZCharacter* Character) {
}

bool ASBZBagManager::HasAllNeededBags() const {
    return false;
}

TArray<ASBZBagItem*> ASBZBagManager::GetSecuredBags() {
    return TArray<ASBZBagItem*>();
}

int32 ASBZBagManager::GetNumberOfBagsPickedUp() const {
    return 0;
}

int32 ASBZBagManager::GetNumberOfBagsNeeded() const {
    return 0;
}

ASBZBagManager* ASBZBagManager::GetBagManager(UObject* WorldContextObject) {
    return NULL;
}

void ASBZBagManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZBagManager, PickedUpBags);
    DOREPLIFETIME(ASBZBagManager, SecuredBags);
}

ASBZBagManager::ASBZBagManager() {
    this->NumberOfBagsNeeded = 0;
}

