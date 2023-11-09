#include "OTWDPlayerCharacter.h"
#include "SBZHealthChunkAttributeSet.h"
#include "SBZShoutTargetComponent.h"
#include "Net/UnrealNetwork.h"
#include "OTWDAbilityItemsAttributeSet.h"
#include "OTWDCraftingResourceAttributeSet.h"
#include "OTWDMetaResourceAttributeSet.h"
#include "OTWDReviveShoutTargetComponent.h"

void AOTWDPlayerCharacter::UnholsterWeapons() {
}



void AOTWDPlayerCharacter::ShouldHideWeapons(bool bHide) {
}

void AOTWDPlayerCharacter::SetAvoidedByZombies(bool bAvoidedByZombies) {
}


void AOTWDPlayerCharacter::RescuedSurvivor() {
}



void AOTWDPlayerCharacter::OnRep_WeaponsHolstered() {
}


void AOTWDPlayerCharacter::NetMulticast_MarkAllNearbyTrapsAndLootItems_Implementation(float Distance, float Duration, USBZOutlineSchematic* DefaultTrapOutline, USBZOutlineSchematic* DefaultLootOutline) {
}

void AOTWDPlayerCharacter::MarkAllNearbyTrapsAndLootItems(float Distance, float Duration, USBZOutlineSchematic* DefaultTrapOutline, USBZOutlineSchematic* DefaultLootOutline, bool bReplicated) {
}


void AOTWDPlayerCharacter::HolsterWeapons() {
}

void AOTWDPlayerCharacter::HandleGameStateEntered(FName StateName) {
}

void AOTWDPlayerCharacter::HandleDeafeatStateChanged(ESBZPlayerDefeatState NewState, AActor* Actor) {
}



void AOTWDPlayerCharacter::BotSlomo(float coeff) {
}

void AOTWDPlayerCharacter::BotShowDebug() {
}

void AOTWDPlayerCharacter::BotSavePath(const FString& Name) {
}

void AOTWDPlayerCharacter::BotRecordPath() {
}

void AOTWDPlayerCharacter::BotPlayPause() {
}

void AOTWDPlayerCharacter::BotLogging(const FString& str) {
}

void AOTWDPlayerCharacter::BotLoadPath(const FString& Name) {
}

void AOTWDPlayerCharacter::BotGotoPatrolPoint(int32 Index) {
}

void AOTWDPlayerCharacter::BotGetDuration(int32 Index) {
}

bool AOTWDPlayerCharacter::AreWeaponsHolstered() const {
    return false;
}

void AOTWDPlayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOTWDPlayerCharacter, bWeaponsHolstered);
}

AOTWDPlayerCharacter::AOTWDPlayerCharacter() {
    this->UnequippedTakedownWeaponSocket = TEXT("RightAccessory");
    this->PrimaryAccessorySocket = TEXT("LeftAccessory");
    this->UnequippedFlareGunSocket = TEXT("LeftFrontAccessory");
    this->DefaultFlareGunClass = NULL;
    this->ReviveShoutTarget = CreateDefaultSubobject<UOTWDReviveShoutTargetComponent>(TEXT("OTWDReviveShoutTargetComponent"));
    this->CalloutShoutTarget = CreateDefaultSubobject<USBZShoutTargetComponent>(TEXT("SBZShoutTargetComponent"));
    this->AbilityItemAttributeSet = CreateDefaultSubobject<UOTWDAbilityItemsAttributeSet>(TEXT("OTWDAbilityItemsAttributeSet"));
    this->CraftingResourceAttributeSet = CreateDefaultSubobject<UOTWDCraftingResourceAttributeSet>(TEXT("OTWDCraftingResourceAttributeSet"));
    this->MetaResourceAttributeSet = CreateDefaultSubobject<UOTWDMetaResourceAttributeSet>(TEXT("OTWDMetaResourceAttributeSet"));
    this->HealthChunkAttributeSet = CreateDefaultSubobject<USBZHealthChunkAttributeSet>(TEXT("SBZHealthChunkAttributeSet"));
    this->bWeaponsHolstered = false;
    this->PrimaryAccessory = NULL;
    this->FlareGun = NULL;
    this->WalkerFastKillsAchievementCommentDuration = 1;
    this->WalkerFastKillsAchievementCommentNeeded = 0;
    this->HumanFastKillsAchievementCommentDuration = 1;
    this->HumanFastKillsAchievementCommentNeeded = 0;
    this->ReviveSound = NULL;
    this->bHasValidIngameName = false;
}

