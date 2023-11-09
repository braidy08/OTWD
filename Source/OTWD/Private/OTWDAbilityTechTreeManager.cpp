#include "OTWDAbilityTechTreeManager.h"

bool UOTWDAbilityTechTreeManager::ValidateAbilityTechLoadout(const UObject* WorldContextObject, const TSoftClassPtr<APawn>& CharacterClass, const TArray<USBZTech*>& Techs) {
    return false;
}

void UOTWDAbilityTechTreeManager::ResetPendingGlobalPurchases() {
}

void UOTWDAbilityTechTreeManager::ResetCharacterTree(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid) {
}

void UOTWDAbilityTechTreeManager::ResetAllPurchasedGlobalTech(const UObject* WorldContextObject) {
}

bool UOTWDAbilityTechTreeManager::RemoveGlobalTech(const UObject* WorldContextObject, UOTWDAbilityTechSchematic* Tech) {
    return false;
}

int32 UOTWDAbilityTechTreeManager::RefundPendingPurchases() {
    return 0;
}

int32 UOTWDAbilityTechTreeManager::RefundAllPurchasedTech(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid) {
    return 0;
}

bool UOTWDAbilityTechTreeManager::PurchaseTech(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech, bool bFinalizeImmediately) {
    return false;
}

bool UOTWDAbilityTechTreeManager::PurchaseGlobalTech(const UObject* WorldContextObject, UOTWDAbilityTechSchematic* Tech, bool bFinalizeImmediately) {
    return false;
}

bool UOTWDAbilityTechTreeManager::IsTechPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::IsTechPurchasable(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech, bool bGlobalTech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::IsPurchasePending(UOTWDAbilityTechSchematic* Tech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::IsInCharacterTechTree(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, const USBZTech* Tech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::HasRequiredTechsPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::HasRequiredMetaTechsPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::HasEnoughSkillPoints(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech) {
    return false;
}

bool UOTWDAbilityTechTreeManager::HasEnoughOptionalTechsPurchased(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech) {
    return false;
}

EMetaTechState UOTWDAbilityTechTreeManager::GetTechState(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid, UOTWDAbilityTechSchematic* Tech) {
    return EMetaTechState::Purchased;
}

TArray<USBZUnlockableMetadata*> UOTWDAbilityTechTreeManager::GetTechList(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid) {
    return TArray<USBZUnlockableMetadata*>();
}

void UOTWDAbilityTechTreeManager::FinalizePurchases(const UObject* WorldContextObject, const FGuid& CharacterSavedDataGuid) {
}

void UOTWDAbilityTechTreeManager::FinalizeGlobalPurchases(const UObject* WorldContextObject) {
}

UOTWDAbilityTechTreeManager::UOTWDAbilityTechTreeManager() {
}

