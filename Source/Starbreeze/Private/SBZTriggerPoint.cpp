#include "SBZTriggerPoint.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

void ASBZTriggerPoint::ToggleActiveServer_Implementation(bool bIsActive) {
}
bool ASBZTriggerPoint::ToggleActiveServer_Validate(bool bIsActive) {
    return true;
}

void ASBZTriggerPoint::ToggleActive(bool bIsActive) {
}

void ASBZTriggerPoint::OnRep_FilterArePassed() {
}

void ASBZTriggerPoint::OnRep_AllPlayersEntered(bool bOldValue) {
}

void ASBZTriggerPoint::OnRep_AllItems(bool bOldValue) {
}

void ASBZTriggerPoint::OnPlayerRemoved(UObject* Removed) {
}

void ASBZTriggerPoint::OnPlayerCharacterKilled(ASBZCharacter* KilledPlayer) {
}

void ASBZTriggerPoint::OnPlayerCharacterDestroyed(AActor* DestroyedPlayer) {
}

void ASBZTriggerPoint::OnPlayerAdded(UObject* Added) {
}

void ASBZTriggerPoint::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ASBZTriggerPoint::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASBZTriggerPoint::Net_OnPlayerLeft_Implementation(ASBZPlayerCharacter* PlayerCharacter) {
}

void ASBZTriggerPoint::Net_OnPlayerEntered_Implementation(uint8 NumCharactersInZone, ASBZPlayerCharacter* PlayerCharacter) {
}

void ASBZTriggerPoint::Net_OnItemEntered_Implementation(uint8 NumItemsInZone, AActor* Item) {
}

void ASBZTriggerPoint::HandleAllPlayersChanged(bool bValue) {
}

void ASBZTriggerPoint::HandleAllPlayersAndItemsChanged(bool bValue) {
}

void ASBZTriggerPoint::HandleAllPlayersAndItems() {
}

void ASBZTriggerPoint::HandleAllPlayers() {
}

void ASBZTriggerPoint::HandleAllItems() {
}

TArray<ASBZPlayerCharacter*> ASBZTriggerPoint::GetPlayersInZone() {
    return TArray<ASBZPlayerCharacter*>();
}








bool ASBZTriggerPoint::AreFilterPassed() const {
    return false;
}

bool ASBZTriggerPoint::AllPlayersInZone() const {
    return false;
}

void ASBZTriggerPoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZTriggerPoint, bAllPlayersEntered);
    DOREPLIFETIME(ASBZTriggerPoint, bAllItems);
    DOREPLIFETIME(ASBZTriggerPoint, bFilterArePassed);
}

ASBZTriggerPoint::ASBZTriggerPoint() {
    this->PlayBubble = NULL;
    this->bAllPlayersEntered = false;
    this->bAllItems = false;
    this->bFilterArePassed = false;
    this->bStartActive = true;
    this->TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerArea"));
    this->bDisableAfterOnPlayerEntered = false;
    this->bDisableAfterOnAllPlayersEnter = false;
    this->bDisableAfterOnPlayerLeft = false;
    this->bDisableAfterOnItemEntered = false;
    this->bDisableAfterOnAllItems = false;
    this->bDisableAfterOnAllPlayersAndItems = false;
    this->bAllPlayersInside = false;
    this->bAllPlayersAndItemsInside = false;
}

