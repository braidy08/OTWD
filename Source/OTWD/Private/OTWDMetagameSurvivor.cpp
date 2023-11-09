#include "OTWDMetagameSurvivor.h"

void UOTWDMetagameSurvivor::SetSurvivorVoice(TSoftObjectPtr<UOTWDSurvivorVoiceDataAsset> NewVoice) {
}

void UOTWDMetagameSurvivor::SetSurvivorMesh(TSoftObjectPtr<USkeletalMesh> NewMesh) {
}

void UOTWDMetagameSurvivor::SetIsNew(UObject* WorldContextObject, bool bNew) {
}

bool UOTWDMetagameSurvivor::IsMaxLevel() const {
    return false;
}

void UOTWDMetagameSurvivor::InjureSurvivor(UObject* WorldContextObject, uint8 TurnsToDying) {
}

void UOTWDMetagameSurvivor::HealSurvivor(UObject* WorldContextObject) {
}

void UOTWDMetagameSurvivor::GiveXp(int32 Xp, bool& bDidSurvivorLevelUp) {
}

TSoftObjectPtr<UOTWDSurvivorVoiceDataAsset> UOTWDMetagameSurvivor::GetSurvivorVoice() {
    return NULL;
}

void UOTWDMetagameSurvivor::GetSurvivorsXPData(float& OutProgressToNextLevelModifier, int32& CurrentXPAmount, int32& XPToTheNextLevel) {
}

FText UOTWDMetagameSurvivor::GetSurvivorSurame() {
    return FText::GetEmpty();
}

ESurvivorState UOTWDMetagameSurvivor::GetSurvivorState() const {
    return ESurvivorState::Idle;
}

TSoftObjectPtr<UTexture2D> UOTWDMetagameSurvivor::GetSurvivorSmallPortrait() {
    return NULL;
}

bool UOTWDMetagameSurvivor::GetSurvivorShowsPotential() const {
    return false;
}

FText UOTWDMetagameSurvivor::GetSurvivorQuote() {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UOTWDMetagameSurvivor::GetSurvivorPortrait() {
    return NULL;
}

FText UOTWDMetagameSurvivor::GetSurvivorName() {
    return FText::GetEmpty();
}

TSoftObjectPtr<USkeletalMesh> UOTWDMetagameSurvivor::GetSurvivorMesh() {
    return NULL;
}

FOTWDMetagameSurvivorIdentityDataAsset UOTWDMetagameSurvivor::GetSurvivorIdentity() {
    return FOTWDMetagameSurvivorIdentityDataAsset{};
}

FText UOTWDMetagameSurvivor::GetSurvivorFullName() {
    return FText::GetEmpty();
}

uint8 UOTWDMetagameSurvivor::GetMaxLevel() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UOTWDMetagameSurvivor::GetInjuredSurvivorSmallPortrait() {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UOTWDMetagameSurvivor::GetInjuredSurvivorPortrait() {
    return NULL;
}

UOTWDMetagameSurvivorClassDataAsset* UOTWDMetagameSurvivor::GetClass() const {
    return NULL;
}

UOTWDMetagameSurvivorBuildingDataAsset* UOTWDMetagameSurvivor::GetAssignedBuilding() {
    return NULL;
}

bool UOTWDMetagameSurvivor::CanHealSurvivor(UObject* WorldContextObject) {
    return false;
}

bool UOTWDMetagameSurvivor::CanGoOnMission() const {
    return false;
}

bool UOTWDMetagameSurvivor::CanBeAssignedToBuilding() const {
    return false;
}

UOTWDMetagameSurvivor::UOTWDMetagameSurvivor() {
    this->bIsNew = false;
    this->HealingCost = 0;
    this->ClassType = NULL;
    this->CurrentXP = 0;
    this->Level = 1;
    this->MaxLevel = 10;
    this->bShowPotential = false;
    this->TurnsTillDying = 0;
    this->TurnsTillDeath = 0;
    this->SurvivorState = ESurvivorState::Idle;
    this->bIsOnAMission = false;
}

