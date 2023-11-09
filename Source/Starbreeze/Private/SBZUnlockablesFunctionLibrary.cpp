#include "SBZUnlockablesFunctionLibrary.h"
#include "Templates/SubclassOf.h"

bool USBZUnlockablesFunctionLibrary::UpdatePurchasedContentPacks(const UObject* WorldContextObject, TArray<USBZUnlockableMetadata*>& OutUnlocked) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::MeetsTechRequirements(const USBZUnlockableMetadata* UnlockableMetadata, const TArray<USBZUnlockableMetadata*>& AcquiredTechs, TArray<USBZUnlockableMetadata*>& MissingRequiredTechs) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::MeetsQuestRequirements(const USBZUnlockableMetadata* UnlockableMetadata, const TArray<USBZUnlockableMetadata*>& CompletedQuests, TArray<USBZUnlockableMetadata*>& MissingRequiredQuests) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::MeetsLevelGroupRequirements(const USBZUnlockableMetadata* UnlockableMetadata, const TArray<USBZUnlockableMetadata*>& OpenedLevelGroups, TArray<USBZUnlockableMetadata*>& MissingRequiredLevelGroups) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::MeetsContentPackRequirement(const UObject* WorldContextObject, const USBZUnlockableMetadata* UnlockableMetadata, APlayerController* PlayerController) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::MeetsAllRequirements(const UObject* WorldContextObject, const USBZUnlockableMetadata* UnlockableMetadata) {
    return false;
}

TArray<TSoftObjectPtr<USBZUnlockable>> USBZUnlockablesFunctionLibrary::FindUnlockablesWithClass(const TArray<USBZUnlockableMetadata*>& UnlockableMetadataObjects, TSubclassOf<USBZUnlockable> UnlockableClass) {
    return TArray<TSoftObjectPtr<USBZUnlockable>>();
}

TArray<USBZUnlockableMetadata*> USBZUnlockablesFunctionLibrary::FilterUnlocked(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& UnlockableMetadataObjects) {
    return TArray<USBZUnlockableMetadata*>();
}

bool USBZUnlockablesFunctionLibrary::AddOpenedLevelGroups(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& NewLevelGroups, TArray<USBZUnlockableMetadata*>& OutUnlocked) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::AddCompletedQuests(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& NewCompletedQuests, TArray<USBZUnlockableMetadata*>& OutUnlocked) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::AddAcquiredTechs(const UObject* WorldContextObject, const TArray<USBZUnlockableMetadata*>& NewTechs, TArray<USBZUnlockableMetadata*>& OutUnlocked) {
    return false;
}

bool USBZUnlockablesFunctionLibrary::AddAcquiredPawnTechs(const UObject* WorldContextObject, const FGuid& PawnSavedDataGuid, const TArray<USBZUnlockableMetadata*>& NewTechs, TArray<USBZUnlockableMetadata*>& OutUnlocked) {
    return false;
}

USBZUnlockablesFunctionLibrary::USBZUnlockablesFunctionLibrary() {
}

