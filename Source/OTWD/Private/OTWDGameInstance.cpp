#include "OTWDGameInstance.h"
#include "OTWDMetaManager.h"
#include "OTWDMetaTechManager.h"
#include "OTWDUIBindings.h"
#include "TwitchCore.h"

void UOTWDGameInstance::StartTwitchConnection() {
}

void UOTWDGameInstance::SBZLevels(const FString& CommandsIn) {
}

void UOTWDGameInstance::SBZHiderToggle(const uint32 HiderBitIndex) {
}

void UOTWDGameInstance::SBZHiderReset() {
}

void UOTWDGameInstance::SBZActors(const FString& PartialComponentName) {
}

void UOTWDGameInstance::OptimizeTickAndPoseUpdate() {
}

void UOTWDGameInstance::OpenLatestMissionReport_Internal() {
}

bool UOTWDGameInstance::OpenLatestMissionReport(FOTWDMissionEndReport& OutMissionReport) {
    return false;
}

UOTWDQuestManager* UOTWDGameInstance::GetQuestManager() {
    return NULL;
}

UOTWDMetaTechManager* UOTWDGameInstance::GetMetaTechManager() {
    return NULL;
}

UOTWDMetaManager* UOTWDGameInstance::GetMetaManager() {
    return NULL;
}

FOTWDMissionEndReport UOTWDGameInstance::GetLastOpenedMissionReport() {
    return FOTWDMissionEndReport{};
}

UOTWDCharacterManager* UOTWDGameInstance::GetCharacterManager() {
    return NULL;
}

void UOTWDGameInstance::EndTwitchConnection() {
}

void UOTWDGameInstance::DisplayVersion() {
}

bool UOTWDGameInstance::CanEnterMatchmaking() {
    return false;
}

UOTWDGameInstance::UOTWDGameInstance() {
    this->OTWDUIBindings = CreateDefaultSubobject<UOTWDUIBindings>(TEXT("OTWDUIBindings"));
    this->CharacterManagerClass = NULL;
    this->WeaponLootMetaData = NULL;
    this->bAuthenticatedOnTwitch = false;
    this->bShitHitsTheFan = false;
    this->TwitchCore = CreateDefaultSubobject<UTwitchCore>(TEXT("OTWDTwitchCore"));
    this->MetaManager = CreateDefaultSubobject<UOTWDMetaManager>(TEXT("OTWDMetaManager"));
    this->MetaTechManager = CreateDefaultSubobject<UOTWDMetaTechManager>(TEXT("OTWDMetaTechManager"));
    this->CharacterManager = NULL;
    this->QuestManager = NULL;
}

