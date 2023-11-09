#include "OTWDMetaTechManager.h"

void UOTWDMetaTechManager::PurchaseTech(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
}

bool UOTWDMetaTechManager::IsTechPurchased(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::IsTechPurchasable(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::HasRequiredTechsPurchased(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::HasEnoughResourceSurvivors(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::HasEnoughResourceScrap(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::HasEnoughResourceGold(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::HasEnoughResourceEquipment(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

bool UOTWDMetaTechManager::HasEnoughOptionalTechsPurchased(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return false;
}

TArray<TSoftClassPtr<UGameplayAbility>> UOTWDMetaTechManager::GetUnlockedAbilities(const UObject* WorldContextObject) {
    return TArray<TSoftClassPtr<UGameplayAbility>>();
}

EMetaTechState UOTWDMetaTechManager::GetTechState(const UObject* WorldContextObject, const UOTWDMetaTechSchematic* Tech) {
    return EMetaTechState::Purchased;
}

TArray<UOTWDMetaTechSchematic*> UOTWDMetaTechManager::GetTechList(const UObject* WorldContextObject) {
    return TArray<UOTWDMetaTechSchematic*>();
}

UOTWDMetaTechManager::UOTWDMetaTechManager() {
}

